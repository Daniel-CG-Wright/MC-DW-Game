// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "RewindComponent.h"
#include "FPSGameState.generated.h"
/**
 * 
 */
UCLASS()
class FPSGAME_API AFPSGameState : public AGameState
{
	GENERATED_BODY()

protected:
	//Stores the maximum allowed latency (s) for a rewind to be allowed, otherwise it gives an unfair advantage to laggy bois
	UPROPERTY()
		float MaxAllowedLatencyForRewind = 0.400f;

	//Stores references to all the rewind components, all rewind components add themselves to this on Beginplay
	UPROPERTY()
		TArray<URewindComponent*> RewindComponentsArray;

public:
	float GetServerWorldTimeSeconds() const override;

	UFUNCTION()
		float GetMaxAllowedLatency() { return MaxAllowedLatencyForRewind; }
	
	UFUNCTION()
		TArray<URewindComponent*> GetRewindComponentsArray() { return RewindComponentsArray; }

	UFUNCTION()
		void AddRewindComponent(URewindComponent* RewindComponent);
};
