// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
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

	

public:
	float GetServerWorldTimeSeconds() const override;

	UFUNCTION()
		float GetMaxAllowedLatency() { return MaxAllowedLatencyForRewind; }
	
	
};
