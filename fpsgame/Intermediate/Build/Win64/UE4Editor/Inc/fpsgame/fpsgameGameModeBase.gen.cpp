// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/fpsgameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefpsgameGameModeBase() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AfpsgameGameModeBase_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AfpsgameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
// End Cross Module References
	void AfpsgameGameModeBase::StaticRegisterNativesAfpsgameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AfpsgameGameModeBase_NoRegister()
	{
		return AfpsgameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AfpsgameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfpsgameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfpsgameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "fpsgameGameModeBase.h" },
		{ "ModuleRelativePath", "fpsgameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfpsgameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfpsgameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AfpsgameGameModeBase_Statics::ClassParams = {
		&AfpsgameGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AfpsgameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfpsgameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfpsgameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AfpsgameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AfpsgameGameModeBase, 1889937297);
	template<> FPSGAME_API UClass* StaticClass<AfpsgameGameModeBase>()
	{
		return AfpsgameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AfpsgameGameModeBase(Z_Construct_UClass_AfpsgameGameModeBase, &AfpsgameGameModeBase::StaticClass, TEXT("/Script/fpsgame"), TEXT("AfpsgameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfpsgameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
