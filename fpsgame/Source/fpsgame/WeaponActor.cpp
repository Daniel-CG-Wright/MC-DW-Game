// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponActor.h"

// Sets default values
AWeaponActor::AWeaponActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	BaseScale = FVector(1.0f, 1.0f, 1.0f);
	PrimaryActorTick.bCanEverTick = false;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	SetRootComponent(RootSceneComponent);
	SetActorScale3D(BaseScale);

	//Setting up weapon's mesh
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
	GunMesh->AttachToComponent(RootSceneComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true));
	//GunMesh->SetRelativeScale3D(BaseScale);

	//Creating collision component
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionComponent->AttachToComponent(RootSceneComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true));

	BoxCollisionSize = FVector(15.0f, 15.0f, 15.0f);

	//Sizing colliison component
	CollisionComponent->InitBoxExtent(BoxCollisionSize);

}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponActor::SetBurstNumber(int NewBurstNumber)
{
	BurstNumber = NewBurstNumber;

}

void AWeaponActor::SetCartridgeBullets(int NewCartridgeBullets)
{
	CartridgeBullets = NewCartridgeBullets;
}