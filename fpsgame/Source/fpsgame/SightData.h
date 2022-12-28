// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SightData.generated.h"

//Handles data and functionality relating to the weapon sights (primarily ADSing)

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
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

	//Zoom factor of sight, consider changing to a graph for multiple zoom values.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ZoomFactor;

	//Used as base FOV in calculations
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BASE_FOV;

	//Factor of normal walking speed caused by zooming in (1.0 is normal)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WalkingSpeedFactor;

	//Spread angle factor when aiming in
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SpreadAngleFactor;

	//Recoil factor when aiming in
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RecoilFactor;

	//Mesh of the sight
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMesh* SightMesh;

	//The centre of the attachment's lens is this vector from the base attachment point (as centering is done by centering on the attachment point then adding this offset).
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector OffsetFromAttachmentPoint;

	//Texture to apply across the screen when ADSing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* ScreenTexture;

	float CalculateFOVFromZoom(float Zoom);


};
