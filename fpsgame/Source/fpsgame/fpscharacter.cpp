// Fill out your copyright notice in the Description page of Project Settings.

#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"
#include "fpscharacter.h"
#include "GameFramework/Character.h"
#include "Engine\Classes\GameFramework\CharacterMovementComponent.h"

// Sets default values
Afpscharacter::Afpscharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creates a first person camera component instance
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(FPSCameraComponent != nullptr);

	//Attach the camera component to the capsule component
	FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	//Position the camera slightly above eyes
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));

	//Creating the FPS mesh component for the owning player
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	check(FPSMesh != nullptr);

	//Only owning player sees this mesh
	FPSMesh->SetOnlyOwnerSee(true);

	//Attaches the FPS mesh to the FPS camera
	FPSMesh->SetupAttachment(FPSCameraComponent);

	//Disable some environmental shadows to preserve the illusion of using a single mesh
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	//Hides third person mesh from owner
	GetMesh()->SetOwnerNoSee(true);

	
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

	//Initialize health
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;

	//Initialize speeds
	DefaultSpeed = 600.0f;
	SprintSpeed = 1200.0f;

	//Initialize default heights
	DefaultHalfHeight = 88.0f;
	CrouchedHalfHeight = 40.0f;

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
}

void Afpscharacter::MoveY(float Value)
{
	///For moving forward/backward

	//Gets 'forward' relative to vamera, and record that player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);


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
	//Release crouch is done in blueprints (NEEDS FIXING)
	bPressedJump = true;
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
			GetCharacterMovement()->MaxWalkSpeed = 600.0f;
			CurrentlyCrouching = false;
		}
		else
		{
			//Should Crouch
			GetCharacterMovement()->MaxWalkSpeed = 300.0f;
			CurrentlyCrouching = true;

		}
	}
	else
	{
		//Should Crouch
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
		CurrentlyCrouching = true;
	}


}

void Afpscharacter::ReleaseCrouch()
{
	if (!ToggleCrouch)
	{
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
		CurrentlyCrouching = false;

	}
}

void Afpscharacter::PressSprint()
{
	if (CurrentlyCrouching)
	{
		//Can't sprint if crouched
		return;

	}

	if (ToggleSprint)
	{
		if (IsSprinting)
		{
			//Start walking
			GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
			IsSprinting = false;
		}
		else
		{
			//Start sprinting
			GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
			IsSprinting = true;
		}
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
		IsSprinting = true;
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
		GetCharacterMovement()->MaxWalkSpeed = DefaultSpeed;
		IsSprinting = false;

	}
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
		}
	}

	//Server-specific functionality
	if (GetLocalRole() == ROLE_Authority)
	{

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
	float staminaRemains = CurrentHealth - LostStamina;
	SetCurrentStamina(staminaRemains);
	return staminaRemains;
}