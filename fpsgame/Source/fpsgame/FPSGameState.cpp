// Fill out your copyright notice in the Description page of Project Settings.
#include "FPSGameState.h"
#include "FPSPlayerController.h"


float AFPSGameState::GetServerWorldTimeSeconds() const
{
    AFPSPlayerController* pc = Cast<AFPSPlayerController>(GetGameInstance()->GetFirstLocalPlayerController(AActor::GetWorld()));
    if (pc)
    {
        UE_LOG(LogTemp, Warning, TEXT("Getting time"));
        return pc->GetServerTime();
    }
    else
    {
        return GetWorld()->GetTimeSeconds();
    }
}

