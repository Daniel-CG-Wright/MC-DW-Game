// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseAttachmentComponent.h"
#include "WeaponAttachmentSystem.generated.h"


// Enum storing all types of attachments possible
/*
1. SIGHT
2. MAG
3. STOCK
4. UNDERBARREL
5. BARREL
*/
UENUM(BlueprintType)
enum class EAttachmentType : uint8
{
	SIGHT		UMETA(DisplayName = "Sight"),
	MAG			UMETA(DisplayName = "Mag"),
	STOCK		UMETA(DisplayName = "Stock"),
	UNDERBARREL	UMETA(DisplayName = "Underbarrel"),
	BARREL		UMETA(DisplayName = "Barrel")
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSGAME_API UWeaponAttachmentSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponAttachmentSystem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Called when an attachment is added.
	UFUNCTION(BlueprintCallable, Category = "WeaponAttachmentSystem")
		void AddAttachment(UBaseAttachmentComponent* Attachment);

	// Called when an attachment is removed.
	UFUNCTION(BlueprintCallable, Category = "WeaponAttachmentSystem")
		void RemoveAttachment(UBaseAttachmentComponent* Attachment);

	// Array storing all attachments.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttachmentSystem")
		TArray<UBaseAttachmentComponent*> Attachments;

	// check if this attachment is already attached to the weapon.
	UFUNCTION(BlueprintCallable, Category = "WeaponAttachmentSystem")
		bool IsAttachmentAttached(UBaseAttachmentComponent* Attachment);

	// TODO add checks to see if the type of attachment is already attached.
	// if it is, remove it and add the new one.
	// if it isn't, add the new one.

};
