// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/PrototypePistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypePistol() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_APrototypePistol_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_APrototypePistol();
	FPSGAME_API UClass* Z_Construct_UClass_AWeaponActor();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
// End Cross Module References
	void APrototypePistol::StaticRegisterNativesAPrototypePistol()
	{
	}
	UClass* Z_Construct_UClass_APrototypePistol_NoRegister()
	{
		return APrototypePistol::StaticClass();
	}
	struct Z_Construct_UClass_APrototypePistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototypePistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponActor,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototypePistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PrototypePistol.h" },
		{ "ModuleRelativePath", "PrototypePistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototypePistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypePistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrototypePistol_Statics::ClassParams = {
		&APrototypePistol::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrototypePistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrototypePistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototypePistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrototypePistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrototypePistol, 3066176463);
	template<> FPSGAME_API UClass* StaticClass<APrototypePistol>()
	{
		return APrototypePistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrototypePistol(Z_Construct_UClass_APrototypePistol, &APrototypePistol::StaticClass, TEXT("/Script/fpsgame"), TEXT("APrototypePistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypePistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
