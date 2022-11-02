// Fill out your copyright notice in the Description page of Project Settings.
#include "fpscharacter.h"

#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"
#include "Engine\Classes\GameFramework\CharacterMovementComponent.h"
#include "TimerManager.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

// Sets default values
Afpscharacter::Afpscharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = GetCapsuleComponent();

	//Creates a first person camera component instance
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(FPSCameraComponent != nullptr);

	//Attach the camera component to the capsule component
	FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	//Position the camera at eye level
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight-10.0f));


	//Creating the FPS mesh component for the owning player
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));

	check(FPSMesh != nullptr);

	ThirdPersonGunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ThirdPersonMesh"));
	check(ThirdPersonGunMesh != nullptr)
	//Only owning player sees this mesh
	FPSMesh->SetOnlyOwnerSee(true);

	ThirdPersonGunMesh->SetOwnerNoSee(true);
	ThirdPersonGunMesh->SetupAttachment(GetMesh(), TEXT("TP_GunSocket"));

	//Disable some environmental shadows to preserve the illusion of using a single mesh
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	//Hides third person mesh from owner
	GetMesh()->SetOwnerNoSee(true);

	//Created on client but doens't do anything unless on server
	//FPSRewindComponent = CreateDefaultSubobject<URewindComponent>(TEXT("RewindComponent"));
	
	//Creating the FPS weapon scene component, which is separate from the 3rd person gun mesh.
	FPSGunComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Gun Scene Component"));
	FPSGunComponent->SetupAttachment(FPSCameraComponent);

	
	FPSMuzzleComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Gun Muzzle"));
	FPSMuzzleComponent->SetupAttachment(FPSMesh);
	check(FPSMuzzleComponent != nullptr);

	FPSMesh->SetupAttachment(FPSGunComponent);

	TPMuzzleComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TP Muzzle"));
	TPMuzzleComponent->SetupAttachment(ThirdPersonGunMesh);
	check(TPMuzzleComponent != nullptr);

	/*The above scene component is where the weapon object will actually attach to when equipped.*/

	//Attaches the FPS mesh to the FPS camera
	//Enables the pawn base of the character to control camera rotation
	FPSCameraComponent->bUsePawnControlRotation = true;

	//Sets default mouse input values. Will have to change later when integrating with stored player settings.
	XSensitivity = 1.0f;
	YSensitivity = 1.0f;
	InvertX = false;
	InvertY = false;
	ToggleCrouch = true;
	ToggleSprint = false;


	//Initialize stamina
	MaxStamina = 100.0f;
	CurrentStamina = MaxStamina;
	StaminaLossRateWhenSprinting = 10.0f;
	StaminaLossWhenJumping = 15.0f;
	StaminaUpdateIntervalInSeconds = 0.2f;

	//Initialize health
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;

	//Initialize speeds
	DefaultSpeed = 600.0f;
	SprintSpeed = 1200.0f;
	CrouchSpeed = 300.0f;

	//Initialize default heights
	DefaultHalfHeight = 90.0f;
	CrouchedHalfHeight = 65.0f;

	//Initialize landing time
	LandingTime = 0.5f;

	//Spread defaults
	SpeedForLosingAccuracy = 200.0f;
	MaxMovementSpreadModifier = 5.0f;
	MinMovementSpreadModifier = 1.0f;

	DistanceToPlaceProjectileFromCamera = FVector(100.0f, 0.0f, 0.0f);

	bCanInteract = true;
	InteractInterval = 0.5f;
	bIsFiring = false;

	bCanFire = true;
	//Interact range in centimetres
	MaxInteractRange = 250.0f;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Replicated Properties

void Afpscharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Replicate current stamina only to currently owning player, as other players do not need to see your stamina in this build.
	//To allow everyone to receive each other's stamina and thereby see it, we can switch to using DOREPLIFETIME
	DOREPLIFETIME_CONDITION(Afpscharacter, CurrentStamina, COND_OwnerOnly);

	//Old command for purpose described above
	//DOREPLIFETIME(Afpscharacter, CurrentStamina);

	//Replicate current HP
	DOREPLIFETIME(Afpscharacter, CurrentHealth);

	//Replicate if sprinting
	DOREPLIFETIME_CONDITION(Afpscharacter, IsSprinting, COND_SimulatedOnly);

	DOREPLIFETIME_CONDITION(Afpscharacter, CurrentlyCrouching, COND_SimulatedOnly);

	//Replicate gun
	DOREPLIFETIME(Afpscharacter, EquippedGun);

	//Replicate weapon data so that players know what gun you have equipped
	DOREPLIFETIME(Afpscharacter, PrimaryData);

	DOREPLIFETIME(Afpscharacter, SecondaryData);

	//For replicating pitch
	DOREPLIFETIME_CONDITION(Afpscharacter, SynchronisedControlRotation, COND_SimulatedOnly);

	//Replicating gun cosmetics
	DOREPLIFETIME_CONDITION(Afpscharacter, MuzzleCounter, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(Afpscharacter, EndPoint, COND_SkipOwner);

}



// Called when the game starts or when spawned
void Afpscharacter::BeginPlay()
{
	Super::BeginPlay();

	//server only things
	if (GetLocalRole() == ROLE_Authority)
	{
		GetWorldTimerManager().SetTimer(StaminaTimerHandle, this, &Afpscharacter::UpdateStamina, StaminaUpdateIntervalInSeconds, true);
		FPSRewindComponent = NewObject<URewindComponent>(this);
		FPSRewindComponent->RegisterComponent();
	}
	

}

// Called every frame
void Afpscharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	if (GetLocalRole() < ROLE_Authority)
	{
		UE_LOG(LogTemp, Warning, TEXT("Client time = %f"), Cast<AFPSGameState>(GetWorld()->GetGameState())->GetServerWorldTimeSeconds());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Server time = %f"), Cast<AFPSGameState>(GetWorld()->GetGameState())->GetServerWorldTimeSeconds());
	}
	*/
}

// Called to bind functionality to input
void Afpscharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Setting up movement bindings
	PlayerInputComponent->BindAxis("Move Y", this, &Afpscharacter::MoveY);
	PlayerInputComponent->BindAxis("Move X", this, &Afpscharacter::MoveX);

	//Setting up mouse movement bindings
	PlayerInputComponent->BindAxis("Mouse Y", this, &Afpscharacter::ApplySensitivityAndInversionToMouseInputY);
	PlayerInputComponent->BindAxis("Mouse X", this, &Afpscharacter::ApplySensitivityAndInversionToMouseInputX);

	//Setting up jump input
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &Afpscharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &Afpscharacter::StopJump);

	//Setting up sprint input
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &Afpscharacter::PressSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &Afpscharacter::ReleaseSprint);

	//Setting up crouch input
	//ALERT this is now done entirely in blueprints.

	//Binding fire action
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &Afpscharacter::OnPressFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &Afpscharacter::ReleaseFire);

	//binding for weapon slots
	PlayerInputComponent->BindAction("PrimaryGun", IE_Pressed, this, &Afpscharacter::SwitchPrimaryInputImplementation);
	PlayerInputComponent->BindAction("SecondaryGun", IE_Pressed, this, &Afpscharacter::SwitchSecondaryInputImplementation);

	//Binding reload
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &Afpscharacter::OnReload);

	//Binding for interaction
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &Afpscharacter::InteractPressed);
}

