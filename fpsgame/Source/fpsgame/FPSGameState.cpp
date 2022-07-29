// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSPlayerController.h"
#include "FPSGameState.h"

float AFPSGameState::GetServerWorldTimeSeconds() const
{
    AFPSPlayerController* pc = Cast<AFPSPlayerController>(GetGameInstance()->GetFirstLocalPlayerController(AActor::GetWorld()));
    if (pc)
    {
        return pc->GetServerTime();
    }
    else
    {
        return GetWorld()->GetTimeSeconds();
    }
}

void AFPSGameState::AddRewindComponent(URewindComponent* RewindComponent)
{
    RewindComponentsArray.Emplace(RewindComponent);
}