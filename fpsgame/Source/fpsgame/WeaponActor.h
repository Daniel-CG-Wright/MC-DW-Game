// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponActor.generated.h"

UENUM(BlueprintType)
	enum class FireType : uint8 {
		//Hitscan weapon
		HITSCAN,
		//Projectile weapon
		PROJECTILE,
		//Checks for hitscan, if not, fires projectile
		HYBRID


	};

UENUM(BlueprintType)
	enum class FireMode : uint8 {
		//Automatic firing (hold down mouse)
		AUTO,
		//Burst, should set burst amount if in use. Auto firing in bursts
		BURST,
		//Semi - tap fire
		SEMI,
		//Bolt, requires animation between shots
		BOLT,
		//Beam, probably not used
		BEAM
	};

UENUM(BlueprintType)
	enum class WeaponType : uint8 {
		AR,
		SMG,
		PISTOL,
		SHOTGUN,
		SNIPER_RIFLE
	};

UCLASS()
class FPSGAME_API AWeaponActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		float MaxRange;

	//Base damage before multipliers (falloff, headshot etc)
	UPROPERTY(EditAnywhere)
		float BaseDamage;

	//Minimum time between shots
	UPROPERTY(EditAnywhere)
		float FireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon/Weapon positioning")
		//Used to ensure rotation of gun is consistent to make it look pretty.
		float BaseRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon/Weapon Info")
		//Type of weapon
		WeaponType WAWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon/Weapon Info")
		//Whether gun fires as burst, auto etc
		FireMode WAWeaponFireType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon/Weapon Info")
		//Hit check type
		FireType WAWeaponHitDetectionType;

	
};