void Afpscharacter::OnPressFire()
{

	
	if (((EquippedGun == Equips::PRIMARY && PrimaryData.MetaData.GunModel != Guns::NONE) || (EquippedGun == Equips::SECONDARY && SecondaryData.MetaData.GunModel != Guns::NONE)) && !GetWorld()->GetTimerManager().TimerExists(BurstFireTimer))
	{
		if (GetCurrentlyEquippedWeaponData().Stats.BurstFireRate == 0.0f)
		{
			UE_LOG(LogTemp, Warning, TEXT("Start"));
			ClientValidateFire();
		}
		else
		{
			BurstRoundsToFire = GetCurrentlyEquippedWeaponData().Stats.BurstNumber;
			UE_LOG(LogTemp, Warning, TEXT("Bursting"));
			ClientValidateFire();
			GetWorld()->GetTimerManager().SetTimer(BurstFireTimer, this, &Afpscharacter::ClientValidateFire, GetCurrentlyEquippedWeaponData().Stats.BurstFireRate, true);
		}

	}
	//ClientValidateFire();

}
void Afpscharacter::ReleaseFire()
{
	bIsFiring = false;
	
}

void Afpscharacter::InteractPressed()
{
	//Logic for pressing interact goes here
	if (bCanInteract)
	{
		//Stop floooding of interact actions, we are giving a lot of power to the client here so may need to strengthen this later and move to server, but that defeats the purpose
		//as this function is designed to stop overloading the server with interact RPCs
		bCanInteract = false;
		GetWorld()->GetTimerManager().SetTimer(InteractInputIntervalTimerHandle, this, &Afpscharacter::EnableCanInteract, InteractInterval, false);
		Interact();

	}
}

void Afpscharacter::StopFiring()
{
	UE_LOG(LogTemp, Warning, TEXT("No longer bursting"));
	//Stops firing burst
	GetWorld()->GetTimerManager().ClearTimer(BurstFireTimer);
	//Also stops firing auto
	bIsFiring = false;

}

void Afpscharacter::EnableCanInteract()
{
	bCanInteract = true;
}

//Ticking function to get what we are currently looking at
bool Afpscharacter::GetCurrentlyAvailableInteractable()
{

	//Hide if can't interact
	if (!bCanInteract)
	{
		return false;
	}

	//Define output fname
	FName interactname = FName();
	//Perform interact checks but as a just looking
	InteractWithNameOnly(interactname);

	CurrentInteractionName = interactname;
	
	if (!interactname.IsNone())
	{
		//interaction availalbe
		return true;
	}
	else
	{
		return false;
	}
}


void Afpscharacter::SwitchPrimaryInputImplementation()
{
	SwitchPrimary(false);
}

void Afpscharacter::SwitchSecondaryInputImplementation()
{
	SwitchSecondary(false);
}

void Afpscharacter::MoveY(float Value)
{
	///For moving forward/backward

	//Gets 'forward' relative to actor, and record that player wants to move that way.
	FVector Direction = GetActorForwardVector();

	float dotProduct = FVector::DotProduct(GetActorForwardVector(), GetVelocity());

	if (IsSprinting && (Value != 1.0f || (dotProduct < 30.0f && dotProduct > -30.0f)))
	{
		//Ensures player only sprints if they are holding forward and moving forward.
		UE_LOG(LogTemp, Warning, TEXT("LookCall"));
		SetSprinting(false);
	}
	AddMovementInput(Direction, Value);


}

void Afpscharacter::UpdateStamina()
{

	if (IsSprinting)
	{
		//Lose stamina while sprinting
		LoseStamina(StaminaLossRateWhenSprinting * StaminaUpdateIntervalInSeconds);

	}
	else if (!JustLanded && (GetVelocity().Z < 0.1f || GetVelocity().Z > 0.1f))
	{
		//Gain stamina if not sprinting or falling
		LoseStamina(-1.0f * StaminaLossRateWhenSprinting * StaminaUpdateIntervalInSeconds);
	}



}
void Afpscharacter::MoveX(float Value)
{
	///For moving right/left

	//Gets 'right' relative to camera, and records that player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);

}

void Afpscharacter::ServerSyncControlRotation_Implementation(FRotator NewSynchronisedControlRotation)
{
	if (!IsLocallyControlled())
	{
		FPSCameraComponent->SetWorldRotation(NewSynchronisedControlRotation);
		SynchronisedControlRotation = NewSynchronisedControlRotation;
	}
}

void Afpscharacter::OnRep_ControlRotation()
{
	FPSCameraComponent->SetWorldRotation(SynchronisedControlRotation);
}
void Afpscharacter::ApplySensitivityAndInversionToMouseInputX(float Value)
{
	///Applies sensitivity and inversion to mouse input X.


	AddControllerYawInput((InvertX ? -1 * (Value * XSensitivity) : (Value * XSensitivity)));

}

void Afpscharacter::ApplySensitivityAndInversionToMouseInputY(float Value)
{
	///Applies sensitivity and inverstion to mouse input Y

	AddControllerPitchInput((InvertY ? -1 * (Value * YSensitivity) : (Value * YSensitivity)));

	//to sync pitch input
	if (IsLocallyControlled())
	{
		ServerSyncControlRotation(GetControlRotation());
	}
}

//These jump functions should set the bPressedJump variable
//This in turn causes the character to jump due to backend from UE4
void Afpscharacter::StartJump()
{
	if (GetCurrentStamina() <= StaminaLossWhenJumping)
	{
		return;
	}
	//Release crouch is done in blueprints (NEEDS FIXING)
	bPressedJump = true;
	if (CanJump())
	{
		ServerStartJump();
	}
}

void Afpscharacter::ServerStartJump_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("JUMP RELIABLE RPC CALL"));
	
	LoseStamina(StaminaLossWhenJumping);

}
void Afpscharacter::StopJump()
{
	bPressedJump = false;

}

void Afpscharacter::OnRep_CurrentlyCrouching()
{
	BlueprintRep_CurrentlyCrouching();

}
void Afpscharacter::PressSprint()
{
	//This function is executed purely on the client.
	if (GetCurrentStamina() <= 10.0f)
	{
		return; //Cannot sprint when below 10 stamina
	}
	if (CurrentlyCrouching || JustLanded)
	{
		//Can't sprint if crouched
		return;

	}

	if (ToggleSprint)
	{
		if (IsSprinting)
		{
			//Start walking
			UE_LOG(LogTemp, Warning, TEXT("Stop toggle sprint call"));
			SetSprinting(false);
		}
		else
		{
			//Start sprinting
			UE_LOG(LogTemp, Warning, TEXT("start toggle sprint call"));
			SetSprinting(true);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Start hold sprint call"));
		SetSprinting(true);
	}
}

void Afpscharacter::ReleaseSprint()
{
	if (CurrentlyCrouching)
	{
		return;
	}
	if (!ToggleSprint)
	{
		UE_LOG(LogTemp, Warning, TEXT("Release sprint call"));
		SetSprinting(false);

	}
}

void Afpscharacter::SetSprinting(bool NewSprinting)
{
	if (GetLocalRole() < ROLE_Authority)
	{
		//Send RPC call to server to start server sprinting
		ServerSetSprinting(NewSprinting);
	}
		
	IsSprinting = NewSprinting;
	GetCharacterMovement()->MaxWalkSpeed = IsSprinting ? SprintSpeed : DefaultSpeed;
}


void Afpscharacter::OnRep_ChangeSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed = IsSprinting ? SprintSpeed : DefaultSpeed;


}


//RPC for serve rto start sprinting

void Afpscharacter::ServerSetSprinting_Implementation(bool NewSprinting)
{
	UE_LOG(LogTemp, Warning, TEXT("RELIABLE SPRINT RPC CALL"));
	SetSprinting(NewSprinting);
}

