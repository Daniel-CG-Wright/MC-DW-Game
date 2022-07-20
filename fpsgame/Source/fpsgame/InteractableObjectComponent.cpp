// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObjectComponent.h"

// Sets default values for this component's properties
UInteractableObjectComponent::UInteractableObjectComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UInteractableObjectComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteractableObjectComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInteractableObjectComponent::SetInteractionType(InteractionTypes NewInteractionType)
{
	ThisInteractionType = NewInteractionType;
}

