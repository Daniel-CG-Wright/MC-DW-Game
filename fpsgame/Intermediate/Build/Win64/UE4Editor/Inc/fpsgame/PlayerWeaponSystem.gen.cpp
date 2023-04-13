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
// End Cross Module References
	void UPlayerWeaponSystem::StaticRegisterNativesUPlayerWeaponSystem()
	{
	}
	UClass* Z_Construct_UClass_UPlayerWeaponSystem_NoRegister()
	{
		return UPlayerWeaponSystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerWeaponSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerWeaponSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerWeaponSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerWeaponSystem.h" },
		{ "ModuleRelativePath", "PlayerWeaponSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerWeaponSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWeaponSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWeaponSystem_Statics::ClassParams = {
		&UPlayerWeaponSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(UPlayerWeaponSystem, 241018864);
	template<> FPSGAME_API UClass* StaticClass<UPlayerWeaponSystem>()
	{
		return UPlayerWeaponSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerWeaponSystem(Z_Construct_UClass_UPlayerWeaponSystem, &UPlayerWeaponSystem::StaticClass, TEXT("/Script/fpsgame"), TEXT("UPlayerWeaponSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWeaponSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