bool Afpscharacter::CanUncrouch()
{
	//Use a raycast to check if space above player is clear
	//If it is we can uncrouch
	FHitResult ResultOutHit;

	FVector Start = GetCapsuleComponent()->GetComponentLocation() + FVector(0.0f, 0.0f, (DefaultHalfHeight-CrouchedHalfHeight));
	//multiply by 2 as it is half height
	FVector End = Start;// + (FVector(0.0f, 0.0f, 1.0f) * ((DefaultHalfHeight * 2) -  CrouchedHalfHeight));

	FCollisionQueryParams CollisionParams;
	//Ignore ourselves
	CollisionParams.AddIgnoredActor(this->GetOwner());

	FCollisionShape CollisionShape = FCollisionShape::MakeCapsule(GetCapsuleComponent()->GetScaledCapsuleRadius() * 0.6f, DefaultHalfHeight);

	
	//UKismetSystemLibrary::DrawDebugCapsule(this, Start, DefaultHalfHeight, GetCapsuleComponent()->GetScaledCapsuleRadius() * 0.6f, GetCapsuleComponent()->GetComponentRotation(), FLinearColor::Green, 5.0f, 2.0f);

	
	//Performs raycast, returns true if nothing is present
	return !GetWorld()->SweepSingleByChannel(ResultOutHit, Start, End, GetActorRotation().Quaternion(), ECC_Visibility, CollisionShape, CollisionParams);
}

void Afpscharacter::OnHealthUpdate()
{
	//Client-specific functionality
	if (IsLocallyControlled())
	{

		if (CurrentHealth <= 0)
		{
			//Out of health - death events here
			
		}
	}

	//Server-specific functionality
	if (GetLocalRole() == ROLE_Authority)
	{
		if (CurrentHealth <= 0)
		{
			//Out of health - death events here
			UE_LOG(LogTemp, Warning, TEXT("%s has been killed"), *GetName());

		}
	}

	//Functions that occur on all machines - such as special death effects
}

void Afpscharacter::OnRep_CurrentHealth()
{
	//Runs whenever the health for the player is updated
	OnHealthUpdate();

}

void Afpscharacter::SetCurrentHealth(float healthValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		//only run on server
		CurrentHealth = FMath::Clamp(healthValue, 0.f, MaxHealth);
		OnHealthUpdate();
	}
}

float Afpscharacter::TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("Damaging"));
	//Applying simple health deduction right now
	float damageApplied = CurrentHealth - DamageTaken;
	SetCurrentHealth(damageApplied);
	return damageApplied;

}
void Afpscharacter::OnStaminaUpdate()
{
	//Client-specific functionality
	if (IsLocallyControlled())
	{


	}

	//Server-specific functionality
	if (GetLocalRole() == ROLE_Authority)
	{
		if (CurrentStamina <= 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("OUT OF STAMINA CALL"));
			//Out of stamina
			SetSprinting(false);
		}
	}

	//Functions that occur on all machines

}

void Afpscharacter::OnRep_CurrentStamina()
{
	//Runs whenever the stamina for the player is updated
	OnStaminaUpdate();

}

void Afpscharacter::SetCurrentStamina(float staminaValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		//Only run on server
		CurrentStamina = FMath::Clamp(staminaValue, 0.f, MaxStamina);
		OnStaminaUpdate();
	}
}

float Afpscharacter::LoseStamina(float LostStamina)
{
	float staminaRemains = CurrentStamina - LostStamina;
	SetCurrentStamina(staminaRemains);
	return staminaRemains;
}

void Afpscharacter::OnRep_ChangeWeapon()
{
	switch (EquippedGun)
	{
	case Equips::PRIMARY:
		SwitchPrimary(true);
		break;
	case Equips::SECONDARY:
		SwitchSecondary(true);
		break;
	default:
		break;
	}
}

FWeaponDataStruct Afpscharacter::GetCurrentlyEquippedWeaponData()
{
	//Replaced the use of a third vairable, CurrentlyEquippedWeaponData, to avoid copying data redundantly.

	switch (EquippedGun)
	{
	case Equips::PRIMARY:
		return PrimaryData;
	
	case Equips::SECONDARY:
		return SecondaryData;

	default:
		return PrimaryData;
	}
}
bool Afpscharacter::CollisionInteractCheck(AActor* CollidingActor)
{
	//Currently, there does not seem to be a need to implement collision-based picking up of guns.
	/*
	If we were to implement it, we would do the following:
	- Use data structs to store the gun actor reference and the time the collision overlap started
	- Store the struct in a set at the begin overlap event
	- When trying to pick up a gun, we would iterate through the set, return the oldest gun added to the set
	- We would then pick this gun up
	- When the on end overlap event for a gun fires, we remove its struct from the set.


	If we do not implement it, we should delete the collision components on the weapon actors.
	*/
	return false;
}

bool Afpscharacter::SingleRaycastInCameraDirection(FHitResult& ResultOutHit, float RaycastRange, ECollisionChannel CollisionChannel)
{


	//Start coordinates are in FPS camera
	FVector Start = FPSCameraComponent->GetComponentLocation();
	//Gets direction player is looking at
	FVector ForwardVector = FPSCameraComponent->GetForwardVector();

	//End coordinate is range away from start
	FVector End = Start + (ForwardVector * RaycastRange);

	FCollisionQueryParams CollisionParams;
	//Ignore ourselves
	CollisionParams.AddIgnoredActor(GetOwner());

	
	bool result = GetWorld()->LineTraceSingleByChannel(ResultOutHit, Start, End, CollisionChannel, CollisionParams);
	//Performs raycast
	return result;

}

bool Afpscharacter::MultiRaycastInCameraDirection(TArray<FHitResult>& ResultOutHit, float RaycastRange, ECollisionChannel CollisionChannel)
{


	//Start coordinates are in FPS camera
	FVector Start = FPSCameraComponent->GetComponentLocation();
	//Gets direction player is looking at
	FVector ForwardVector = FPSCameraComponent->GetForwardVector();

	//End coordinate is range away from start
	FVector End = Start + (ForwardVector * RaycastRange);

	FCollisionQueryParams CollisionParams;
	
	//Ignore ourselves
	CollisionParams.AddIgnoredActor(this);
	CollisionParams.bReturnPhysicalMaterial = true;

	//UE_LOG(LogTemp, Warning, TEXT("The Actor's name is %s"), *GetOwner()->GetName());
	//UE_LOG(LogTemp, Warning, TEXT("Th name is %s"), *GetName());
	/*DrawDebugLine(
		GetWorld(),
		FPSCameraComponent->GetComponentLocation(),
		End,
		FColor(255, 0, 0),
		false, 5.0f, 0,
		12.333
	);*/
	//Performs raycast

	bool result = GetWorld()->LineTraceMultiByChannel(ResultOutHit, Start, End, CollisionChannel, CollisionParams);
	return result;

}

void Afpscharacter::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Interacting"));
	DebugFunction();
	//First we need to check for raycast for where we are looking as this takes priority; we can always make this an option to change later
		//Where the output is at
		//We check if the client gets a hit first, if they do then we can check on server, as otherwsie there is no point running it on the server.
	FHitResult OutHit;
	//Perform raycast check
	bool IsHit = SingleRaycastInCameraDirection(OutHit, MaxInteractRange, ECC_GameTraceChannel1);
	UE_LOG(LogTemp, Warning, TEXT("IsHit =  %s"), (IsHit ? TEXT("TRUE") : TEXT("FALSE")));
	AActor* HitActor;

	if (!IsHit)
	{
		//Move onto the collision check

	}
	else
	{
		//		HitActor = OutHit.GetActor();

	}
	HitActor = OutHit.GetActor();

	//Logic for if a hit was detected in collision or raycast
	if (IsHit && HitActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("We got a hit bois"));
		UInteractableObjectComponent* HitInteractableComponent = HitActor->FindComponentByClass<UInteractableObjectComponent>();

		//If the item is interactable, we continue
		if (HitInteractableComponent != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("interactable component found"));
			//Seems valid on client, let's run on the server if needed
			//Should only be used for stationary objects, as guns and stuff can desync and we need to fix this NOTE
			/*if (GetLocalRole() < ROLE_Authority)
			{
				
				ServerInteract();
			}
		
			else
			{
				switch (HitInteractableComponent->GetInteractionType())
				{
				case InteractionTypes::WEAPON_PICKUP:
					//Logic for weapon pickup
					UE_LOG(LogTemp, Warning, TEXT("We got a pickup bois"));

					PickupWeapon(Cast<AWeaponActor>(HitActor));
				}
			}*/
			switch (HitInteractableComponent->GetInteractionType())
			{
			case InteractionTypes::WEAPON_PICKUP:
				//Logic for weapon pickup
				UE_LOG(LogTemp, Warning, TEXT("We got a pickup bois"));

				PickupWeapon(Cast<AWeaponActor>(HitActor));
			}
			

		}
	}
	

	
}

