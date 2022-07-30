// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameModeDefault.h"

void AFPSGameModeDefault::AddRewindComponent(URewindComponent* RewindComponent)
{
    if (RewindComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("Getting added now..."));
        RewindComponentsArray.Emplace(RewindComponent);


    }
}