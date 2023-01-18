// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/SightData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSightData() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_USightData_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_USightData();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
// End Cross Module References
	void USightData::StaticRegisterNativesUSightData()
	{
	}
	UClass* Z_Construct_UClass_USightData_NoRegister()
	{
		return USightData::StaticClass();
	}
	struct Z_Construct_UClass_USightData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USightData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//Handles data and functionality relating to the weapon sights (primarily ADSing)\n" },
		{ "IncludePath", "SightData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Handles data and functionality relating to the weapon sights (primarily ADSing)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USightData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USightData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USightData_Statics::ClassParams = {
		&USightData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USightData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USightData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USightData, 2697193718);
	template<> FPSGAME_API UClass* StaticClass<USightData>()
	{
		return USightData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USightData(Z_Construct_UClass_USightData, &USightData::StaticClass, TEXT("/Script/fpsgame"), TEXT("USightData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USightData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
