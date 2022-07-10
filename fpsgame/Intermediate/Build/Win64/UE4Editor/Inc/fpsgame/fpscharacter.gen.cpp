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
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
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
	DEFINE_FUNCTION(Afpscharacter::execReleaseCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execPressCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PressCrouch();
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
	DEFINE_FUNCTION(Afpscharacter::execHandleFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execEquipWeapon)
	{
		P_GET_OBJECT(AWeaponActor,Z_Param_GunToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipWeapon(Z_Param_GunToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afpscharacter::execUpdateWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeapon();
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
		if (!P_THIS->ServerSetSprinting_Validate(Z_Param_NewSprinting))
		{
			RPC_ValidateFailed(TEXT("ServerSetSprinting_Validate"));
			return;
		}
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
	static FName NAME_Afpscharacter_HandleFire = FName(TEXT("HandleFire"));
	void Afpscharacter::HandleFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_HandleFire),NULL);
	}
	static FName NAME_Afpscharacter_ServerSetSprinting = FName(TEXT("ServerSetSprinting"));
	void Afpscharacter::ServerSetSprinting(bool NewSprinting)
	{
		fpscharacter_eventServerSetSprinting_Parms Parms;
		Parms.NewSprinting=NewSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_ServerSetSprinting),&Parms);
	}
	static FName NAME_Afpscharacter_SpawnAndEquipGun = FName(TEXT("SpawnAndEquipGun"));
	void Afpscharacter::SpawnAndEquipGun()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afpscharacter_SpawnAndEquipGun),NULL);
	}
	void Afpscharacter::StaticRegisterNativesAfpscharacter()
	{
		UClass* Class = Afpscharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySensitivityAndInversionToMouseInputX", &Afpscharacter::execApplySensitivityAndInversionToMouseInputX },
			{ "ApplySensitivityAndInversionToMouseInputY", &Afpscharacter::execApplySensitivityAndInversionToMouseInputY },
			{ "EquipWeapon", &Afpscharacter::execEquipWeapon },
			{ "GetCurrentHealth", &Afpscharacter::execGetCurrentHealth },
			{ "GetCurrentStamina", &Afpscharacter::execGetCurrentStamina },
			{ "GetMaxHealth", &Afpscharacter::execGetMaxHealth },
			{ "GetMaxStamina", &Afpscharacter::execGetMaxStamina },
			{ "HandleFire", &Afpscharacter::execHandleFire },
			{ "LoseStamina", &Afpscharacter::execLoseStamina },
			{ "MoveX", &Afpscharacter::execMoveX },
			{ "MoveY", &Afpscharacter::execMoveY },
			{ "OnRep_ChangeSprinting", &Afpscharacter::execOnRep_ChangeSprinting },
			{ "OnRep_ChangeWeapon", &Afpscharacter::execOnRep_ChangeWeapon },
			{ "OnRep_CurrentHealth", &Afpscharacter::execOnRep_CurrentHealth },
			{ "OnRep_CurrentStamina", &Afpscharacter::execOnRep_CurrentStamina },
			{ "PressCrouch", &Afpscharacter::execPressCrouch },
			{ "PressSprint", &Afpscharacter::execPressSprint },
			{ "ReleaseCrouch", &Afpscharacter::execReleaseCrouch },
			{ "ReleaseSprint", &Afpscharacter::execReleaseSprint },
			{ "ServerSetSprinting", &Afpscharacter::execServerSetSprinting },
			{ "SetCurrentHealth", &Afpscharacter::execSetCurrentHealth },
			{ "SetCurrentStamina", &Afpscharacter::execSetCurrentStamina },
			{ "SetSprinting", &Afpscharacter::execSetSprinting },
			{ "StartFire", &Afpscharacter::execStartFire },
			{ "StartJump", &Afpscharacter::execStartJump },
			{ "StopFire", &Afpscharacter::execStopFire },
			{ "StopJump", &Afpscharacter::execStopJump },
			{ "TakeDamage", &Afpscharacter::execTakeDamage },
			{ "UpdateStamina", &Afpscharacter::execUpdateStamina },
			{ "UpdateWeapon", &Afpscharacter::execUpdateWeapon },
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ApplySensitivityAndInversionToMouseInputX", nullptr, nullptr, sizeof(fpscharacter_eventApplySensitivityAndInversionToMouseInputX_Parms), Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ApplySensitivityAndInversionToMouseInputY", nullptr, nullptr, sizeof(fpscharacter_eventApplySensitivityAndInversionToMouseInputY_Parms), Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics
	{
		struct fpscharacter_eventEquipWeapon_Parms
		{
			AWeaponActor* GunToEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::NewProp_GunToEquip = { "GunToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(fpscharacter_eventEquipWeapon_Parms, GunToEquip), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::NewProp_GunToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Positions and spawns in gun, used on equip\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Positions and spawns in gun, used on equip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "EquipWeapon", nullptr, nullptr, sizeof(fpscharacter_eventEquipWeapon_Parms), Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_EquipWeapon_Statics::FuncParams);
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
	struct Z_Construct_UFunction_Afpscharacter_HandleFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_HandleFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Server function for spawning projectiles\n//WARNING - RELIABLE RPC CALL\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Server function for spawning projectiles\nWARNING - RELIABLE RPC CALL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_HandleFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "HandleFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_HandleFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_HandleFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_HandleFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_HandleFire_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_MoveX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "MoveX", nullptr, nullptr, sizeof(fpscharacter_eventMoveX_Parms), Z_Construct_UFunction_Afpscharacter_MoveX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MoveX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveX_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_MoveY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "MoveY", nullptr, nullptr, sizeof(fpscharacter_eventMoveY_Parms), Z_Construct_UFunction_Afpscharacter_MoveY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_MoveY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_MoveY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_MoveY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_MoveY_Statics::FuncParams);
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
		{ "Comment", "//Replicates gun equip on clients - when someone switches gun on server, all cleints must replicate this visually.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Replicates gun equip on clients - when someone switches gun on server, all cleints must replicate this visually." },
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
	struct Z_Construct_UFunction_Afpscharacter_PressCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_PressCrouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crouching" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PressCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PressCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PressCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PressCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PressCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PressCrouch_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "PressSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_PressSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_PressSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_ReleaseCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_ReleaseCrouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crouching" },
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ReleaseCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ReleaseCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ReleaseCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ReleaseCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ReleaseCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ReleaseCrouch_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ReleaseSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ReleaseSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ReleaseSprint_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "ServerSetSprinting", nullptr, nullptr, sizeof(fpscharacter_eventServerSetSprinting_Parms), Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_ServerSetSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_ServerSetSprinting_Statics::FuncParams);
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
	struct Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "fpscharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "SpawnAndEquipGun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_StartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_StartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Fires weapon\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Fires weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "StartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_StartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_StartFire_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "StartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afpscharacter_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_StopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//Function for stopping weapon fire. Once this is called, the player can call StartFire again\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Function for stopping weapon fire. Once this is called, the player can call StartFire again" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_StopFire_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_StopJump_Statics::FuncParams);
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
	struct Z_Construct_UFunction_Afpscharacter_UpdateWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afpscharacter_UpdateWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the weapon is updated, called on server immediately after modification, and on clients when they receive news of the weapon switch.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Called when the weapon is updated, called on server immediately after modification, and on clients when they receive news of the weapon switch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afpscharacter_UpdateWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afpscharacter, nullptr, "UpdateWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afpscharacter_UpdateWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afpscharacter_UpdateWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afpscharacter_UpdateWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afpscharacter_UpdateWeapon_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryGun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaminaTimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afpscharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Afpscharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputX, "ApplySensitivityAndInversionToMouseInputX" }, // 384281768
		{ &Z_Construct_UFunction_Afpscharacter_ApplySensitivityAndInversionToMouseInputY, "ApplySensitivityAndInversionToMouseInputY" }, // 3692219004
		{ &Z_Construct_UFunction_Afpscharacter_EquipWeapon, "EquipWeapon" }, // 3480641389
		{ &Z_Construct_UFunction_Afpscharacter_GetCurrentHealth, "GetCurrentHealth" }, // 1678929625
		{ &Z_Construct_UFunction_Afpscharacter_GetCurrentStamina, "GetCurrentStamina" }, // 1877127190
		{ &Z_Construct_UFunction_Afpscharacter_GetMaxHealth, "GetMaxHealth" }, // 2374698544
		{ &Z_Construct_UFunction_Afpscharacter_GetMaxStamina, "GetMaxStamina" }, // 3774589202
		{ &Z_Construct_UFunction_Afpscharacter_HandleFire, "HandleFire" }, // 3290021116
		{ &Z_Construct_UFunction_Afpscharacter_LoseStamina, "LoseStamina" }, // 3542002802
		{ &Z_Construct_UFunction_Afpscharacter_MoveX, "MoveX" }, // 4016912003
		{ &Z_Construct_UFunction_Afpscharacter_MoveY, "MoveY" }, // 2247957534
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_ChangeSprinting, "OnRep_ChangeSprinting" }, // 2106207384
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_ChangeWeapon, "OnRep_ChangeWeapon" }, // 371153054
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 2772940714
		{ &Z_Construct_UFunction_Afpscharacter_OnRep_CurrentStamina, "OnRep_CurrentStamina" }, // 3514113238
		{ &Z_Construct_UFunction_Afpscharacter_PressCrouch, "PressCrouch" }, // 4086542353
		{ &Z_Construct_UFunction_Afpscharacter_PressSprint, "PressSprint" }, // 898884170
		{ &Z_Construct_UFunction_Afpscharacter_ReleaseCrouch, "ReleaseCrouch" }, // 3392892348
		{ &Z_Construct_UFunction_Afpscharacter_ReleaseSprint, "ReleaseSprint" }, // 1995324714
		{ &Z_Construct_UFunction_Afpscharacter_ServerSetSprinting, "ServerSetSprinting" }, // 1602645312
		{ &Z_Construct_UFunction_Afpscharacter_SetCurrentHealth, "SetCurrentHealth" }, // 2344965713
		{ &Z_Construct_UFunction_Afpscharacter_SetCurrentStamina, "SetCurrentStamina" }, // 3815298331
		{ &Z_Construct_UFunction_Afpscharacter_SetSprinting, "SetSprinting" }, // 3499647627
		{ &Z_Construct_UFunction_Afpscharacter_SpawnAndEquipGun, "SpawnAndEquipGun" }, // 769226702
		{ &Z_Construct_UFunction_Afpscharacter_StartFire, "StartFire" }, // 1276249164
		{ &Z_Construct_UFunction_Afpscharacter_StartJump, "StartJump" }, // 3422075348
		{ &Z_Construct_UFunction_Afpscharacter_StopFire, "StopFire" }, // 396522478
		{ &Z_Construct_UFunction_Afpscharacter_StopJump, "StopJump" }, // 315078958
		{ &Z_Construct_UFunction_Afpscharacter_TakeDamage, "TakeDamage" }, // 811223175
		{ &Z_Construct_UFunction_Afpscharacter_UpdateStamina, "UpdateStamina" }, // 1610481266
		{ &Z_Construct_UFunction_Afpscharacter_UpdateWeapon, "UpdateWeapon" }, // 3912362607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "fpscharacter.h" },
		{ "ModuleRelativePath", "fpscharacter.h" },
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded = { "IsLeftHanded", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching = { "CurrentlyCrouching", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentlyCrouching_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded = { "JustLanded", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_JustLanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_DefaultHalfHeight_MetaData[] = {
		{ "Category", "fpscharacter" },
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina = { "CurrentStamina", "OnRep_CurrentStamina", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CurrentStamina), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentStamina_MetaData)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_CurrentHealth_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting = { "IsSprinting", "OnRep_ChangeSprinting", (EPropertyFlags)0x0020080100020035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afpscharacter), &Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryGun_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Stores primary gun equipped\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores primary gun equipped" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryGun = { "PrimaryGun", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, PrimaryGun), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryGun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryGun_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Stores secondary gun equipped\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Stores secondary gun equipped" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryGun = { "SecondaryGun", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, SecondaryGun), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryGun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afpscharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon | Projectile" },
		{ "Comment", "//Should be set by weapon when equipped.\n" },
		{ "ModuleRelativePath", "fpscharacter.h" },
		{ "ToolTip", "Should be set by weapon when equipped." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Afpscharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afpscharacter, ProjectileClass), Z_Construct_UClass_AFPSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afpscharacter_Statics::NewProp_ProjectileClass_MetaData)) };
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Afpscharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_IsLeftHanded,
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_PrimaryGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_SecondaryGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_XSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_YSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_InvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_ToggleSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSGunComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_FPSMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_CrouchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afpscharacter_Statics::NewProp_StaminaTimerHandle,
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
	IMPLEMENT_CLASS(Afpscharacter, 1130682972);
	template<> FPSGAME_API UClass* StaticClass<Afpscharacter>()
	{
		return Afpscharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afpscharacter(Z_Construct_UClass_Afpscharacter, &Afpscharacter::StaticClass, TEXT("/Script/fpsgame"), TEXT("Afpscharacter"), false, nullptr, nullptr, nullptr);

	void Afpscharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentStamina(TEXT("CurrentStamina"));
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
		static const FName Name_IsSprinting(TEXT("IsSprinting"));

		const bool bIsValid = true
			&& Name_CurrentStamina == ClassReps[(int32)ENetFields_Private::CurrentStamina].Property->GetFName()
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
			&& Name_IsSprinting == ClassReps[(int32)ENetFields_Private::IsSprinting].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in Afpscharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afpscharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
