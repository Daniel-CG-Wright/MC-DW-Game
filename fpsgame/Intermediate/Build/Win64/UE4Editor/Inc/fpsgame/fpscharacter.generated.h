// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
struct FWeaponDataStruct;
class AWeaponActor;
struct FRotator;
struct FHitResult;
struct FVector;
class AActor; struct FRewindDataStruct;
class AFPSProjectile;
class UNiagaraSystem;
#ifdef FPSGAME_fpscharacter_generated_h
#error "fpscharacter.generated.h already included, missing '#pragma once' in fpscharacter.h"
#endif
#define FPSGAME_fpscharacter_generated_h

#define fpsgame_Source_fpsgame_fpscharacter_h_28_SPARSE_DATA
#define fpsgame_Source_fpsgame_fpscharacter_h_28_RPC_WRAPPERS \
	virtual void ServerSwitchSecondary_Implementation(); \
	virtual void ServerSwitchPrimary_Implementation(); \
	virtual void ServerPickupWeapon_Implementation(AWeaponActor* WeaponPickup); \
	virtual void ServerSetSprinting_Implementation(bool NewSprinting); \
	virtual void ServerStartJump_Implementation(); \
	virtual void ServerStopFiring_Implementation(); \
	virtual void ServerReleaseFire_Implementation(); \
	virtual void ServerSyncControlRotation_Implementation(FRotator NewSynchronisedControlRotation); \
	virtual void SetClientControlRotationFromServer_Implementation(FRotator Rotation); \
	virtual void ServerInteract_Implementation(); \
	virtual bool ServerValidateFire_Validate(float ); \
	virtual void ServerValidateFire_Implementation(float ClientFireTime); \
	virtual bool ServerReload_Validate(); \
	virtual void ServerReload_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execSetCurrentAmmo); \
	DECLARE_FUNCTION(execLoseStamina); \
	DECLARE_FUNCTION(execSetCurrentStamina); \
	DECLARE_FUNCTION(execGetCurrentStamina); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execServerSwitchSecondary); \
	DECLARE_FUNCTION(execServerSwitchPrimary); \
	DECLARE_FUNCTION(execPositionAndAttachGunInTP); \
	DECLARE_FUNCTION(execPositionAndAttachGunInFP); \
	DECLARE_FUNCTION(execSwitchSecondary); \
	DECLARE_FUNCTION(execSwitchSecondaryInputImplementation); \
	DECLARE_FUNCTION(execSwitchPrimaryInputImplementation); \
	DECLARE_FUNCTION(execSwitchPrimary); \
	DECLARE_FUNCTION(execServerPickupWeapon); \
	DECLARE_FUNCTION(execPickupWeapon); \
	DECLARE_FUNCTION(execOnRep_ChangeWeapon); \
	DECLARE_FUNCTION(execOnRep_ChangeSprinting); \
	DECLARE_FUNCTION(execServerSetSprinting); \
	DECLARE_FUNCTION(execSetSprinting); \
	DECLARE_FUNCTION(execUpdateStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentlyCrouching); \
	DECLARE_FUNCTION(execCanUncrouch); \
	DECLARE_FUNCTION(execServerStartJump); \
	DECLARE_FUNCTION(execUpdateAmmoDisplay); \
	DECLARE_FUNCTION(execGetCurrentlyEquippedWeaponData); \
	DECLARE_FUNCTION(execReleaseSprint); \
	DECLARE_FUNCTION(execPressSprint); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execServerStopFiring); \
	DECLARE_FUNCTION(execServerReleaseFire); \
	DECLARE_FUNCTION(execOnRep_ControlRotation); \
	DECLARE_FUNCTION(execServerSyncControlRotation); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputY); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputX); \
	DECLARE_FUNCTION(execMoveX); \
	DECLARE_FUNCTION(execMoveY); \
	DECLARE_FUNCTION(execGetCurrentlyAvailableInteractable); \
	DECLARE_FUNCTION(execCollisionInteractCheck); \
	DECLARE_FUNCTION(execMultiRaycastDirectional); \
	DECLARE_FUNCTION(execMultiRaycastInCameraDirection); \
	DECLARE_FUNCTION(execSingleRaycastInCameraDirection); \
	DECLARE_FUNCTION(execInteractWithNameOnly); \
	DECLARE_FUNCTION(execRecoveryStart); \
	DECLARE_FUNCTION(execRecoilTimerFunction); \
	DECLARE_FUNCTION(execSetClientControlRotationFromServer); \
	DECLARE_FUNCTION(execSetControlRotation); \
	DECLARE_FUNCTION(execRecoilRecoveryTimerFunction); \
	DECLARE_FUNCTION(execRecoilStop); \
	DECLARE_FUNCTION(execRecoilStart); \
	DECLARE_FUNCTION(execRecoveryApply); \
	DECLARE_FUNCTION(execRecoilApply); \
	DECLARE_FUNCTION(execEnableCanInteract); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execCalculateSpreadDestination); \
	DECLARE_FUNCTION(execOnRep_EndPoint); \
	DECLARE_FUNCTION(execOnRep_MuzzleCounter); \
	DECLARE_FUNCTION(execDamageLogic); \
	DECLARE_FUNCTION(execServerPerformHitscan); \
	DECLARE_FUNCTION(execServerRewindAndPerformHitscan); \
	DECLARE_FUNCTION(execServerGetInterpolatedTransformsForRewind); \
	DECLARE_FUNCTION(execServerHitscanCheckFire); \
	DECLARE_FUNCTION(execServerValidateFire); \
	DECLARE_FUNCTION(execCalculateSpreadModifier); \
	DECLARE_FUNCTION(execClientHitscanCheckFire); \
	DECLARE_FUNCTION(execClientValidateFire); \
	DECLARE_FUNCTION(execReleaseFire); \
	DECLARE_FUNCTION(execRepeatFire); \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execOnReload); \
	DECLARE_FUNCTION(execOnPressFire); \
	DECLARE_FUNCTION(execSpawnProjectileBullet); \
	DECLARE_FUNCTION(execCalculateNewBatchOfSpreadAngles); \
	DECLARE_FUNCTION(execServerProjectileCheckFire); \
	DECLARE_FUNCTION(execClientProjectileCheckFire); \
	DECLARE_FUNCTION(execStopAimingDownSights); \
	DECLARE_FUNCTION(execBringWeaponUpForADS); \
	DECLARE_FUNCTION(execAimDownSights); \
	DECLARE_FUNCTION(execReleaseADSKey); \
	DECLARE_FUNCTION(execPressADSKey);


