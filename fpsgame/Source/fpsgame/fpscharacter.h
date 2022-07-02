// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"


//Should always be the last include
#include "fpscharacter.generated.h"


UCLASS()
class FPSGAME_API Afpscharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Afpscharacter();

	//Property replication
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Whether player is currently crouching
	UPROPERTY(BlueprintReadWrite, Transient)
		bool CurrentlyCrouching;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Heights")
		float DefaultHalfHeight;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Heights")
		float CrouchedHalfHeight;

	//Sprint stamina maximum
	UPROPERTY(EditDefaultsOnly, Category = "Stamina")
		float MaxStamina;

	//Current stamina, replicated across server
	UPROPERTY(ReplicatedUsing = OnRep_CurrentStamina)
		float CurrentStamina;

	//Replicated current stamina
	UFUNCTION()
		void OnRep_CurrentStamina();

	//Response to Stamina being updated. Called on the server immediately after modification, and on clients in response to a RepNotify
	void OnStaminaUpdate();


	//Max health
	UPROPERTY(EditDefaultsOnly, Category = "Health")
		float MaxHealth;

	//Current HP
	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth)
		float CurrentHealth;

	//Replicates current health
	UFUNCTION()
		void OnRep_CurrentHealth();

	//Response to health being updated. Called on server immediately after mod, and on clients in response to repnotify
	void OnHealthUpdate();


	//Tracks sprinting
	UPROPERTY()
		bool IsSprinting;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Default walk speed
	UPROPERTY(EditAnywhere, Category = "Movement speeds")
		float DefaultSpeed;

	//Default sprint speed
	UPROPERTY(EditAnywhere, Category = "Movement speeds")
		float SprintSpeed;

	//Stores X sensitivity for mouse
	UPROPERTY(EditAnywhere, Category="Mouse Input")
		float XSensitivity;

	//Stores Y sensitivty for mouse
	UPROPERTY(EditAnywhere, Category = "Mouse Input")
		float YSensitivity;

	//Stores whether X is inverted
	UPROPERTY(EditAnywhere, Category = "Mouse Input")
		bool InvertX;

	//Stores whether Y is inverted
	UPROPERTY(EditAnywhere, Category = "Mouse Input")
		bool InvertY;

	//Stores whether crouch is toggle or hold
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Input")
		bool ToggleCrouch;
	
	//Stores whether sprint is toggle or hold
	UPROPERTY(EditAnywhere, Category = "Button Input")
		bool ToggleSprint;

	


	//FPS camera component
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	//FPS mesh component, visible only to the owning player
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;

	UPROPERTY(EditAnywhere, Category = "Crouch")
		float CrouchTime;

	

	//Handles movement inputs for forward-backward
	UFUNCTION()
		void MoveY(float Value);

	//handles movement inputs for right-left (right = positive)
	UFUNCTION()
		void MoveX(float Value);

	//Used to apply sensitivities and mouse inversions to axes X and Y for mouse
	UFUNCTION()
		void ApplySensitivityAndInversionToMouseInputX(float Value);
	
	UFUNCTION()
		void ApplySensitivityAndInversionToMouseInputY(float Value);

	//Used to handle jumping
	//Sets jump flag when key is pressed to jump
	UFUNCTION()
		void StartJump();

	//Clears jump flag when key is released
	UFUNCTION()
		void StopJump();
	
	//For handling sprinting
	UFUNCTION()
		void PressSprint();

	UFUNCTION()
		void ReleaseSprint();

	UFUNCTION(BlueprintCallable, Category = "Crouching")
		void PressCrouch();

	UFUNCTION(BlueprintCallable, Category = "Crouching")
		void ReleaseCrouch();

	//Getter for max health
	UFUNCTION(BlueprintPure, Category = "Health")
		FORCEINLINE float GetMaxHealth() const { return MaxHealth; }

	//Getter for current health
	UFUNCTION(BlueprintPure, Category = "Health")
		FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	//Setter for current health. Clamps between 0 and maxhealth, and calls OnHealthUpdate. should only be called on the server.
	UFUNCTION(BlueprintCallable, Category = "Health")
		void SetCurrentHealth(float healthValue);

	//Event for taking damage, overriden from APawn base class
	UFUNCTION(BlueprintCallable, Category = "Health")
		float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


	//Getter for max stamina
	UFUNCTION(BlueprintPure, Category = "Stamina")
		FORCEINLINE float GetMaxStamina() const { return MaxStamina; }

	//Getter for current Stamina
	UFUNCTION(BlueprintPure, Category = "Stamina")
		FORCEINLINE float GetCurrentStamina() const { return CurrentStamina; }

	//Setter for current stamina. Clamps between 0 and maxstamina, and calls OnStaminaUpdate. should only be called on the server.
	UFUNCTION(BlueprintCallable, Category = "Stamina")
		void SetCurrentStamina(float staminaValue);

	//Event for losing stamina
	UFUNCTION(BlueprintCallable, Category = "Stamina")
		float LoseStamina(float LostStamina);
	
};