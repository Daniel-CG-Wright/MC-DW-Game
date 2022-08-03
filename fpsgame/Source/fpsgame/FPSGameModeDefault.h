// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "RewindComponent.h"
#include "FPSGameModeDefault.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFPSGameModeDefault : public AGameMode
{
	GENERATED_BODY()

protected:
	//Stores references to all the rewind components, all rewind components add themselves to this on Beginplay
	UPROPERTY()
		TSet<URewindComponent*> RewindComponentsSet;

	//Saved data storing all the actors and their rewind data structs needed from before a rewind takes place,
	//so that the rewinded actors can be set back to their original positions afterwards.
	UPROPERTY()
		TMap<AActor*, FRewindDataStruct> SavedRewindValues;

public:
	UFUNCTION()
		TSet<URewindComponent*> GetRewindComponentsSet() { return RewindComponentsSet; }

	UFUNCTION()
		void AddRewindComponent(URewindComponent* const RewindComponent);

	UFUNCTION()
		void RemoveRewindComponent(URewindComponent* const RewindComponent);

	//Rewinds actors to the values set in the input parameter
	UFUNCTION()
		void RewindActors(TMap<AActor*, FRewindDataStruct> const ValuesToUseInRewind);

	//Sets actors back to their original positions, based on the last saved data
	UFUNCTION()
		void ResetActorPositionsToBefore();
};