#define fpsgame_Source_fpsgame_fpscharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSwitchSecondary_Implementation(); \
	virtual void ServerSwitchPrimary_Implementation(); \
	virtual void ServerPickupWeapon_Implementation(AWeaponActor* WeaponPickup); \
	virtual void ServerSetSprinting_Implementation(bool NewSprinting); \
	virtual void ServerStartJump_Implementation(); \
	virtual void ServerStopFiring_Implementation(); \
	virtual void ServerReleaseFire_Implementation(); \
	virtual void ServerSyncControlRotation_Implementation(FRotator NewSynchronisedControlRotation); \
	virtual void SetClientControlRotationFromServer_Implementation(FRotator Rotation); \
	virtual void ServerInteract_Implementation(); \
	virtual bool ServerValidateFire_Validate(float ); \
	virtual void ServerValidateFire_Implementation(float ClientFireTime); \
	virtual bool ServerReload_Validate(); \
	virtual void ServerReload_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execSetCurrentAmmo); \
	DECLARE_FUNCTION(execLoseStamina); \
	DECLARE_FUNCTION(execSetCurrentStamina); \
	DECLARE_FUNCTION(execGetCurrentStamina); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execServerSwitchSecondary); \
	DECLARE_FUNCTION(execServerSwitchPrimary); \
	DECLARE_FUNCTION(execPositionAndAttachGunInTP); \
	DECLARE_FUNCTION(execPositionAndAttachGunInFP); \
	DECLARE_FUNCTION(execSwitchSecondary); \
	DECLARE_FUNCTION(execSwitchSecondaryInputImplementation); \
	DECLARE_FUNCTION(execSwitchPrimaryInputImplementation); \
	DECLARE_FUNCTION(execSwitchPrimary); \
	DECLARE_FUNCTION(execServerPickupWeapon); \
	DECLARE_FUNCTION(execPickupWeapon); \
	DECLARE_FUNCTION(execOnRep_ChangeWeapon); \
	DECLARE_FUNCTION(execOnRep_ChangeSprinting); \
	DECLARE_FUNCTION(execServerSetSprinting); \
	DECLARE_FUNCTION(execSetSprinting); \
	DECLARE_FUNCTION(execUpdateStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentlyCrouching); \
	DECLARE_FUNCTION(execCanUncrouch); \
	DECLARE_FUNCTION(execServerStartJump); \
	DECLARE_FUNCTION(execUpdateAmmoDisplay); \
	DECLARE_FUNCTION(execGetCurrentlyEquippedWeaponData); \
	DECLARE_FUNCTION(execReleaseSprint); \
	DECLARE_FUNCTION(execPressSprint); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execServerStopFiring); \
	DECLARE_FUNCTION(execServerReleaseFire); \
	DECLARE_FUNCTION(execOnRep_ControlRotation); \
	DECLARE_FUNCTION(execServerSyncControlRotation); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputY); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputX); \
	DECLARE_FUNCTION(execMoveX); \
	DECLARE_FUNCTION(execMoveY); \
	DECLARE_FUNCTION(execGetCurrentlyAvailableInteractable); \
	DECLARE_FUNCTION(execCollisionInteractCheck); \
	DECLARE_FUNCTION(execMultiRaycastDirectional); \
	DECLARE_FUNCTION(execMultiRaycastInCameraDirection); \
	DECLARE_FUNCTION(execSingleRaycastInCameraDirection); \
	DECLARE_FUNCTION(execInteractWithNameOnly); \
	DECLARE_FUNCTION(execRecoveryStart); \
	DECLARE_FUNCTION(execRecoilTimerFunction); \
	DECLARE_FUNCTION(execSetClientControlRotationFromServer); \
	DECLARE_FUNCTION(execSetControlRotation); \
	DECLARE_FUNCTION(execRecoilRecoveryTimerFunction); \
	DECLARE_FUNCTION(execRecoilStop); \
	DECLARE_FUNCTION(execRecoilStart); \
	DECLARE_FUNCTION(execRecoveryApply); \
	DECLARE_FUNCTION(execRecoilApply); \
	DECLARE_FUNCTION(execEnableCanInteract); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execCalculateSpreadDestination); \
	DECLARE_FUNCTION(execOnRep_EndPoint); \
	DECLARE_FUNCTION(execOnRep_MuzzleCounter); \
	DECLARE_FUNCTION(execDamageLogic); \
	DECLARE_FUNCTION(execServerPerformHitscan); \
	DECLARE_FUNCTION(execServerRewindAndPerformHitscan); \
	DECLARE_FUNCTION(execServerGetInterpolatedTransformsForRewind); \
	DECLARE_FUNCTION(execServerHitscanCheckFire); \
	DECLARE_FUNCTION(execServerValidateFire); \
	DECLARE_FUNCTION(execCalculateSpreadModifier); \
	DECLARE_FUNCTION(execClientHitscanCheckFire); \
	DECLARE_FUNCTION(execClientValidateFire); \
	DECLARE_FUNCTION(execReleaseFire); \
	DECLARE_FUNCTION(execRepeatFire); \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execOnReload); \
	DECLARE_FUNCTION(execOnPressFire); \
	DECLARE_FUNCTION(execSpawnProjectileBullet); \
	DECLARE_FUNCTION(execCalculateNewBatchOfSpreadAngles); \
	DECLARE_FUNCTION(execServerProjectileCheckFire); \
	DECLARE_FUNCTION(execClientProjectileCheckFire); \
	DECLARE_FUNCTION(execStopAimingDownSights); \
	DECLARE_FUNCTION(execBringWeaponUpForADS); \
	DECLARE_FUNCTION(execAimDownSights); \
	DECLARE_FUNCTION(execReleaseADSKey); \
	DECLARE_FUNCTION(execPressADSKey);


