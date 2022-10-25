// Fill out your copyright notice in the Description page of Project Settings.


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
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;


	//Intiialize Projectile Radius default 15.0f
	ProjectileRadius = 15.0f;

	//Use a sphere, it is a simple collision representation
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

	//Set the sphere's collision radius
	CollisionComponent->InitSphereRadius(ProjectileRadius);


	//Set the root component to be the collision component
	RootComponent = CollisionComponent;

	//Registers the projectile impact functioon on a hit event
	CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnHit);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);




	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	//Should be changed to the speeds used by the firing weapon
	ProjectileMovementComponent->InitialSpeed = 1500.0f;
	ProjectileMovementComponent->MaxSpeed = 1500.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;



	//Intial projectile lifespan, default 1.0 seconds
	InitialLifeSpan = 1.0f;
}

// Called when the game starts or when spawned
void AFPSProjectile::BeginPlay()
{
	Super::BeginPlay();
	CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);

}

void AFPSProjectile::SetProjectileSpeed(float newProjectileSpeed)
{
	ProjectileMovementComponent->InitialSpeed = newProjectileSpeed;
}
// Called every frame
void AFPSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSProjectile::SetProjectileRadius(float NewProjectileRadius)
{
	ProjectileRadius = NewProjectileRadius;
	
}

void AFPSProjectile::FireInDirection(const FVector& ShootDirection)
{
	UE_LOG(LogTemp, Warning, TEXT("FireInDirection"));
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

void AFPSProjectile::Destroyed()
{
	UE_LOG(LogTemp, Warning, TEXT("destroyed"));
	FVector spawnLocation = GetActorLocation();
	//Spawns explosion effect - doesn't directly replicate, but  destrouctin of actor does, so this msut play on all clients.
	UGameplayStatics::SpawnEmitterAtLocation(this, DestroyEffect, spawnLocation, FRotator::ZeroRotator, true, EPSCPoolMethod::AutoRelease);
}

void AFPSProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Impact"))

	Destroy();
}
