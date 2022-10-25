// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/ProjectileBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileBullet() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AProjectileBullet();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSProjectile();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProjectileBullet::execSetDamageType)
	{
		P_GET_OBJECT(UClass,Z_Param_newDamageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageType(Z_Param_newDamageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectileBullet::execSetDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamage(Z_Param_newDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectileBullet::execGetDamageType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UDamageType> *)Z_Param__Result=P_THIS->GetDamageType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectileBullet::execGetDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDamage();
		P_NATIVE_END;
	}
	void AProjectileBullet::StaticRegisterNativesAProjectileBullet()
	{
		UClass* Class = AProjectileBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamage", &AProjectileBullet::execGetDamage },
			{ "GetDamageType", &AProjectileBullet::execGetDamageType },
			{ "SetDamage", &AProjectileBullet::execSetDamage },
			{ "SetDamageType", &AProjectileBullet::execSetDamageType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics
	{
		struct ProjectileBullet_eventGetDamage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileBullet_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileBullet, nullptr, "GetDamage", nullptr, nullptr, sizeof(ProjectileBullet_eventGetDamage_Parms), Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileBullet_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectileBullet_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics
	{
		struct ProjectileBullet_eventGetDamageType_Parms
		{
			TSubclassOf<UDamageType>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileBullet_eventGetDamageType_Parms, ReturnValue), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileBullet, nullptr, "GetDamageType", nullptr, nullptr, sizeof(ProjectileBullet_eventGetDamageType_Parms), Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileBullet_GetDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectileBullet_GetDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics
	{
		struct ProjectileBullet_eventSetDamage_Parms
		{
			float newDamage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::NewProp_newDamage = { "newDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileBullet_eventSetDamage_Parms, newDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::NewProp_newDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileBullet, nullptr, "SetDamage", nullptr, nullptr, sizeof(ProjectileBullet_eventSetDamage_Parms), Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileBullet_SetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectileBullet_SetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics
	{
		struct ProjectileBullet_eventSetDamageType_Parms
		{
			TSubclassOf<UDamageType>  newDamageType;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_newDamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::NewProp_newDamageType = { "newDamageType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileBullet_eventSetDamageType_Parms, newDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::NewProp_newDamageType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileBullet, nullptr, "SetDamageType", nullptr, nullptr, sizeof(ProjectileBullet_eventSetDamageType_Parms), Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileBullet_SetDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectileBullet_SetDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectileBullet_NoRegister()
	{
		return AProjectileBullet::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectileBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileBullet_GetDamage, "GetDamage" }, // 3692565660
		{ &Z_Construct_UFunction_AProjectileBullet_GetDamageType, "GetDamageType" }, // 2271530512
		{ &Z_Construct_UFunction_AProjectileBullet_SetDamage, "SetDamage" }, // 1593526119
		{ &Z_Construct_UFunction_AProjectileBullet_SetDamageType, "SetDamageType" }, // 2273749123
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectileBullet.h" },
		{ "ModuleRelativePath", "ProjectileBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBullet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "ProjectileBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileBullet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBullet, Damage), METADATA_PARAMS(Z_Construct_UClass_AProjectileBullet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBullet_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "ProjectileBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileBullet_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileBullet, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectileBullet_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBullet_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBullet_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBullet_Statics::ClassParams = {
		&AProjectileBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectileBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileBullet, 2320452373);
	template<> FPSGAME_API UClass* StaticClass<AProjectileBullet>()
	{
		return AProjectileBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileBullet(Z_Construct_UClass_AProjectileBullet, &AProjectileBullet::StaticClass, TEXT("/Script/fpsgame"), TEXT("AProjectileBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
