// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttachmentBase.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class AttachmentType : uint8 {
	//Default testing pistol
	SIGHT = 0,
	BARREL = 1,
	STOCK,
	GRIP,
	OTHER
};

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FPSGAME_API UAttachmentBase : public UObject
{
	GENERATED_BODY()
	

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* AttachmentMesh;

	
};
