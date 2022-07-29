// Fill out your copyright notice in the Description page of Project Settings.
#include "FPSGameState.h"
#include "RewindComponent.h"

// Sets default values for this component's properties
URewindComponent::URewindComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URewindComponent::BeginPlay()
{
	Super::BeginPlay();

	//Need to record this in game state
	AddToGameState();
	
}

void URewindComponent::AddToGameState()
{
	Cast<AFPSGameState>(GetWorld()->GetGameState())->AddRewindComponent(this);

}
// Called every frame
void URewindComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void URewindComponent::RecordDetailsThisTick()
{
	FRewindDataStruct RewindDataForThisTick;

	AActor* OwnerComponent = GetOwner();
	if (OwnerComponent)
	{
		//Set positions and stuff here
		RewindDataForThisTick.SnapshotPosition = OwnerComponent->GetActorLocation();
		RewindDataForThisTick.SnapshotRotation = OwnerComponent->GetActorRotation();
		RewindDataForThisTick.SnapshotScale = OwnerComponent->GetActorScale();


	}
	
	
	//RewindTimestampsAndData.Emplace()
}
