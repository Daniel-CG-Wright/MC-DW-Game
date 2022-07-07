// Fill out your copyright notice in the Description page of Project Settings.
#include "fpscharacter.h"

#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"
#include "Engine\Classes\GameFramework\CharacterMovementComponent.h"
#include "TimerManager.h"

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
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight));

	//Creating the FPS mesh component for the owning player
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	check(FPSMesh != nullptr);

	//Only owning player sees this mesh
	FPSMesh->SetOnlyOwnerSee(true);

	

	//Disable some environmental shadows to preserve the illusion of using a single mesh
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	//Hides third person mesh from owner
	GetMesh()->SetOwnerNoSee(true);

	
	//Creating the FPS weapon scene component, which is separate from the 3rd person gun mesh.
	FPSGunComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Gun Scene Component"));
	FPSGunComponent->SetupAttachment(FPSCameraComponent);
	/*The above scene component is where the weapon object will actually attach to when equipped.*/

	//Attaches the FPS mesh to the FPS camera
	FPSMesh->SetupAttachment(FPSGunComponent);
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

	bIsFiringWeapon = false;
	
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

}



// Called when the game starts or when spawned
void Afpscharacter::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(StaminaTimerHandle, this, &Afpscharacter::UpdateStamina, StaminaUpdateIntervalInSeconds, true);

	
}

// Called every frame
void Afpscharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
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
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &Afpscharacter::PressCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &Afpscharacter::ReleaseCrouch);

	//Binding fire action
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &Afpscharacter::StartFire);

	//temp binding for secondary weapon
	PlayerInputComponent->BindAction("SecondaryGun", IE_Pressed, this, &Afpscharacter::SpawnAndEquipGun);

}

void Afpscharacter::MoveY(float Value)
{
	///For moving forward/backward
	
	//Gets 'forward' relative to actor, and record that player wants to move that way.
	FVector Direction = GetActorForwardVector();

	float dotProduct = FVector::DotProduct(GetActorForwardVector(), GetVelocity());

	if (Value != 1.0f || (dotProduct < 30.0f && dotProduct > -30.0f))
	{
		//Ensures player only sprints if they are holding forward and moving forward.
		StopSprinting();
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

void Afpscharacter::ApplySensitivityAndInversionToMouseInputX(float Value)
{
	///Applies sensitivity and inversion to mouse input X.


	AddControllerYawInput((InvertX ? -1 * (Value * XSensitivity) : (Value * XSensitivity)));

}

void Afpscharacter::ApplySensitivityAndInversionToMouseInputY(float Value)
{
	///Applies sensitivity and inverstion to mouse input Y

	AddControllerPitchInput((InvertY ? -1 * (Value * YSensitivity) : (Value * YSensitivity)));

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
		LoseStamina(StaminaLossWhenJumping);
	}
}

void Afpscharacter::StopJump()
{
	bPressedJump = false;
	
}



void Afpscharacter::PressCrouch()
{
	if (ToggleCrouch)
	{
		if (CurrentlyCrouching)
		{
			//Should Stand
			GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
			CurrentlyCrouching = false;
		}
		else
		{
			//Should Crouch
			GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
			CurrentlyCrouching = true;

		}
	}
	else
	{
		//Should Crouch
		GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
		CurrentlyCrouching = true;
	}


}

void Afpscharacter::ReleaseCrouch()
{
	if (!ToggleCrouch)
	{
		GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
		CurrentlyCrouching = false;

	}
}

void Afpscharacter::PressSprint()
{

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
			StopSprinting();
		}
		else
		{
			//Start sprinting
			StartSprinting();
		}
	}
	else
	{
		StartSprinting();
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
		StopSprinting();

	}
}

void Afpscharacter::StopSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
	IsSprinting = false;

}

void Afpscharacter::StartSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	IsSprinting = true;
	
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

		if (CurrentStamina <= 0)
		{
			//Out of stamina
			StopSprinting();
		}
	}

	//Server-specific functionality
	if (GetLocalRole() == ROLE_Authority)
	{
		if (CurrentStamina <= 0)
		{
			//Out of stamina
			StopSprinting();
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
	UpdateWeapon();
}

void Afpscharacter::UpdateWeapon()
{
	//Client-specific functionality
	if (IsLocallyControlled())
	{
		//EquipWeapon();
		
	}

	//Server-specific functionality
	if (GetLocalRole() == ROLE_Authority)
	{

	}

	//Functions that occur on all machines - such as special death effects

}

void Afpscharacter::EquipWeapon(AWeaponActor* GunToEquip)
{

	//Ensure gun is not collected by any other players while equipped
	GunToEquip->IsEquipped = true;

	//Correctly positioning gun
	//Takes into account left-handedness
	FVector PositionVector = (IsLeftHanded) ? FVector(GunToEquip->BasePosition.X, -1.0f * GunToEquip->BasePosition.Y, GunToEquip->BasePosition.Z) : GunToEquip->BasePosition;
	FRotator PositionRotator = (IsLeftHanded) ? FRotator(GunToEquip->BaseRotation.Pitch, GunToEquip->BaseRotation.Yaw, -1.0f * GunToEquip->BaseRotation.Roll) : GunToEquip->BaseRotation;

	FPSGunComponent->SetRelativeLocation(PositionVector);
	FPSGunComponent->SetRelativeRotation(PositionRotator);
	FPSGunComponent->SetRelativeScale3D(GunToEquip->BaseScale);

	//Attach gun to scene component
	GunToEquip->AttachToComponent(FPSGunComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true));
	FPSMesh->AttachToComponent(FPSGunComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true));

	//Hide gun mesh
	GunToEquip->GunMesh->SetVisibility(false, true);

	
	//Set gun mesh to be fps mesh
	FPSMesh->SetSkeletalMesh(GunToEquip->GunMesh->SkeletalMesh);
	
	//The above way is easier than showing gun object as it allows us to avoid having to reset eveyrthing when gun object is dropped again.

	//Sets projectile class for when fps character fires
	ProjectileClass = GunToEquip->GetProjectileClass();

	PrimaryGun = GunToEquip;

	

	//Still need a lot fo equip logic here
}

void Afpscharacter::StartFire()
{
	if (!bIsFiringWeapon && PrimaryGun)
	{
		//Need to implement burst, semi, auto and beam weapon logic, and hitscan ands stuff
		bIsFiringWeapon = true;
		UWorld* World = GetWorld();
		float fireRate = PrimaryGun->GetFireRate();
		World->GetTimerManager().SetTimer(FiringTimer, this, &Afpscharacter::StopFire, fireRate, false);

		HandleFire();

	}
}

void Afpscharacter::StopFire()
{
	bIsFiringWeapon = false;

}

void Afpscharacter::HandleFire_Implementation()
{
	FVector spawnLocation = FPSCameraComponent->GetComponentLocation();
	FRotator spawnRotation = GetControlRotation();

	FActorSpawnParameters spawnParameters;
	spawnParameters.Instigator = GetInstigator();
	spawnParameters.Owner = this;

	AFPSProjectile* spawnedProjectile = GetWorld()->SpawnActor<AFPSProjectile>(spawnLocation, spawnRotation, spawnParameters);

}