#if WITH_EDITOR
#define fpsgame_Source_fpsgame_fpscharacter_h_28_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugFunction);


#define fpsgame_Source_fpsgame_fpscharacter_h_28_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugFunction);


#else
#define fpsgame_Source_fpsgame_fpscharacter_h_28_EDITOR_ONLY_RPC_WRAPPERS
#define fpsgame_Source_fpsgame_fpscharacter_h_28_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define fpsgame_Source_fpsgame_fpscharacter_h_28_EVENT_PARMS \
	struct fpscharacter_eventBP_BringUpWeaponForADS_Parms \
	{ \
		FVector SightPoint; \
	}; \
	struct fpscharacter_eventServerPickupWeapon_Parms \
	{ \
		AWeaponActor* WeaponPickup; \
	}; \
	struct fpscharacter_eventServerSetSprinting_Parms \
	{ \
		bool NewSprinting; \
	}; \
	struct fpscharacter_eventServerSyncControlRotation_Parms \
	{ \
		FRotator NewSynchronisedControlRotation; \
	}; \
	struct fpscharacter_eventServerValidateFire_Parms \
	{ \
		float ClientFireTime; \
	}; \
	struct fpscharacter_eventSetClientControlRotationFromServer_Parms \
	{ \
		FRotator Rotation; \
	}; \
	struct fpscharacter_eventShowHitscanFireEffectFP_Parms \
	{ \
		FVector StartLocation; \
		FVector EndLocation; \
		UNiagaraSystem* TracerEffect; \
	}; \
	struct fpscharacter_eventShowHitscanFireEffectTP_Parms \
	{ \
		FVector StartLocation; \
		FVector EndLocation; \
		UNiagaraSystem* TracerEffect; \
	}; \
	struct fpscharacter_eventShowMuzzleFlashFP_Parms \
	{ \
		FVector StartLocation; \
		FVector Direction; \
		UNiagaraSystem* MuzzleFlashEffect; \
	}; \
	struct fpscharacter_eventShowMuzzleFlashTP_Parms \
	{ \
		FVector StartLocation; \
		FVector Direction; \
		UNiagaraSystem* MuzzleFlashEffect; \
	};


