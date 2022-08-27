// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponActor.h"

// Sets default values
AWeaponActor::AWeaponActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	SetRootComponent(RootSceneComponent);
	SetActorScale3D(WeaponData.PositionalDetails.BaseScale);

	//Setting up weapon's mesh
	StaticGunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMesh"));
	StaticGunMesh->SetupAttachment(RootSceneComponent);
	//GunMesh->SetRelativeScale3D(BaseScale);

	//Creating collision component
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionComponent->SetupAttachment(RootSceneComponent);

	BoxCollisionSize = FVector(15.0f, 15.0f, 15.0f);

	//Sizing colliison component
	CollisionComponent->InitBoxExtent(BoxCollisionSize);

	//Creating interaction component
	InteractionComponent = CreateDefaultSubobject<UInteractableObjectComponent>(TEXT("InteractionComponent"));
	

	
}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();
	//placeholder to set mag ammo to max ammo, will need changing later.
	WeaponData.Stats.MagAmmo = WeaponData.Stats.MaxMagSize;
	
}

// Called every frame
void AWeaponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponActor::SetWeaponDataStruct(FWeaponDataStruct NewWeaponDataStruct)
{
	WeaponData = NewWeaponDataStruct;
}