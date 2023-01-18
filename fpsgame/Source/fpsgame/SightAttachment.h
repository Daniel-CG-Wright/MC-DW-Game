// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttachmentBase.h"
#include "SightAttachment.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FPSGAME_API USightAttachment : public UAttachmentBase
{
	GENERATED_BODY()
	
protected:
	//Zoom factor of sight, consider changing to a graph for multiple zoom values. 1.0x is same as normal
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ZoomFactor;

	//Factor of normal walking speed caused by zooming in (1.0 is normal)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WalkingSpeedFactor;

	//Spread angle factor when aiming in (1.0 is normal)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SpreadAngleFactor;

	//Recoil factor when aiming in (1.0 is normal)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RecoilFactor;

	//The centre of the attachment's lens is this vector from the base attachment point (as centering is done by centering on the attachment point then adding this offset).
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector OffsetFromAttachmentPoint;

	//Texture to apply across the screen when ADSing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* ScreenTexture;
};
