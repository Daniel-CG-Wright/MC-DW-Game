// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAttachmentComponent.h"

// Sets default values for this component's properties
UBaseAttachmentComponent::UBaseAttachmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UBaseAttachmentComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBaseAttachmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// When the attachment is added to the weapon, this function is called.
void UBaseAttachmentComponent::OnAttachToWeapon()
{
	// ...
}

// When the attachment is removed from the weapon, this function is called.
void UBaseAttachmentComponent::OnDetachFromWeapon()
{
	// ...
}