#define fpsgame_Source_fpsgame_fpscharacter_h_28_CALLBACK_WRAPPERS
#define fpsgame_Source_fpsgame_fpscharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfpscharacter(); \
	friend struct Z_Construct_UClass_Afpscharacter_Statics; \
public: \
	DECLARE_CLASS(Afpscharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(Afpscharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSpreadAngles=NETFIELD_REP_START, \
		MuzzleCounter, \
		EndPoints, \
		SynchronisedControlRotation, \
		PrimaryData, \
		SecondaryData, \
		CurrentlyCrouching, \
		CurrentStamina, \
		CurrentHealth, \
		IsSprinting, \
		EquippedGun, \
		NETFIELD_REP_END=EquippedGun	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_fpscharacter_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAfpscharacter(); \
	friend struct Z_Construct_UClass_Afpscharacter_Statics; \
public: \
	DECLARE_CLASS(Afpscharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(Afpscharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSpreadAngles=NETFIELD_REP_START, \
		MuzzleCounter, \
		EndPoints, \
		SynchronisedControlRotation, \
		PrimaryData, \
		SecondaryData, \
		CurrentlyCrouching, \
		CurrentStamina, \
		CurrentHealth, \
		IsSprinting, \
		EquippedGun, \
		NETFIELD_REP_END=EquippedGun	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_fpscharacter_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Afpscharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Afpscharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afpscharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afpscharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afpscharacter(Afpscharacter&&); \
	NO_API Afpscharacter(const Afpscharacter&); \
public:


#define fpsgame_Source_fpsgame_fpscharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afpscharacter(Afpscharacter&&); \
	NO_API Afpscharacter(const Afpscharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afpscharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afpscharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Afpscharacter)


#define fpsgame_Source_fpsgame_fpscharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BASE_FOV() { return STRUCT_OFFSET(Afpscharacter, BASE_FOV); } \
	FORCEINLINE static uint32 __PPO__DistanceToPlaceProjectileFromCamera() { return STRUCT_OFFSET(Afpscharacter, DistanceToPlaceProjectileFromCamera); } \
	FORCEINLINE static uint32 __PPO__ReplicatedSpreadAngles() { return STRUCT_OFFSET(Afpscharacter, ReplicatedSpreadAngles); } \
	FORCEINLINE static uint32 __PPO__SpeedForLosingAccuracy() { return STRUCT_OFFSET(Afpscharacter, SpeedForLosingAccuracy); } \
	FORCEINLINE static uint32 __PPO__MaxMovementSpreadModifier() { return STRUCT_OFFSET(Afpscharacter, MaxMovementSpreadModifier); } \
	FORCEINLINE static uint32 __PPO__MinMovementSpreadModifier() { return STRUCT_OFFSET(Afpscharacter, MinMovementSpreadModifier); } \
	FORCEINLINE static uint32 __PPO__SightSceneComponent() { return STRUCT_OFFSET(Afpscharacter, SightSceneComponent); } \
	FORCEINLINE static uint32 __PPO__BarrelSceneComponent() { return STRUCT_OFFSET(Afpscharacter, BarrelSceneComponent); } \
	FORCEINLINE static uint32 __PPO__SightMesh() { return STRUCT_OFFSET(Afpscharacter, SightMesh); } \
	FORCEINLINE static uint32 __PPO__BarrelMesh() { return STRUCT_OFFSET(Afpscharacter, BarrelMesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleCounter() { return STRUCT_OFFSET(Afpscharacter, MuzzleCounter); } \
	FORCEINLINE static uint32 __PPO__EndPoints() { return STRUCT_OFFSET(Afpscharacter, EndPoints); } \
	FORCEINLINE static uint32 __PPO__HeadMaterial() { return STRUCT_OFFSET(Afpscharacter, HeadMaterial); } \
	FORCEINLINE static uint32 __PPO__TorsoMaterial() { return STRUCT_OFFSET(Afpscharacter, TorsoMaterial); } \
	FORCEINLINE static uint32 __PPO__LegMaterial() { return STRUCT_OFFSET(Afpscharacter, LegMaterial); } \
	FORCEINLINE static uint32 __PPO__RecoilTimer() { return STRUCT_OFFSET(Afpscharacter, RecoilTimer); } \
	FORCEINLINE static uint32 __PPO__RecoilTimerLength() { return STRUCT_OFFSET(Afpscharacter, RecoilTimerLength); } \
	FORCEINLINE static uint32 __PPO__RecoilDeltaRotation() { return STRUCT_OFFSET(Afpscharacter, RecoilDeltaRotation); } \
	FORCEINLINE static uint32 __PPO__RecoilRecoveryTimerHandle() { return STRUCT_OFFSET(Afpscharacter, RecoilRecoveryTimerHandle); } \
	FORCEINLINE static uint32 __PPO__RecoilStartRotation() { return STRUCT_OFFSET(Afpscharacter, RecoilStartRotation); } \
	FORCEINLINE static uint32 __PPO__bIsRecoiling() { return STRUCT_OFFSET(Afpscharacter, bIsRecoiling); } \
	FORCEINLINE static uint32 __PPO__bDoRecoilRecovery() { return STRUCT_OFFSET(Afpscharacter, bDoRecoilRecovery); } \
	FORCEINLINE static uint32 __PPO__SnapRecoveryDegrees() { return STRUCT_OFFSET(Afpscharacter, SnapRecoveryDegrees); } \
	FORCEINLINE static uint32 __PPO__InteractInputIntervalTimerHandle() { return STRUCT_OFFSET(Afpscharacter, InteractInputIntervalTimerHandle); } \
	FORCEINLINE static uint32 __PPO__InteractTimerHandle() { return STRUCT_OFFSET(Afpscharacter, InteractTimerHandle); } \
	FORCEINLINE static uint32 __PPO__CurrentInteractionName() { return STRUCT_OFFSET(Afpscharacter, CurrentInteractionName); } \
	FORCEINLINE static uint32 __PPO__InteractInterval() { return STRUCT_OFFSET(Afpscharacter, InteractInterval); } \
	FORCEINLINE static uint32 __PPO__MaxInteractRange() { return STRUCT_OFFSET(Afpscharacter, MaxInteractRange); } \
	FORCEINLINE static uint32 __PPO__bCanInteract() { return STRUCT_OFFSET(Afpscharacter, bCanInteract); } \
	FORCEINLINE static uint32 __PPO__SynchronisedControlRotation() { return STRUCT_OFFSET(Afpscharacter, SynchronisedControlRotation); } \
	FORCEINLINE static uint32 __PPO__lognum() { return STRUCT_OFFSET(Afpscharacter, lognum); } \
	FORCEINLINE static uint32 __PPO__PrimaryData() { return STRUCT_OFFSET(Afpscharacter, PrimaryData); } \
	FORCEINLINE static uint32 __PPO__SecondaryData() { return STRUCT_OFFSET(Afpscharacter, SecondaryData); } \
	FORCEINLINE static uint32 __PPO__AmmoDisplay() { return STRUCT_OFFSET(Afpscharacter, AmmoDisplay); } \
	FORCEINLINE static uint32 __PPO__CurrentlyCrouching() { return STRUCT_OFFSET(Afpscharacter, CurrentlyCrouching); } \
	FORCEINLINE static uint32 __PPO__JustLanded() { return STRUCT_OFFSET(Afpscharacter, JustLanded); } \
	FORCEINLINE static uint32 __PPO__DefaultHalfHeight() { return STRUCT_OFFSET(Afpscharacter, DefaultHalfHeight); } \
	FORCEINLINE static uint32 __PPO__CrouchedHalfHeight() { return STRUCT_OFFSET(Afpscharacter, CrouchedHalfHeight); } \
	FORCEINLINE static uint32 __PPO__DefaultSpeed() { return STRUCT_OFFSET(Afpscharacter, DefaultSpeed); } \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(Afpscharacter, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__CrouchSpeed() { return STRUCT_OFFSET(Afpscharacter, CrouchSpeed); } \
	FORCEINLINE static uint32 __PPO__LandingTime() { return STRUCT_OFFSET(Afpscharacter, LandingTime); } \
	FORCEINLINE static uint32 __PPO__StaminaUpdateIntervalInSeconds() { return STRUCT_OFFSET(Afpscharacter, StaminaUpdateIntervalInSeconds); } \
	FORCEINLINE static uint32 __PPO__StaminaLossRateWhenSprinting() { return STRUCT_OFFSET(Afpscharacter, StaminaLossRateWhenSprinting); } \
	FORCEINLINE static uint32 __PPO__StaminaLossWhenJumping() { return STRUCT_OFFSET(Afpscharacter, StaminaLossWhenJumping); } \
	FORCEINLINE static uint32 __PPO__MaxStamina() { return STRUCT_OFFSET(Afpscharacter, MaxStamina); } \
	FORCEINLINE static uint32 __PPO__CurrentStamina() { return STRUCT_OFFSET(Afpscharacter, CurrentStamina); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(Afpscharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(Afpscharacter, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__IsSprinting() { return STRUCT_OFFSET(Afpscharacter, IsSprinting); }


#define fpsgame_Source_fpsgame_fpscharacter_h_25_PROLOG \
	fpsgame_Source_fpsgame_fpscharacter_h_28_EVENT_PARMS


#define fpsgame_Source_fpsgame_fpscharacter_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_fpscharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_fpscharacter_h_28_SPARSE_DATA \
	fpsgame_Source_fpsgame_fpscharacter_h_28_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_EDITOR_ONLY_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_INCLASS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_fpscharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_fpscharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_fpscharacter_h_28_SPARSE_DATA \
	fpsgame_Source_fpsgame_fpscharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_fpscharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class Afpscharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_fpscharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
