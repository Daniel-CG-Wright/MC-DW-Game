// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBullet.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"

AProjectileBullet::AProjectileBullet()
{
	//Constructor
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	
	//Defaults, should be changed for each subclass of this ting
	Damage = 15.0f;
	DamageType = UDamageType::StaticClass();


}

void AProjectileBullet::Destroyed()
{

	FVector spawnLocation = GetActorLocation();
	//Spawns explosion effect - doesn't directly replicate, but  destrouctin of actor does, so this msut play on all clients.
	
}

void AProjectileBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("destroyed"));

	if (OtherActor)
	{
		//Runs if another actror was hit
		UGameplayStatics::ApplyPointDamage(OtherActor, Damage, NormalImpulse, Hit, GetInstigator()->Controller, this, DamageType);
	}
	Destroy();
	
}

void AProjectileBullet::BeginPlay()
{
	Super::BeginPlay();


}

void AProjectileBullet::SetDamage(float newDamage)
{
	Damage = newDamage;
}

void AProjectileBullet::SetDamageType(TSubclassOf<class UDamageType> newDamageType)
{
	DamageType = newDamageType;

}