// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraComponent.h"
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


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Spherical collision component
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Projectile)
		USphereComponent* CollisionComponent;

	//Projectile Movement Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;



	//We will need to allow for particle effects like smoke or trace
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Projectile)
		UNiagaraComponent* ProjectileParticleSystem;
	
	//Cosmetics scene component to link all the cosmetics together
	//This is what will be blended
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile)
		USceneComponent* CosmeticSceneComponent;


	/*
	Function implemented with blueprints to blend the mesh to the correct spot
	This will set the world position of the mesh and particle system to the muzzle of the gun,
	then blend it forward to the collision component.
	We implement in blueprint for ease of use.
	*/

	//Custom hit function to implement custom hit behaviours for different projectile instances
	UFUNCTION(BlueprintImplementableEvent)
		void Blueprint_OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintImplementableEvent)
		void BlendVisualsToCollision(const FVector MuzzlePosition);


	//Function to intiialize projectile velocity in the shoot direction
	void FireInDirection(const FVector& ShootDirection);

	//Function called on hitting something
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	
};
