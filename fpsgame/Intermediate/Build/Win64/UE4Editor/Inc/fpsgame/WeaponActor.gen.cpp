// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/WeaponActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponActor() {}
// Cross Module References
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponDataStruct();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponPositionalDetails();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponVisualAssets();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMetaData();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponStats();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponRecoil();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_Guns();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_WeaponType();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_FireMode();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_FireType();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_Equips();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPSGAME_API UClass* Z_Construct_UClass_UWeaponAttachmentSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UInteractableObjectComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWeaponDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponDataStruct, Z_Construct_UPackage__Script_fpsgame(), TEXT("WeaponDataStruct"), sizeof(FWeaponDataStruct), Get_Z_Construct_UScriptStruct_FWeaponDataStruct_Hash());
	}
	return Singleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FWeaponDataStruct>()
{
	return FWeaponDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponDataStruct(FWeaponDataStruct::StaticStruct, TEXT("/Script/fpsgame"), TEXT("WeaponDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_fpsgame_StaticRegisterNativesFWeaponDataStruct
{
	FScriptStruct_fpsgame_StaticRegisterNativesFWeaponDataStruct()
	{
		UScriptStruct::DeferCppStructOps<FWeaponDataStruct>(FName(TEXT("WeaponDataStruct")));
	}
} ScriptStruct_fpsgame_StaticRegisterNativesFWeaponDataStruct;
	struct Z_Construct_UScriptStruct_FWeaponDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionalDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionalDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recoil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//The human-readable weapon name, stored for things such as interaction text\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "The human-readable weapon name, stored for things such as interaction text" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, WeaponName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_PositionalDetails_MetaData[] = {
		{ "Category", "WeaponDataStruct" },
		{ "Comment", "//The details containing how the weapon is positioned in space, and attachment and muzzle positions\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "The details containing how the weapon is positioned in space, and attachment and muzzle positions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_PositionalDetails = { "PositionalDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, PositionalDetails), Z_Construct_UScriptStruct_FWeaponPositionalDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_PositionalDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_PositionalDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_VisualAssets_MetaData[] = {
		{ "Category", "WeaponDataStruct" },
		{ "Comment", "//The asset references for the gun\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "The asset references for the gun" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_VisualAssets = { "VisualAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, VisualAssets), Z_Construct_UScriptStruct_FWeaponVisualAssets, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_VisualAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_VisualAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "WeaponDataStruct" },
		{ "Comment", "//The metadata storing gun info like fire type\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "The metadata storing gun info like fire type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, MetaData), Z_Construct_UScriptStruct_FWeaponMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "WeaponDataStruct" },
		{ "Comment", "//The stats of the weapon such as damage\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "The stats of the weapon such as damage" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, Stats), Z_Construct_UScriptStruct_FWeaponStats, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Stats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Recoil_MetaData[] = {
		{ "Category", "WeaponDataStruct" },
		{ "Comment", "//The recoil properties of the weapon\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "The recoil properties of the weapon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Recoil = { "Recoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, Recoil), Z_Construct_UScriptStruct_FWeaponRecoil, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Recoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Recoil_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_PositionalDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_VisualAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_Recoil,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
		nullptr,
		&NewStructOps,
		"WeaponDataStruct",
		sizeof(FWeaponDataStruct),
		alignof(FWeaponDataStruct),
		Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponDataStruct"), sizeof(FWeaponDataStruct), Get_Z_Construct_UScriptStruct_FWeaponDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponDataStruct_Hash() { return 1273177528U; }
class UScriptStruct* FWeaponRecoil::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponRecoil_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponRecoil, Z_Construct_UPackage__Script_fpsgame(), TEXT("WeaponRecoil"), sizeof(FWeaponRecoil), Get_Z_Construct_UScriptStruct_FWeaponRecoil_Hash());
	}
	return Singleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FWeaponRecoil>()
{
	return FWeaponRecoil::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponRecoil(FWeaponRecoil::StaticStruct, TEXT("/Script/fpsgame"), TEXT("WeaponRecoil"), false, nullptr, nullptr);
static struct FScriptStruct_fpsgame_StaticRegisterNativesFWeaponRecoil
{
	FScriptStruct_fpsgame_StaticRegisterNativesFWeaponRecoil()
	{
		UScriptStruct::DeferCppStructOps<FWeaponRecoil>(FName(TEXT("WeaponRecoil")));
	}
} ScriptStruct_fpsgame_StaticRegisterNativesFWeaponRecoil;
	struct Z_Construct_UScriptStruct_FWeaponRecoil_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRecoil_MetaData[];
#endif
		static void NewProp_bHasRecoil_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesControlRotationForHipfireRecoil_MetaData[];
#endif
		static void NewProp_bUsesControlRotationForHipfireRecoil_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesControlRotationForHipfireRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilVectorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecoilVectorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoveryTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponRecoil_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponRecoil>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bHasRecoil_MetaData[] = {
		{ "Category", "Weapon Recoil" },
		{ "Comment", "//Whether this gun has recoil\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Whether this gun has recoil" },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bHasRecoil_SetBit(void* Obj)
	{
		((FWeaponRecoil*)Obj)->bHasRecoil = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bHasRecoil = { "bHasRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponRecoil), &Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bHasRecoil_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bHasRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bHasRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bUsesControlRotationForHipfireRecoil_MetaData[] = {
		{ "Category", "Weapon Recoil" },
		{ "Comment", "//Whether this gun uses control rotation or gun recoil for hipfire recoil.\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Whether this gun uses control rotation or gun recoil for hipfire recoil." },
	};
#endif
	void Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bUsesControlRotationForHipfireRecoil_SetBit(void* Obj)
	{
		((FWeaponRecoil*)Obj)->bUsesControlRotationForHipfireRecoil = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bUsesControlRotationForHipfireRecoil = { "bUsesControlRotationForHipfireRecoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeaponRecoil), &Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bUsesControlRotationForHipfireRecoil_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bUsesControlRotationForHipfireRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bUsesControlRotationForHipfireRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoilVectorCurve_MetaData[] = {
		{ "Category", "Weapon Recoil" },
		{ "Comment", "//Recoil curve patterns\n//Pitch is Y\n//Yaw is Z\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Recoil curve patterns\nPitch is Y\nYaw is Z" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoilVectorCurve = { "RecoilVectorCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponRecoil, RecoilVectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoilVectorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoilVectorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoveryTime_MetaData[] = {
		{ "Category", "Weapon Recoil" },
		{ "ClampMin", "0" },
		{ "Comment", "//Time taken for weapon to recover\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Time taken for weapon to recover" },
		{ "UIMin", "0" },
		{ "Unit", "Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoveryTime = { "RecoveryTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponRecoil, RecoveryTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoveryTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoveryTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bHasRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_bUsesControlRotationForHipfireRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoilVectorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponRecoil_Statics::NewProp_RecoveryTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponRecoil_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
		nullptr,
		&NewStructOps,
		"WeaponRecoil",
		sizeof(FWeaponRecoil),
		alignof(FWeaponRecoil),
		Z_Construct_UScriptStruct_FWeaponRecoil_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponRecoil_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponRecoil()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponRecoil_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponRecoil"), sizeof(FWeaponRecoil), Get_Z_Construct_UScriptStruct_FWeaponRecoil_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponRecoil_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponRecoil_Hash() { return 2069619607U; }
class UScriptStruct* FWeaponStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponStats, Z_Construct_UPackage__Script_fpsgame(), TEXT("WeaponStats"), sizeof(FWeaponStats), Get_Z_Construct_UScriptStruct_FWeaponStats_Hash());
	}
	return Singleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FWeaponStats>()
{
	return FWeaponStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponStats(FWeaponStats::StaticStruct, TEXT("/Script/fpsgame"), TEXT("WeaponStats"), false, nullptr, nullptr);
static struct FScriptStruct_fpsgame_StaticRegisterNativesFWeaponStats
{
	FScriptStruct_fpsgame_StaticRegisterNativesFWeaponStats()
	{
		UScriptStruct::DeferCppStructOps<FWeaponStats>(FName(TEXT("WeaponStats")));
	}
} ScriptStruct_fpsgame_StaticRegisterNativesFWeaponStats;
	struct Z_Construct_UScriptStruct_FWeaponStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartridgeBullets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CartridgeBullets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BurstNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstFireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurstFireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMagSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxMagSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamageTorso_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamageTorso;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamageHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamageHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamageLegs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamageLegs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseHipfireSpreadAngleInDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseHipfireSpreadAngleInDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMovementSpreadMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseMovementSpreadMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nCurrently damage is hardcoded to the weapon itself, along with other stats.\nTo implement things like suppressors, bullets etc which could change these stats, we could use one of 2 approaches:\n\x09- Store all the attachment stats and apply them as necessary, based on the attached state\n\x09- On attaching, check which attachments have been selected and apply them to the gun itself. This assumes the gun cannot change during battle, although we could always modify if needed.\n\x09This second method is probably simpler, and would not require any extra processing or storing of attachment pointers post-start but we need to have a think.\n\n*/" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Currently damage is hardcoded to the weapon itself, along with other stats.\nTo implement things like suppressors, bullets etc which could change these stats, we could use one of 2 approaches:\n       - Store all the attachment stats and apply them as necessary, based on the attached state\n       - On attaching, check which attachments have been selected and apply them to the gun itself. This assumes the gun cannot change during battle, although we could always modify if needed.\n       This second method is probably simpler, and would not require any extra processing or storing of attachment pointers post-start but we need to have a think." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Max range of hitscan weapons in cm\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Max range of hitscan weapons in cm" },
		{ "UIMin", "0" },
		{ "Unit", "cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Minimum time between shots in seconds\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Minimum time between shots in seconds" },
		{ "UIMin", "0" },
		{ "Unit", "shots/second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, FireRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_CartridgeBullets_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "1" },
		{ "Comment", "//Number of rounds fired per shot (usually 1, may be more for shotguns)\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Number of rounds fired per shot (usually 1, may be more for shotguns)" },
		{ "UIMin", "1" },
		{ "Unit", "Rounds/shot" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_CartridgeBullets = { "CartridgeBullets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, CartridgeBullets), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_CartridgeBullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_CartridgeBullets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstNumber_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "1" },
		{ "Comment", "//Number of rounds fired per burst (usually 1, may be more for burst weapons)\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Number of rounds fired per burst (usually 1, may be more for burst weapons)" },
		{ "UIMin", "1" },
		{ "Unit", "Rounds/burst" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstNumber = { "BurstNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, BurstNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstFireRate_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Fire rate of bursts, leave 0 for no burst\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Fire rate of bursts, leave 0 for no burst" },
		{ "UIMin", "0" },
		{ "Unit", "shots/second during burst" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstFireRate = { "BurstFireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, BurstFireRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstFireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstFireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxMagSize_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "1" },
		{ "Comment", "//Maximum ammo the mag can store\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Maximum ammo the mag can store" },
		{ "UIMin", "1" },
		{ "Unit", "Rounds" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxMagSize = { "MaxMagSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, MaxMagSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxMagSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxMagSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageTorso_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Base damage of projectile in torso, TODO implement damage falloff\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Base damage of projectile in torso, TODO implement damage falloff" },
		{ "UIMin", "0" },
		{ "Unit", "Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageTorso = { "BaseDamageTorso", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, BaseDamageTorso), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageTorso_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageTorso_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageHead_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Base damage of projectile in head\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Base damage of projectile in head" },
		{ "UIMin", "0" },
		{ "Unit", "Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageHead = { "BaseDamageHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, BaseDamageHead), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageLegs_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Base damage of projectile in legs\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Base damage of projectile in legs" },
		{ "UIMin", "0" },
		{ "Unit", "Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageLegs = { "BaseDamageLegs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, BaseDamageLegs), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageLegs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageLegs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseHipfireSpreadAngleInDegrees_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Base spread when firing in hipfire - probably just use multiples for ADS and crouchwalk (e.g. 0.1x for ads, 0.2x for crouchwalk)\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Base spread when firing in hipfire - probably just use multiples for ADS and crouchwalk (e.g. 0.1x for ads, 0.2x for crouchwalk)" },
		{ "UIMin", "0" },
		{ "Unit", "Degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseHipfireSpreadAngleInDegrees = { "BaseHipfireSpreadAngleInDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, BaseHipfireSpreadAngleInDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseHipfireSpreadAngleInDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseHipfireSpreadAngleInDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseMovementSpreadMultiplier_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "ClampMin", "0" },
		{ "Comment", "//Movement multiplier for spread - 1 = 100%\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Movement multiplier for spread - 1 = 100%" },
		{ "UIMin", "0" },
		{ "Unit", "Multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseMovementSpreadMultiplier = { "BaseMovementSpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponStats, BaseMovementSpreadMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseMovementSpreadMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseMovementSpreadMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_CartridgeBullets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BurstFireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_MaxMagSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageTorso,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseDamageLegs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseHipfireSpreadAngleInDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponStats_Statics::NewProp_BaseMovementSpreadMultiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
		nullptr,
		&NewStructOps,
		"WeaponStats",
		sizeof(FWeaponStats),
		alignof(FWeaponStats),
		Z_Construct_UScriptStruct_FWeaponStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponStats"), sizeof(FWeaponStats), Get_Z_Construct_UScriptStruct_FWeaponStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponStats_Hash() { return 1612863344U; }
class UScriptStruct* FWeaponMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponMetaData, Z_Construct_UPackage__Script_fpsgame(), TEXT("WeaponMetaData"), sizeof(FWeaponMetaData), Get_Z_Construct_UScriptStruct_FWeaponMetaData_Hash());
	}
	return Singleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FWeaponMetaData>()
{
	return FWeaponMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponMetaData(FWeaponMetaData::StaticStruct, TEXT("/Script/fpsgame"), TEXT("WeaponMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_fpsgame_StaticRegisterNativesFWeaponMetaData
{
	FScriptStruct_fpsgame_StaticRegisterNativesFWeaponMetaData()
	{
		UScriptStruct::DeferCppStructOps<FWeaponMetaData>(FName(TEXT("WeaponMetaData")));
	}
} ScriptStruct_fpsgame_StaticRegisterNativesFWeaponMetaData;
	struct Z_Construct_UScriptStruct_FWeaponMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GunModel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GunModel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WAWeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WAWeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WAWeaponType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WAWeaponFireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WAWeaponFireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WAWeaponFireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WAWeaponHitDetectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WAWeaponHitDetectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WAWeaponHitDetectionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypeOfEquip_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeOfEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeOfEquip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//If you get undeclared struct errors is probably because structs were declatred in wrong order.\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "If you get undeclared struct errors is probably because structs were declatred in wrong order." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponMetaData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_GunModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_GunModel_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Actual gun model name\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Actual gun model name" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_GunModel = { "GunModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMetaData, GunModel), Z_Construct_UEnum_fpsgame_Guns, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_GunModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_GunModel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Type of weapon\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Type of weapon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponType = { "WAWeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMetaData, WAWeaponType), Z_Construct_UEnum_fpsgame_WeaponType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponFireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponFireType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Whether gun fires as burst, auto etc\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Whether gun fires as burst, auto etc" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponFireType = { "WAWeaponFireType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMetaData, WAWeaponFireType), Z_Construct_UEnum_fpsgame_FireMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponFireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponFireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponHitDetectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponHitDetectionType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Hit check type\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Hit check type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponHitDetectionType = { "WAWeaponHitDetectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMetaData, WAWeaponHitDetectionType), Z_Construct_UEnum_fpsgame_FireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponHitDetectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponHitDetectionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_TypeOfEquip_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_TypeOfEquip_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Gun is primary, secondary\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Gun is primary, secondary" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_TypeOfEquip = { "TypeOfEquip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMetaData, TypeOfEquip), Z_Construct_UEnum_fpsgame_Equips, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_TypeOfEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_TypeOfEquip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMetaData, ProjectileClass), Z_Construct_UClass_AFPSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_GunModel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_GunModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponFireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponFireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponHitDetectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_WAWeaponHitDetectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_TypeOfEquip_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_TypeOfEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMetaData_Statics::NewProp_ProjectileClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
		nullptr,
		&NewStructOps,
		"WeaponMetaData",
		sizeof(FWeaponMetaData),
		alignof(FWeaponMetaData),
		Z_Construct_UScriptStruct_FWeaponMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponMetaData"), sizeof(FWeaponMetaData), Get_Z_Construct_UScriptStruct_FWeaponMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponMetaData_Hash() { return 1915466941U; }
class UScriptStruct* FWeaponVisualAssets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponVisualAssets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponVisualAssets, Z_Construct_UPackage__Script_fpsgame(), TEXT("WeaponVisualAssets"), sizeof(FWeaponVisualAssets), Get_Z_Construct_UScriptStruct_FWeaponVisualAssets_Hash());
	}
	return Singleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FWeaponVisualAssets>()
{
	return FWeaponVisualAssets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponVisualAssets(FWeaponVisualAssets::StaticStruct, TEXT("/Script/fpsgame"), TEXT("WeaponVisualAssets"), false, nullptr, nullptr);
static struct FScriptStruct_fpsgame_StaticRegisterNativesFWeaponVisualAssets
{
	FScriptStruct_fpsgame_StaticRegisterNativesFWeaponVisualAssets()
	{
		UScriptStruct::DeferCppStructOps<FWeaponVisualAssets>(FName(TEXT("WeaponVisualAssets")));
	}
} ScriptStruct_fpsgame_StaticRegisterNativesFWeaponVisualAssets;
	struct Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TracerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponVisualAssets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Mesh of gun\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Mesh of gun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVisualAssets, GunMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_TracerEffect_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Particle system for gun tracers when using hitscan weapons.\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Particle system for gun tracers when using hitscan weapons." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_TracerEffect = { "TracerEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVisualAssets, TracerEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_TracerEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_TracerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Particle system for gun muzzle flash.\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Particle system for gun muzzle flash." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponVisualAssets, MuzzleFlash), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_MuzzleFlash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_TracerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::NewProp_MuzzleFlash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
		nullptr,
		&NewStructOps,
		"WeaponVisualAssets",
		sizeof(FWeaponVisualAssets),
		alignof(FWeaponVisualAssets),
		Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponVisualAssets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponVisualAssets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponVisualAssets"), sizeof(FWeaponVisualAssets), Get_Z_Construct_UScriptStruct_FWeaponVisualAssets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponVisualAssets_Hash() { return 4054952328U; }
class UScriptStruct* FWeaponPositionalDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponPositionalDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponPositionalDetails, Z_Construct_UPackage__Script_fpsgame(), TEXT("WeaponPositionalDetails"), sizeof(FWeaponPositionalDetails), Get_Z_Construct_UScriptStruct_FWeaponPositionalDetails_Hash());
	}
	return Singleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FWeaponPositionalDetails>()
{
	return FWeaponPositionalDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponPositionalDetails(FWeaponPositionalDetails::StaticStruct, TEXT("/Script/fpsgame"), TEXT("WeaponPositionalDetails"), false, nullptr, nullptr);
static struct FScriptStruct_fpsgame_StaticRegisterNativesFWeaponPositionalDetails
{
	FScriptStruct_fpsgame_StaticRegisterNativesFWeaponPositionalDetails()
	{
		UScriptStruct::DeferCppStructOps<FWeaponPositionalDetails>(FName(TEXT("WeaponPositionalDetails")));
	}
} ScriptStruct_fpsgame_StaticRegisterNativesFWeaponPositionalDetails;
	struct Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPBaseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TPBaseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TPBaseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TPBasePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TPBasePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponPositionalDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BasePosition_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Stores translation vectors to position weapon correctly\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Stores translation vectors to position weapon correctly" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BasePosition = { "BasePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponPositionalDetails, BasePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BasePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BasePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseRotation_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Used to ensure rotation of gun is consistent to make it look pretty.\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Used to ensure rotation of gun is consistent to make it look pretty." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponPositionalDetails, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseScale_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Ensures correct scale\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Ensures correct scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseScale = { "BaseScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponPositionalDetails, BaseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseScale_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Ensures correct scale for TP\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Ensures correct scale for TP" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseScale = { "TPBaseScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponPositionalDetails, TPBaseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseRotation_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Ensures correct rotation fro TP\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Ensures correct rotation fro TP" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseRotation = { "TPBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponPositionalDetails, TPBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBasePosition_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Ensures correct position for TP\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Ensures correct position for TP" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBasePosition = { "TPBasePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponPositionalDetails, TPBasePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBasePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBasePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BasePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_BaseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::NewProp_TPBasePosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
		nullptr,
		&NewStructOps,
		"WeaponPositionalDetails",
		sizeof(FWeaponPositionalDetails),
		alignof(FWeaponPositionalDetails),
		Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponPositionalDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponPositionalDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponPositionalDetails"), sizeof(FWeaponPositionalDetails), Get_Z_Construct_UScriptStruct_FWeaponPositionalDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponPositionalDetails_Hash() { return 2875074321U; }
	DEFINE_FUNCTION(AWeaponActor::execSetAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmmo(Z_Param_NewAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execOnUnequipWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnequipWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execOnEquipWeapon)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipWeapon(Z_Param_AttachComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execOnDropWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execOnPickupWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickupWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execSetWeaponDataStruct)
	{
		P_GET_STRUCT(FWeaponDataStruct,Z_Param_NewWeaponDataStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponDataStruct(Z_Param_NewWeaponDataStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execGetAttachmentSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWeaponAttachmentSystem**)Z_Param__Result=P_THIS->GetAttachmentSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execGetWeaponDataStruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWeaponDataStruct*)Z_Param__Result=P_THIS->GetWeaponDataStruct();
		P_NATIVE_END;
	}
	void AWeaponActor::StaticRegisterNativesAWeaponActor()
	{
		UClass* Class = AWeaponActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachmentSystem", &AWeaponActor::execGetAttachmentSystem },
			{ "GetWeaponDataStruct", &AWeaponActor::execGetWeaponDataStruct },
			{ "OnDropWeapon", &AWeaponActor::execOnDropWeapon },
			{ "OnEquipWeapon", &AWeaponActor::execOnEquipWeapon },
			{ "OnPickupWeapon", &AWeaponActor::execOnPickupWeapon },
			{ "OnUnequipWeapon", &AWeaponActor::execOnUnequipWeapon },
			{ "SetAmmo", &AWeaponActor::execSetAmmo },
			{ "SetWeaponDataStruct", &AWeaponActor::execSetWeaponDataStruct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics
	{
		struct WeaponActor_eventGetAttachmentSystem_Parms
		{
			UWeaponAttachmentSystem* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetAttachmentSystem_Parms, ReturnValue), Z_Construct_UClass_UWeaponAttachmentSystem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// get the weapon attachment system\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "get the weapon attachment system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "GetAttachmentSystem", nullptr, nullptr, sizeof(WeaponActor_eventGetAttachmentSystem_Parms), Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics
	{
		struct WeaponActor_eventGetWeaponDataStruct_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetWeaponDataStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "GetWeaponDataStruct", nullptr, nullptr, sizeof(WeaponActor_eventGetWeaponDataStruct_Parms), Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_OnDropWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_OnDropWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the gun is dropped\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Called when the gun is dropped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_OnDropWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "OnDropWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_OnDropWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_OnDropWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_OnDropWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_OnDropWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics
	{
		struct WeaponActor_eventOnEquipWeapon_Parms
		{
			USceneComponent* AttachComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::NewProp_AttachComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventOnEquipWeapon_Parms, AttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::NewProp_AttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::NewProp_AttachComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::NewProp_AttachComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the gun is equipped\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Called when the gun is equipped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "OnEquipWeapon", nullptr, nullptr, sizeof(WeaponActor_eventOnEquipWeapon_Parms), Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_OnEquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_OnEquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_OnPickupWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_OnPickupWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the gun is picked up\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Called when the gun is picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_OnPickupWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "OnPickupWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_OnPickupWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_OnPickupWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_OnPickupWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_OnPickupWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the gun is unequipped\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Called when the gun is unequipped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "OnUnequipWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics
	{
		struct WeaponActor_eventSetAmmo_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventSetAmmo_Parms, NewAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::NewProp_NewAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called to set the weapon ammo\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Called to set the weapon ammo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "SetAmmo", nullptr, nullptr, sizeof(WeaponActor_eventSetAmmo_Parms), Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_SetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_SetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics
	{
		struct WeaponActor_eventSetWeaponDataStruct_Parms
		{
			FWeaponDataStruct NewWeaponDataStruct;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewWeaponDataStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::NewProp_NewWeaponDataStruct = { "NewWeaponDataStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventSetWeaponDataStruct_Parms, NewWeaponDataStruct), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::NewProp_NewWeaponDataStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "SetWeaponDataStruct", nullptr, nullptr, sizeof(WeaponActor_eventSetWeaponDataStruct_Parms), Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponActor_NoRegister()
	{
		return AWeaponActor::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StockSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StockSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MagAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollisionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxCollisionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticGunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticGunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponActor_GetAttachmentSystem, "GetAttachmentSystem" }, // 1517442139
		{ &Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct, "GetWeaponDataStruct" }, // 3993678136
		{ &Z_Construct_UFunction_AWeaponActor_OnDropWeapon, "OnDropWeapon" }, // 2865605157
		{ &Z_Construct_UFunction_AWeaponActor_OnEquipWeapon, "OnEquipWeapon" }, // 1192083165
		{ &Z_Construct_UFunction_AWeaponActor_OnPickupWeapon, "OnPickupWeapon" }, // 4255992814
		{ &Z_Construct_UFunction_AWeaponActor_OnUnequipWeapon, "OnUnequipWeapon" }, // 3355722316
		{ &Z_Construct_UFunction_AWeaponActor_SetAmmo, "SetAmmo" }, // 1216203504
		{ &Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct, "SetWeaponDataStruct" }, // 3708390844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponData_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "Comment", "//Storing the data for the playable weapon\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Storing the data for the playable weapon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, WeaponData), Z_Construct_UScriptStruct_FWeaponDataStruct, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_SightSceneComponent_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "Comment", "//Stores attachment scene componnts\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Stores attachment scene componnts" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_SightSceneComponent = { "SightSceneComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, SightSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_SightSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_SightSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_BarrelSceneComponent_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_BarrelSceneComponent = { "BarrelSceneComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, BarrelSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BarrelSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BarrelSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagSceneComponent_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagSceneComponent = { "MagSceneComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MagSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_StockSceneComponent_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_StockSceneComponent = { "StockSceneComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, StockSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_StockSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_StockSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_AttachmentSystem_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "Comment", "// Attachment system object ref\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Attachment system object ref" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_AttachmentSystem = { "AttachmentSystem", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, AttachmentSystem), Z_Construct_UClass_UWeaponAttachmentSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AttachmentSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AttachmentSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MuzzleSceneComponent_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "Comment", "// Muzzle scene component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Muzzle scene component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MuzzleSceneComponent = { "MuzzleSceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MuzzleSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MuzzleSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MuzzleSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagAmmo_MetaData[] = {
		{ "Comment", "//Ammo in the mag currently\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Ammo in the mag currently" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagAmmo = { "MagAmmo", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MagAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_BoxCollisionSize_MetaData[] = {
		{ "Category", "Weapon Collision" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_BoxCollisionSize = { "BoxCollisionSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, BoxCollisionSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BoxCollisionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BoxCollisionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_StaticGunMesh_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Mesh of gun\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Mesh of gun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_StaticGunMesh = { "StaticGunMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, StaticGunMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_StaticGunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_StaticGunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Weapon pickup" },
		{ "Comment", "//Component which allows weapon prop to be interacted with\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Component which allows weapon prop to be interacted with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, InteractionComponent), Z_Construct_UClass_UInteractableObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_InteractionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_InteractionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_SightSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_BarrelSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_StockSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_AttachmentSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MuzzleSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_BoxCollisionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_StaticGunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_InteractionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponActor_Statics::ClassParams = {
		&AWeaponActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponActor, 3655356791);
	template<> FPSGAME_API UClass* StaticClass<AWeaponActor>()
	{
		return AWeaponActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponActor(Z_Construct_UClass_AWeaponActor, &AWeaponActor::StaticClass, TEXT("/Script/fpsgame"), TEXT("AWeaponActor"), false, nullptr, nullptr, nullptr);

	void AWeaponActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MagAmmo(TEXT("MagAmmo"));

		const bool bIsValid = true
			&& Name_MagAmmo == ClassReps[(int32)ENetFields_Private::MagAmmo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeaponActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
