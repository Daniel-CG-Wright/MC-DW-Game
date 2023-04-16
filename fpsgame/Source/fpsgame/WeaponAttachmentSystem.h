// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseAttachmentComponent.h"
#include "Enums.h"
#include "WeaponAttachmentSystem.generated.h"




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
		void AddAttachment(TSubclassOf<class UBaseAttachmentComponent> Attachment);

	// Called when an attachment is removed.
	UFUNCTION(BlueprintCallable, Category = "WeaponAttachmentSystem")
		void RemoveAttachment(TSubclassOf<class UBaseAttachmentComponent> Attachment);

	// Map storing each type of attachment and the attachment itself.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttachmentSystem")
		TMap<EAttachmentType, TSubclassOf<class UBaseAttachmentComponent>> Attachments;

	// check if an attachment of this type is already attached to the weapon.
	UFUNCTION(BlueprintCallable, Category = "WeaponAttachmentSystem")
		bool IsAttachmentAttached(EAttachmentType Attachment);

	// Get the attachment of this type fromn the map (or nullptr if it doesn't exist)
	UFUNCTION(BlueprintCallable, Category = "WeaponAttachmentSystem")
		TSubclassOf<class UBaseAttachmentComponent> GetAttachment(EAttachmentType Attachment) { return Attachments.Contains(Attachment) ? Attachments[Attachment] : nullptr; }
};
