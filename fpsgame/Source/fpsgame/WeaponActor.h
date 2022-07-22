// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "FPSProjectile.h"
#include "InteractableObjectComponent.h"
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
	PROTOTYPE_PISTOL,
	PROTOTYPE_AR
};

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

USTRUCT(BlueprintType)
struct FWeaponDataStruct
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<class AProjectileBullet> ProjectileClass;

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

	//Speed of projectile rounds fired
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon stats")
		float ProjectileSpeed;

	//Type of weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		WeaponType WAWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		//Whether gun fires as burst, auto etc
		FireMode WAWeaponFireType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		//Hit check type
		FireType WAWeaponHitDetectionType;

	//Mesh of gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		USkeletalMesh* GunMesh;

	//Gun is primary, secondary
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		Equips TypeOfEquip;

	//Actual gun model
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		Guns GunModel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		//Stores translation vectors to position weapon correctly
		FVector BasePosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		//Used to ensure rotation of gun is consistent to make it look pretty.
		FRotator BaseRotation;

	//Ensures correct scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		FVector BaseScale;


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
	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Collision")
		UBoxComponent* CollisionComponent;

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
