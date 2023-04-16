// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "InteractableObjectComponent.h"
#include "NiagaraSystem.h"
#include "FPSProjectile.h"
#include "Curves/CurveVector.h"
#include "SightAttachment.h"
#include "Enums.h"
#include "WeaponAttachmentSystem.h"
#include "Net/UnrealNetwork.h"
#include "Enums.h"
#include "WeaponActor.generated.h"



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
		TSubclassOf<class AFPSProjectile> ProjectileClass;
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

	//Speed of projectile rounds fired
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
	//	float ProjectileSpeed;
	//Bullet speed is handled in bullet blueprint itself now.

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
struct FWeaponRecoil
{
	GENERATED_BODY()

public:

	//Whether this gun has recoil
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Recoil")
		bool bHasRecoil;

	//Whether this gun uses control rotation or gun recoil for hipfire recoil.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Recoil")
		bool bUsesControlRotationForHipfireRecoil;

	//Recoil curve patterns
	//Pitch is Y
	//Yaw is Z
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Recoil")
		UCurveVector* RecoilVectorCurve;

	//Time taken for weapon to recover
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Recoil")
		float RecoveryTime;


	//Recoil percentage is lost each shot until it reaches 0% at the end of the recoil degree pattern.
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

	//The recoil properties of the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FWeaponRecoil Recoil;

};





UCLASS(Blueprintable)
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
	
	//Stores attachment scene componnts
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* SightSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* BarrelSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* MagSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* StockSceneComponent;

	// do the same for the other attachments

	// Attachment system object ref
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UWeaponAttachmentSystem* AttachmentSystem;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Replicated property tracking
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		USceneComponent* RootSceneComponent;

	// Muzzle scene component
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* MuzzleSceneComponent;

	//Used to detect whether gun is near player for pickups
	//UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Collision")
	//	UBoxComponent* CollisionComponent;

	//Ammo in the mag currently
	UPROPERTY(Replicated)
		int MagAmmo;

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

	// get the weapon attachment system
	UFUNCTION(BlueprintPure)
		UWeaponAttachmentSystem* GetAttachmentSystem() { return AttachmentSystem; }

	UFUNCTION(BlueprintCallable)
		void SetWeaponDataStruct(FWeaponDataStruct NewWeaponDataStruct);

	// Called when the gun is picked up
	UFUNCTION(BlueprintCallable)
		void OnPickupWeapon();

	// Called when the gun is dropped
	UFUNCTION(BlueprintCallable)
		void OnDropWeapon();

	// Called when the gun is equipped
	UFUNCTION(BlueprintCallable)
		void OnEquipWeapon(USceneComponent* AttachComponent);

	// Called when the gun is unequipped
	UFUNCTION(BlueprintCallable)
		void OnUnequipWeapon();

	// Called to set the weapon ammo
	UFUNCTION(BlueprintCallable)
		void SetAmmo(int NewAmmo);

};
