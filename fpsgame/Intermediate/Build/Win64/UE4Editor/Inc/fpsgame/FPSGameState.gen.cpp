// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/FPSGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameState() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameState_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
// End Cross Module References
	DEFINE_FUNCTION(AFPSGameState::execGetMaxAllowedLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAllowedLatency();
		P_NATIVE_END;
	}
	void AFPSGameState::StaticRegisterNativesAFPSGameState()
	{
		UClass* Class = AFPSGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxAllowedLatency", &AFPSGameState::execGetMaxAllowedLatency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics
	{
		struct FPSGameState_eventGetMaxAllowedLatency_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameState_eventGetMaxAllowedLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameState, nullptr, "GetMaxAllowedLatency", nullptr, nullptr, sizeof(FPSGameState_eventGetMaxAllowedLatency_Parms), Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGameState_NoRegister()
	{
		return AFPSGameState::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedLatencyForRewind_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedLatencyForRewind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameState_GetMaxAllowedLatency, "GetMaxAllowedLatency" }, // 403820111
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSGameState.h" },
		{ "ModuleRelativePath", "FPSGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameState_Statics::NewProp_MaxAllowedLatencyForRewind_MetaData[] = {
		{ "Comment", "//Stores the maximum allowed latency (s) for a rewind to be allowed, otherwise it gives an unfair advantage to laggy bois\n" },
		{ "ModuleRelativePath", "FPSGameState.h" },
		{ "ToolTip", "Stores the maximum allowed latency (s) for a rewind to be allowed, otherwise it gives an unfair advantage to laggy bois" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_MaxAllowedLatencyForRewind = { "MaxAllowedLatencyForRewind", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameState, MaxAllowedLatencyForRewind), METADATA_PARAMS(Z_Construct_UClass_AFPSGameState_Statics::NewProp_MaxAllowedLatencyForRewind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::NewProp_MaxAllowedLatencyForRewind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_MaxAllowedLatencyForRewind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameState_Statics::ClassParams = {
		&AFPSGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGameState, 2501717136);
	template<> FPSGAME_API UClass* StaticClass<AFPSGameState>()
	{
		return AFPSGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGameState(Z_Construct_UClass_AFPSGameState, &AFPSGameState::StaticClass, TEXT("/Script/fpsgame"), TEXT("AFPSGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