void Afpscharacter::ServerInteract_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Interact RPC call"));
	Interact();
}




void Afpscharacter::InteractWithNameOnly(FName& OutName)
{

	//First we need to check for raycast for where we are looking as this takes priority; we can always make this an option to change later
	//Where the output is at
	FHitResult OutHit;
	//Perform raycast check
	bool IsHit = SingleRaycastInCameraDirection(OutHit, MaxInteractRange, ECC_GameTraceChannel1);
	AActor* HitActor;

	if (!IsHit)
	{
		//Move onto the collision check

	}
	else
	{
		//		HitActor = OutHit.GetActor();

	}
	HitActor = OutHit.GetActor();

	//Logic for if a hit was detected in collision or raycast
	if (IsHit && HitActor)
	{
		UInteractableObjectComponent* HitInteractableComponent = HitActor->FindComponentByClass<UInteractableObjectComponent>();

		//If the item is interactable, we continue
		if (HitInteractableComponent != nullptr)
		{
			OutName = HitInteractableComponent->InteractionName;

		}
		else
		{
			OutName = FName();
		}
	}
	else
	{
		OutName = FName();
	}
}
void Afpscharacter::PickupWeapon(AWeaponActor* WeaponPickup)
{
	//Pick up weapon

	//Need to run RPC on server, this function itself should only run on server so the rpc does not need calling
	//I have commitment isuses, it should now because of the shfit from interaction to client.
	if (GetLocalRole() < ROLE_Authority)
	{
		//ServerPickupWeapon(WeaponPickup);
		UE_LOG(LogTemp, Warning, TEXT("Disgusting client"));
		ServerPickupWeapon(WeaponPickup);
	}


	//Logic for picking up weapon goes here

	//Get weapon data, and weapon equip type
	FWeaponDataStruct WeaponData = WeaponPickup->GetWeaponDataStruct();
	Equips WeaponEquipType = WeaponData.MetaData.TypeOfEquip;
	
	//First we must decide whether to switch our primary or secondary depending on which weapon type the gun is.
	switch (WeaponEquipType)
	{
	case Equips::PRIMARY:
		PrimaryData = WeaponData;

		break;

	case Equips::SECONDARY:
		SecondaryData = WeaponData;
		break;

	case Equips::BOTH:
		if (EquippedGun == Equips::PRIMARY)
		{
			PrimaryData = WeaponData;
		}
		else
		{
			SecondaryData = WeaponData;
		}
		break;

	default:
		UE_LOG(LogTemp, Warning, TEXT("WEAPON EQUIP TYPE NOT PRIMARY, SECONDARY OR BOTH - WARNING!!!"));
		return;
	}

	
	//Switch weapon if this is a player preference
	if (SwitchWeaponAfterPickup)
	{
		UE_LOG(LogTemp, Warning, TEXT("vomitingin"));
		switch (WeaponEquipType)
		{
		case Equips::PRIMARY:
			SwitchPrimary();
			break;
		case Equips::SECONDARY:
			SwitchSecondary();
			break;
		default:
			break;
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("diarrhea"));
		if (EquippedGun == WeaponEquipType)
		{
			if (EquippedGun == Equips::PRIMARY)
			{
				SwitchPrimary();

			}
			else if (EquippedGun == Equips::SECONDARY)
			{
				SwitchSecondary();
			}
		}
	}
	
	//At the end of it all we destroy the weapon actor prop
	WeaponPickup->Destroy();

}

void Afpscharacter::ServerPickupWeapon_Implementation(AWeaponActor* WeaponPickup)
{
	//Server impleemntation of pickup weapon
	UE_LOG(LogTemp, Warning, TEXT("Reliable pickup call"));
	PickupWeapon(WeaponPickup);
}

void Afpscharacter::SwitchPrimary(bool bIsRep)
{
	UE_LOG(LogTemp, Warning, TEXT("prime"));
	DebugFunction();
	//Switch to primary gun
	//Stop crashes if no primary exists
	if (PrimaryData.MetaData.GunModel == Guns::NONE)
	{
		return;
	}
	//Need to run RPC on server
	if (GetLocalRole() < ROLE_Authority && !bIsRep)
	{
		ServerSwitchPrimary();
	}

	//Interrupt automatic fire
	bIsFiring = false;
	StopFiring();
	//Logic for switching primary.
	if (IsLocallyControlled())
	{
		UE_LOG(LogTemp, Warning, TEXT("Primary FP"));
		PositionAndAttachGunInFP(PrimaryData);

	}
	//Still need a lot fo equip logic here

	EquippedGun = Equips::PRIMARY;
	PositionAndAttachGunInTP(PrimaryData);

	UpdateAmmoDisplay();
}

void Afpscharacter::ServerSwitchPrimary_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Switch primary rpc call"));
	SwitchPrimary(false);
}

#if WITH_EDITOR

void Afpscharacter::DebugFunction()
{
	if (IsLocallyControlled())
	{
		UE_LOG(LogTemp, Warning, TEXT("OWNING CLIENT: Log no. %d"), lognum);

	}
	else if (GetLocalRole() < ROLE_Authority)
	{
		UE_LOG(LogTemp, Warning, TEXT("OTHER CLIENT: Log no. %d"), lognum);

	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SERVER: Log no. %d"), lognum);
	}

	lognum++;
}
#endif

void Afpscharacter::SwitchSecondary(bool bIsRep)
{
	
	//Stop crashes if no secondary exists
	if (SecondaryData.MetaData.GunModel == Guns::NONE)
	{
		UE_LOG(LogTemp, Warning, TEXT("ahh no"));
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Equipping secondary"));
	
	if (GetLocalRole() < ROLE_Authority && !bIsRep)
	{
		ServerSwitchSecondary();
	}

	//Interrupt automatic fire.
	bIsFiring = false;
	StopFiring();
	check(FPSMuzzleComponent != nullptr);

	//Only owner needs this
	if (IsLocallyControlled())
	{

		//TODO REPLACE THIS AND PRIMARY WITH A SWITCHING ANIMATION PLS
		PositionAndAttachGunInFP(SecondaryData);

	
	}

	PositionAndAttachGunInTP(SecondaryData);

	EquippedGun = Equips::SECONDARY;
	UpdateAmmoDisplay();
}

void Afpscharacter::ServerSwitchSecondary_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Secondary pickup reliable switch call"));
	SwitchSecondary(false);
}

void Afpscharacter::PositionAndAttachGunInFP(FWeaponDataStruct GunToEquip)
{
	DebugFunction();
	//Correctly positioning gun
	//Takes into account left-handedness
	FVector PositionVector = (IsLeftHanded) ? FVector(GunToEquip.PositionalDetails.BasePosition.X, -1.0f * GunToEquip.PositionalDetails.BasePosition.Y, GunToEquip.PositionalDetails.BasePosition.Z) : GunToEquip.PositionalDetails.BasePosition;
	FRotator PositionRotator = (IsLeftHanded) ? FRotator(GunToEquip.PositionalDetails.BaseRotation.Pitch, GunToEquip.PositionalDetails.BaseRotation.Yaw, -1.0f * GunToEquip.PositionalDetails.BaseRotation.Roll) : GunToEquip.PositionalDetails.BaseRotation;

	FPSGunComponent->SetRelativeLocation(PositionVector);
	FPSGunComponent->SetRelativeRotation(PositionRotator);
	FPSGunComponent->SetRelativeScale3D(GunToEquip.PositionalDetails.BaseScale);



	if (FPSMuzzleComponent == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("NULL ERROR ALERT"));
	}
	UE_LOG(LogTemp, Warning, TEXT("name = %s"), *FPSMuzzleComponent->GetFName().ToString());
	UE_LOG(LogTemp, Warning, TEXT("name2 = %s"), *FPSMuzzleComponent->GetAttachmentRootActor()->GetFName().ToString());
	
	FPSMuzzleComponent->SetRelativeLocation(GunToEquip.PositionalDetails.MuzzlePosition);
	//Attach gun to scene component
	//FPSMesh->AttachToComponent(FPSGunComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true));

	//Set gun mesh to be fps mesh
	FPSMesh->SetSkeletalMesh(GunToEquip.VisualAssets.GunMesh);

	//The above way is easier than showing gun object as it allows us to avoid having to reset eveyrthing when gun object is dropped again.

	

}

