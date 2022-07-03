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
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
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
	void AWeaponActor::StaticRegisterNativesAWeaponActor()
	{
	}
	UClass* Z_Construct_UClass_AWeaponActor_NoRegister()
	{
		return AWeaponActor::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseRotation;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponActor.h" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MaxRange), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "Comment", "//Base damage before multipliers (falloff, headshot etc)\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Base damage before multipliers (falloff, headshot etc)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "Comment", "//Minimum time between shots\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Minimum time between shots" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, FireRate), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseRotation_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Used to ensure rotation of gun is consistent to make it look pretty.\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Used to ensure rotation of gun is consistent to make it look pretty." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, BaseRotation), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Type of weapon\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Type of weapon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponType = { "WAWeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, WAWeaponType), Z_Construct_UEnum_fpsgame_WeaponType, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponFireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponFireType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Whether gun fires as burst, auto etc\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Whether gun fires as burst, auto etc" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponFireType = { "WAWeaponFireType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, WAWeaponFireType), Z_Construct_UEnum_fpsgame_FireMode, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponFireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponFireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponHitDetectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponHitDetectionType_MetaData[] = {
		{ "Category", "Weapon Info" },
		{ "Comment", "//Hit check type\n" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Hit check type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponHitDetectionType = { "WAWeaponHitDetectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, WAWeaponHitDetectionType), Z_Construct_UEnum_fpsgame_FireType, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponHitDetectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponHitDetectionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Weapon visuals" },
		{ "Comment", "//Mesh of gun\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
		{ "ToolTip", "Mesh of gun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_GunMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_BaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponFireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponFireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponHitDetectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAWeaponHitDetectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_GunMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponActor_Statics::ClassParams = {
		&AWeaponActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AWeaponActor, 1895990585);
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
