// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableObjectComponent.generated.h"

UENUM(BlueprintType)
enum class InteractionTypes : uint8
{
	WEAPON_PICKUP = 0,
	
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSGAME_API UInteractableObjectComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractableObjectComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction type")
		InteractionTypes ThisInteractionType;

	//The time the player must spend waiting for the interaction to finish
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction time")
		float InteractionTime;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Whether the interactable component is enabled (if not it cannot be interacted with)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction enabled")
		bool bIsEnabled;

	//Name of interaction which will be shown in the HUD
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName InteractionName;

	UFUNCTION(BlueprintCallable)
		InteractionTypes GetInteractionType() { return ThisInteractionType; }

	UFUNCTION(BlueprintCallable)
		void SetInteractionType(InteractionTypes NewInteractionType);

	UFUNCTION(BlueprintCallable)
		float GetInteractionTime() { return InteractionTime; }
	
	UFUNCTION(BlueprintCallable)
		void SetInteractionTime(float NewInteractionTime);

	// Set whether the interactable component is enabled
	UFUNCTION(BlueprintCallable)
		void SetEnabled(bool bNewEnabled) { bIsEnabled = bNewEnabled; }

	// Get whether the interactable component is enabled
	UFUNCTION(BlueprintCallable)
		bool IsEnabled() { return bIsEnabled; }

};
