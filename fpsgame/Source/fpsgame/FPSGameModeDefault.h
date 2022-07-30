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
		TArray<URewindComponent*> RewindComponentsArray;

public:
	UFUNCTION()
		TArray<URewindComponent*> GetRewindComponentsArray() { return RewindComponentsArray; }

	UFUNCTION()
		void AddRewindComponent(URewindComponent* RewindComponent);
	
};
