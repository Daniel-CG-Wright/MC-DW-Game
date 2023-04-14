// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/PlayerWeaponSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWeaponSystem() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_UPlayerWeaponSystem_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UPlayerWeaponSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerWeaponSystem::execServerSetAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNumber);
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetAmmo_Validate(Z_Param_SlotNumber,Z_Param_Ammo))
		{
			RPC_ValidateFailed(TEXT("ServerSetAmmo_Validate"));
			return;
		}
		P_THIS->ServerSetAmmo_Implementation(Z_Param_SlotNumber,Z_Param_Ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerWeaponSystem::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponActor**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerWeaponSystem::execOnRep_WeaponChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WeaponChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerWeaponSystem::execEquipWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipWeapon(Z_Param_SlotNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerWeaponSystem::execSwitchToNextAvailableWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToNextAvailableWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerWeaponSystem::execAddWeapon)
	{
		P_GET_OBJECT(AWeaponActor,Z_Param_Weapon);
		P_GET_UBOOL(Z_Param_SwitchAfterPickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWeapon(Z_Param_Weapon,Z_Param_SwitchAfterPickup);
		P_NATIVE_END;
	}
	static FName NAME_UPlayerWeaponSystem_ServerSetAmmo = FName(TEXT("ServerSetAmmo"));
	void UPlayerWeaponSystem::ServerSetAmmo(int32 SlotNumber, int32 Ammo)
	{
		PlayerWeaponSystem_eventServerSetAmmo_Parms Parms;
		Parms.SlotNumber=SlotNumber;
		Parms.Ammo=Ammo;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerWeaponSystem_ServerSetAmmo),&Parms);
	}
	void UPlayerWeaponSystem::StaticRegisterNativesUPlayerWeaponSystem()
	{
		UClass* Class = UPlayerWeaponSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWeapon", &UPlayerWeaponSystem::execAddWeapon },
			{ "EquipWeapon", &UPlayerWeaponSystem::execEquipWeapon },
			{ "GetCurrentWeapon", &UPlayerWeaponSystem::execGetCurrentWeapon },
			{ "OnRep_WeaponChanged", &UPlayerWeaponSystem::execOnRep_WeaponChanged },
			{ "ServerSetAmmo", &UPlayerWeaponSystem::execServerSetAmmo },
			{ "SwitchToNextAvailableWeapon", &UPlayerWeaponSystem::execSwitchToNextAvailableWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics
	{
		struct PlayerWeaponSystem_eventAddWeapon_Parms
		{
			AWeaponActor* Weapon;
			bool SwitchAfterPickup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static void NewProp_SwitchAfterPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchAfterPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerWeaponSystem_eventAddWeapon_Parms, Weapon), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::NewProp_SwitchAfterPickup_SetBit(void* Obj)
	{
		((PlayerWeaponSystem_eventAddWeapon_Parms*)Obj)->SwitchAfterPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::NewProp_SwitchAfterPickup = { "SwitchAfterPickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerWeaponSystem_eventAddWeapon_Parms), &Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::NewProp_SwitchAfterPickup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::NewProp_SwitchAfterPickup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerWeaponSystem" },
		{ "Comment", "// Called when a new weapon is picked up\n" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Called when a new weapon is picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWeaponSystem, nullptr, "AddWeapon", nullptr, nullptr, sizeof(PlayerWeaponSystem_eventAddWeapon_Parms), Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics
	{
		struct PlayerWeaponSystem_eventEquipWeapon_Parms
		{
			int32 SlotNumber;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::NewProp_SlotNumber = { "SlotNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerWeaponSystem_eventEquipWeapon_Parms, SlotNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::NewProp_SlotNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerWeaponSystem" },
		{ "Comment", "/* Called when a weapon is equipped, slot number is as follows:\n\x09* 0 - Primary\n\x09* 1 - Secondary\n\x09* 2 - Melee\n\x09* \x09*/" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Called when a weapon is equipped, slot number is as follows:\n      * 0 - Primary\n      * 1 - Secondary\n      * 2 - Melee" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWeaponSystem, nullptr, "EquipWeapon", nullptr, nullptr, sizeof(PlayerWeaponSystem_eventEquipWeapon_Parms), Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics
	{
		struct PlayerWeaponSystem_eventGetCurrentWeapon_Parms
		{
			AWeaponActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerWeaponSystem_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerWeaponSystem" },
		{ "Comment", "// Get the current weapon equipped\n" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Get the current weapon equipped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWeaponSystem, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(PlayerWeaponSystem_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the current weapon slot is changed (on clients)\n" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Called when the current weapon slot is changed (on clients)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWeaponSystem, nullptr, "OnRep_WeaponChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SlotNumber;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::NewProp_SlotNumber = { "SlotNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerWeaponSystem_eventServerSetAmmo_Parms, SlotNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerWeaponSystem_eventServerSetAmmo_Parms, Ammo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::NewProp_SlotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Server RPC call for setting the ammo of the weapon in the given slot\n" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Server RPC call for setting the ammo of the weapon in the given slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWeaponSystem, nullptr, "ServerSetAmmo", nullptr, nullptr, sizeof(PlayerWeaponSystem_eventServerSetAmmo_Parms), Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerWeaponSystem" },
		{ "Comment", "// Switch to the next available weapon if the current weappon is dropped\n" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Switch to the next available weapon if the current weappon is dropped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWeaponSystem, nullptr, "SwitchToNextAvailableWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerWeaponSystem_NoRegister()
	{
		return UPlayerWeaponSystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerWeaponSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Weapons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentWeaponSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerWeaponSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerWeaponSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerWeaponSystem_AddWeapon, "AddWeapon" }, // 1698735718
		{ &Z_Construct_UFunction_UPlayerWeaponSystem_EquipWeapon, "EquipWeapon" }, // 2664250644
		{ &Z_Construct_UFunction_UPlayerWeaponSystem_GetCurrentWeapon, "GetCurrentWeapon" }, // 1322105337
		{ &Z_Construct_UFunction_UPlayerWeaponSystem_OnRep_WeaponChanged, "OnRep_WeaponChanged" }, // 1858010985
		{ &Z_Construct_UFunction_UPlayerWeaponSystem_ServerSetAmmo, "ServerSetAmmo" }, // 3971130998
		{ &Z_Construct_UFunction_UPlayerWeaponSystem_SwitchToNextAvailableWeapon, "SwitchToNextAvailableWeapon" }, // 2394440635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerWeaponSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerWeaponSystem.h" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_Weapons_Inner = { "Weapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_Weapons_MetaData[] = {
		{ "Comment", "// Array storing all weapons equipped, length of 3 for 3 slots\n// Should be replicated from server to client.\n" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Array storing all weapons equipped, length of 3 for 3 slots\nShould be replicated from server to client." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_Weapons = { "Weapons", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerWeaponSystem, Weapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_Weapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_Weapons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_CurrentWeaponSlot_MetaData[] = {
		{ "Comment", "// Current weapon slot equipped\n// Should only be changed on the server, and replicated to clients\n// Replicated using OnRep_WeaponChanged\n" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
		{ "ToolTip", "Current weapon slot equipped\nShould only be changed on the server, and replicated to clients\nReplicated using OnRep_WeaponChanged" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_CurrentWeaponSlot = { "CurrentWeaponSlot", "OnRep_WeaponChanged", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerWeaponSystem, CurrentWeaponSlot), METADATA_PARAMS(Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_CurrentWeaponSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_CurrentWeaponSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWeaponSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_Weapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_Weapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWeaponSystem_Statics::NewProp_CurrentWeaponSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerWeaponSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWeaponSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWeaponSystem_Statics::ClassParams = {
		&UPlayerWeaponSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerWeaponSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponSystem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerWeaponSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWeaponSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerWeaponSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerWeaponSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerWeaponSystem, 358198566);
	template<> FPSGAME_API UClass* StaticClass<UPlayerWeaponSystem>()
	{
		return UPlayerWeaponSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerWeaponSystem(Z_Construct_UClass_UPlayerWeaponSystem, &UPlayerWeaponSystem::StaticClass, TEXT("/Script/fpsgame"), TEXT("UPlayerWeaponSystem"), false, nullptr, nullptr, nullptr);

	void UPlayerWeaponSystem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Weapons(TEXT("Weapons"));
		static const FName Name_CurrentWeaponSlot(TEXT("CurrentWeaponSlot"));

		const bool bIsValid = true
			&& Name_Weapons == ClassReps[(int32)ENetFields_Private::Weapons].Property->GetFName()
			&& Name_CurrentWeaponSlot == ClassReps[(int32)ENetFields_Private::CurrentWeaponSlot].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerWeaponSystem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWeaponSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
