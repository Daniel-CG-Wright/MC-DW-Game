// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSPlayerController.h"
#include "FPSGameState.h"

float AFPSGameState::GetServerWorldTimeSeconds() const
{
    if (AFPSPlayerController* pc = GetGameInstance()->
        GetFirstLocalPlayerController(GetWorld())
        )
    {
        return pc->GetServerTime();
    }
    else
    {
        return GetWorld()->GetTimeSeconds();
    }
}