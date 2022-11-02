// Fill out your copyright notice in the Description page of Project Settings.
//ONLY FOR BULLET/DAMAGING PROJECTILE USE, ABILITIES ETC SHOULD USE THEIR OWN CLASSES

#include "FPSProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystem.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AFPSProjectile::AFPSProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//bReplicates = true;

	if (!CollisionComponent)
	{
		//Use sphere as simple collision representation
		CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

		//Set collision radius
		CollisionComponent->InitSphereRadius(15.0f);

		//Set root component to be collision component as this will be the driven component by the sim
		RootComponent = CollisionComponent;
	}


	if (!ProjectileMovementComponent)
	{
		//Use this component to drive projectile movement
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
		ProjectileMovementComponent->InitialSpeed = 3000.0f;
		ProjectileMovementComponent->MaxSpeed = 3000.0f;
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		ProjectileMovementComponent->bShouldBounce = false;
		ProjectileMovementComponent->Bounciness = 0.3f;
		ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	}


	CosmeticSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CosmeticSceneComponent"));
	CosmeticSceneComponent->SetupAttachment(RootComponent);
	//ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
	//ProjectileMeshComponent->SetupAttachment(CosmeticSceneComponent);
	//Instead of using meshes, we now use static mesh niagara particles - it is easier to configure, and is better performance-wise

	ProjectileParticleSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ParticleComponent"));
	ProjectileParticleSystem->SetupAttachment(CosmeticSceneComponent);

	//Event called when component hits something
	CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnHit);

	InitialLifeSpan = 3.0f;


}

//Function called when the projectile hits something
void AFPSProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
	{
		//damage effects and stuff here. Implemented via custom blueprint function
		Blueprint_OnHit(HitComponent, OtherActor, OtherComponent, NormalImpulse, Hit);
	}

	Destroy();

}
// Called when the game starts or when spawned
void AFPSProjectile::BeginPlay()
{
	Super::BeginPlay();
	

}

void AFPSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}


