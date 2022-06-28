// Copyright Epic Games, Inc. All Rights Reserved.


#include "fpsgameGameModeBase.h"

void AfpsgameGameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	//Displays a debug message for 5 seconds.
	//The -1 key value argument prevetns teh message from being updated or refreshed
	//this will print for 5 seconds on game start
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSgameGameMode!"));
}