// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "WeaponActor.h"
#include "InteractableObjectComponent.h"
#include "RewindComponent.h"
#include "FPSGameState.h"
#include "FPSGameModeDefault.h"

//Should always be the last include
#include "fpscharacter.generated.h"


	//Struct storing weapon data, so that weapon actors can safely be deleted



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
	//Records whether player is left handed - if so, mirrors gun transform and rotation on equip to be positioned on left side.
	UPROPERTY(EditAnywhere)
		bool IsLeftHanded;

	UPROPERTY(EditAnywhere)
		//The distance in front the camera to spawn the projectile when shooting (to prevent clipping into own collision)
		float DistanceToPlaceProjectileFromCamera;

	//Records if the player should switch weapon to the pick up weapon after picking a weapon up
	UPROPERTY(EditAnywhere)
		bool SwitchWeaponAfterPickup;



//Firing functions
protected:
	//Checks if the client can fire (checks ammo, fire rate, animation etc). If so, we move onto ClientFire
	UFUNCTION()
		void ClientValidateFire();

	//Checks if the client will hit anything on their side when they fire (hitscan)
	UFUNCTION()
		void ClientHitscanCheckFire();

	//Checks on server if the player could actually fire, to prevent cheating with ammo or firerates etc. RPC calle by ClientHitscanCheckFire
	UFUNCTION(Server, Unreliable)
		void ServerValidateFire(float ClientFireTime);
	
	//Checks if the player hit anything on the server, requires rewinds and stuff. Not an RPC as called by ServerValidateFire
	UFUNCTION()
		void ServerHitscanCheckFire(float ClientFireTime);

	//Used to get the interpolated transforms for all rewind components, for the specific timestamp
	UFUNCTION()
		void ServerGetInterpolatedTransformsForRewind(float ClientFireTime, TMap<AActor*, FRewindDataStruct> &OutActorTransformsToBeRewinded) const;

	//rewinds all the actors to the previous point, and then performs the hitscan, and then returns them back
	UFUNCTION()
		void ServerRewindAndPerformHitscan(TMap<AActor*, FRewindDataStruct> const ValuesToBeUsedInRewind);

	//Performs the serverside hitscan - we also deal damage and stuff here
	UFUNCTION()
		void ServerPerformHitscan();

//Player input functions
protected:
	//Function for pressing interact
	UFUNCTION()
		void InteractPressed();

	//For if interaction is valid, should handle checks for things like if looking at item in range, or in collision etc
	UFUNCTION()
		void Interact();
	/*
	May call ServerPickupWeapon RPC
	*/

	UFUNCTION(Server, Reliable)
	
		void ServerInteract();
	
	UFUNCTION()
		void EnableCanInteract();

	
	//Overload for if we are just looking, and want the interaction name instead
	UFUNCTION()
		void InteractWithNameOnly(FName& OutName);
	//Will not call an RPC


	//Used to send a raycast forwards from camera, 
	UFUNCTION()
		bool SingleRaycastInCameraDirection(FHitResult &ResultOutHit, float RaycastRange, ECollisionChannel CollisionChannel = ECC_Visibility);
	
	//Used in shooting, multi raycast
	UFUNCTION()
		bool MultiRaycastInCameraDirection(TArray<FHitResult>& ResultOutHit, float RaycastRange, ECollisionChannel CollisionChannel = ECC_Visibility);

	//Checks for interact via collision
	UFUNCTION()
		bool CollisionInteractCheck(AActor* CollidingActor);

	//used to limit number of interactions user can make per second
	UPROPERTY()
		FTimerHandle InteractInputIntervalTimerHandle;

	UPROPERTY()
		//used to ensure that interaction takes 'interactiontime' seconds @UInteractableObjectComponent
		FTimerHandle InteractTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
		FName CurrentInteractionName;

	UPROPERTY(EditAnywhere)
		float InteractInterval; //time interval in secondsfor interactions to take place

	//maximum interaction range
	UPROPERTY(EditAnywhere)
		float MaxInteractRange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
		bool bCanInteract;

	//Gets the weapon actor the player is currently looking at within view range, and returns the fstring of its name. To be implemented in HUD blueprints from the return value
	UFUNCTION(BlueprintCallable, Category = "Interaction")
		bool GetCurrentlyAvailableInteractable();

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

	UFUNCTION(Server, Unreliable)
		//Unreliable RPC call to sync server camera pitch.
		void ServerSyncControlRotation(FRotator NewSynchronisedControlRotation);

	UFUNCTION()
		void OnRep_ControlRotation();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_ControlRotation)
		FRotator SynchronisedControlRotation;

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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#if WITH_EDITOR
	UFUNCTION()
		void DebugFunction();

	UPROPERTY()
		int lognum = 0;
