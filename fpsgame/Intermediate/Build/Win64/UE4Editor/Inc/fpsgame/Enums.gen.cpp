// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/Enums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_WeaponType();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_FireMode();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_FireType();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_Guns();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_Equips();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_EAttachmentType();
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
	uint32 Get_Z_Construct_UEnum_fpsgame_WeaponType_Hash() { return 948971207U; }
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
				{ "ModuleRelativePath", "Enums.h" },
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
	uint32 Get_Z_Construct_UEnum_fpsgame_FireMode_Hash() { return 1899728699U; }
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
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AUTO.Comment", "//Automatic firing (hold down mouse)\n" },
				{ "AUTO.Name", "FireMode::AUTO" },
				{ "AUTO.ToolTip", "Automatic firing (hold down mouse)" },
				{ "BlueprintType", "true" },
				{ "BOLT.Comment", "//Bolt, requires animation between shots\n" },
				{ "BOLT.Name", "FireMode::BOLT" },
				{ "BOLT.ToolTip", "Bolt, requires animation between shots" },
				{ "BURST.Comment", "//Burst, should set burst amount if in use. Auto firing in bursts\n" },
				{ "BURST.Name", "FireMode::BURST" },
				{ "BURST.ToolTip", "Burst, should set burst amount if in use. Auto firing in bursts" },
				{ "ModuleRelativePath", "Enums.h" },
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
	uint32 Get_Z_Construct_UEnum_fpsgame_FireType_Hash() { return 3816839592U; }
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
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HITSCAN.Comment", "//Hitscan weapon\n" },
				{ "HITSCAN.Name", "FireType::HITSCAN" },
				{ "HITSCAN.ToolTip", "Hitscan weapon" },
				{ "ModuleRelativePath", "Enums.h" },
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
	uint32 Get_Z_Construct_UEnum_fpsgame_Guns_Hash() { return 1143142774U; }
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
				{ "Guns::PROTOTYPE_BURST", (int64)Guns::PROTOTYPE_BURST },
				{ "Guns::PROTOTYPE_SHOTGUN", (int64)Guns::PROTOTYPE_SHOTGUN },
				{ "Guns::LAST", (int64)Guns::LAST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LAST.Name", "Guns::LAST" },
				{ "ModuleRelativePath", "Enums.h" },
				{ "NONE.Name", "Guns::NONE" },
				{ "PROTOTYPE_AR.Comment", "//testing AR\n" },
				{ "PROTOTYPE_AR.Displayname", "Prototype AR" },
				{ "PROTOTYPE_AR.Name", "Guns::PROTOTYPE_AR" },
				{ "PROTOTYPE_AR.ToolTip", "testing AR" },
				{ "PROTOTYPE_BURST.Comment", "//testing burst\n" },
				{ "PROTOTYPE_BURST.Displayname", "Prototype Burst" },
				{ "PROTOTYPE_BURST.Name", "Guns::PROTOTYPE_BURST" },
				{ "PROTOTYPE_BURST.ToolTip", "testing burst" },
				{ "PROTOTYPE_PISTOL.Comment", "//Default testing pistol\n" },
				{ "PROTOTYPE_PISTOL.DisplayName", "Prototype Pistol" },
				{ "PROTOTYPE_PISTOL.Name", "Guns::PROTOTYPE_PISTOL" },
				{ "PROTOTYPE_PISTOL.ToolTip", "Default testing pistol" },
				{ "PROTOTYPE_SHOTGUN.Comment", "//Testing shotgun\n" },
				{ "PROTOTYPE_SHOTGUN.Displayname", "Prototype Shotgun" },
				{ "PROTOTYPE_SHOTGUN.Name", "Guns::PROTOTYPE_SHOTGUN" },
				{ "PROTOTYPE_SHOTGUN.ToolTip", "Testing shotgun" },
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
	uint32 Get_Z_Construct_UEnum_fpsgame_Equips_Hash() { return 3910181107U; }
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
				{ "ModuleRelativePath", "Enums.h" },
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
	static UEnum* EAttachmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_EAttachmentType, Z_Construct_UPackage__Script_fpsgame(), TEXT("EAttachmentType"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<EAttachmentType>()
	{
		return EAttachmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttachmentType(EAttachmentType_StaticEnum, TEXT("/Script/fpsgame"), TEXT("EAttachmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_EAttachmentType_Hash() { return 3590466288U; }
	UEnum* Z_Construct_UEnum_fpsgame_EAttachmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttachmentType"), 0, Get_Z_Construct_UEnum_fpsgame_EAttachmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttachmentType::SIGHT", (int64)EAttachmentType::SIGHT },
				{ "EAttachmentType::MAG", (int64)EAttachmentType::MAG },
				{ "EAttachmentType::STOCK", (int64)EAttachmentType::STOCK },
				{ "EAttachmentType::UNDERBARREL", (int64)EAttachmentType::UNDERBARREL },
				{ "EAttachmentType::BARREL", (int64)EAttachmentType::BARREL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BARREL.DisplayName", "Barrel" },
				{ "BARREL.Name", "EAttachmentType::BARREL" },
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n 1. SIGHT\n 2. MAG\n 3. STOCK\n 4. UNDERBARREL\n 5. BARREL\n */" },
				{ "MAG.DisplayName", "Mag" },
				{ "MAG.Name", "EAttachmentType::MAG" },
				{ "ModuleRelativePath", "Enums.h" },
				{ "SIGHT.DisplayName", "Sight" },
				{ "SIGHT.Name", "EAttachmentType::SIGHT" },
				{ "STOCK.DisplayName", "Stock" },
				{ "STOCK.Name", "EAttachmentType::STOCK" },
				{ "ToolTip", "1. SIGHT\n2. MAG\n3. STOCK\n4. UNDERBARREL\n5. BARREL" },
				{ "UNDERBARREL.DisplayName", "Underbarrel" },
				{ "UNDERBARREL.Name", "EAttachmentType::UNDERBARREL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"EAttachmentType",
				"EAttachmentType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
