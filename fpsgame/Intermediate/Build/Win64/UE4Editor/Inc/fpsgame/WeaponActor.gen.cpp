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
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_WeaponType();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_FireMode();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_FireType();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_Guns();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_Equips();
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponDataStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSGAME_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UInteractableObjectComponent_NoRegister();
// End Cross Module References
	static UEnum* WeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_WeaponType, Z_Construct_UPackage__Script_fpsgame(), TEXT("WeaponType"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<WeaponType>()
	{
		return WeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_WeaponType(WeaponType_StaticEnum, TEXT("/Script/fpsgame"), TEXT("WeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_WeaponType_Hash() { return 202308427U; }
	UEnum* Z_Construct_UEnum_fpsgame_WeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("WeaponType"), 0, Get_Z_Construct_UEnum_fpsgame_WeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WeaponType::AR", (int64)WeaponType::AR },
				{ "WeaponType::SMG", (int64)WeaponType::SMG },
				{ "WeaponType::PISTOL", (int64)WeaponType::PISTOL },
				{ "WeaponType::SHOTGUN", (int64)WeaponType::SHOTGUN },
				{ "WeaponType::SNIPER_RIFLE", (int64)WeaponType::SNIPER_RIFLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AR.Name", "WeaponType::AR" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "WeaponActor.h" },
				{ "PISTOL.Name", "WeaponType::PISTOL" },
				{ "SHOTGUN.Name", "WeaponType::SHOTGUN" },
				{ "SMG.Name", "WeaponType::SMG" },
				{ "SNIPER_RIFLE.Name", "WeaponType::SNIPER_RIFLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"WeaponType",
				"WeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FireMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_FireMode, Z_Construct_UPackage__Script_fpsgame(), TEXT("FireMode"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<FireMode>()
	{
		return FireMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FireMode(FireMode_StaticEnum, TEXT("/Script/fpsgame"), TEXT("FireMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_FireMode_Hash() { return 3316506232U; }
	UEnum* Z_Construct_UEnum_fpsgame_FireMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FireMode"), 0, Get_Z_Construct_UEnum_fpsgame_FireMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FireMode::AUTO", (int64)FireMode::AUTO },
				{ "FireMode::BURST", (int64)FireMode::BURST },
				{ "FireMode::SEMI", (int64)FireMode::SEMI },
				{ "FireMode::BOLT", (int64)FireMode::BOLT },
				{ "FireMode::BEAM", (int64)FireMode::BEAM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AUTO.Comment", "//Automatic firing (hold down mouse)\n" },
				{ "AUTO.Name", "FireMode::AUTO" },
				{ "AUTO.ToolTip", "Automatic firing (hold down mouse)" },
				{ "BEAM.Comment", "//Beam, probably not used\n" },
				{ "BEAM.Name", "FireMode::BEAM" },
				{ "BEAM.ToolTip", "Beam, probably not used" },
				{ "BlueprintType", "true" },
				{ "BOLT.Comment", "//Bolt, requires animation between shots\n" },
				{ "BOLT.Name", "FireMode::BOLT" },
				{ "BOLT.ToolTip", "Bolt, requires animation between shots" },
				{ "BURST.Comment", "//Burst, should set burst amount if in use. Auto firing in bursts\n" },
				{ "BURST.Name", "FireMode::BURST" },
				{ "BURST.ToolTip", "Burst, should set burst amount if in use. Auto firing in bursts" },
				{ "ModuleRelativePath", "WeaponActor.h" },
				{ "SEMI.Comment", "//Semi - tap fire\n" },
				{ "SEMI.Name", "FireMode::SEMI" },
				{ "SEMI.ToolTip", "Semi - tap fire" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"FireMode",
				"FireMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FireType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_FireType, Z_Construct_UPackage__Script_fpsgame(), TEXT("FireType"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<FireType>()
	{
		return FireType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FireType(FireType_StaticEnum, TEXT("/Script/fpsgame"), TEXT("FireType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_FireType_Hash() { return 3636956065U; }
	UEnum* Z_Construct_UEnum_fpsgame_FireType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FireType"), 0, Get_Z_Construct_UEnum_fpsgame_FireType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FireType::HITSCAN", (int64)FireType::HITSCAN },
				{ "FireType::PROJECTILE", (int64)FireType::PROJECTILE },
				{ "FireType::HYBRID", (int64)FireType::HYBRID },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HITSCAN.Comment", "//Hitscan weapon\n" },
				{ "HITSCAN.Name", "FireType::HITSCAN" },
				{ "HITSCAN.ToolTip", "Hitscan weapon" },
				{ "HYBRID.Comment", "//Checks for hitscan, if not, fires projectile\n" },
				{ "HYBRID.Name", "FireType::HYBRID" },
				{ "HYBRID.ToolTip", "Checks for hitscan, if not, fires projectile" },
				{ "ModuleRelativePath", "WeaponActor.h" },
				{ "PROJECTILE.Comment", "//Projectile weapon\n" },
				{ "PROJECTILE.Name", "FireType::PROJECTILE" },
				{ "PROJECTILE.ToolTip", "Projectile weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"FireType",
				"FireType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* Guns_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_Guns, Z_Construct_UPackage__Script_fpsgame(), TEXT("Guns"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<Guns>()
	{
		return Guns_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Guns(Guns_StaticEnum, TEXT("/Script/fpsgame"), TEXT("Guns"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_Guns_Hash() { return 4016207450U; }
	UEnum* Z_Construct_UEnum_fpsgame_Guns()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Guns"), 0, Get_Z_Construct_UEnum_fpsgame_Guns_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Guns::NONE", (int64)Guns::NONE },
				{ "Guns::PROTOTYPE_PISTOL", (int64)Guns::PROTOTYPE_PISTOL },
				{ "Guns::PROTOTYPE_AR", (int64)Guns::PROTOTYPE_AR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "WeaponActor.h" },
				{ "NONE.Name", "Guns::NONE" },
				{ "PROTOTYPE_AR.Name", "Guns::PROTOTYPE_AR" },
				{ "PROTOTYPE_PISTOL.Comment", "//Default testing pistol\n" },
				{ "PROTOTYPE_PISTOL.Name", "Guns::PROTOTYPE_PISTOL" },
				{ "PROTOTYPE_PISTOL.ToolTip", "Default testing pistol" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"Guns",
				"Guns",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* Equips_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_Equips, Z_Construct_UPackage__Script_fpsgame(), TEXT("Equips"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<Equips>()
	{
		return Equips_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Equips(Equips_StaticEnum, TEXT("/Script/fpsgame"), TEXT("Equips"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_Equips_Hash() { return 1864724453U; }
	UEnum* Z_Construct_UEnum_fpsgame_Equips()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Equips"), 0, Get_Z_Construct_UEnum_fpsgame_Equips_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Equips::PRIMARY", (int64)Equips::PRIMARY },
				{ "Equips::SECONDARY", (int64)Equips::SECONDARY },
				{ "Equips::BOTH", (int64)Equips::BOTH },
				{ "Equips::MELEE", (int64)Equips::MELEE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BOTH.Name", "Equips::BOTH" },
				{ "MELEE.Name", "Equips::MELEE" },
				{ "ModuleRelativePath", "WeaponActor.h" },
				{ "PRIMARY.Comment", "//Default testing pistol\n" },
				{ "PRIMARY.Name", "Equips::PRIMARY" },
				{ "PRIMARY.ToolTip", "Default testing pistol" },
				{ "SECONDARY.Name", "Equips::SECONDARY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"Equips",
				"Equips",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypeOfEquip_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeOfEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeOfEquip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GunModel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GunModel;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, ProjectileClass), Z_Construct_UClass_AProjectileBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "Comment", "//Max range of hitscan weapons in cm\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Max range of hitscan weapons in cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "Comment", "//Minimum time between shots in seconds\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Minimum time between shots in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, FireRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_CartridgeBullets_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "Comment", "//Number of rounds fired per shot (usually 1, may be more for shotguns)\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Number of rounds fired per shot (usually 1, may be more for shotguns)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_CartridgeBullets = { "CartridgeBullets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, CartridgeBullets), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_CartridgeBullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_CartridgeBullets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BurstNumber_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "Comment", "//Number of rounds fired per burst (usually 1, may be more for burst weapons)\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Number of rounds fired per burst (usually 1, may be more for burst weapons)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BurstNumber = { "BurstNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, BurstNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BurstNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BurstNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "Weapon stats" },
		{ "Comment", "//Speed of projectile rounds fired\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Speed of projectile rounds fired" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, ProjectileSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Type of weapon\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Type of weapon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponType = { "WAWeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, WAWeaponType), Z_Construct_UEnum_fpsgame_WeaponType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponFireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponFireType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Whether gun fires as burst, auto etc\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Whether gun fires as burst, auto etc" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponFireType = { "WAWeaponFireType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, WAWeaponFireType), Z_Construct_UEnum_fpsgame_FireMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponFireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponFireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponHitDetectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponHitDetectionType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Hit check type\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Hit check type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponHitDetectionType = { "WAWeaponHitDetectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, WAWeaponHitDetectionType), Z_Construct_UEnum_fpsgame_FireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponHitDetectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponHitDetectionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Mesh of gun\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Mesh of gun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, GunMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_TypeOfEquip_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_TypeOfEquip_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Gun is primary, secondary\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Gun is primary, secondary" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_TypeOfEquip = { "TypeOfEquip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, TypeOfEquip), Z_Construct_UEnum_fpsgame_Equips, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_TypeOfEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_TypeOfEquip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunModel_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Actual gun model\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Actual gun model" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunModel = { "GunModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, GunModel), Z_Construct_UEnum_fpsgame_Guns, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BasePosition_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Stores translation vectors to position weapon correctly\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Stores translation vectors to position weapon correctly" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BasePosition = { "BasePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, BasePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BasePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BasePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseRotation_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Used to ensure rotation of gun is consistent to make it look pretty.\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Used to ensure rotation of gun is consistent to make it look pretty." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseScale_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Ensures correct scale\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Ensures correct scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseScale = { "BaseScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponDataStruct, BaseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_CartridgeBullets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BurstNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_ProjectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponFireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponFireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponHitDetectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_WAWeaponHitDetectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_TypeOfEquip_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_TypeOfEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunModel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_GunModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BasePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponDataStruct_Statics::NewProp_BaseScale,
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
	uint32 Get_Z_Construct_UScriptStruct_FWeaponDataStruct_Hash() { return 503532017U; }
	DEFINE_FUNCTION(AWeaponActor::execSetWeaponDataStruct)
	{
		P_GET_STRUCT(FWeaponDataStruct,Z_Param_NewWeaponDataStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponDataStruct(Z_Param_NewWeaponDataStruct);
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
			{ "GetWeaponDataStruct", &AWeaponActor::execGetWeaponDataStruct },
			{ "SetWeaponDataStruct", &AWeaponActor::execSetWeaponDataStruct },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
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
		{ &Z_Construct_UFunction_AWeaponActor_GetWeaponDataStruct, "GetWeaponDataStruct" }, // 3993678136
		{ &Z_Construct_UFunction_AWeaponActor_SetWeaponDataStruct, "SetWeaponDataStruct" }, // 3708390844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponActor.h" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Weapon Collision" },
		{ "Comment", "//Used to detect whether gun is near player for pickups\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Used to detect whether gun is near player for pickups" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_CollisionComponent_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_CollisionComponent,
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
	IMPLEMENT_CLASS(AWeaponActor, 1273343532);
	template<> FPSGAME_API UClass* StaticClass<AWeaponActor>()
	{
		return AWeaponActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponActor(Z_Construct_UClass_AWeaponActor, &AWeaponActor::StaticClass, TEXT("/Script/fpsgame"), TEXT("AWeaponActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
