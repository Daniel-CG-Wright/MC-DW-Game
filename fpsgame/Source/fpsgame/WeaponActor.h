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
	SECONDARY = 1,
	MELEE = 2
};

UENUM(BlueprintType)
enum class Guns : uint8 {
	NONE,
	//Default testing pistol
	PROTOTYPE_PISTOL
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

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<class AProjectileBullet> ProjectileClass;

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
	


	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		//Type of weapon
		WeaponType WAWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		//Whether gun fires as burst, auto etc
		FireMode WAWeaponFireType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Info")
		//Hit check type
		FireType WAWeaponHitDetectionType;

	

	
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
		USkeletalMeshComponent* GunMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		//Stores translation vectors to position weapon correctly
		FVector BasePosition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		//Used to ensure rotation of gun is consistent to make it look pretty.
		FRotator BaseRotation;

	//Ensures correct scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon visuals")
		FVector BaseScale;

	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Collision")
		//Stores whether weapon is already being held by someone
		bool IsEquipped;

	//Stores whether the weapon is a primary weapon or a secondary weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		Equips TypeOfEquip;

	//Component which allows weapon prop to be interacted with
	UPROPERTY()
		UInteractableObjectComponent* InteractionComponent;

	UFUNCTION(BlueprintPure)
		float GetMaxRange() const { return MaxRange; }
	

	UFUNCTION(BlueprintPure)
		float GetFireRate() const { return FireRate; }

	UFUNCTION(BlueprintPure)
		int GetCartridgeBullets() const { return CartridgeBullets; }

	UFUNCTION(BlueprintPure)
		int GetBurstNumber() const { return BurstNumber; }

	UFUNCTION(BlueprintPure)
		float GetProjectileSpeed() const { return ProjectileSpeed; }

	UFUNCTION(BlueprintCallable)
		void SetBurstNumber(int NewBurstNumber);

	UFUNCTION(BlueprintCallable)
		void SetCartridgeBullets(int NewCartridgeBullets);

	UFUNCTION(BlueprintPure)
		TSubclassOf<AProjectileBullet> GetProjectileClass() { return ProjectileClass; }


};
