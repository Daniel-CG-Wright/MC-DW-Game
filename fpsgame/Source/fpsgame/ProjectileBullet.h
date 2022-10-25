// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSProjectile.h"
#include "ProjectileBullet.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AProjectileBullet : public AFPSProjectile
{
	GENERATED_BODY()

public:
	AProjectileBullet();

protected:
	virtual void Destroyed() override;

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
		TSubclassOf<class UDamageType> DamageType;

	//used when projectile hits something
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

public:

	UFUNCTION(BlueprintCallable)
		float GetDamage() { return Damage; }

	UFUNCTION(BlueprintCallable)
		TSubclassOf<class UDamageType> GetDamageType() { return DamageType; }

	UFUNCTION(BlueprintCallable)
		void SetDamage(float newDamage);

	UFUNCTION(BlueprintCallable)
		void SetDamageType(TSubclassOf<class UDamageType> newDamageType);


};
