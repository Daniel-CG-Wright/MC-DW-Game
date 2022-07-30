// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RewindComponent.generated.h"

struct FSortedMapPredicateTimestampDescending
{
	FORCEINLINE bool operator()(const float A, const float B) const
	{

		//sroting ascending key
		return A < B;

	}
};

//Struct used to store data about parent transform and pose for snapshots.
USTRUCT()
struct FRewindDataStruct
{
	GENERATED_BODY()

	//stores the position
	UPROPERTY()
		FVector SnapshotPosition;

	//stores the rotation
	UPROPERTY()
		FRotator SnapshotRotation;

	//Stores the scale
	UPROPERTY()
		FVector SnapshotScale;

	//Stores the pose snapshot
	UPROPERTY()
		FPoseSnapshot PoseSnapshot;

	//In the future we may need to store more advanced things such as damage susceptibility, for if the target had armour at the speciifc point in time etc.
};

UCLASS( ClassGroup=(Custom), Blueprintable, meta=(BlueprintSpawnableComponent) )
class FPSGAME_API URewindComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URewindComponent();

private:
	//stores the current tick server time so it only has to be gained once per tick.
	float ThisTickServerTime;
	//stores the cached max ping from AFPSGameState->GetMaxAllowedLatency so we only have to access it once.
	float CachedMaxPing;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Stores timestamps and corresponding data in the data struct, we use a sorted map because it's better for checking timestamps
	TSortedMap<float, FRewindDataStruct, FDefaultAllocator, FSortedMapPredicateTimestampDescending> RewindTimestampsAndData;

	UFUNCTION()
		void AddToGameMode();

	//Records transform and pose each tick, adds them to timestamp TMap
	UFUNCTION()
		void RecordDetailsThisTick();

	//To be implemented in blueprints, will get the current tick pose snapshot and store it as current pose snapshot
	UFUNCTION()
		void GetCurrentTickPoseSnapshot(FPoseSnapshot& OutSnapshot) const;

	UFUNCTION()
		void DeleteOldRecords();

	UPROPERTY()
		AActor* OwnerComponent;

	//set only if bshouldsaveanimationposes is true
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* SkeletalMeshToRewind;

	//set to true when the actor has an animated mesh whihc is important for rewinds (mainly the player character)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bShouldSaveAnimationPoses;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
};

