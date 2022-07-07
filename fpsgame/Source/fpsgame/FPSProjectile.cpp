// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/DamageType.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
AFPSProjectile::AFPSProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;


	//Intiialize Projectile Radius
	ProjectileRadius = 15.0f;

	//Use a sphere, it is a simple collision representation
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

	//Set the sphere's collision radius
	CollisionComponent->InitSphereRadius(ProjectileRadius);

	CollisionComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	//Set the root component to be the collision component
	RootComponent = CollisionComponent;

	//Registers the projectile impact functioon on a hit event
	if (GetLocalRole() == ROLE_Authority)
	{
		CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnProjectileImpact);
	}
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DefaultMesh(TEXT("StaticMesh'/Game/Meshes/Shape_Sphere.Shape_Sphere'"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	//Set the static mesh adn its position and scale if we successfully found a mesh
	if (DefaultMesh.Succeeded())
	{
		StaticMesh->SetStaticMesh(DefaultMesh.Object);
		StaticMesh->SetRelativeLocation(FVector(0.0f, 0.0f, -37.5f));
		StaticMesh->SetRelativeScale3D(FVector(0.75f, 0.75f, 0.75f));

	}

	//Sets destroy particle effect
	static ConstructorHelpers::FObjectFinder<UParticleSystem> DefaultDestroyEffect(TEXT("ParticleSystem'/Game/Particles/P_Explosion.P_Explosion'"));
	if (DefaultDestroyEffect.Succeeded())
	{
		DestroyEffect = DefaultDestroyEffect.Object;
	}

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	//Should be changed to the speeds used by the firing weapon
	ProjectileMovementComponent->InitialSpeed = 1500.0f;
	ProjectileMovementComponent->MaxSpeed = 1500.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

	DamageType = UDamageType::StaticClass();
	//Should be changed to the weapon firing the projectile.
	Damage = 10.0f;

	//Intial projectile lifespan
	InitialLifeSpan = 1.0f;
}

// Called when the game starts or when spawned
void AFPSProjectile::BeginPlay()
{
	Super::BeginPlay();
	
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

void AFPSProjectile::Destroyed()
{
	FVector spawnLocation = GetActorLocation();
	//Spawns explosion effect - doesn't directly replicate, but  destrouctin of actor does, so this msut play on all clients.
	UGameplayStatics::SpawnEmitterAtLocation(this, DestroyEffect, spawnLocation, FRotator::ZeroRotator, true, EPSCPoolMethod::AutoRelease);
}

void AFPSProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor)
	{
		//Runs if another actror was hit
		UGameplayStatics::ApplyPointDamage(OtherActor, Damage, NormalImpulse, Hit, GetInstigator()->Controller, this, DamageType);
	}

	Destroy();
}