#endif

	//Stores data for primary weapon
	UPROPERTY(Replicated)
		FWeaponDataStruct PrimaryData;

	UPROPERTY(Replicated)
		FWeaponDataStruct SecondaryData;

	UFUNCTION(BlueprintCallable)
		FWeaponDataStruct GetCurrentlyEquippedWeaponData();

	UFUNCTION()
		void UpdateAmmoDisplay();

	//Used to display the ammo of the player, updated whenever ammo is changed.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FString AmmoDisplay;

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
	UPROPERTY(Transient, ReplicatedUsing = OnRep_CurrentStamina)
		float CurrentStamina;

	//RPC for jumping, so stamina loss and stuff works properly
	UFUNCTION(Server, Unreliable)
		void ServerStartJump();

	//Checks if uncrouching is possible using a raycast
	UFUNCTION(BlueprintCallable)
		bool CanUncrouch();

	UFUNCTION()
		void OnRep_CurrentlyCrouching();

	UFUNCTION(BlueprintImplementableEvent, Category = "Crouching")
		void BlueprintRep_CurrentlyCrouching();

	//Replicated current stamina
	UFUNCTION()
		void OnRep_CurrentStamina();

	//Response to Stamina being updated. Called on the server immediately after modification, and on clients in response to a RepNotify
	void OnStaminaUpdate();


	//Max health
	UPROPERTY(EditDefaultsOnly, Category = "Health")
		float MaxHealth;

	//Current HP
	UPROPERTY(Transient, ReplicatedUsing = OnRep_CurrentHealth)
		float CurrentHealth;

	//Replicates current health
	UFUNCTION()
		void OnRep_CurrentHealth();

	//Response to health being updated. Called on server immediately after mod, and on clients in response to repnotify
	void OnHealthUpdate();


	//Tracks sprinting
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_ChangeSprinting)
		bool IsSprinting;

	//updates stamina , called every @StaminaUpdateIntervalInSeconds by timer
	UFUNCTION()
		void UpdateStamina();

	UFUNCTION()
		//Sets whether player is sprinting or not
		void SetSprinting(bool NewSprinting);

	//This RPC function runs on server and is respknsible for actually modifying player's speed
	UFUNCTION(Server, Unreliable)
		void ServerSetSprinting(bool NewSprinting);


	//This function will update on the server whne the client decides to start or stop sprinting
	UFUNCTION()
		void OnRep_ChangeSprinting();


	//Stores current weapon being held, also used on server rep and sdtuff
	//UPROPERTY(ReplicatedUsing = OnRep_ChangeWeapon)
		//Guns EquippedGun;


	UFUNCTION()
		//Replicates gun equip on clients - when someone switches gun on server, all cleints must replicate this visually.
		void OnRep_ChangeWeapon();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		//Localfunction for picking up weapon from floor
		void PickupWeapon(AWeaponActor* WeaponPickup);
	UFUNCTION(BlueprintCallable, Category = "Weapon", Server, Reliable)
		//used on equipping gun from floor, logic for server is run here - should consist of updating variables, and visual changes if needed
		void ServerPickupWeapon(AWeaponActor* WeaponPickup);

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		//Initial local function call for switching weapon
		void SwitchPrimary(bool bIsRep = false);
	
	UFUNCTION()
		void SwitchPrimaryInputImplementation();

	UFUNCTION()
		void SwitchSecondaryInputImplementation();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		//Initial local function call for switching weapon
		void SwitchSecondary(bool bIsRep = false);
	
	UFUNCTION()
		//Does the actual positioning of gun in first person
		void PositionAndAttachGunInFP(FWeaponDataStruct GunToEquip);

	UFUNCTION()
		void PositionAndAttachGunInTP(FWeaponDataStruct GunToEquip);

	UFUNCTION(BlueprintCallable, Category = "Weapon", Server, Reliable)
		//Logic for causing visual swap to primary weapon on server goes here, along with setting equipped weapon variables
		void ServerSwitchPrimary();

	UFUNCTION(BlueprintCallable, Category = "Weapon", Server, Reliable)
		//Like above but for secondary weapon
		void ServerSwitchSecondary();

	//Should be set by weapon when equipped.
	UPROPERTY(EditDefaultsOnly, Category = "Weapon | Projectile")
		TSubclassOf<class AProjectileBullet> BulletClass;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Stores X sensitivity for mouse
	UPROPERTY(EditAnywhere, Category = "Mouse Input")
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		URewindComponent* FPSRewindComponent;

	//FPS mesh component, visible only to the owning player
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;

	//Mesh for third person
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* ThirdPersonGunMesh;

	UPROPERTY(EditAnywhere, Category = "Crouch")
		float CrouchTime;

	UPROPERTY()
		FTimerHandle StaminaTimerHandle;

	

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

	//Stores the currently equipped item (e.g. gun, knife) using enum
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ChangeWeapon)
		Equips EquippedGun;

	//SHOULD BE USED WHEN NEEDING TO CHANGE CURRENT AMMO, AS IT CHANGES DISPLAY AMMO TOO
	UFUNCTION()
		void SetCurrentAmmo(int NewAmmo);

	UFUNCTION()
		int GetCurrentAmmo() { return GetCurrentlyEquippedWeaponData().MagAmmo; }

};