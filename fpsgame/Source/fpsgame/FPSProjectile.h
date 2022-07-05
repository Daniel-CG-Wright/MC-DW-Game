// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "FPSProjectile.generated.h"

UCLASS()
class FPSGAME_API AFPSProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Destroyed() override;

	//used when projectile hits something
	UFUNCTION(Category = "Projectile")
		void OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		float ProjectileRadius;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Sphere collision component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USphereComponent* CollisionComponent;

	//Provides a visual representation of the projectile
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class UStaticMeshComponent* StaticMesh;

	//Movement component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class UProjectileMovementComponent* ProjectileMovementComponent;

	//Particle for when projectile hits something
	UPROPERTY(EditAnywhere, Category = "Effects")
		class UParticleSystem* DestroyEffect;

	//Damage type
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
		TSubclassOf<class UDamageType> DamageType;

	//Damage dealt by the projectile, should be set by the firing entity.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
		float Damage;

	UFUNCTION(BlueprintCallable)
		float GetProjectileRadius() const { return ProjectileRadius; }

	UFUNCTION(BlueprintCallable)
		void SetProjectileRadius(float newProjectileRadius);

	
};
