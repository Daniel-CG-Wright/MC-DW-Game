// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "WeaponActor.h"
 
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

private:
	//Records whether player is left handed - if so, mirrors gun transform and rotation on equip to be positioned on left side.
	UPROPERTY(EditAnywhere)
		bool IsLeftHanded;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Whether player is currently crouching
	UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing = OnRep_CurrentlyCrouching)
		bool CurrentlyCrouching;

	//Stores if the player has just landed, logic altered in blueprints.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
		bool JustLanded;

	//Obtained at start, by getting capsule component half height.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DefaultHalfHeight;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Heights")
		float CrouchedHalfHeight;

	//Default walk speed
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement speeds")
		float DefaultSpeed;

	//Default sprint speed
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement speeds")
		float SprintSpeed;

	//Default crouch speed
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement speeds")
		float CrouchSpeed;

	//Time before player speed recovers after landing
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Landing")
		float LandingTime;

	//Interval in seconds that stamina updates occur (higher values means less smooth updates, but easier performance).
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
		float StaminaUpdateIntervalInSeconds;

	//Stamina loss rate per second when sprinting
	UPROPERTY(EditAnywhere, Category = "Stamina")
		float StaminaLossRateWhenSprinting;

	//Stamina loss wehn jumping
	UPROPERTY(EditAnywhere, Category = "Stamina")
		float StaminaLossWhenJumping;

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

	//Sets whether player is crouching or not, run on client and server
	UFUNCTION()
		void SetCrouch(bool NewCrouch);

	//RPC to server to cause player to crouch on server
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerSetCrouch(bool NewCrouch);

	//Run when IsCrouching status receives update on client
	UFUNCTION()
		void OnRep_CurrentlyCrouching();

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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_ChangeSprinting)
		bool IsSprinting;

	//updates stamina , called every @StaminaUpdateIntervalInSeconds by timer
	UFUNCTION()
		void UpdateStamina();

	UFUNCTION()
		//Sets whether player is sprinting or not
		void SetSprinting(bool NewSprinting);
		
	//This RPC function runs on server and is respknsible for actually modifying player's speed
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerSetSprinting(bool NewSprinting);


	//This function will update on the server whne the client decides to start or stop sprinting
	UFUNCTION()
		void OnRep_ChangeSprinting();


	//Stores current weapon being held, also used on server rep and sdtuff
	//UPROPERTY(ReplicatedUsing = OnRep_ChangeWeapon)
		//Guns EquippedGun;
	
	//Stores primary gun equipped
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
		AWeaponActor* PrimaryGun;

	//Stores secondary gun equipped
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
		AWeaponActor* SecondaryGun;


	UFUNCTION(BlueprintImplementableEvent)
		void SpawnAndEquipGun();


	UFUNCTION()
		//Replicates gun equip on clients - when someone switches gun on server, all cleints must replicate this visually.
		void OnRep_ChangeWeapon();

	UFUNCTION()
		//Called when the weapon is updated, called on server immediately after modification, and on clients when they receive news of the weapon switch.
		void UpdateWeapon();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		//Positions and spawns in gun, used on equip
		void EquipWeapon(AWeaponActor* GunToEquip);

	//Should be set by weapon when equipped.
	UPROPERTY(EditDefaultsOnly, Category = "Weapon | Projectile")
		TSubclassOf<class AFPSProjectile> ProjectileClass;

	bool bIsFiringWeapon;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		//Fires weapon
		void StartFire();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		//Function for stopping weapon fire. Once this is called, the player can call StartFire again
		void StopFire();

	//Server function for spawning projectiles
	UFUNCTION(Server, Reliable)
		//WARNING - RELIABLE RPC CALL
		void HandleFire();


	//Timer handle used to provide the fire rate delay in game
	FTimerHandle FiringTimer;
	
	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
		
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

	//First person gun scene component
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* FPSGunComponent;

	//UFUNCTION(BlueprintPure, Category = "Weapon")
		//Gets current weapon equipped
		//FORCEINLINE AWeaponActor* GetEquippedWeapon() { return ; }

	//UFUNCTION(BlueprintCallable, Category = "Weapon")
		//Sets current equipped weapon
		//void SetEquippedWeapon(AWeaponActor* WeaponClass);

	//FPS camera component
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	//FPS mesh component, visible only to the owning player
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;

	UPROPERTY(EditAnywhere, Category = "Crouch")
		float CrouchTime;

	UPROPERTY()
		FTimerHandle StaminaTimerHandle;

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
