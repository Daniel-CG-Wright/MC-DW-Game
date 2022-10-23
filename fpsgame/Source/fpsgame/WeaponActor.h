// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "FPSProjectile.h"
#include "InteractableObjectComponent.h"
#include "NiagaraSystem.h"
#include "ProjectileBullet.h"
#include "WeaponActor.generated.h"

UENUM(BlueprintType)
enum class Equips : uint8 {
	//Default testing pistol
	PRIMARY = 0,
	SECONDARY,
	BOTH,
	MELEE
};

UENUM(BlueprintType)
enum class Guns : uint8 {
	NONE,
	//Default testing pistol
	PROTOTYPE_PISTOL UMETA(DisplayName = "Prototype Pistol"),
	//testing AR
	PROTOTYPE_AR UMETA(Displayname = "Prototype AR"),
	//testing burst
	PROTOTYPE_BURST UMETA(Displayname = "Prototype Burst"),
	//Testing shotgun
	PROTOTYPE_SHOTGUN UMETA(Displayname = "Prototype Shotgun"),

	LAST
};

UENUM(BlueprintType)
	enum class FireType : uint8 {
		//Hitscan weapon
		HITSCAN,
		//Projectile weapon
		PROJECTILE,



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
		BOLT

		//Beam weapons should be implemented by using an automatic weapon with very high rate of fire and no spread.
		//Also configure the tracer so that it looks constant.
	};

UENUM(BlueprintType)
	enum class WeaponType : uint8 {
		AR,
		SMG,
		PISTOL,
		SHOTGUN,
		SNIPER_RIFLE
	};

USTRUCT(BlueprintType)
struct FWeaponPositionalDetails
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		//Stores translation vectors to position weapon correctly
		FVector BasePosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		//Used to ensure rotation of gun is consistent to make it look pretty.
		FRotator BaseRotation;

	//Ensures correct scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		FVector BaseScale;

	//Ensures correct scale for TP
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		FVector TPBaseScale;

	//Ensures correct rotation fro TP
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		FRotator TPBaseRotation;

	//Ensures correct position for TP
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		FVector TPBasePosition;

	//Muzzle position relative to base position, will be scaled for you
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		FVector MuzzlePosition;
};

USTRUCT(BlueprintType)
struct FWeaponVisualAssets
{
	GENERATED_BODY()

public:
	//Mesh of gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		USkeletalMesh* GunMesh;

	//Particle system for gun tracers when using hitscan weapons.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		UNiagaraSystem* TracerEffect;
	
	//Particle system for gun muzzle flash.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		UNiagaraSystem* MuzzleFlash;


};

//If you get undeclared struct errors is probably because structs were declatred in wrong order.
USTRUCT(BlueprintType)
struct FWeaponMetaData
{
	GENERATED_BODY()

public:
	//Actual gun model name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		Guns GunModel;

	//Type of weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		WeaponType WAWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		//Whether gun fires as burst, auto etc
		FireMode WAWeaponFireType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		//Hit check type
		FireType WAWeaponHitDetectionType;

	//Gun is primary, secondary
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		Equips TypeOfEquip;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<class AProjectileBullet> ProjectileClass;
};
/*
Currently damage is hardcoded to the weapon itself, along with other stats.
To implement things like suppressors, bullets etc which could change these stats, we could use one of 2 approaches:
	- Store all the attachment stats and apply them as necessary, based on the attached state
	- On attaching, check which attachments have been selected and apply them to the gun itself. This assumes the gun cannot change during battle, although we could always modify if needed.
	This second method is probably simpler, and would not require any extra processing or storing of attachment pointers post-start but we need to have a think.

*/


USTRUCT(BlueprintType)
struct FWeaponStats
{
	GENERATED_BODY()

public:
	//Max range of hitscan weapons in cm
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float MaxRange;

	//Minimum time between shots in seconds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float FireRate;

	//Number of rounds fired per shot (usually 1, may be more for shotguns)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		int CartridgeBullets;

	//Number of rounds fired per burst (usually 1, may be more for burst weapons)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		int BurstNumber;

	//Fire rate of bursts
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float BurstFireRate;

	//Maximum ammo the mag can store
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		int MaxMagSize;

	//Ammo in the mag currently
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int MagAmmo;

	//Speed of projectile rounds fired
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float ProjectileSpeed;

	//Base damage of projectile in torso, TODO implement damage falloff
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float BaseDamageTorso;

	//Base damage of projectile in head
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float BaseDamageHead;

	//Base damage of projectile in legs
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float BaseDamageLegs;

	//Base spread when firing in hipfire - probably just use multiples for ADS and crouchwalk (e.g. 0.1x for ads, 0.2x for crouchwalk)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float BaseHipfireSpreadAngleInDegrees;

	//Movement multiplier for spread - 1 = 100%
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float BaseMovementSpreadMultiplier;

};

USTRUCT(BlueprintType)
struct FWeaponDataStruct
{
	GENERATED_BODY()

public:
	//The human-readable weapon name, stored for things such as interaction text
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		FName WeaponName;
	
	//The details containing how the weapon is positioned in space, and attachment and muzzle positions
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWeaponPositionalDetails PositionalDetails;

	//The asset references for the gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWeaponVisualAssets VisualAssets;

	//The metadata storing gun info like fire type
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWeaponMetaData MetaData;

	//The stats of the weapon such as damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWeaponStats Stats;

};





UCLASS()
class FPSGAME_API AWeaponActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponActor();

private:
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Storing the data for the playable weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWeaponDataStruct WeaponData;
	

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		USceneComponent* RootSceneComponent;

	//Used to detect whether gun is near player for pickups
	//UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Collision")
	//	UBoxComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, Category = "Weapon Collision")
		FVector BoxCollisionSize;

	//Mesh of gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		UStaticMeshComponent* StaticGunMesh;

	//Component which allows weapon prop to be interacted with
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon pickup")
		UInteractableObjectComponent* InteractionComponent;

	UFUNCTION(BlueprintPure)
		FWeaponDataStruct GetWeaponDataStruct() { return WeaponData; }

	UFUNCTION(BlueprintCallable)
		void SetWeaponDataStruct(FWeaponDataStruct NewWeaponDataStruct);



};