void Afpscharacter::PositionAndAttachGunInTP(FWeaponDataStruct GunToEquip)
{
	//Correctly positioning gun, we do not account for left-handedness in TP as there is no need

	UE_LOG(LogTemp, Warning, TEXT("TP attach"));
	ThirdPersonGunMesh->SetRelativeLocation(GunToEquip.PositionalDetails.TPBasePosition);
	ThirdPersonGunMesh->SetRelativeRotation(GunToEquip.PositionalDetails.TPBaseRotation);
	ThirdPersonGunMesh->SetRelativeScale3D(GunToEquip.PositionalDetails.TPBaseScale);

	ThirdPersonGunMesh->SetSkeletalMesh(GunToEquip.VisualAssets.GunMesh);

	//Sets muzzle component
	TPMuzzleComponent->SetRelativeLocation(GunToEquip.PositionalDetails.MuzzlePosition);

	
}

void Afpscharacter::RepeatFire()
{
	//Allow gun to be fired again
	bCanFire = true;

	//Call ClientValidateFire if still held down fire button.
	if (bIsFiring && GetCurrentlyEquippedWeaponData().MetaData.WAWeaponFireType == FireMode::AUTO)
	{
		UE_LOG(LogTemp, Warning, TEXT("AutoFire"));
		ClientValidateFire();
	}
	
}

void Afpscharacter::ClientValidateFire()
{
	UE_LOG(LogTemp, Warning, TEXT("Burst client validate"))
	//Set bIsFiring to false until able to fire, so we don;t have to repeat set to false for all non-firing cases.
	bIsFiring = false;
	float BurstFireRate = GetCurrentlyEquippedWeaponData().Stats.BurstFireRate;
	if (!bCanFire && (BurstFireRate == 0.0f || (BurstFireRate > 0.0f && BurstRoundsToFire == 0)))
	{
		return;
	}
	//If we dont have a gun equipped, return
	if ((EquippedGun == Equips::PRIMARY && PrimaryData.MetaData.GunModel == Guns::NONE) || (EquippedGun == Equips::SECONDARY && SecondaryData.MetaData.GunModel == Guns::NONE))
	{
		
		StopFiring();
		return;
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("ClientValidateFire"));
	//Checking if we have ammo for firing
	if (GetCurrentlyEquippedWeaponData().Stats.MagAmmo > 0 && ((BurstRoundsToFire > 0 && GetCurrentlyEquippedWeaponData().Stats.BurstFireRate > 0.0f) || GetCurrentlyEquippedWeaponData().Stats.BurstFireRate == 0.0f))
	{
		TArray<float> SpreadAngles;
		//Activate firing functions based on firing type
		switch (GetCurrentlyEquippedWeaponData().MetaData.WAWeaponHitDetectionType)
		{
		case FireType::HITSCAN:
			bIsFiring = true;
			SpreadAngles = ClientHitscanCheckFire();
			break;
		case FireType::PROJECTILE:
			//add projectile logic
			bIsFiring = true;
			SpreadAngles = ClientProjectileCheckFire();

			break;

		default:
			//UE_LOG(LogTemp, Error, TEXT("Invalid weapon type!"));
			return;
		}
		//Always need to check on server, as if player misses we still want to show this.
		float clienttime = Cast<AFPSGameState>(GetWorld()->GetGameState())->GetServerWorldTimeSeconds();
		//Run RPC on server to ensure shot hit
		if (clienttime)
		{
			UE_LOG(LogTemp, Warning, TEXT("client time = %f"), clienttime);

			ServerValidateFire(clienttime, SpreadAngles);

		}
	}
	else
	{
		StopFiring();
	}
}

void Afpscharacter::SetCurrentAmmo(int NewAmmo)
{

	//Should only be called on server, no effect if called on client.
	if ((EquippedGun == Equips::PRIMARY && PrimaryData.MetaData.GunModel == Guns::NONE) || (EquippedGun == Equips::SECONDARY && SecondaryData.MetaData.GunModel == Guns::NONE))
	{
		return;
	}
	else
	{
		switch (EquippedGun)
		{
		case Equips::PRIMARY:
			PrimaryData.Stats.MagAmmo = FMath::Clamp(NewAmmo, 0, PrimaryData.Stats.MaxMagSize);
			break;
		case Equips::SECONDARY:
			SecondaryData.Stats.MagAmmo = FMath::Clamp(NewAmmo, 0, SecondaryData.Stats.MaxMagSize);
			break;
		default:
			break;
		}
	}

	UpdateAmmoDisplay();
}

void Afpscharacter::UpdateAmmoDisplay()
{
	AmmoDisplay = FString();
	AmmoDisplay.AppendInt(GetCurrentlyEquippedWeaponData().Stats.MagAmmo);
	AmmoDisplay.Append(TEXT("/"));
	AmmoDisplay.AppendInt(GetCurrentlyEquippedWeaponData().Stats.MaxMagSize);
}

bool Afpscharacter::MultiRaycastDirectional(TArray<FHitResult>& ResultOutHit, FVector const StartPoint, FVector const EndLocation, ECollisionChannel CollisionChannel)
{
	//This performs a multi raycast, but is used for functions like spread angles by
	//taking a predetermined end point.

	FCollisionQueryParams CollisionParams;

	CollisionParams.AddIgnoredActor(this);
	CollisionParams.bReturnPhysicalMaterial = true;

	bool result = GetWorld()->LineTraceMultiByChannel(ResultOutHit, StartPoint, EndLocation, CollisionChannel, CollisionParams);
	return result;
	
}

FVector Afpscharacter::CalculateSpreadDestination(FVector StartPoint, FRotator ForwardRotation, float Range, float Modifier, float SpreadAngleInDegress) const
{
	//Using rotators - first we get the control rotation 
	//Don't need roll rotation as the bullet doesn't need to roll
	//Modifier can be increased for movement, and decreased for not movement.
	FRotator AimRotation = ForwardRotation + FRotator(SpreadAngleInDegress, SpreadAngleInDegress, 0) * Modifier;
	
	FVector EndLocation = StartPoint + (AimRotation.Vector() * Range);

	return EndLocation;

}

float Afpscharacter::CalculateSpreadModifier()
{
	//Uses movement speed, ADS etc to calculate spread modifier.
	//Calculated movement spread here, do ADS and stuff too
	float SpreadModifier = 1.0f;
	if (GetVelocity().Size() > SpeedForLosingAccuracy)
	{
		SpreadModifier = FMath::Clamp(GetCurrentlyEquippedWeaponData().Stats.BaseMovementSpreadMultiplier * ((GetVelocity().Size() - SpeedForLosingAccuracy) * 0.01f), MinMovementSpreadModifier, MaxMovementSpreadModifier);
	}

	//Add checks for ADS here
	return SpreadModifier;

}

