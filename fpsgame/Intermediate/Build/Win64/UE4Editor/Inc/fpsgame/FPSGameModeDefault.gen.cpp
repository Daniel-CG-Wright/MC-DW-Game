// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/FPSGameModeDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameModeDefault() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameModeDefault_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameModeDefault();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
// End Cross Module References
	void AFPSGameModeDefault::StaticRegisterNativesAFPSGameModeDefault()
	{
	}
	UClass* Z_Construct_UClass_AFPSGameModeDefault_NoRegister()
	{
		return AFPSGameModeDefault::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameModeDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameModeDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameModeDefault_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSGameModeDefault.h" },
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameModeDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameModeDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameModeDefault_Statics::ClassParams = {
		&AFPSGameModeDefault::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGameModeDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGameModeDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGameModeDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGameModeDefault, 1617432046);
	template<> FPSGAME_API UClass* StaticClass<AFPSGameModeDefault>()
	{
		return AFPSGameModeDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGameModeDefault(Z_Construct_UClass_AFPSGameModeDefault, &AFPSGameModeDefault::StaticClass, TEXT("/Script/fpsgame"), TEXT("AFPSGameModeDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameModeDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
