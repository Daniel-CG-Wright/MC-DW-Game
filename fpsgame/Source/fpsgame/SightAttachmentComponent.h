// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAttachmentComponent.h"
#include "SightAttachmentComponent.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API USightAttachmentComponent : public UBaseAttachmentComponent
{
	GENERATED_BODY()
	
public:
	// Sets default values for this component's properties
	USightAttachmentComponent();

protected:
	// Called when the game starts
	// virtual void BeginPlay() override;

public:
	// Called every frame
	// virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Zoom level of the sight, a property
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightAttachmentComponent")
		float ZoomLevel;

	// Whether this sight should take up the entire screen, a property
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightAttachmentComponent")
		bool bIsScope;

	// The screen texture if the sight should take up the entire screen, a property
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightAttachmentComponent")
		UTexture2D* ScopeTexture;

	// Walk speed multiplier when using this sight, a property
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SightAttachmentComponent")
		float WalkSpeedMultiplier;


};
