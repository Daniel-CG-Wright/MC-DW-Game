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

	// initialise attachment system
	AttachmentSystem = CreateDefaultSubobject<UWeaponAttachmentSystem>(TEXT("AttachmentSystem"));

	//Setting up weapon's mesh
	StaticGunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GunMesh"));
	StaticGunMesh->SetupAttachment(RootSceneComponent);
	//GunMesh->SetRelativeScale3D(BaseScale);

	//Creating collision component
	//CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	//CollisionComponent->SetupAttachment(RootSceneComponent);

	//BoxCollisionSize = FVector(15.0f, 15.0f, 15.0f);

	//Sizing colliison component
	//CollisionComponent->InitBoxExtent(BoxCollisionSize);

	//Creating interaction component
	InteractionComponent = CreateDefaultSubobject<UInteractableObjectComponent>(TEXT("InteractionComponent"));
	
	// Creating scene components for attachments
	SightSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SightSceneComponent"));
	SightSceneComponent->SetupAttachment(RootSceneComponent);
	BarrelSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BarrelSceneComponent"));
	MagSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MagSceneComponent"));
	StockSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("StockSceneComponent"));

}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();
	//placeholder to set mag ammo to max ammo, will need changing later.
	MagAmmo = WeaponData.Stats.MaxMagSize;
	
}

// Replicated properties tracking
void AWeaponActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// Replicate to everyone
	DOREPLIFETIME(AWeaponActor, MagAmmo);
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

// Called when this weapon is picked up
void AWeaponActor::OnPickupWeapon()
{
	// TODO implement changes to be made when picking up the weapon
	// e.g. change weapon's mesh to the one that is held

}

// Called when this weapon is dropped
void AWeaponActor::OnDropWeapon()
{
	// TODO implement changes to be made when dropping the weapon
	// e.g. change weapon's mesh to the one that is on the ground
}

// Called when this weapon is equipped
void AWeaponActor::OnEquipWeapon()
{
	// TODO implement changes to be made when equipping the weapon
	// e.g. change weapon's mesh to the one that is held
}

// Called when this weapon is unequipped
void AWeaponActor::OnUnequipWeapon()
{
	// TODO implement changes to be made when unequipping the weapon
	// e.g. change weapon's mesh to the one that is on the ground
}

// Called to set the weapon ammo, should only be called on server
void AWeaponActor::SetAmmo(int NewAmmo)
{
	MagAmmo = NewAmmo;
}
