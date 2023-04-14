// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponAttachmentSystem.h"

// Sets default values for this component's properties
UWeaponAttachmentSystem::UWeaponAttachmentSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponAttachmentSystem::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeaponAttachmentSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// When an attachment is to be added to the weapon, this function is called.
void UWeaponAttachmentSystem::AddAttachment(TSubclassOf<class UBaseAttachmentComponent> AttachmentToAdd)
{
	// Cast from the class to the component
	UBaseAttachmentComponent* AttachmentToAddComponent = Cast<UBaseAttachmentComponent>(AttachmentToAdd->GetDefaultObject());
	// If the attachment is not already attached to the weapon, add it.
	if (IsAttachmentAttached(AttachmentToAdd))
	{
		// Call the function of the attachment when it is added
		AttachmentToAddComponent->OnAttachToWeapon();
		// add to the array of attachments
		Attachments.Add(AttachmentToAdd);
	}
}

// When an attachment is to be removed from the weapon, this function is called.
void UWeaponAttachmentSystem::RemoveAttachment(TSubclassOf<class UBaseAttachmentComponent> AttachmentToRemove)
{
	// Cast from the class to the component
	UBaseAttachmentComponent* AttachmentToRemoveComponent = Cast<UBaseAttachmentComponent>(AttachmentToRemove->GetDefaultObject());
	// If the attachment is attached to the weapon, remove it.
	if (IsAttachmentAttached(AttachmentToRemove))
	{
		// Call the function of the attachment when it is removed
		AttachmentToRemoveComponent->OnDetachFromWeapon();
		// remove from the array of attachments
		Attachments.Remove(AttachmentToRemove);
	}
}

// Check if an attachment is attached to the weapon.
bool UWeaponAttachmentSystem::IsAttachmentAttached(TSubclassOf<class UBaseAttachmentComponent> AttachmentToCheck)
{
	// If the attachment is already attached to the weapon, return true.
	if (Attachments.Contains(AttachmentToCheck))
	{
		return true;
	}
	// If the attachment is not attached to the weapon, return false.
	else
	{
		return false;
	}
}