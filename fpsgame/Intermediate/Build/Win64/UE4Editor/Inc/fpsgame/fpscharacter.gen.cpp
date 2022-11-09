// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/fpscharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefpscharacter() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_Afpscharacter_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_Afpscharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponDataStruct();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRewindDataStruct();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_URewindComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_Equips();
// End Cross Module References
	DEFINE_FUNCTION(Afpscharacter::execGetCurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSetCurrentAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAmmo(Z_Param_NewAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execLoseStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LostStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->LoseStamina(Z_Param_LostStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSetCurrentStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_staminaValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentStamina(Z_Param_staminaValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execGetCurrentStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageTaken);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageTaken,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSetCurrentHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_healthValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentHealth(Z_Param_healthValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execCosmeticRecoil)
	{
		P_GET_STRUCT(FRotator,Z_Param_RecoilRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticRecoil(Z_Param_RecoilRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerSwitchSecondary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSwitchSecondary_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerSwitchPrimary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSwitchPrimary_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPositionAndAttachGunInTP)
	{
		P_GET_STRUCT(FWeaponDataStruct,Z_Param_GunToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PositionAndAttachGunInTP(Z_Param_GunToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPositionAndAttachGunInFP)
	{
		P_GET_STRUCT(FWeaponDataStruct,Z_Param_GunToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PositionAndAttachGunInFP(Z_Param_GunToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSwitchSecondary)
	{
		P_GET_UBOOL(Z_Param_bIsRep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchSecondary(Z_Param_bIsRep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSwitchSecondaryInputImplementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchSecondaryInputImplementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSwitchPrimaryInputImplementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchPrimaryInputImplementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSwitchPrimary)
	{
		P_GET_UBOOL(Z_Param_bIsRep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchPrimary(Z_Param_bIsRep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerPickupWeapon)
	{
		P_GET_OBJECT(AWeaponActor,Z_Param_WeaponPickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPickupWeapon_Implementation(Z_Param_WeaponPickup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPickupWeapon)
	{
		P_GET_OBJECT(AWeaponActor,Z_Param_WeaponPickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickupWeapon(Z_Param_WeaponPickup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_ChangeWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChangeWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_ChangeSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChangeSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerSetSprinting)
	{
		P_GET_UBOOL(Z_Param_NewSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetSprinting_Implementation(Z_Param_NewSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSetSprinting)
	{
		P_GET_UBOOL(Z_Param_NewSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSprinting(Z_Param_NewSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execUpdateStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_CurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_CurrentStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_CurrentlyCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentlyCrouching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execCanUncrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUncrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartJump_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execUpdateAmmoDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmoDisplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execGetCurrentlyEquippedWeaponData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWeaponDataStruct*)Z_Param__Result=P_THIS->GetCurrentlyEquippedWeaponData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execReleaseSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPressSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PressSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_ControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ControlRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerSyncControlRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewSynchronisedControlRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSyncControlRotation_Implementation(Z_Param_NewSynchronisedControlRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execApplySensitivityAndInversionToMouseInputY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySensitivityAndInversionToMouseInputY(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execApplySensitivityAndInversionToMouseInputX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySensitivityAndInversionToMouseInputX(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execMoveX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveX(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execMoveY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveY(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execGetCurrentlyAvailableInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentlyAvailableInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execCollisionInteractCheck)
	{
		P_GET_OBJECT(AActor,Z_Param_CollidingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CollisionInteractCheck(Z_Param_CollidingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execMultiRaycastDirectional)
	{
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_ResultOutHit);
		P_GET_STRUCT(FVector,Z_Param_StartPoint);
		P_GET_STRUCT(FVector,Z_Param_EndLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MultiRaycastDirectional(Z_Param_Out_ResultOutHit,Z_Param_StartPoint,Z_Param_EndLocation,ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execMultiRaycastInCameraDirection)
	{
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_ResultOutHit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RaycastRange);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MultiRaycastInCameraDirection(Z_Param_Out_ResultOutHit,Z_Param_RaycastRange,ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSingleRaycastInCameraDirection)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ResultOutHit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RaycastRange);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SingleRaycastInCameraDirection(Z_Param_Out_ResultOutHit,Z_Param_RaycastRange,ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execInteractWithNameOnly)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractWithNameOnly(Z_Param_Out_OutName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execEnableCanInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCanInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInteract_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execInteractPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execCalculateSpreadDestination)
	{
		P_GET_STRUCT(FVector,Z_Param_StartPoint);
		P_GET_STRUCT(FRotator,Z_Param_ForwardRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Modifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngleInDegress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateSpreadDestination(Z_Param_StartPoint,Z_Param_ForwardRotation,Z_Param_Range,Z_Param_Modifier,Z_Param_SpreadAngleInDegress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_EndPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EndPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_MuzzleCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MuzzleCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execDamageLogic)
	{
		P_GET_TARRAY(FHitResult,Z_Param_HitResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageLogic(Z_Param_HitResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerPerformHitscan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPerformHitscan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerRewindAndPerformHitscan)
	{
		P_GET_TMAP(AActor*,FRewindDataStruct,Z_Param_ValuesToBeUsedInRewind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRewindAndPerformHitscan(Z_Param_ValuesToBeUsedInRewind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerGetInterpolatedTransformsForRewind)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientFireTime);
		P_GET_TMAP_REF(AActor*,FRewindDataStruct,Z_Param_Out_OutActorTransformsToBeRewinded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerGetInterpolatedTransformsForRewind(Z_Param_ClientFireTime,Z_Param_Out_OutActorTransformsToBeRewinded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerHitscanCheckFire)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientFireTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerHitscanCheckFire(Z_Param_ClientFireTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerValidateFire)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClientFireTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerValidateFire_Validate(Z_Param_ClientFireTime))
		{
			RPC_ValidateFailed(TEXT("ServerValidateFire_Validate"));
			return;
		}
		P_THIS->ServerValidateFire_Implementation(Z_Param_ClientFireTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnRep_ReceiveRecoilRecoveryChanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReceiveRecoilRecoveryChanges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execReduceRecoilRecovery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceRecoilRecovery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execRecoverFPRotationOfGun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecoverFPRotationOfGun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execTimedRecoilRecoveryFunction)
	{
		P_GET_STRUCT(FTimerHandle,Z_Param_TimerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimedRecoilRecoveryFunction(Z_Param_TimerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPerformRecoilWithTPGunMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformRecoilWithTPGunMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPerformRecoilWithGunMovement)
	{
		P_GET_STRUCT(FRotator,Z_Param_RecoilRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformRecoilWithGunMovement(Z_Param_RecoilRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPerformRecoilWithControlRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_RecoilRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformRecoilWithControlRotation(Z_Param_RecoilRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execCalculateRecoil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->CalculateRecoil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execCalculateSpreadModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateSpreadModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execClientHitscanCheckFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientHitscanCheckFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execClientValidateFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientValidateFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execReleaseFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execRepeatFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepeatFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execStopFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReload_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerReload_Validate"));
			return;
		}
		P_THIS->ServerReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execOnPressFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPressFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execSpawnProjectileBullet)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Modifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpreadAngleInDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSProjectile**)Z_Param__Result=P_THIS->SpawnProjectileBullet(Z_Param_Location,Z_Param_Rotation,Z_Param_Modifier,Z_Param_SpreadAngleInDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execCalculateNewBatchOfSpreadAngles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateNewBatchOfSpreadAngles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execServerProjectileCheckFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerProjectileCheckFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execClientProjectileCheckFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientProjectileCheckFire();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(Afpscharacter::execDebugFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugFunction();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	static FName NAME_Afpscharacter_BlueprintRep_CurrentlyCrouching = FName(TEXT("BlueprintRep_CurrentlyCrouching"));
	void Afpscharacter::BlueprintRep_CurrentlyCrouching()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_BlueprintRep_CurrentlyCrouching),NULL);
	}
	static FName NAME_Afpscharacter_ServerInteract = FName(TEXT("ServerInteract"));
	void Afpscharacter::ServerInteract()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerInteract),NULL);
	}
	static FName NAME_Afpscharacter_ServerPickupWeapon = FName(TEXT("ServerPickupWeapon"));
	void Afpscharacter::ServerPickupWeapon(AWeaponActor* WeaponPickup)
	{
		fpscharacter_eventServerPickupWeapon_Parms Parms;
		Parms.WeaponPickup=WeaponPickup;
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerPickupWeapon),&Parms);
	}
	static FName NAME_Afpscharacter_ServerReload = FName(TEXT("ServerReload"));
	void Afpscharacter::ServerReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerReload),NULL);
	}
	static FName NAME_Afpscharacter_ServerSetSprinting = FName(TEXT("ServerSetSprinting"));
	void Afpscharacter::ServerSetSprinting(bool NewSprinting)
	{
		fpscharacter_eventServerSetSprinting_Parms Parms;
		Parms.NewSprinting=NewSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerSetSprinting),&Parms);
	}
	static FName NAME_Afpscharacter_ServerStartJump = FName(TEXT("ServerStartJump"));
	void Afpscharacter::ServerStartJump()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerStartJump),NULL);
	}
	static FName NAME_Afpscharacter_ServerSwitchPrimary = FName(TEXT("ServerSwitchPrimary"));
	void Afpscharacter::ServerSwitchPrimary()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerSwitchPrimary),NULL);
	}
	static FName NAME_Afpscharacter_ServerSwitchSecondary = FName(TEXT("ServerSwitchSecondary"));
	void Afpscharacter::ServerSwitchSecondary()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerSwitchSecondary),NULL);
	}
	static FName NAME_Afpscharacter_ServerSyncControlRotation = FName(TEXT("ServerSyncControlRotation"));
	void Afpscharacter::ServerSyncControlRotation(FRotator NewSynchronisedControlRotation)
	{
		fpscharacter_eventServerSyncControlRotation_Parms Parms;
		Parms.NewSynchronisedControlRotation=NewSynchronisedControlRotation;
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerSyncControlRotation),&Parms);
	}
	static FName NAME_Afpscharacter_ServerValidateFire = FName(TEXT("ServerValidateFire"));
	void Afpscharacter::ServerValidateFire(float ClientFireTime)
	{
		fpscharacter_eventServerValidateFire_Parms Parms;
		Parms.ClientFireTime=ClientFireTime;
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerValidateFire),&Parms);
	}
	static FName NAME_Afpscharacter_ShowHitscanFireEffectFP = FName(TEXT("ShowHitscanFireEffectFP"));
	void Afpscharacter::ShowHitscanFireEffectFP(const FVector StartLocation, const FVector EndLocation, UNiagaraSystem* TracerEffect) const
	{
		fpscharacter_eventShowHitscanFireEffectFP_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.EndLocation=EndLocation;
		Parms.TracerEffect=TracerEffect;
		const_cast<Afpscharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ShowHitscanFireEffectFP),&Parms);
	}
	static FName NAME_Afpscharacter_ShowHitscanFireEffectTP = FName(TEXT("ShowHitscanFireEffectTP"));
	void Afpscharacter::ShowHitscanFireEffectTP(const FVector StartLocation, const FVector EndLocation, UNiagaraSystem* TracerEffect) const
	{
		fpscharacter_eventShowHitscanFireEffectTP_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.EndLocation=EndLocation;
		Parms.TracerEffect=TracerEffect;
		const_cast<Afpscharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ShowHitscanFireEffectTP),&Parms);
	}
	static FName NAME_Afpscharacter_ShowMuzzleFlashFP = FName(TEXT("ShowMuzzleFlashFP"));
	void Afpscharacter::ShowMuzzleFlashFP(const FVector StartLocation, const FVector Direction, UNiagaraSystem* MuzzleFlashEffect) const
	{
		fpscharacter_eventShowMuzzleFlashFP_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.Direction=Direction;
		Parms.MuzzleFlashEffect=MuzzleFlashEffect;
		const_cast<Afpscharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ShowMuzzleFlashFP),&Parms);
	}
	static FName NAME_Afpscharacter_ShowMuzzleFlashTP = FName(TEXT("ShowMuzzleFlashTP"));
	void Afpscharacter::ShowMuzzleFlashTP(const FVector StartLocation, const FVector Direction, UNiagaraSystem* MuzzleFlashEffect) const
	{
		fpscharacter_eventShowMuzzleFlashTP_Parms Parms;
		Parms.StartLocation=StartLocation;
		Parms.Direction=Direction;
		Parms.MuzzleFlashEffect=MuzzleFlashEffect;
		const_cast<Afpscharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ShowMuzzleFlashTP),&Parms);
	}
	void Afpscharacter::StaticRegisterNativesAfpscharacter()
	{
		UClass* Class = Afpscharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySensitivityAndInversionToMouseInputX", &Afpscharacter::execApplySensitivityAndInversionToMouseInputX },
			{ "ApplySensitivityAndInversionToMouseInputY", &Afpscharacter::execApplySensitivityAndInversionToMouseInputY },
			{ "CalculateNewBatchOfSpreadAngles", &Afpscharacter::execCalculateNewBatchOfSpreadAngles },
			{ "CalculateRecoil", &Afpscharacter::execCalculateRecoil },
			{ "CalculateSpreadDestination", &Afpscharacter::execCalculateSpreadDestination },
			{ "CalculateSpreadModifier", &Afpscharacter::execCalculateSpreadModifier },
			{ "CanUncrouch", &Afpscharacter::execCanUncrouch },
			{ "ClientHitscanCheckFire", &Afpscharacter::execClientHitscanCheckFire },
			{ "ClientProjectileCheckFire", &Afpscharacter::execClientProjectileCheckFire },
			{ "ClientValidateFire", &Afpscharacter::execClientValidateFire },
			{ "CollisionInteractCheck", &Afpscharacter::execCollisionInteractCheck },
			{ "CosmeticRecoil", &Afpscharacter::execCosmeticRecoil },
			{ "DamageLogic", &Afpscharacter::execDamageLogic },
#if WITH_EDITOR
			{ "DebugFunction", &Afpscharacter::execDebugFunction },
#endif // WITH_EDITOR
			{ "EnableCanInteract", &Afpscharacter::execEnableCanInteract },
			{ "GetCurrentAmmo", &Afpscharacter::execGetCurrentAmmo },
			{ "GetCurrentHealth", &Afpscharacter::execGetCurrentHealth },
			{ "GetCurrentlyAvailableInteractable", &Afpscharacter::execGetCurrentlyAvailableInteractable },
			{ "GetCurrentlyEquippedWeaponData", &Afpscharacter::execGetCurrentlyEquippedWeaponData },
			{ "GetCurrentStamina", &Afpscharacter::execGetCurrentStamina },
			{ "GetMaxHealth", &Afpscharacter::execGetMaxHealth },
			{ "GetMaxStamina", &Afpscharacter::execGetMaxStamina },
			{ "Interact", &Afpscharacter::execInteract },
			{ "InteractPressed", &Afpscharacter::execInteractPressed },
			{ "InteractWithNameOnly", &Afpscharacter::execInteractWithNameOnly },
			{ "LoseStamina", &Afpscharacter::execLoseStamina },
			{ "MoveX", &Afpscharacter::execMoveX },
			{ "MoveY", &Afpscharacter::execMoveY },
			{ "MultiRaycastDirectional", &Afpscharacter::execMultiRaycastDirectional },
			{ "MultiRaycastInCameraDirection", &Afpscharacter::execMultiRaycastInCameraDirection },
			{ "OnPressFire", &Afpscharacter::execOnPressFire },
			{ "OnReload", &Afpscharacter::execOnReload },
			{ "OnRep_ChangeSprinting", &Afpscharacter::execOnRep_ChangeSprinting },
			{ "OnRep_ChangeWeapon", &Afpscharacter::execOnRep_ChangeWeapon },
			{ "OnRep_ControlRotation", &Afpscharacter::execOnRep_ControlRotation },
			{ "OnRep_CurrentHealth", &Afpscharacter::execOnRep_CurrentHealth },
			{ "OnRep_CurrentlyCrouching", &Afpscharacter::execOnRep_CurrentlyCrouching },
			{ "OnRep_CurrentStamina", &Afpscharacter::execOnRep_CurrentStamina },
			{ "OnRep_EndPoint", &Afpscharacter::execOnRep_EndPoint },
			{ "OnRep_MuzzleCounter", &Afpscharacter::execOnRep_MuzzleCounter },
			{ "OnRep_ReceiveRecoilRecoveryChanges", &Afpscharacter::execOnRep_ReceiveRecoilRecoveryChanges },
			{ "PerformRecoilWithControlRotation", &Afpscharacter::execPerformRecoilWithControlRotation },
			{ "PerformRecoilWithGunMovement", &Afpscharacter::execPerformRecoilWithGunMovement },
			{ "PerformRecoilWithTPGunMovement", &Afpscharacter::execPerformRecoilWithTPGunMovement },
			{ "PickupWeapon", &Afpscharacter::execPickupWeapon },
			{ "PositionAndAttachGunInFP", &Afpscharacter::execPositionAndAttachGunInFP },
			{ "PositionAndAttachGunInTP", &Afpscharacter::execPositionAndAttachGunInTP },
			{ "PressSprint", &Afpscharacter::execPressSprint },
			{ "RecoverFPRotationOfGun", &Afpscharacter::execRecoverFPRotationOfGun },
			{ "ReduceRecoilRecovery", &Afpscharacter::execReduceRecoilRecovery },
			{ "ReleaseFire", &Afpscharacter::execReleaseFire },
			{ "ReleaseSprint", &Afpscharacter::execReleaseSprint },
			{ "RepeatFire", &Afpscharacter::execRepeatFire },
			{ "ServerGetInterpolatedTransformsForRewind", &Afpscharacter::execServerGetInterpolatedTransformsForRewind },
			{ "ServerHitscanCheckFire", &Afpscharacter::execServerHitscanCheckFire },
			{ "ServerInteract", &Afpscharacter::execServerInteract },
			{ "ServerPerformHitscan", &Afpscharacter::execServerPerformHitscan },
			{ "ServerPickupWeapon", &Afpscharacter::execServerPickupWeapon },
			{ "ServerProjectileCheckFire", &Afpscharacter::execServerProjectileCheckFire },
			{ "ServerReload", &Afpscharacter::execServerReload },
			{ "ServerRewindAndPerformHitscan", &Afpscharacter::execServerRewindAndPerformHitscan },
			{ "ServerSetSprinting", &Afpscharacter::execServerSetSprinting },
			{ "ServerStartJump", &Afpscharacter::execServerStartJump },
			{ "ServerSwitchPrimary", &Afpscharacter::execServerSwitchPrimary },
			{ "ServerSwitchSecondary", &Afpscharacter::execServerSwitchSecondary },
			{ "ServerSyncControlRotation", &Afpscharacter::execServerSyncControlRotation },
			{ "ServerValidateFire", &Afpscharacter::execServerValidateFire },
			{ "SetCurrentAmmo", &Afpscharacter::execSetCurrentAmmo },
			{ "SetCurrentHealth", &Afpscharacter::execSetCurrentHealth },
			{ "SetCurrentStamina", &Afpscharacter::execSetCurrentStamina },
			{ "SetSprinting", &Afpscharacter::execSetSprinting },
			{ "SingleRaycastInCameraDirection", &Afpscharacter::execSingleRaycastInCameraDirection },
			{ "SpawnProjectileBullet", &Afpscharacter::execSpawnProjectileBullet },
			{ "StartJump", &Afpscharacter::execStartJump },
			{ "StopFiring", &Afpscharacter::execStopFiring },
			{ "StopJump", &Afpscharacter::execStopJump },
			{ "SwitchPrimary", &Afpscharacter::execSwitchPrimary },
			{ "SwitchPrimaryInputImplementation", &Afpscharacter::execSwitchPrimaryInputImplementation },
			{ "SwitchSecondary", &Afpscharacter::execSwitchSecondary },
			{ "SwitchSecondaryInputImplementation", &Afpscharacter::execSwitchSecondaryInputImplementation },
			{ "TakeDamage", &Afpscharacter::execTakeDamage },
			{ "TimedRecoilRecoveryFunction", &Afpscharacter::execTimedRecoilRecoveryFunction },
			{ "UpdateAmmoDisplay", &Afpscharacter::execUpdateAmmoDisplay },
			{ "UpdateStamina", &Afpscharacter::execUpdateStamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics
	{
		struct fpscharacter_eventApplySensitivityAndInversionToMouseInputX_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventApplySensitivityAndInversionToMouseInputX_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used to apply sensitivities and mouse inversions to axes X and Y for mouse\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used to apply sensitivities and mouse inversions to axes X and Y for mouse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ApplySensitivityAndInversionToMouseInputX", nullptr, nullptr, sizeof(fpscharacter_eventApplySensitivityAndInversionToMouseInputX_Parms), Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics
	{
		struct fpscharacter_eventApplySensitivityAndInversionToMouseInputY_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventApplySensitivityAndInversionToMouseInputY_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ApplySensitivityAndInversionToMouseInputY", nullptr, nullptr, sizeof(fpscharacter_eventApplySensitivityAndInversionToMouseInputY_Parms), Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crouching" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "BlueprintRep_CurrentlyCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Calculates the spread angles to be used for the next shot so that the client has the same random spread angles as the server.\n//Generated on server. Caluclated after firing, and after equipping weapon\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Calculates the spread angles to be used for the next shot so that the client has the same random spread angles as the server.\nGenerated on server. Caluclated after firing, and after equipping weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "CalculateNewBatchOfSpreadAngles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics
	{
		struct fpscharacter_eventCalculateRecoil_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateRecoil_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Calculates the weapon recoil\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Calculates the weapon recoil" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "CalculateRecoil", nullptr, nullptr, sizeof(fpscharacter_eventCalculateRecoil_Parms), Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_CalculateRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_CalculateRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics
	{
		struct fpscharacter_eventCalculateSpreadDestination_Parms
		{
			FVector StartPoint;
			FRotator ForwardRotation;
			float Range;
			float Modifier;
			float SpreadAngleInDegress;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleInDegress;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_StartPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateSpreadDestination_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_StartPoint_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_ForwardRotation = { "ForwardRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateSpreadDestination_Parms, ForwardRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateSpreadDestination_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateSpreadDestination_Parms, Modifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_SpreadAngleInDegress = { "SpreadAngleInDegress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateSpreadDestination_Parms, SpreadAngleInDegress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateSpreadDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_StartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_ForwardRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_SpreadAngleInDegress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gets the end vector from the spread cone of the gun using the spread angle determined (which should be found randomyl first), for feeding into the correct hitscan function\n//Spread angle should be the same on client and server, for consistency.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Gets the end vector from the spread cone of the gun using the spread angle determined (which should be found randomyl first), for feeding into the correct hitscan function\nSpread angle should be the same on client and server, for consistency." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "CalculateSpreadDestination", nullptr, nullptr, sizeof(fpscharacter_eventCalculateSpreadDestination_Parms), Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics
	{
		struct fpscharacter_eventCalculateSpreadModifier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCalculateSpreadModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Calculates spread modifier\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Calculates spread modifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "CalculateSpreadModifier", nullptr, nullptr, sizeof(fpscharacter_eventCalculateSpreadModifier_Parms), Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics
	{
		struct fpscharacter_eventCanUncrouch_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((fpscharacter_eventCanUncrouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventCanUncrouch_Parms), &Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Checks if uncrouching is possible using a raycast\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Checks if uncrouching is possible using a raycast" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "CanUncrouch", nullptr, nullptr, sizeof(fpscharacter_eventCanUncrouch_Parms), Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_CanUncrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_CanUncrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Checks if the client will hit anything on their side when they fire (hitscan)\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Checks if the client will hit anything on their side when they fire (hitscan)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ClientHitscanCheckFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called for firing projectiles\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Called for firing projectiles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ClientProjectileCheckFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ClientValidateFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ClientValidateFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Checks if the client can fire (checks ammo, fire rate, animation etc). If so, we move onto ClientFire\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Checks if the client can fire (checks ammo, fire rate, animation etc). If so, we move onto ClientFire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ClientValidateFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ClientValidateFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ClientValidateFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ClientValidateFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ClientValidateFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ClientValidateFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics
	{
		struct fpscharacter_eventCollisionInteractCheck_Parms
		{
			AActor* CollidingActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollidingActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::NewProp_CollidingActor = { "CollidingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCollisionInteractCheck_Parms, CollidingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((fpscharacter_eventCollisionInteractCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventCollisionInteractCheck_Parms), &Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::NewProp_CollidingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Checks for interact via collision\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Checks for interact via collision" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "CollisionInteractCheck", nullptr, nullptr, sizeof(fpscharacter_eventCollisionInteractCheck_Parms), Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics
	{
		struct fpscharacter_eventCosmeticRecoil_Parms
		{
			FRotator RecoilRotator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::NewProp_RecoilRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::NewProp_RecoilRotator = { "RecoilRotator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventCosmeticRecoil_Parms, RecoilRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::NewProp_RecoilRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::NewProp_RecoilRotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::NewProp_RecoilRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Executes cosmetic recoil, should only be done after caluclating recoil to avoid changes to control rotation stacking.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Executes cosmetic recoil, should only be done after caluclating recoil to avoid changes to control rotation stacking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "CosmeticRecoil", nullptr, nullptr, sizeof(fpscharacter_eventCosmeticRecoil_Parms), Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_CosmeticRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_CosmeticRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics
	{
		struct fpscharacter_eventDamageLogic_Parms
		{
			TArray<FHitResult> HitResults;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::NewProp_HitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventDamageLogic_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::NewProp_HitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::NewProp_HitResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::NewProp_HitResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::NewProp_HitResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Performs the damage logic on hitting targets.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Performs the damage logic on hitting targets." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "DamageLogic", nullptr, nullptr, sizeof(fpscharacter_eventDamageLogic_Parms), Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_DamageLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_DamageLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_Afpscharacter_DebugFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_DebugFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_DebugFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "DebugFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_DebugFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_DebugFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_DebugFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_DebugFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_Afpscharacter_EnableCanInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_EnableCanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_EnableCanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "EnableCanInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_EnableCanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_EnableCanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_EnableCanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_EnableCanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics
	{
		struct fpscharacter_eventGetCurrentAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "GetCurrentAmmo", nullptr, nullptr, sizeof(fpscharacter_eventGetCurrentAmmo_Parms), Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics
	{
		struct fpscharacter_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "//Getter for current health\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Getter for current health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "GetCurrentHealth", nullptr, nullptr, sizeof(fpscharacter_eventGetCurrentHealth_Parms), Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics
	{
		struct fpscharacter_eventGetCurrentlyAvailableInteractable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((fpscharacter_eventGetCurrentlyAvailableInteractable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventGetCurrentlyAvailableInteractable_Parms), &Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Gets the weapon actor the player is currently looking at within view range, and returns the fstring of its name. To be implemented in HUD blueprints from the return value\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Gets the weapon actor the player is currently looking at within view range, and returns the fstring of its name. To be implemented in HUD blueprints from the return value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "GetCurrentlyAvailableInteractable", nullptr, nullptr, sizeof(fpscharacter_eventGetCurrentlyAvailableInteractable_Parms), Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics
	{
		struct fpscharacter_eventGetCurrentlyEquippedWeaponData_Parms
		{
			FWeaponDataStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventGetCurrentlyEquippedWeaponData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "GetCurrentlyEquippedWeaponData", nullptr, nullptr, sizeof(fpscharacter_eventGetCurrentlyEquippedWeaponData_Parms), Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics
	{
		struct fpscharacter_eventGetCurrentStamina_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventGetCurrentStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Getter for current Stamina\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Getter for current Stamina" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "GetCurrentStamina", nullptr, nullptr, sizeof(fpscharacter_eventGetCurrentStamina_Parms), Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_GetCurrentStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_GetCurrentStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics
	{
		struct fpscharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "//Getter for max health\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Getter for max health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(fpscharacter_eventGetMaxHealth_Parms), Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics
	{
		struct fpscharacter_eventGetMaxStamina_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Getter for max stamina\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Getter for max stamina" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(fpscharacter_eventGetMaxStamina_Parms), Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_Interact_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//For if interaction is valid, should handle checks for things like if looking at item in range, or in collision etc\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "For if interaction is valid, should handle checks for things like if looking at item in range, or in collision etc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_InteractPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_InteractPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function for pressing interact\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Function for pressing interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_InteractPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "InteractPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_InteractPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_InteractPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_InteractPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_InteractPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics
	{
		struct fpscharacter_eventInteractWithNameOnly_Parms
		{
			FName OutName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::NewProp_OutName = { "OutName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventInteractWithNameOnly_Parms, OutName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::NewProp_OutName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Overload for if we are just looking, and want the interaction name instead\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Overload for if we are just looking, and want the interaction name instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "InteractWithNameOnly", nullptr, nullptr, sizeof(fpscharacter_eventInteractWithNameOnly_Parms), Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics
	{
		struct fpscharacter_eventLoseStamina_Parms
		{
			float LostStamina;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LostStamina;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::NewProp_LostStamina = { "LostStamina", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventLoseStamina_Parms, LostStamina), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventLoseStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::NewProp_LostStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Event for losing stamina\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Event for losing stamina" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "LoseStamina", nullptr, nullptr, sizeof(fpscharacter_eventLoseStamina_Parms), Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_LoseStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_LoseStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_MoveX_Statics
	{
		struct fpscharacter_eventMoveX_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_MoveX_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMoveX_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_MoveX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MoveX_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_MoveX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//handles movement inputs for right-left (right = positive)\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "handles movement inputs for right-left (right = positive)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_MoveX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "MoveX", nullptr, nullptr, sizeof(fpscharacter_eventMoveX_Parms), Z_Construct_UFunction_Afpscharacter_MoveX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MoveX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_MoveX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_MoveX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_MoveY_Statics
	{
		struct fpscharacter_eventMoveY_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_MoveY_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMoveY_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_MoveY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MoveY_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_MoveY_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Handles movement inputs for forward-backward\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Handles movement inputs for forward-backward" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_MoveY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "MoveY", nullptr, nullptr, sizeof(fpscharacter_eventMoveY_Parms), Z_Construct_UFunction_Afpscharacter_MoveY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MoveY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_MoveY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_MoveY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics
	{
		struct fpscharacter_eventMultiRaycastDirectional_Parms
		{
			TArray<FHitResult> ResultOutHit;
			FVector StartPoint;
			FVector EndLocation;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultOutHit_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultOutHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ResultOutHit_Inner = { "ResultOutHit", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ResultOutHit = { "ResultOutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMultiRaycastDirectional_Parms, ResultOutHit), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_StartPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMultiRaycastDirectional_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMultiRaycastDirectional_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_EndLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMultiRaycastDirectional_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((fpscharacter_eventMultiRaycastDirectional_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventMultiRaycastDirectional_Parms), &Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ResultOutHit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ResultOutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_StartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used in shooting with spread - does not actually create the spread cone, merely performs the actual beam at the desired angle. Cone should be generated before.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used in shooting with spread - does not actually create the spread cone, merely performs the actual beam at the desired angle. Cone should be generated before." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "MultiRaycastDirectional", nullptr, nullptr, sizeof(fpscharacter_eventMultiRaycastDirectional_Parms), Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics
	{
		struct fpscharacter_eventMultiRaycastInCameraDirection_Parms
		{
			TArray<FHitResult> ResultOutHit;
			float RaycastRange;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultOutHit_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultOutHit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RaycastRange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ResultOutHit_Inner = { "ResultOutHit", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ResultOutHit = { "ResultOutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMultiRaycastInCameraDirection_Parms, ResultOutHit), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_RaycastRange = { "RaycastRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMultiRaycastInCameraDirection_Parms, RaycastRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventMultiRaycastInCameraDirection_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((fpscharacter_eventMultiRaycastInCameraDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventMultiRaycastInCameraDirection_Parms), &Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ResultOutHit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ResultOutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_RaycastRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used in shooting, multi raycast\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used in shooting, multi raycast" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "MultiRaycastInCameraDirection", nullptr, nullptr, sizeof(fpscharacter_eventMultiRaycastInCameraDirection_Parms), Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnPressFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnPressFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called on pressing fire, used for burst weapons and stuff\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Called on pressing fire, used for burst weapons and stuff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnPressFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnPressFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnPressFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnPressFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnPressFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnPressFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnReload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//For reloading the gun\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "For reloading the gun" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//This function will update on the server whne the client decides to start or stop sprinting\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "This function will update on the server whne the client decides to start or stop sprinting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_ChangeSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Stores current weapon being held, also used on server rep and sdtuff\n//UPROPERTY(ReplicatedUsing = OnRep_ChangeWeapon)\n//Guns EquippedGun;\n//Replicates gun equip on clients - when someone switches gun on server, all cleints must replicate this visually.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores current weapon being held, also used on server rep and sdtuff\nUPROPERTY(ReplicatedUsing = OnRep_ChangeWeapon)\nGuns EquippedGun;\nReplicates gun equip on clients - when someone switches gun on server, all cleints must replicate this visually." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_ChangeWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_ControlRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicates current health\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Replicates current health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_CurrentlyCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicated current stamina\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Replicated current stamina" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_CurrentStamina", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Here is the repNotify function\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Here is the repNotify function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_EndPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_MuzzleCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Performs alterations to gun model rotation and stuff to recover recoil based on recoil recovery increasing\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Performs alterations to gun model rotation and stuff to recover recoil based on recoil recovery increasing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "OnRep_ReceiveRecoilRecoveryChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics
	{
		struct fpscharacter_eventPerformRecoilWithControlRotation_Parms
		{
			FRotator RecoilRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::NewProp_RecoilRotation = { "RecoilRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventPerformRecoilWithControlRotation_Parms, RecoilRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::NewProp_RecoilRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Performs recoil with the camera moving (moves whole control rotation upwards)\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Performs recoil with the camera moving (moves whole control rotation upwards)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PerformRecoilWithControlRotation", nullptr, nullptr, sizeof(fpscharacter_eventPerformRecoilWithControlRotation_Parms), Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics
	{
		struct fpscharacter_eventPerformRecoilWithGunMovement_Parms
		{
			FRotator RecoilRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::NewProp_RecoilRotation = { "RecoilRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventPerformRecoilWithGunMovement_Parms, RecoilRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::NewProp_RecoilRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Performs recoil without the camera moving (just the gun moves upward visibly), best used for horizontal recoil\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Performs recoil without the camera moving (just the gun moves upward visibly), best used for horizontal recoil" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PerformRecoilWithGunMovement", nullptr, nullptr, sizeof(fpscharacter_eventPerformRecoilWithGunMovement_Parms), Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Performs third person recoil, will not actually sync with gun mvoement\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Performs third person recoil, will not actually sync with gun mvoement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PerformRecoilWithTPGunMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics
	{
		struct fpscharacter_eventPickupWeapon_Parms
		{
			AWeaponActor* WeaponPickup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::NewProp_WeaponPickup = { "WeaponPickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventPickupWeapon_Parms, WeaponPickup), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::NewProp_WeaponPickup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Localfunction for picking up weapon from floor\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Localfunction for picking up weapon from floor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PickupWeapon", nullptr, nullptr, sizeof(fpscharacter_eventPickupWeapon_Parms), Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PickupWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PickupWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics
	{
		struct fpscharacter_eventPositionAndAttachGunInFP_Parms
		{
			FWeaponDataStruct GunToEquip;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::NewProp_GunToEquip = { "GunToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventPositionAndAttachGunInFP_Parms, GunToEquip), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::NewProp_GunToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Does the actual positioning of gun in first person\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Does the actual positioning of gun in first person" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PositionAndAttachGunInFP", nullptr, nullptr, sizeof(fpscharacter_eventPositionAndAttachGunInFP_Parms), Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics
	{
		struct fpscharacter_eventPositionAndAttachGunInTP_Parms
		{
			FWeaponDataStruct GunToEquip;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::NewProp_GunToEquip = { "GunToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventPositionAndAttachGunInTP_Parms, GunToEquip), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::NewProp_GunToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PositionAndAttachGunInTP", nullptr, nullptr, sizeof(fpscharacter_eventPositionAndAttachGunInTP_Parms), Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_PressSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//For handling sprinting\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "For handling sprinting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PressSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PressSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Recovers the gun rotation (but not control rotation).\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Recovers the gun rotation (but not control rotation)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "RecoverFPRotationOfGun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Reduce recoil recovery, to be run on server\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Reduce recoil recovery, to be run on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ReduceRecoilRecovery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ReleaseFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ReleaseFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when no longer pressing fire button\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Called when no longer pressing fire button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ReleaseFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ReleaseFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ReleaseFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ReleaseFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ReleaseFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ReleaseFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ReleaseSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ReleaseSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_RepeatFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_RepeatFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called on timer to allow weapon to fire at its fire rate. Integrates automatic weapon functions as needed.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Called on timer to allow weapon to fire at its fire rate. Integrates automatic weapon functions as needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_RepeatFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "RepeatFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_RepeatFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_RepeatFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_RepeatFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_RepeatFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics
	{
		struct fpscharacter_eventServerGetInterpolatedTransformsForRewind_Parms
		{
			float ClientFireTime;
			TMap<AActor*,FRewindDataStruct> OutActorTransformsToBeRewinded;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientFireTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutActorTransformsToBeRewinded_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActorTransformsToBeRewinded_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutActorTransformsToBeRewinded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_ClientFireTime = { "ClientFireTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventServerGetInterpolatedTransformsForRewind_Parms, ClientFireTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_OutActorTransformsToBeRewinded_ValueProp = { "OutActorTransformsToBeRewinded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRewindDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_OutActorTransformsToBeRewinded_Key_KeyProp = { "OutActorTransformsToBeRewinded_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_OutActorTransformsToBeRewinded = { "OutActorTransformsToBeRewinded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventServerGetInterpolatedTransformsForRewind_Parms, OutActorTransformsToBeRewinded), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_ClientFireTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_OutActorTransformsToBeRewinded_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_OutActorTransformsToBeRewinded_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::NewProp_OutActorTransformsToBeRewinded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used to get the interpolated transforms for all rewind components, for the specific timestamp\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used to get the interpolated transforms for all rewind components, for the specific timestamp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerGetInterpolatedTransformsForRewind", nullptr, nullptr, sizeof(fpscharacter_eventServerGetInterpolatedTransformsForRewind_Parms), Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics
	{
		struct fpscharacter_eventServerHitscanCheckFire_Parms
		{
			float ClientFireTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientFireTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::NewProp_ClientFireTime = { "ClientFireTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventServerHitscanCheckFire_Parms, ClientFireTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::NewProp_ClientFireTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Checks if the player hit anything on the server, requires rewinds and stuff. Not an RPC as called by ServerValidateFire\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Checks if the player hit anything on the server, requires rewinds and stuff. Not an RPC as called by ServerValidateFire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerHitscanCheckFire", nullptr, nullptr, sizeof(fpscharacter_eventServerHitscanCheckFire_Parms), Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09May call ServerPickupWeapon RPC\n\x09*/" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "May call ServerPickupWeapon RPC" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Performs the serverside hitscan - we also deal damage and stuff here\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Performs the serverside hitscan - we also deal damage and stuff here" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerPerformHitscan", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::NewProp_WeaponPickup = { "WeaponPickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventServerPickupWeapon_Parms, WeaponPickup), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::NewProp_WeaponPickup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//used on equipping gun from floor, logic for server is run here - should consist of updating variables, and visual changes if needed\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "used on equipping gun from floor, logic for server is run here - should consist of updating variables, and visual changes if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerPickupWeapon", nullptr, nullptr, sizeof(fpscharacter_eventServerPickupWeapon_Parms), Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerProjectileCheckFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerReload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Server reload function, to regulate times and stuff\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Server reload function, to regulate times and stuff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics
	{
		struct fpscharacter_eventServerRewindAndPerformHitscan_Parms
		{
			TMap<AActor*,FRewindDataStruct> ValuesToBeUsedInRewind;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValuesToBeUsedInRewind_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValuesToBeUsedInRewind_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValuesToBeUsedInRewind_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ValuesToBeUsedInRewind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind_ValueProp = { "ValuesToBeUsedInRewind", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRewindDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind_Key_KeyProp = { "ValuesToBeUsedInRewind_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind = { "ValuesToBeUsedInRewind", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventServerRewindAndPerformHitscan_Parms, ValuesToBeUsedInRewind), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::NewProp_ValuesToBeUsedInRewind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//rewinds all the actors to the previous point, and then performs the hitscan, and then returns them back\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "rewinds all the actors to the previous point, and then performs the hitscan, and then returns them back" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerRewindAndPerformHitscan", nullptr, nullptr, sizeof(fpscharacter_eventServerRewindAndPerformHitscan_Parms), Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics
	{
		static void NewProp_NewSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewSprinting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::NewProp_NewSprinting_SetBit(void* Obj)
	{
		((fpscharacter_eventServerSetSprinting_Parms*)Obj)->NewSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::NewProp_NewSprinting = { "NewSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventServerSetSprinting_Parms), &Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::NewProp_NewSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::NewProp_NewSprinting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//This RPC function runs on server and is respknsible for actually modifying player's speed\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "This RPC function runs on server and is respknsible for actually modifying player's speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerSetSprinting", nullptr, nullptr, sizeof(fpscharacter_eventServerSetSprinting_Parms), Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerSetSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerStartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerStartJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//RPC for jumping, so stamina loss and stuff works properly\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "RPC for jumping, so stamina loss and stuff works properly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerStartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerStartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerStartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerStartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerStartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerStartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Logic for causing visual swap to primary weapon on server goes here, along with setting equipped weapon variables\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Logic for causing visual swap to primary weapon on server goes here, along with setting equipped weapon variables" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerSwitchPrimary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Like above but for secondary weapon\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Like above but for secondary weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerSwitchSecondary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSynchronisedControlRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::NewProp_NewSynchronisedControlRotation = { "NewSynchronisedControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventServerSyncControlRotation_Parms, NewSynchronisedControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::NewProp_NewSynchronisedControlRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Unreliable RPC call to sync server camera pitch.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Unreliable RPC call to sync server camera pitch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerSyncControlRotation", nullptr, nullptr, sizeof(fpscharacter_eventServerSyncControlRotation_Parms), Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientFireTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::NewProp_ClientFireTime = { "ClientFireTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventServerValidateFire_Parms, ClientFireTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::NewProp_ClientFireTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Checks on server if the player could actually fire, to prevent cheating with ammo or firerates etc. RPC called by ClientHitscanCheckFire\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Checks on server if the player could actually fire, to prevent cheating with ammo or firerates etc. RPC called by ClientHitscanCheckFire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerValidateFire", nullptr, nullptr, sizeof(fpscharacter_eventServerValidateFire_Parms), Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerValidateFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerValidateFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics
	{
		struct fpscharacter_eventSetCurrentAmmo_Parms
		{
			int32 NewAmmo;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSetCurrentAmmo_Parms, NewAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::NewProp_NewAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//SHOULD BE USED WHEN NEEDING TO CHANGE CURRENT AMMO, AS IT CHANGES DISPLAY AMMO TOO\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "SHOULD BE USED WHEN NEEDING TO CHANGE CURRENT AMMO, AS IT CHANGES DISPLAY AMMO TOO" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SetCurrentAmmo", nullptr, nullptr, sizeof(fpscharacter_eventSetCurrentAmmo_Parms), Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics
	{
		struct fpscharacter_eventSetCurrentHealth_Parms
		{
			float healthValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::NewProp_healthValue = { "healthValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSetCurrentHealth_Parms, healthValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::NewProp_healthValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "//Setter for current health. Clamps between 0 and maxhealth, and calls OnHealthUpdate. should only be called on the server.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Setter for current health. Clamps between 0 and maxhealth, and calls OnHealthUpdate. should only be called on the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SetCurrentHealth", nullptr, nullptr, sizeof(fpscharacter_eventSetCurrentHealth_Parms), Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics
	{
		struct fpscharacter_eventSetCurrentStamina_Parms
		{
			float staminaValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_staminaValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::NewProp_staminaValue = { "staminaValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSetCurrentStamina_Parms, staminaValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::NewProp_staminaValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Setter for current stamina. Clamps between 0 and maxstamina, and calls OnStaminaUpdate. should only be called on the server.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Setter for current stamina. Clamps between 0 and maxstamina, and calls OnStaminaUpdate. should only be called on the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SetCurrentStamina", nullptr, nullptr, sizeof(fpscharacter_eventSetCurrentStamina_Parms), Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SetCurrentStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SetCurrentStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics
	{
		struct fpscharacter_eventSetSprinting_Parms
		{
			bool NewSprinting;
		};
		static void NewProp_NewSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewSprinting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::NewProp_NewSprinting_SetBit(void* Obj)
	{
		((fpscharacter_eventSetSprinting_Parms*)Obj)->NewSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::NewProp_NewSprinting = { "NewSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventSetSprinting_Parms), &Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::NewProp_NewSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::NewProp_NewSprinting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Sets whether player is sprinting or not\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Sets whether player is sprinting or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SetSprinting", nullptr, nullptr, sizeof(fpscharacter_eventSetSprinting_Parms), Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SetSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SetSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowHitscanFireEffectFP_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowHitscanFireEffectFP_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_EndLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_TracerEffect = { "TracerEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowHitscanFireEffectFP_Parms, TracerEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::NewProp_TracerEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Shows first person cosmetic hitscan bullet trace\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Shows first person cosmetic hitscan bullet trace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ShowHitscanFireEffectFP", nullptr, nullptr, sizeof(fpscharacter_eventShowHitscanFireEffectFP_Parms), Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowHitscanFireEffectTP_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowHitscanFireEffectTP_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_EndLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_TracerEffect = { "TracerEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowHitscanFireEffectTP_Parms, TracerEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::NewProp_TracerEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Shows cosmetic hitscan bullet trace for third person\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Shows cosmetic hitscan bullet trace for third person" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ShowHitscanFireEffectTP", nullptr, nullptr, sizeof(fpscharacter_eventShowHitscanFireEffectTP_Parms), Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowMuzzleFlashFP_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowMuzzleFlashFP_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_MuzzleFlashEffect = { "MuzzleFlashEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowMuzzleFlashFP_Parms, MuzzleFlashEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::NewProp_MuzzleFlashEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Shows cosmetic muzzle flash in first person\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Shows cosmetic muzzle flash in first person" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ShowMuzzleFlashFP", nullptr, nullptr, sizeof(fpscharacter_eventShowMuzzleFlashFP_Parms), Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowMuzzleFlashTP_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowMuzzleFlashTP_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_MuzzleFlashEffect = { "MuzzleFlashEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventShowMuzzleFlashTP_Parms, MuzzleFlashEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::NewProp_MuzzleFlashEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Shows cosmetic muzzle flash in third person\n//Direction will be calculated using the facing direction of the muzzle compnent.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Shows cosmetic muzzle flash in third person\nDirection will be calculated using the facing direction of the muzzle compnent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ShowMuzzleFlashTP", nullptr, nullptr, sizeof(fpscharacter_eventShowMuzzleFlashTP_Parms), Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics
	{
		struct fpscharacter_eventSingleRaycastInCameraDirection_Parms
		{
			FHitResult ResultOutHit;
			float RaycastRange;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultOutHit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RaycastRange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_ResultOutHit = { "ResultOutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSingleRaycastInCameraDirection_Parms, ResultOutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_RaycastRange = { "RaycastRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSingleRaycastInCameraDirection_Parms, RaycastRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSingleRaycastInCameraDirection_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((fpscharacter_eventSingleRaycastInCameraDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventSingleRaycastInCameraDirection_Parms), &Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_ResultOutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_RaycastRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used to send a raycast forwards from camera, \n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used to send a raycast forwards from camera," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SingleRaycastInCameraDirection", nullptr, nullptr, sizeof(fpscharacter_eventSingleRaycastInCameraDirection_Parms), Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics
	{
		struct fpscharacter_eventSpawnProjectileBullet_Parms
		{
			FVector Location;
			FRotator Rotation;
			float Modifier;
			float SpreadAngleInDegrees;
			AFPSProjectile* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleInDegrees;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSpawnProjectileBullet_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSpawnProjectileBullet_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSpawnProjectileBullet_Parms, Modifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_SpreadAngleInDegrees = { "SpreadAngleInDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSpawnProjectileBullet_Parms, SpreadAngleInDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventSpawnProjectileBullet_Parms, ReturnValue), Z_Construct_UClass_AFPSProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_SpreadAngleInDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used to spawn a projectile\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used to spawn a projectile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SpawnProjectileBullet", nullptr, nullptr, sizeof(fpscharacter_eventSpawnProjectileBullet_Parms), Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_StartJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used to handle jumping\n//Sets jump flag when key is pressed to jump\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used to handle jumping\nSets jump flag when key is pressed to jump" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "StartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_StopFiring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_StopFiring_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Stops firing burst\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stops firing burst" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_StopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "StopFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_StopFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_StopFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_StopFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_StopFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_StopJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Clears jump flag when key is released\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Clears jump flag when key is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics
	{
		struct fpscharacter_eventSwitchPrimary_Parms
		{
			bool bIsRep;
		};
		static void NewProp_bIsRep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::NewProp_bIsRep_SetBit(void* Obj)
	{
		((fpscharacter_eventSwitchPrimary_Parms*)Obj)->bIsRep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::NewProp_bIsRep = { "bIsRep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventSwitchPrimary_Parms), &Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::NewProp_bIsRep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::NewProp_bIsRep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Initial local function call for switching weapon\n" },
		{ "CPP_Default_bIsRep", "false" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Initial local function call for switching weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SwitchPrimary", nullptr, nullptr, sizeof(fpscharacter_eventSwitchPrimary_Parms), Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SwitchPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SwitchPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SwitchPrimaryInputImplementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics
	{
		struct fpscharacter_eventSwitchSecondary_Parms
		{
			bool bIsRep;
		};
		static void NewProp_bIsRep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::NewProp_bIsRep_SetBit(void* Obj)
	{
		((fpscharacter_eventSwitchSecondary_Parms*)Obj)->bIsRep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::NewProp_bIsRep = { "bIsRep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(fpscharacter_eventSwitchSecondary_Parms), &Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::NewProp_bIsRep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::NewProp_bIsRep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Initial local function call for switching weapon\n" },
		{ "CPP_Default_bIsRep", "false" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Initial local function call for switching weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SwitchSecondary", nullptr, nullptr, sizeof(fpscharacter_eventSwitchSecondary_Parms), Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SwitchSecondary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SwitchSecondary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SwitchSecondaryInputImplementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics
	{
		struct fpscharacter_eventTakeDamage_Parms
		{
			float DamageTaken;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageTaken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventTakeDamage_Parms, DamageTaken), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageTaken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "//Event for taking damage, overriden from APawn base class\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Event for taking damage, overriden from APawn base class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(fpscharacter_eventTakeDamage_Parms), Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics
	{
		struct fpscharacter_eventTimedRecoilRecoveryFunction_Parms
		{
			FTimerHandle TimerHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventTimedRecoilRecoveryFunction_Parms, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::NewProp_TimerHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Handled by a timer, responsible for recoil recovery\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Handled by a timer, responsible for recoil recovery" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "TimedRecoilRecoveryFunction", nullptr, nullptr, sizeof(fpscharacter_eventTimedRecoilRecoveryFunction_Parms), Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "UpdateAmmoDisplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_UpdateStamina_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_UpdateStamina_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//updates stamina , called every @StaminaUpdateIntervalInSeconds by timer\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "updates stamina , called every @StaminaUpdateIntervalInSeconds by timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_UpdateStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "UpdateStamina", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_UpdateStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_UpdateStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_UpdateStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_UpdateStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Afpscharacter_NoRegister()
	{
		return Afpscharacter::StaticClass();
	}
	struct Z_Construct_UClass_Afpscharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeftHanded_MetaData[];
#endif
		static void NewProp_IsLeftHanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeftHanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToPlaceProjectileFromCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceToPlaceProjectileFromCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponAfterPickup_MetaData[];
#endif
		static void NewProp_SwitchWeaponAfterPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchWeaponAfterPickup;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicatedSpreadAngles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedSpreadAngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicatedSpreadAngles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedForLosingAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedForLosingAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMovementSpreadModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMovementSpreadModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMovementSpreadModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMovementSpreadModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilRecovery_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilRecovery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilRecoveryHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilRecoveryHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MuzzleCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorsoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TorsoMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LegMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractInputIntervalTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractInputIntervalTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentInteractionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInteractRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInteractRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[];
#endif
		static void NewProp_bCanInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SynchronisedControlRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SynchronisedControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lognum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lognum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AmmoDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyCrouching_MetaData[];
#endif
		static void NewProp_CurrentlyCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CurrentlyCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JustLanded_MetaData[];
#endif
		static void NewProp_JustLanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JustLanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchedHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchedHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaUpdateIntervalInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaUpdateIntervalInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaLossRateWhenSprinting_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaLossRateWhenSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaLossWhenJumping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaLossWhenJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSprinting_MetaData[];
#endif
		static void NewProp_IsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertX_MetaData[];
#endif
		static void NewProp_InvertX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertY_MetaData[];
#endif
		static void NewProp_InvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleCrouch_MetaData[];
#endif
		static void NewProp_ToggleCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToggleCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleSprint_MetaData[];
#endif
		static void NewProp_ToggleSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToggleSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSGunComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSGunComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSRewindComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSRewindComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonGunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonGunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSMuzzleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSMuzzleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPMuzzleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TPMuzzleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaminaTimerHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippedGun_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippedGun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afpscharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Afpscharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX, "ApplySensitivityAndInversionToMouseInputX" }, // 44909788
		{ &Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY, "ApplySensitivityAndInversionToMouseInputY" }, // 2463904650
		{ &Z_Construct_UFunction_Afpscharacter_BlueprintRep_CurrentlyCrouching, "BlueprintRep_CurrentlyCrouching" }, // 3925505741
		{ &Z_Construct_UFunction_Afpscharacter_CalculateNewBatchOfSpreadAngles, "CalculateNewBatchOfSpreadAngles" }, // 2760414076
		{ &Z_Construct_UFunction_Afpscharacter_CalculateRecoil, "CalculateRecoil" }, // 2162269155
		{ &Z_Construct_UFunction_Afpscharacter_CalculateSpreadDestination, "CalculateSpreadDestination" }, // 2882979023
		{ &Z_Construct_UFunction_Afpscharacter_CalculateSpreadModifier, "CalculateSpreadModifier" }, // 4014985952
		{ &Z_Construct_UFunction_Afpscharacter_CanUncrouch, "CanUncrouch" }, // 2800277747
		{ &Z_Construct_UFunction_Afpscharacter_ClientHitscanCheckFire, "ClientHitscanCheckFire" }, // 2018308127
		{ &Z_Construct_UFunction_Afpscharacter_ClientProjectileCheckFire, "ClientProjectileCheckFire" }, // 1648069194
		{ &Z_Construct_UFunction_Afpscharacter_ClientValidateFire, "ClientValidateFire" }, // 4176438478
		{ &Z_Construct_UFunction_Afpscharacter_CollisionInteractCheck, "CollisionInteractCheck" }, // 2820686847
		{ &Z_Construct_UFunction_Afpscharacter_CosmeticRecoil, "CosmeticRecoil" }, // 2625716413
		{ &Z_Construct_UFunction_Afpscharacter_DamageLogic, "DamageLogic" }, // 2452030100
#if WITH_EDITOR
		{ &Z_Construct_UFunction_Afpscharacter_DebugFunction, "DebugFunction" }, // 2576565601
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_Afpscharacter_EnableCanInteract, "EnableCanInteract" }, // 486443841
		{ &Z_Construct_UFunction_Afpscharacter_GetCurrentAmmo, "GetCurrentAmmo" }, // 870792332
		{ &Z_Construct_UFunction_Afpscharacter_GetCurrentHealth, "GetCurrentHealth" }, // 1678929625
		{ &Z_Construct_UFunction_Afpscharacter_GetCurrentlyAvailableInteractable, "GetCurrentlyAvailableInteractable" }, // 4101439539
		{ &Z_Construct_UFunction_Afpscharacter_GetCurrentlyEquippedWeaponData, "GetCurrentlyEquippedWeaponData" }, // 87897244
		{ &Z_Construct_UFunction_Afpscharacter_GetCurrentStamina, "GetCurrentStamina" }, // 1877127190
		{ &Z_Construct_UFunction_Afpscharacter_GetMaxHealth, "GetMaxHealth" }, // 2374698544
		{ &Z_Construct_UFunction_Afpscharacter_GetMaxStamina, "GetMaxStamina" }, // 3774589202
		{ &Z_Construct_UFunction_Afpscharacter_Interact, "Interact" }, // 2837811715
		{ &Z_Construct_UFunction_Afpscharacter_InteractPressed, "InteractPressed" }, // 3915637269
		{ &Z_Construct_UFunction_Afpscharacter_InteractWithNameOnly, "InteractWithNameOnly" }, // 2027393690
		{ &Z_Construct_UFunction_Afpscharacter_LoseStamina, "LoseStamina" }, // 3542002802
		{ &Z_Construct_UFunction_Afpscharacter_MoveX, "MoveX" }, // 1139188873
		{ &Z_Construct_UFunction_Afpscharacter_MoveY, "MoveY" }, // 2819240834
		{ &Z_Construct_UFunction_Afpscharacter_MultiRaycastDirectional, "MultiRaycastDirectional" }, // 2311772849
		{ &Z_Construct_UFunction_Afpscharacter_MultiRaycastInCameraDirection, "MultiRaycastInCameraDirection" }, // 3425216501
		{ &Z_Construct_UFunction_Afpscharacter_OnPressFire, "OnPressFire" }, // 2617117134
		{ &Z_Construct_UFunction_Afpscharacter_OnReload, "OnReload" }, // 1864971520
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting, "OnRep_ChangeSprinting" }, // 2106207384
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon, "OnRep_ChangeWeapon" }, // 21635020
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_ControlRotation, "OnRep_ControlRotation" }, // 1226333665
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 2772940714
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_CurrentlyCrouching, "OnRep_CurrentlyCrouching" }, // 4044249521
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina, "OnRep_CurrentStamina" }, // 3514113238
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_EndPoint, "OnRep_EndPoint" }, // 3506385511
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_MuzzleCounter, "OnRep_MuzzleCounter" }, // 30205078
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_ReceiveRecoilRecoveryChanges, "OnRep_ReceiveRecoilRecoveryChanges" }, // 2848857445
		{ &Z_Construct_UFunction_Afpscharacter_PerformRecoilWithControlRotation, "PerformRecoilWithControlRotation" }, // 3414128886
		{ &Z_Construct_UFunction_Afpscharacter_PerformRecoilWithGunMovement, "PerformRecoilWithGunMovement" }, // 1345217734
		{ &Z_Construct_UFunction_Afpscharacter_PerformRecoilWithTPGunMovement, "PerformRecoilWithTPGunMovement" }, // 730663679
		{ &Z_Construct_UFunction_Afpscharacter_PickupWeapon, "PickupWeapon" }, // 1931033833
		{ &Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInFP, "PositionAndAttachGunInFP" }, // 260365713
		{ &Z_Construct_UFunction_Afpscharacter_PositionAndAttachGunInTP, "PositionAndAttachGunInTP" }, // 967761929
		{ &Z_Construct_UFunction_Afpscharacter_PressSprint, "PressSprint" }, // 2378583722
		{ &Z_Construct_UFunction_Afpscharacter_RecoverFPRotationOfGun, "RecoverFPRotationOfGun" }, // 2243357274
		{ &Z_Construct_UFunction_Afpscharacter_ReduceRecoilRecovery, "ReduceRecoilRecovery" }, // 2306517778
		{ &Z_Construct_UFunction_Afpscharacter_ReleaseFire, "ReleaseFire" }, // 2997776266
		{ &Z_Construct_UFunction_Afpscharacter_ReleaseSprint, "ReleaseSprint" }, // 3846209980
		{ &Z_Construct_UFunction_Afpscharacter_RepeatFire, "RepeatFire" }, // 2386414830
		{ &Z_Construct_UFunction_Afpscharacter_ServerGetInterpolatedTransformsForRewind, "ServerGetInterpolatedTransformsForRewind" }, // 2845924246
		{ &Z_Construct_UFunction_Afpscharacter_ServerHitscanCheckFire, "ServerHitscanCheckFire" }, // 3336954870
		{ &Z_Construct_UFunction_Afpscharacter_ServerInteract, "ServerInteract" }, // 1505482562
		{ &Z_Construct_UFunction_Afpscharacter_ServerPerformHitscan, "ServerPerformHitscan" }, // 1576683055
		{ &Z_Construct_UFunction_Afpscharacter_ServerPickupWeapon, "ServerPickupWeapon" }, // 633494461
		{ &Z_Construct_UFunction_Afpscharacter_ServerProjectileCheckFire, "ServerProjectileCheckFire" }, // 3514871269
		{ &Z_Construct_UFunction_Afpscharacter_ServerReload, "ServerReload" }, // 2258726239
		{ &Z_Construct_UFunction_Afpscharacter_ServerRewindAndPerformHitscan, "ServerRewindAndPerformHitscan" }, // 4167897062
		{ &Z_Construct_UFunction_Afpscharacter_ServerSetSprinting, "ServerSetSprinting" }, // 3999721245
		{ &Z_Construct_UFunction_Afpscharacter_ServerStartJump, "ServerStartJump" }, // 164328876
		{ &Z_Construct_UFunction_Afpscharacter_ServerSwitchPrimary, "ServerSwitchPrimary" }, // 1283072070
		{ &Z_Construct_UFunction_Afpscharacter_ServerSwitchSecondary, "ServerSwitchSecondary" }, // 3818391139
		{ &Z_Construct_UFunction_Afpscharacter_ServerSyncControlRotation, "ServerSyncControlRotation" }, // 3548193946
		{ &Z_Construct_UFunction_Afpscharacter_ServerValidateFire, "ServerValidateFire" }, // 3765246955
		{ &Z_Construct_UFunction_Afpscharacter_SetCurrentAmmo, "SetCurrentAmmo" }, // 3816281578
		{ &Z_Construct_UFunction_Afpscharacter_SetCurrentHealth, "SetCurrentHealth" }, // 2344965713
		{ &Z_Construct_UFunction_Afpscharacter_SetCurrentStamina, "SetCurrentStamina" }, // 3815298331
		{ &Z_Construct_UFunction_Afpscharacter_SetSprinting, "SetSprinting" }, // 3499647627
		{ &Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectFP, "ShowHitscanFireEffectFP" }, // 2355345348
		{ &Z_Construct_UFunction_Afpscharacter_ShowHitscanFireEffectTP, "ShowHitscanFireEffectTP" }, // 1567916911
		{ &Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashFP, "ShowMuzzleFlashFP" }, // 3421156960
		{ &Z_Construct_UFunction_Afpscharacter_ShowMuzzleFlashTP, "ShowMuzzleFlashTP" }, // 143480358
		{ &Z_Construct_UFunction_Afpscharacter_SingleRaycastInCameraDirection, "SingleRaycastInCameraDirection" }, // 4236554935
		{ &Z_Construct_UFunction_Afpscharacter_SpawnProjectileBullet, "SpawnProjectileBullet" }, // 1361992826
		{ &Z_Construct_UFunction_Afpscharacter_StartJump, "StartJump" }, // 694071235
		{ &Z_Construct_UFunction_Afpscharacter_StopFiring, "StopFiring" }, // 1180545881
		{ &Z_Construct_UFunction_Afpscharacter_StopJump, "StopJump" }, // 3383577609
		{ &Z_Construct_UFunction_Afpscharacter_SwitchPrimary, "SwitchPrimary" }, // 1404102473
		{ &Z_Construct_UFunction_Afpscharacter_SwitchPrimaryInputImplementation, "SwitchPrimaryInputImplementation" }, // 967562103
		{ &Z_Construct_UFunction_Afpscharacter_SwitchSecondary, "SwitchSecondary" }, // 3983925706
		{ &Z_Construct_UFunction_Afpscharacter_SwitchSecondaryInputImplementation, "SwitchSecondaryInputImplementation" }, // 2362339234
		{ &Z_Construct_UFunction_Afpscharacter_TakeDamage, "TakeDamage" }, // 811223175
		{ &Z_Construct_UFunction_Afpscharacter_TimedRecoilRecoveryFunction, "TimedRecoilRecoveryFunction" }, // 310605652
		{ &Z_Construct_UFunction_Afpscharacter_UpdateAmmoDisplay, "UpdateAmmoDisplay" }, // 4894759
		{ &Z_Construct_UFunction_Afpscharacter_UpdateStamina, "UpdateStamina" }, // 1610481266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Struct storing weapon data, so that weapon actors can safely be deleted\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "fpscharacter.h" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Struct storing weapon data, so that weapon actors can safely be deleted" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Records whether player is left handed - if so, mirrors gun transform and rotation on equip to be positioned on left side.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Records whether player is left handed - if so, mirrors gun transform and rotation on equip to be positioned on left side." },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->IsLeftHanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded = { "IsLeftHanded", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_DistanceToPlaceProjectileFromCamera_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//The distance in front the camera to spawn the projectile when shooting (to prevent clipping into own collision)\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "The distance in front the camera to spawn the projectile when shooting (to prevent clipping into own collision)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_DistanceToPlaceProjectileFromCamera = { "DistanceToPlaceProjectileFromCamera", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, DistanceToPlaceProjectileFromCamera), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DistanceToPlaceProjectileFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DistanceToPlaceProjectileFromCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_SwitchWeaponAfterPickup_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Records if the player should switch weapon to the pick up weapon after picking a weapon up\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Records if the player should switch weapon to the pick up weapon after picking a weapon up" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_SwitchWeaponAfterPickup_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->SwitchWeaponAfterPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_SwitchWeaponAfterPickup = { "SwitchWeaponAfterPickup", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_SwitchWeaponAfterPickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SwitchWeaponAfterPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SwitchWeaponAfterPickup_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_ReplicatedSpreadAngles_Inner = { "ReplicatedSpreadAngles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_ReplicatedSpreadAngles_MetaData[] = {
		{ "Comment", "//This is the next batch of angles for weapon spread, calculated randomly beforehand on server so it can't be modified by client.\n//Purely replicated so that the client can see the same spread the server is using, whcih looks better\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "This is the next batch of angles for weapon spread, calculated randomly beforehand on server so it can't be modified by client.\nPurely replicated so that the client can see the same spread the server is using, whcih looks better" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_ReplicatedSpreadAngles = { "ReplicatedSpreadAngles", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, ReplicatedSpreadAngles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ReplicatedSpreadAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ReplicatedSpreadAngles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_SpeedForLosingAccuracy_MetaData[] = {
		{ "Category", "Weapon spread" },
		{ "Comment", "//Above this speed accuracy begins to be reduced (cm/s)\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Above this speed accuracy begins to be reduced (cm/s)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_SpeedForLosingAccuracy = { "SpeedForLosingAccuracy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, SpeedForLosingAccuracy), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SpeedForLosingAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SpeedForLosingAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxMovementSpreadModifier_MetaData[] = {
		{ "Category", "Weapon spread" },
		{ "Comment", "//This is the maximum spread modifier multiplier possible from movement\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "This is the maximum spread modifier multiplier possible from movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxMovementSpreadModifier = { "MaxMovementSpreadModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, MaxMovementSpreadModifier), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxMovementSpreadModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxMovementSpreadModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_MinMovementSpreadModifier_MetaData[] = {
		{ "Category", "Weapon spread" },
		{ "Comment", "//This is the minimum spread modifier\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "This is the minimum spread modifier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_MinMovementSpreadModifier = { "MinMovementSpreadModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, MinMovementSpreadModifier), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MinMovementSpreadModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MinMovementSpreadModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecovery_MetaData[] = {
		{ "Comment", "//Both recoil functions above use the same recoil stats, neither is more powerful thhan the other.\n//Stores recoil recovery. Reset to 100 on weapon pickup/switching, but the time taken to switch weapons should negate this.\n//May need replication from server if handling recoil recovery on server. Lost from shooting, gained from waiting\n//As the recovery returns to 100%, correct the aim back downward again maybe (but make this an option). Replicate that too.\n//This is indirectly replicated by changing DeltaRecoil, if deltaRecoil is positive then do recoil recovery stuff\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Both recoil functions above use the same recoil stats, neither is more powerful thhan the other.\nStores recoil recovery. Reset to 100 on weapon pickup/switching, but the time taken to switch weapons should negate this.\nMay need replication from server if handling recoil recovery on server. Lost from shooting, gained from waiting\nAs the recovery returns to 100%, correct the aim back downward again maybe (but make this an option). Replicate that too.\nThis is indirectly replicated by changing DeltaRecoil, if deltaRecoil is positive then do recoil recovery stuff" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecovery = { "RecoilRecovery", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, RecoilRecovery), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryTime_MetaData[] = {
		{ "Comment", "//Rate at which recoil recovery timer runs to increase recoil recovery.\n//Smaller values = smoother, but more processing required\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Rate at which recoil recovery timer runs to increase recoil recovery.\nSmaller values = smoother, but more processing required" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryTime = { "RecoilRecoveryTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, RecoilRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryHandle_MetaData[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryHandle = { "RecoilRecoveryHandle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, RecoilRecoveryHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_DeltaRecoil_MetaData[] = {
		{ "Comment", "//Last server change to recoil.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Last server change to recoil." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_DeltaRecoil = { "DeltaRecoil", "OnRep_ReceiveRecoilRecoveryChanges", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, DeltaRecoil), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DeltaRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DeltaRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_MuzzleCounter_MetaData[] = {
		{ "Comment", "//For muzzle flash we will just increment an integer for shots fired\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "For muzzle flash we will just increment an integer for shots fired" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_MuzzleCounter = { "MuzzleCounter", "OnRep_MuzzleCounter", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, MuzzleCounter), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MuzzleCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MuzzleCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Comment", "//Here is our replicated endpoint\n//This endpoint will be duff for projectiles, and will not matter, as we will only use it for the hitscan tracer effect.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Here is our replicated endpoint\nThis endpoint will be duff for projectiles, and will not matter, as we will only use it for the hitscan tracer effect." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_EndPoint = { "EndPoint", "OnRep_EndPoint", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_HeadMaterial_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Config for torso, headhsot, legshot etc\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Config for torso, headhsot, legshot etc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_HeadMaterial = { "HeadMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, HeadMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_HeadMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_HeadMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_TorsoMaterial_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_TorsoMaterial = { "TorsoMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, TorsoMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_TorsoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_TorsoMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_LegMaterial_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_LegMaterial = { "LegMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, LegMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_LegMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_LegMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInputIntervalTimerHandle_MetaData[] = {
		{ "Comment", "//used to limit number of interactions user can make per second\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "used to limit number of interactions user can make per second" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInputIntervalTimerHandle = { "InteractInputIntervalTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, InteractInputIntervalTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInputIntervalTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInputIntervalTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractTimerHandle_MetaData[] = {
		{ "Comment", "//used to ensure that interaction takes 'interactiontime' seconds @UInteractableObjectComponent\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "used to ensure that interaction takes 'interactiontime' seconds @UInteractableObjectComponent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractTimerHandle = { "InteractTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, InteractTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentInteractionName_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//time interval in secondsfor interactions to take place\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "time interval in secondsfor interactions to take place" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentInteractionName = { "CurrentInteractionName", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CurrentInteractionName), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentInteractionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentInteractionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInterval_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInterval = { "InteractInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, InteractInterval), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxInteractRange_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//maximum interaction range\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "maximum interaction range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxInteractRange = { "MaxInteractRange", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, MaxInteractRange), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxInteractRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxInteractRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_bCanInteract_MetaData[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_bCanInteract_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->bCanInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_bCanInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_bCanInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_SynchronisedControlRotation_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_SynchronisedControlRotation = { "SynchronisedControlRotation", "OnRep_ControlRotation", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, SynchronisedControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SynchronisedControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SynchronisedControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_lognum_MetaData[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_lognum = { "lognum", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, lognum), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_lognum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_lognum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryData_MetaData[] = {
		{ "Comment", "//Stores data for primary weapon\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores data for primary weapon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryData = { "PrimaryData", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, PrimaryData), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryData_MetaData[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryData = { "SecondaryData", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, SecondaryData), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_AmmoDisplay_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Used to display the ammo of the player, updated whenever ammo is changed.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Used to display the ammo of the player, updated whenever ammo is changed." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_AmmoDisplay = { "AmmoDisplay", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, AmmoDisplay), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_AmmoDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_AmmoDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Whether player is currently crouching\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Whether player is currently crouching" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->CurrentlyCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching = { "CurrentlyCrouching", "OnRep_CurrentlyCrouching", (EPropertyFlags)0x0020080100002024, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Stores if the player has just landed, logic altered in blueprints.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores if the player has just landed, logic altered in blueprints." },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->JustLanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded = { "JustLanded", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultHalfHeight_MetaData[] = {
		{ "Category", "Heights" },
		{ "Comment", "//Obtained at start, by getting capsule component half height.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Obtained at start, by getting capsule component half height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultHalfHeight = { "DefaultHalfHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, DefaultHalfHeight), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchedHalfHeight_MetaData[] = {
		{ "Category", "Heights" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchedHalfHeight = { "CrouchedHalfHeight", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CrouchedHalfHeight), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchedHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchedHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultSpeed_MetaData[] = {
		{ "Category", "Movement speeds" },
		{ "Comment", "//Default walk speed\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Default walk speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultSpeed = { "DefaultSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, DefaultSpeed), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement speeds" },
		{ "Comment", "//Default sprint speed\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Default sprint speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Movement speeds" },
		{ "Comment", "//Default crouch speed\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Default crouch speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_LandingTime_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "//Time before player speed recovers after landing\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Time before player speed recovers after landing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_LandingTime = { "LandingTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, LandingTime), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_LandingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_LandingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaUpdateIntervalInSeconds_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Interval in seconds that stamina updates occur (higher values means less smooth updates, but easier performance).\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Interval in seconds that stamina updates occur (higher values means less smooth updates, but easier performance)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaUpdateIntervalInSeconds = { "StaminaUpdateIntervalInSeconds", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, StaminaUpdateIntervalInSeconds), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaUpdateIntervalInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaUpdateIntervalInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossRateWhenSprinting_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Stamina loss rate per second when sprinting\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stamina loss rate per second when sprinting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossRateWhenSprinting = { "StaminaLossRateWhenSprinting", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, StaminaLossRateWhenSprinting), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossRateWhenSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossRateWhenSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossWhenJumping_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Stamina loss wehn jumping\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stamina loss wehn jumping" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossWhenJumping = { "StaminaLossWhenJumping", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, StaminaLossWhenJumping), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossWhenJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossWhenJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "//Sprint stamina maximum\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Sprint stamina maximum" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina_MetaData[] = {
		{ "Comment", "//Current stamina, replicated across server\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Current stamina, replicated across server" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina = { "CurrentStamina", "OnRep_CurrentStamina", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CurrentStamina), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//Max health\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Max health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Comment", "//Current HP\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Current HP" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Tracks sprinting\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Tracks sprinting" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->IsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting = { "IsSprinting", "OnRep_ChangeSprinting", (EPropertyFlags)0x0020080100002034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_XSensitivity_MetaData[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "//Stores X sensitivity for mouse\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores X sensitivity for mouse" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_XSensitivity = { "XSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, XSensitivity), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_XSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_XSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_YSensitivity_MetaData[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "//Stores Y sensitivty for mouse\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores Y sensitivty for mouse" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_YSensitivity = { "YSensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, YSensitivity), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_YSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_YSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX_MetaData[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "//Stores whether X is inverted\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores whether X is inverted" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->InvertX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX = { "InvertX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY_MetaData[] = {
		{ "Category", "Mouse Input" },
		{ "Comment", "//Stores whether Y is inverted\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores whether Y is inverted" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->InvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch_MetaData[] = {
		{ "Category", "Button Input" },
		{ "Comment", "//Stores whether crouch is toggle or hold\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores whether crouch is toggle or hold" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->ToggleCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch = { "ToggleCrouch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint_MetaData[] = {
		{ "Category", "Button Input" },
		{ "Comment", "//Stores whether sprint is toggle or hold\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores whether sprint is toggle or hold" },
	};
#endif
	void Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint_SetBit(void* Obj)
	{
		((Afpscharacter*)Obj)->ToggleSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint = { "ToggleSprint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSGunComponent_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//First person gun scene component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "First person gun scene component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSGunComponent = { "FPSGunComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, FPSGunComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSGunComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSGunComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSCameraComponent_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//FPS camera component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "FPS camera component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSCameraComponent = { "FPSCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, FPSCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSRewindComponent_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSRewindComponent = { "FPSRewindComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, FPSRewindComponent), Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSRewindComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSRewindComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//FPS mesh component, visible only to the owning player\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "FPS mesh component, visible only to the owning player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMesh = { "FPSMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, FPSMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_ThirdPersonGunMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//Mesh for third person\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Mesh for third person" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_ThirdPersonGunMesh = { "ThirdPersonGunMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, ThirdPersonGunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ThirdPersonGunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ThirdPersonGunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMuzzleComponent_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMuzzleComponent = { "FPSMuzzleComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, FPSMuzzleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMuzzleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMuzzleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_TPMuzzleComponent_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Third person muzzle location for calculating muzzle flash and tracers.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Third person muzzle location for calculating muzzle flash and tracers." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_TPMuzzleComponent = { "TPMuzzleComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, TPMuzzleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_TPMuzzleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_TPMuzzleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchTime_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchTime = { "CrouchTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CrouchTime), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaTimerHandle = { "StaminaTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, StaminaTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaTimerHandle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_EquippedGun_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_EquippedGun_MetaData[] = {
		{ "Category", "fpscharacter" },
		{ "Comment", "//Stores the currently equipped item (e.g. gun, knife) using enum\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores the currently equipped item (e.g. gun, knife) using enum" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_EquippedGun = { "EquippedGun", "OnRep_ChangeWeapon", (EPropertyFlags)0x0010000100000024, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, EquippedGun), Z_Construct_UEnum_fpsgame_Equips, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_EquippedGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_EquippedGun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Afpscharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_DistanceToPlaceProjectileFromCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_SwitchWeaponAfterPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ReplicatedSpreadAngles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ReplicatedSpreadAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_SpeedForLosingAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxMovementSpreadModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_MinMovementSpreadModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_RecoilRecoveryHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_DeltaRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_MuzzleCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_HeadMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_TorsoMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_LegMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInputIntervalTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentInteractionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_InteractInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxInteractRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_bCanInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_SynchronisedControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_lognum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_AmmoDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchedHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_LandingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaUpdateIntervalInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossRateWhenSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaLossWhenJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_XSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_YSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSGunComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSRewindComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ThirdPersonGunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMuzzleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_TPMuzzleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_EquippedGun_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_EquippedGun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afpscharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afpscharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afpscharacter_Statics::ClassParams = {
		&Afpscharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Afpscharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afpscharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afpscharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Afpscharacter, 2083968851);
	template<> FPSGAME_API UClass* StaticClass<Afpscharacter>()
	{
		return Afpscharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afpscharacter(Z_Construct_UClass_Afpscharacter, &Afpscharacter::StaticClass, TEXT("/Script/fpsgame"), TEXT("Afpscharacter"), false, nullptr, nullptr, nullptr);

	void Afpscharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedSpreadAngles(TEXT("ReplicatedSpreadAngles"));
		static const FName Name_DeltaRecoil(TEXT("DeltaRecoil"));
		static const FName Name_MuzzleCounter(TEXT("MuzzleCounter"));
		static const FName Name_EndPoint(TEXT("EndPoint"));
		static const FName Name_SynchronisedControlRotation(TEXT("SynchronisedControlRotation"));
		static const FName Name_PrimaryData(TEXT("PrimaryData"));
		static const FName Name_SecondaryData(TEXT("SecondaryData"));
		static const FName Name_CurrentlyCrouching(TEXT("CurrentlyCrouching"));
		static const FName Name_CurrentStamina(TEXT("CurrentStamina"));
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
		static const FName Name_IsSprinting(TEXT("IsSprinting"));
		static const FName Name_EquippedGun(TEXT("EquippedGun"));

		const bool bIsValid = true
			&& Name_ReplicatedSpreadAngles == ClassReps[(int32)ENetFields_Private::ReplicatedSpreadAngles].Property->GetFName()
			&& Name_DeltaRecoil == ClassReps[(int32)ENetFields_Private::DeltaRecoil].Property->GetFName()
			&& Name_MuzzleCounter == ClassReps[(int32)ENetFields_Private::MuzzleCounter].Property->GetFName()
			&& Name_EndPoint == ClassReps[(int32)ENetFields_Private::EndPoint].Property->GetFName()
			&& Name_SynchronisedControlRotation == ClassReps[(int32)ENetFields_Private::SynchronisedControlRotation].Property->GetFName()
			&& Name_PrimaryData == ClassReps[(int32)ENetFields_Private::PrimaryData].Property->GetFName()
			&& Name_SecondaryData == ClassReps[(int32)ENetFields_Private::SecondaryData].Property->GetFName()
			&& Name_CurrentlyCrouching == ClassReps[(int32)ENetFields_Private::CurrentlyCrouching].Property->GetFName()
			&& Name_CurrentStamina == ClassReps[(int32)ENetFields_Private::CurrentStamina].Property->GetFName()
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
			&& Name_IsSprinting == ClassReps[(int32)ENetFields_Private::IsSprinting].Property->GetFName()
			&& Name_EquippedGun == ClassReps[(int32)ENetFields_Private::EquippedGun].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in Afpscharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afpscharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
