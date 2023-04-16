// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponAttachmentSystem.h"
#include "Enums.h"
#include "BaseAttachmentComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FPSGAME_API UBaseAttachmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBaseAttachmentComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Called when attaching this attachment to a weapon.
	UFUNCTION(BlueprintCallable, Category = "BaseAttachmentComponent")
		void OnAttachToWeapon();
	
	// Called when detaching this attachment from a weapon.
	UFUNCTION(BlueprintCallable, Category = "BaseAttachmentComponent")
		void OnDetachFromWeapon();

	// Stores the type of attachment this is.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttachmentComponent")
		EAttachmentType TypeOfAttachment;
};
