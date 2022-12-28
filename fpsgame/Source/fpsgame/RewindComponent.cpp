// Fill out your copyright notice in the Description page of Project Settings.
#include "RewindComponent.h"

#include "FPSGameModeDefault.h"
#include "FPSGameState.h"

// Sets default values for this component's properties
URewindComponent::URewindComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	//This component will only be created on server objects, and will not be replicated.
	PrimaryComponentTick.bCanEverTick = true;


	// ...
}

//NOTE ON TIME STAMPS
/*
added a WorldTime variable that updates on tick and also readjusts itself to a server sent timestamp once a second, it seems more accurate than hoping the GameState World Server Seconds is synced up since it tends to drift
*/
//tRY The above to implement an accurate network clock.

// Called when the game starts
void URewindComponent::BeginPlay()
{
	Super::BeginPlay();

	

	
	//UE_LOG(LogTemp, Warning, TEXT("Setting up..."));

		
	OwnerComponent = GetOwner();
	AddToGameMode();
	CachedMaxPing = Cast<AFPSGameState>(GetWorld()->GetGameState())->GetMaxAllowedLatency();
	
	/*OwnerComponent = GetOwner();
	AddToGameMode();
	CachedMaxPing = Cast<AFPSGameState>(GetWorld()->GetGameState())->GetMaxAllowedLatency();*/
}

void URewindComponent::GetCurrentTickPoseSnapshot(FPoseSnapshot& OutSnapshot) const
{
	if (!SkeletalMeshToRewind)
	{
		UE_LOG(LogTemp, Error, TEXT("Tried to rewind a mesh animation pose, but no skeletal mesh was set!"));
		return;
	}
	SkeletalMeshToRewind->GetAnimInstance()->SnapshotPose(OutSnapshot);
	
}

void URewindComponent::AddToGameMode()
{
	//Called on beginplay to record this rewind component
	
	// OR IT COULD BE THIS BIT
	
	Cast<AFPSGameModeDefault>(GetWorld()->GetAuthGameMode())->AddRewindComponent(this);
	

}
// Called every frame
void URewindComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (DestroyOnNextTick)
	{
		DestroyComponent();
	}

	ThisTickServerTime = Cast<AFPSGameState>(GetWorld()->GetGameState())->GetServerWorldTimeSeconds();

	RecordDetailsThisTick();
	DeleteOldRecords();
	// ...
}

//This will be run on server only
void URewindComponent::RecordDetailsThisTick()
{
	FRewindDataStruct RewindDataForThisTick;

	if (OwnerComponent)
	{
		//Set positions and stuff here
		RewindDataForThisTick.SnapshotPosition = OwnerComponent->GetActorLocation();
		RewindDataForThisTick.SnapshotRotation = OwnerComponent->GetActorRotation();
		RewindDataForThisTick.SnapshotScale = OwnerComponent->GetActorScale();

	}
	
	//if set to do so we save the current tick pose snapshot
	if (bShouldSaveAnimationPoses)
	{
		GetCurrentTickPoseSnapshot(RewindDataForThisTick.PoseSnapshot);
	}
	//add data marked with timestamp to map.
	RewindTimestampsAndData.Emplace(Cast<AFPSGameState>(GetWorld()->GetGameState())->GetServerWorldTimeSeconds(), RewindDataForThisTick);
}

void URewindComponent::DeleteOldRecords()
{
	//We must delete records older than 400 ms to save space in the queue


	//Tmap is already sorted as it is type tsortedmap, sorted by ascending key (timestamp) so most recent entries last.
	//We check from the bottom to delete the oldest values

	for (auto It = RewindTimestampsAndData.CreateConstIterator(); It; ++It)
	{

		if (It.Key() < ThisTickServerTime - CachedMaxPing)
		{
			//too old, delete
			RewindTimestampsAndData.Remove(It.Key());
		}
		else
		{
			//if we have reached valid items we know the rest of them must be valid as the data structure has been sorted,
			//so we can break the loop
			break;
		}
	}
}