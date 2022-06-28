// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "fpsgameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AfpsgameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		//Allows for overriding what happens when startplay occurs (e.g.. printing log message at start
		virtual void StartPlay() override;
};
