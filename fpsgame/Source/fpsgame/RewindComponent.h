// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RewindComponent.generated.h"

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

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Stores timestamps and corresponding data in the data struct
	UPROPERTY()
		TMap<float, FRewindDataStruct> RewindTimestampsAndData;

	UFUNCTION()
		void AddToGameState();

	//Records transform and pose each tick, adds them to timestamp TMap
	UFUNCTION()
		void RecordDetailsThisTick();

	//To be implemented in blueprints, will get the current tick pose snapshot and store it as current pose snapshot
	UFUNCTION(BlueprintImplementableEvent)
		FPoseSnapshot GetCurrentTickPoseSnapshotBP();


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