TArray<float> Afpscharacter::ClientProjectileCheckFire()
{
	//For firing projectiles
	FVector EmitterStartPoint = FPSMuzzleComponent->GetComponentLocation();

	//Start fire weapon timer
	bCanFire = false;
	GetWorld()->GetTimerManager().SetTimer(FiringTimer, this, &Afpscharacter::RepeatFire, GetCurrentlyEquippedWeaponData().Stats.FireRate, false);

	

	BurstRoundsToFire -= 1;
	SetCurrentAmmo(GetCurrentlyEquippedWeaponData().Stats.MagAmmo - 1);

	//First bit copied from clienthitscancheckfire
	TArray<float> SpreadAngles;

	float SpreadModifier = CalculateSpreadModifier();


	for (int i = 0; i < GetCurrentlyEquippedWeaponData().Stats.CartridgeBullets; i++)
	{

		float RandomSpread = FMath::RandRange(-1 * GetCurrentlyEquippedWeaponData().Stats.BaseHipfireSpreadAngleInDegrees, GetCurrentlyEquippedWeaponData().Stats.BaseHipfireSpreadAngleInDegrees);
		

		//Spawn projectile, they do their own damage and effects and stuff in their destroy thing so no need to worry about that here
		FVector SpawnLocation = FPSCameraComponent->GetComponentLocation() + FTransform(GetControlRotation()).TransformVector(DistanceToPlaceProjectileFromCamera);
		FRotator SpawnRotation = GetControlRotation();
		AFPSProjectile* SpawnedProjectile;

		SpawnedProjectile = SpawnProjectileBullet(SpawnLocation, SpawnRotation, SpreadModifier, RandomSpread);
		
		SpawnedProjectile->BlendVisualsToCollision(EmitterStartPoint);



	}
	//Show muzzle flash

	ShowMuzzleFlashFP(
		EmitterStartPoint,
		FPSMuzzleComponent->GetForwardVector(),
		GetCurrentlyEquippedWeaponData().VisualAssets.MuzzleFlash
	);

	return SpreadAngles;
}

TArray<float> Afpscharacter::ClientHitscanCheckFire()
{
	//This variable stores the start point of any tracer emitter particles
	FVector EmitterStartPoint =FPSMuzzleComponent->GetComponentLocation();
	//Start the timer for automatic fire if the weapon is automatic, so that firing can happen often.
	//Start automatic fire weapon timer
	bCanFire = false;
	GetWorld()->GetTimerManager().SetTimer(FiringTimer, this, &Afpscharacter::RepeatFire, GetCurrentlyEquippedWeaponData().Stats.FireRate, false);

	
	BurstRoundsToFire -= 1;
	SetCurrentAmmo(GetCurrentlyEquippedWeaponData().Stats.MagAmmo - 1);

	//UKismetSystemLibrary::DrawDebugSphere(GetWorld(), EmitterStartPoint, 10.0f, 10, FLinearColor::Green, 5.0f, 1.0f);

	//Called when we can fire. Should probably implement sounds for client to hear on this function,a s well as clientside hit images and stuff
	//to make it feel more responsive (tho if it was a miss serverside we will get ghost markers, so maybe make this an option).
	
	//Stores combined hit results from all shots
	TArray<FHitResult> HitResults;
	//Storing all the randomised spread angles so that they can be used on the server effectively.
	TArray<float> SpreadAngles;
	
	float SpreadModifier = CalculateSpreadModifier();

	
	for (int i = 0; i < GetCurrentlyEquippedWeaponData().Stats.CartridgeBullets; i++)
	{
		//Stores temporary details for this cartridge
		TArray<FHitResult> TempHitResults;
		//WE NEED TO REPEAT FROM HERE
		//UE_LOG(LogTemp, Warning, TEXT("Client hitscan check fire"));
	//TODO add spread and recoil here (do the multiraycasts at angles)
	//Preferably replacing this function as it can still serve the purpose of getting data from straight ahead.
	//Need to sync the random values between client and server.
		float RandomSpread = FMath::RandRange(-1 * GetCurrentlyEquippedWeaponData().Stats.BaseHipfireSpreadAngleInDegrees, GetCurrentlyEquippedWeaponData().Stats.BaseHipfireSpreadAngleInDegrees);



		MultiRaycastDirectional(TempHitResults, FPSCameraComponent->GetComponentLocation(),
			CalculateSpreadDestination(FPSCameraComponent->GetComponentLocation(), GetControlRotation(), GetCurrentlyEquippedWeaponData().Stats.MaxRange, SpreadModifier, RandomSpread), ECC_GameTraceChannel2);

		//MultiRaycastInCameraDirection(HitResults, GetCurrentlyEquippedWeaponData().Stats.MaxRange);

		//TO HERE FOR SHOTGUNS, AND SEND ALL THE SPREAD DATA IN ONE GO TO THE SERVER
		HitResults += TempHitResults;

		SpreadAngles.Emplace(RandomSpread);

		//Need to show visual tracers for each shot (not just for one shot)
		//If the last hit was a blocking hit then we use that, otherwise we just use up until the range.
		//This will need fine tuning
		if (TempHitResults.Num() > 0)
		{
			if (TempHitResults.Last().bBlockingHit)
			{

				ShowHitscanFireEffectFP(EmitterStartPoint, TempHitResults.Last().Location, GetCurrentlyEquippedWeaponData().VisualAssets.TracerEffect);

			}
			else
			{

				ShowHitscanFireEffectFP(
					EmitterStartPoint,
					(EmitterStartPoint + (FPSCameraComponent->GetForwardVector() * GetCurrentlyEquippedWeaponData().Stats.MaxRange)),
					GetCurrentlyEquippedWeaponData().VisualAssets.TracerEffect
				);

			}
		}
		else
		{
			//Still need to show visual effects, use the max range as the end point.
			ShowHitscanFireEffectFP(
				EmitterStartPoint,
				(EmitterStartPoint + (FPSCameraComponent->GetForwardVector() * GetCurrentlyEquippedWeaponData().Stats.MaxRange)),
				GetCurrentlyEquippedWeaponData().VisualAssets.TracerEffect
			);

		}
		

	}
	
	ShowMuzzleFlashFP(
		EmitterStartPoint,
		FPSMuzzleComponent->GetForwardVector(),
		GetCurrentlyEquippedWeaponData().VisualAssets.MuzzleFlash
	);

	return SpreadAngles;
	
	
}


bool Afpscharacter::ServerValidateFire_Validate(float ClientFireTime, const TArray<float>& SpreadAngles)
{
	//This is here for future validation.
	return true;

	
}
void Afpscharacter::ServerValidateFire_Implementation(float ClientFireTime, const TArray<float>& SpreadAngles)
{

	//checks if the player can actually fire with server variables
	//If we dont have a gun equipped, return

	//Currently we don't care about bursts, but this may have to change if exploits are available.
	//this is because bursts work on client-side, keeping track of how much burst has been used, which may be modifiable causing infinite bursts or something.

	if ((EquippedGun == Equips::PRIMARY && PrimaryData.MetaData.GunModel == Guns::NONE) || (EquippedGun == Equips::SECONDARY && SecondaryData.MetaData.GunModel == Guns::NONE))
	{
		return;
	}

	//UE_LOG(LogTemp, Warning, TEXT("Server validate fire"));
	//Checking if we have ammo for firing
	if (GetCurrentlyEquippedWeaponData().Stats.MagAmmo > 0)
	{
		//Activate firing functions based on firing type
		switch (GetCurrentlyEquippedWeaponData().MetaData.WAWeaponHitDetectionType)
		{
		case FireType::HITSCAN:
			ServerHitscanCheckFire(ClientFireTime, SpreadAngles);
			break;
		case FireType::PROJECTILE:
			//add projectile logic
			ServerProjectileCheckFire(SpreadAngles);
			break;

		default:
			UE_LOG(LogTemp, Error, TEXT("Invalid weapon type!"));
			return;
		}

	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Out of ammo!"));
	}
	
}

