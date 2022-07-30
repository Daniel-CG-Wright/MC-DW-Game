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
	FPSGAME_API UClass* Z_Construct_UClass_URewindComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSGameModeDefault::execAddRewindComponent)
	{
		P_GET_OBJECT(URewindComponent,Z_Param_RewindComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRewindComponent(Z_Param_RewindComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameModeDefault::execGetRewindComponentsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URewindComponent*>*)Z_Param__Result=P_THIS->GetRewindComponentsArray();
		P_NATIVE_END;
	}
	void AFPSGameModeDefault::StaticRegisterNativesAFPSGameModeDefault()
	{
		UClass* Class = AFPSGameModeDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRewindComponent", &AFPSGameModeDefault::execAddRewindComponent },
			{ "GetRewindComponentsArray", &AFPSGameModeDefault::execGetRewindComponentsArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics
	{
		struct FPSGameModeDefault_eventAddRewindComponent_Parms
		{
			URewindComponent* RewindComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewindComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewindComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent = { "RewindComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameModeDefault_eventAddRewindComponent_Parms, RewindComponent), Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameModeDefault, nullptr, "AddRewindComponent", nullptr, nullptr, sizeof(FPSGameModeDefault_eventAddRewindComponent_Parms), Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics
	{
		struct FPSGameModeDefault_eventGetRewindComponentsArray_Parms
		{
			TArray<URewindComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameModeDefault_eventGetRewindComponentsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameModeDefault, nullptr, "GetRewindComponentsArray", nullptr, nullptr, sizeof(FPSGameModeDefault_eventGetRewindComponentsArray_Parms), Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGameModeDefault_NoRegister()
	{
		return AFPSGameModeDefault::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameModeDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewindComponentsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewindComponentsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewindComponentsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameModeDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameModeDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent, "AddRewindComponent" }, // 2731678645
		{ &Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsArray, "GetRewindComponentsArray" }, // 1412131143
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsArray_Inner = { "RewindComponentsArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsArray_MetaData[] = {
		{ "Comment", "//Stores references to all the rewind components, all rewind components add themselves to this on Beginplay\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
		{ "ToolTip", "Stores references to all the rewind components, all rewind components add themselves to this on Beginplay" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsArray = { "RewindComponentsArray", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameModeDefault, RewindComponentsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameModeDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameModeDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameModeDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameModeDefault_Statics::ClassParams = {
		&AFPSGameModeDefault::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSGameModeDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeDefault_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AFPSGameModeDefault, 1443921418);
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
