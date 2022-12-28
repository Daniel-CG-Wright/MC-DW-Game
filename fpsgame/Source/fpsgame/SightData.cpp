// Fill out your copyright notice in the Description page of Project Settings.


#include "SightData.h"

// Sets default values for this component's properties
USightData::USightData()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	BASE_FOV = 90;

}


// Called when the game starts
void USightData::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void USightData::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


float USightData::CalculateFOVFromZoom(float Zoom)
{

	//Needed because zoom is given, but FOV is the required output.
	float basefovinrads = FMath::DegreesToRadians(BASE_FOV);

	float newfovinrads = FMath::Atan(FMath::Tan(basefovinrads) / Zoom);

	return FMath::RadiansToDegrees(newfovinrads);

}