AFPSProjectile* Afpscharacter::SpawnProjectileBullet(FVector Location, FRotator Rotation, float Modifier, float SpreadAngleInDegrees)
{
	FActorSpawnParameters spawnParams;
	spawnParams.Instigator = GetInstigator();
	spawnParams.Owner = this;

	//Need to consider spread angles as well, roll is unnecessary
	FRotator FinalRotation = Rotation + FRotator(SpreadAngleInDegrees, SpreadAngleInDegrees, 0) * Modifier;


	FVector TempLocation = FPSCameraComponent->GetComponentLocation();

	//We need to get the bullet class from the gun now as well
	TSubclassOf<AFPSProjectile> ProjectileClass = GetCurrentlyEquippedWeaponData().MetaData.ProjectileClass;

	//Bullet speed is handled in bullet itself now.
	//AFPSProjectile* Bullet = GetWorld()->SpawnActor<AFPSProjectile>(TempLocation, FinalRotation, spawnParams);
	AFPSProjectile* Bullet =  GetWorld()->SpawnActor<AFPSProjectile>(*ProjectileClass, Location, FinalRotation, spawnParams);
	

	if (Bullet)
	{
		Bullet->FireInDirection(GetControlRotation().Vector());
		UE_LOG(LogTemp, Warning, TEXT("Name = %s"), *Bullet->CollisionComponent->GetFName().ToString());
	}
	return Bullet;


}
void Afpscharacter::ServerProjectileCheckFire(TArray<float> SpreadAngles)
{
	//server firing projectiles

	//Currently no prediction is used - the player will have to lead projectiles at high lag, which we may want to change, but this is unlikely to be much of a problem seeing as you have to lead projectiles anyway.

	FVector EmitterStartPoint = TPMuzzleComponent->GetComponentLocation();

	SetCurrentAmmo(GetCurrentlyEquippedWeaponData().Stats.MagAmmo - 1);

	float SpreadModifier = CalculateSpreadModifier();

	for (float Angle : SpreadAngles)
	{
		FVector SpawnLoaction = FPSCameraComponent->GetComponentLocation() + (FPSCameraComponent->GetForwardVector() * DistanceToPlaceProjectileFromCamera);
		FRotator SpawnRotation = GetControlRotation();

		AFPSProjectile* SpawnedProjectile;

		SpawnedProjectile = SpawnProjectileBullet(SpawnLoaction, SpawnRotation, SpreadModifier, Angle);

		
	}

	MuzzleCounter += 1;
}
void Afpscharacter::OnRep_EndPoint()
{
	ShowHitscanFireEffectTP(TPMuzzleComponent->GetComponentLocation(), EndPoint, GetCurrentlyEquippedWeaponData().VisualAssets.TracerEffect);
}
void Afpscharacter::OnRep_MuzzleCounter()
{

	ShowMuzzleFlashTP(TPMuzzleComponent->GetComponentLocation(), TPMuzzleComponent->GetForwardVector(), GetCurrentlyEquippedWeaponData().VisualAssets.MuzzleFlash);

	
}
void Afpscharacter::ServerHitscanCheckFire(float ClientFireTime, TArray<float> SpreadAngles)
{
	//The meaty part. Here is where we rewind the poses and stuff using the game state to check if the shot hit.

	/*
	This section will consist of several stages:
	1. We get the time the client fired at, and find the latency (current server time - the time the client fired at)
	2. If the latency is below the latency threshold (e.g. 400 ms), we check for the timestamp next below this time (e.g. if timestamps went 10, 20... and client time was 15, we would use timestamp 10)
	3. We get the transforms for all objects with the rewindcomponent for this timestamp, and the one after, and interpolate to get their transforms at the specific time.
	4. We also get the pose snapshots from these timestamps and interpolate between them.
	5. We save the current transforms and poses of all actors with the rewindcomponent.
	6. We set all actors with the RC to their interpolated transforms and poses.
	7. We perform the raycast
	8. We deal damage and perform visual effects as necessary, on all clients.
	*/
	if (GetLocalRole() < ROLE_Authority)
	{
		UE_LOG(LogTemp, Warning, TEXT("invsqW"));
	}

	//STAGE 1
	//First we need to get the current game state reference for ease of use later
	AFPSGameState* CurrentGameState = Cast<AFPSGameState>(GetWorld()->GetGameState());
	//UE_LOG(LogTemp, Warning, TEXT("Server time for hitscan check = %f"), CurrentGameState->GetServerWorldTimeSeconds());

	//Now we decide on latency
	if (CurrentGameState->GetServerWorldTimeSeconds() - ClientFireTime > CurrentGameState->GetMaxAllowedLatency())
	{
		//For if the latency is too high, we skip rewind and check straight for firing.
		UE_LOG(LogTemp, Warning, TEXT("Latency measured = %f"), (CurrentGameState->GetServerWorldTimeSeconds() - ClientFireTime));

	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Latency measured = %f"), (CurrentGameState->GetServerWorldTimeSeconds() - ClientFireTime));

		//Normal procedures here
		//STAGE 2, 3
		//UE_LOG(LogTemp, Warning, TEXT("Stag 2,3"));
		//get the interpolated transforms for all the rewind components
		TMap<AActor*, FRewindDataStruct> ActorTransformMap;
		ServerGetInterpolatedTransformsForRewind(ClientFireTime, ActorTransformMap);
		//Now that we have the interpolated values, we move onto stage 4 and stage 5
		//STAGE 4 - STILL NEEDS IMPLEMENTATION
		//TODO ADD STAGE 4
		//STAGE 5, 6, 7, 8
		ServerRewindAndPerformHitscan(ActorTransformMap, SpreadAngles);

	}
}

void Afpscharacter::ServerGetInterpolatedTransformsForRewind(float ClientFireTime, TMap<AActor*, FRewindDataStruct> &OutActorTransformsToBeRewinded) const
{
	//first we must get the rewind component set and lerp between each one
	TSet<URewindComponent*> RewindComponents = Cast<AFPSGameModeDefault>(GetWorld()->GetAuthGameMode())->GetRewindComponentsSet();
	float PreviousTimestamp;
	FRewindDataStruct PreviousTransform;
	float NextTimestamp;
	FRewindDataStruct NextTransform;

	//UE_LOG(LogTemp, Warning, TEXT("Interp"));
	float LerpTime;
	//We must complete the process for all the rewind components
	for (auto& Elem : RewindComponents)
	{
		FRewindDataStruct ResultTransform;

		//Iterating over each rewindcomponent to get its parent actor and that actor's initial transform
		AActor* ParentActor = Elem->GetOwnerActor();
		
		//used in next section to determine which timestamps are either side of the client fire time.
		

		//iterate over all elements in the rewind component map of timestamps
		for (auto& mapElems : Elem->GetRewindTimestampsAndData())
		{
			//this section checks for the key lower to the client fire time, and the key higher than the client fire time, and their values,
			//so that we can use them for interpolation
			if (mapElems.Key < ClientFireTime)
			{
				PreviousTimestamp = mapElems.Key;
				PreviousTransform = mapElems.Value;
			}
			else
			{
				//> / ==
				NextTimestamp = mapElems.Key;
				NextTransform = mapElems.Value;
				break;
			}
			
		}

		//Now is the time for lerping the values to get the interpolated pose snapshot, and transforms
		//Normalized alpha value for lerp (e.g. if client time = 15, previous time = 10, next time = 20)
		//then alpha would be 5/10 = 0.5 here, so we would lerp for halfway between the timestamps.
		LerpTime = (ClientFireTime - PreviousTimestamp) / (NextTimestamp - PreviousTimestamp);
		
		//lerping positonal vector
		ResultTransform.SnapshotPosition = FMath::Lerp(PreviousTransform.SnapshotPosition, NextTransform.SnapshotPosition, LerpTime);
		//lerping rotation vector
		ResultTransform.SnapshotRotation = FMath::Lerp(PreviousTransform.SnapshotRotation, NextTransform.SnapshotRotation, LerpTime);
		//Lerping scale vector
		ResultTransform.SnapshotScale = FMath::Lerp(PreviousTransform.SnapshotScale, NextTransform.SnapshotScale, LerpTime);
		//Lerping pose should be done here, but we still need to implement.
		//EDIT lerping pose will likely be delegated to performing blending in a blendspace at the time where we set everything to its old position to perform the hitscan
		//Currently there isn't even any need to lerp pose.
		//Finally we add the actor and data struct to the map output
		OutActorTransformsToBeRewinded.Emplace(ParentActor, ResultTransform);
	}

	//UE_LOG(LogTemp, Warning, TEXT("Rewind transforms = %d"), OutActorTransformsToBeRewinded.Num());
}

