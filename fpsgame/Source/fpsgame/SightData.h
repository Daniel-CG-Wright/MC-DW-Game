// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SightData.generated.h"

//Handles data and functionality relating to the weapon sights (primarily ADSing)

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSGAME_API USightData : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USightData();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	



};
