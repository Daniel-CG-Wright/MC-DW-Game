// Fill out your copyright notice in the Description page of Project Settings.


#include "PrototypePistol.h"

// Sets default values
APrototypePistol::APrototypePistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Weapon data
	BaseRotation = FRotator(0.0f, 0.0f, 5.0f);
	BaseDamage = 10.0f;
	MaxRange = 100.0f;
	BasePosition = FVector(56.0f, 36.0f, -25.0f);
	//Configuring weapon details
	WAWeaponType = WeaponType::PISTOL;
	WAWeaponFireType = FireMode::SEMI;
	WAWeaponHitDetectionType = FireType::HITSCAN;


}

// Called when the game starts or when spawned
void APrototypePistol::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APrototypePistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AWeaponActor APrototypePistol::EquipWeapon(Afpscharacter* TargetCharacter)
{

}