void Afpscharacter::ServerRewindAndPerformHitscan(TMap<AActor*, FRewindDataStruct> const ValuesToBeUsedInRewind, TArray<float> SpreadAngles)
{
	//UE_LOG(LogTemp, Warning, TEXT("Final stages"));
	//Call a gamemode function which rewinds everything

	//NOTE REWIND CURRENTLY DISABLED DUE TO BUGS, NEEDS MORE TESTING IN ACTUAL SCENARIOS
	if (doRewind)
	{
		Cast<AFPSGameModeDefault>(GetWorld()->GetAuthGameMode())->RewindActors(ValuesToBeUsedInRewind);

	}

	//Perform the actual hitscan with the hitscan function
	ServerPerformHitscan(SpreadAngles);

	//Call a gamemode function which reverts everything to the normal state
	if (doRewind)
	{
		Cast<AFPSGameModeDefault>(GetWorld()->GetAuthGameMode())->ResetActorPositionsToBefore();

	}
}

void Afpscharacter::ServerPerformHitscan(TArray<float> SpreadAngles)
{
	//Here is where we actually perform the hitscan to see if we hit anything.
	//First please do a third person muzzle flash

	//Muzzle start point for third person
	FVector EmitterStartPoint = TPMuzzleComponent->GetComponentLocation();
	SetCurrentAmmo(GetCurrentlyEquippedWeaponData().Stats.MagAmmo - 1);

	TArray<FHitResult> HitResults;

	float SpreadModifier = CalculateSpreadModifier();

	UE_LOG(LogTemp, Warning, TEXT("Weapon name: %s"), *GetCurrentlyEquippedWeaponData().WeaponName.ToString());
	//This relies on the cartridge bullets measured by the client, SO COULD BE PRONE TO EXPLOIT - MAY NEED REVISION
	for (float Angle : SpreadAngles)
	{
		//Iter for all spreadangles as shots
		TArray<FHitResult> TempHitResults;

		//Actual raycast
		MultiRaycastDirectional(TempHitResults, FPSCameraComponent->GetComponentLocation(),
			CalculateSpreadDestination(FPSCameraComponent->GetComponentLocation(), GetController()->GetControlRotation(), GetCurrentlyEquippedWeaponData().Stats.MaxRange, SpreadModifier, Angle), ECC_GameTraceChannel2);

		HitResults += TempHitResults;

		//Now show tracers
		if (TempHitResults.Num() > 0)
		{
			if (TempHitResults.Last().bBlockingHit)
			{
				UE_LOG(LogTemp, Warning, TEXT("Blocking"));
				EndPoint = TempHitResults.Last().Location;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit"));
				EndPoint = EmitterStartPoint + (FPSCameraComponent->GetForwardVector() * GetCurrentlyEquippedWeaponData().Stats.MaxRange);
			}
		
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("miss"));
			EndPoint = EmitterStartPoint + (FPSCameraComponent->GetForwardVector() * GetCurrentlyEquippedWeaponData().Stats.MaxRange);

		}

	}
	
	//Muzzlw Flash
	MuzzleCounter += 1;

	//Raycast done

	if (HitResults.Num() > 0)
	{
		//If we score a hit we must look at all the hit results and create hit markers and sound fx and stuff and deal dmg
		//REMEMBER - HIT RESULTS WILL SHOW ALL BODY PARTS OF AN ACTOR WHICH HAS BEEN HIT - ONLY INCLUDE THE FIRST ONE.
		
		//Do damage logic here
		DamageLogic(HitResults);

	}
	/*for (auto& El : HitResults)
	{
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *El.Actor->GetName())
	}*/
}

void Afpscharacter::DamageLogic(TArray<FHitResult> const HitResults)
{

	//Here is where we apply damage to actors which have been hit.

	//This list stores the actors which have been registered, to only register damage to each actor once.

	TArray<AActor*> HitActors;

	//TODO ADD TEAM PROTECTION (avoiding friendly fire)

	//We iterate over the hit results, to perform the damage as needed
	for (FHitResult Element : HitResults)
	{
		//First check if actor is already registered, or if the actor is null (e.g. a stair brush)
		if (HitActors.Contains(Element.GetActor()) || Element.GetComponent()->GetAttachmentRootActor() == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Continuing"));
			continue;
		}

		//Register actor if not registered
		//WARNING MAY BE INEFFICIENT TO USE ARRAY
		HitActors.Emplace(Element.GetActor());

		//Now we test if it was a player character, and do damage to it if it was accordingly:
		
		

		if (Element.GetActor()->IsA(Afpscharacter::StaticClass()))
		{
			UE_LOG(LogTemp, Warning, TEXT("Yes"));
			//do damage
			//NOTE we could do it based on priority of body part hit, rather than whichever is hit first - for example if hitting torso and head, then headshot damage.
			//Could be hard to balance (and makes having low ground extremely advantageous) but it could be more responsive and feel nice, TODO play around with it.
			//WE COULD ALSO have dfiferent levels of leniency for headshots i.e. a gun with larger bullets or that relies on hitting headshots could count as a headshot if a larger area around the head
			// is hit, compared to something like an smg which would require direct contact.
			UPhysicalMaterial* HitPhysicalMaterial = Element.PhysMaterial.Get();

			Afpscharacter* CastedActor = Cast<Afpscharacter>(Element.GetActor());
			FDamageEvent DamageEvent = FDamageEvent();


			//Doing damage based on hit body part
			//UE_LOG(LogTemp, Warning, TEXT("Physics object hit: %s"), *hitPhysicalMaterial->GetFName().ToString());
			if (HitPhysicalMaterial == HeadMaterial)
			{
				//Headshot
				CastedActor->TakeDamage(GetCurrentlyEquippedWeaponData().Stats.BaseDamageHead, DamageEvent, GetController(), this);
				UE_LOG(LogTemp, Warning, TEXT("Headshot"));
			}
			else if (HitPhysicalMaterial == LegMaterial)
			{
				//Bodyshot
				CastedActor->TakeDamage(GetCurrentlyEquippedWeaponData().Stats.BaseDamageLegs, DamageEvent, GetController(), this);
				UE_LOG(LogTemp, Warning, TEXT("Legshot"));

			}
			else
			{
				//Armshot/torso
				CastedActor->TakeDamage(GetCurrentlyEquippedWeaponData().Stats.BaseDamageTorso, DamageEvent, GetController(), this);
				UE_LOG(LogTemp, Warning, TEXT("Torsoshot"));

			}

			//Probably TODO add a radial damage indicator thing
			//TODO add damage animations and sounds and ting for serverside, clientside can also do its own thing.
		}
	}

}


void Afpscharacter::OnReload()
{
	//template class for now
	//TODO refurbish with animations and stuff, maybe switch to blueprint
	
	if ((EquippedGun == Equips::PRIMARY && PrimaryData.MetaData.GunModel != Guns::NONE) || (EquippedGun == Equips::SECONDARY && SecondaryData.MetaData.GunModel != Guns::NONE))
	{
		if (GetLocalRole() < ROLE_Authority)
		{
			ServerReload();
		}
		SetCurrentAmmo(GetCurrentlyEquippedWeaponData().Stats.MaxMagSize);
	}
}

bool Afpscharacter::ServerReload_Validate()
{
	return true;

}

void Afpscharacter::ServerReload_Implementation()
{
	OnReload();
}