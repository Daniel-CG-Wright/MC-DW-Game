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
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRewindDataStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSGameModeDefault::execResetActorPositionsToBefore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetActorPositionsToBefore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameModeDefault::execRewindActors)
	{
		P_GET_TMAP(AActor*,FRewindDataStruct,Z_Param_ValuesToUseInRewind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RewindActors(Z_Param_ValuesToUseInRewind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameModeDefault::execRemoveRewindComponent)
	{
		P_GET_OBJECT(URewindComponent,Z_Param_RewindComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRewindComponent(Z_Param_RewindComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameModeDefault::execAddRewindComponent)
	{
		P_GET_OBJECT(URewindComponent,Z_Param_RewindComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRewindComponent(Z_Param_RewindComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSGameModeDefault::execGetRewindComponentsSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<URewindComponent*>*)Z_Param__Result=P_THIS->GetRewindComponentsSet();
		P_NATIVE_END;
	}
	void AFPSGameModeDefault::StaticRegisterNativesAFPSGameModeDefault()
	{
		UClass* Class = AFPSGameModeDefault::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRewindComponent", &AFPSGameModeDefault::execAddRewindComponent },
			{ "GetRewindComponentsSet", &AFPSGameModeDefault::execGetRewindComponentsSet },
			{ "RemoveRewindComponent", &AFPSGameModeDefault::execRemoveRewindComponent },
			{ "ResetActorPositionsToBefore", &AFPSGameModeDefault::execResetActorPositionsToBefore },
			{ "RewindActors", &AFPSGameModeDefault::execRewindActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics
	{
		struct FPSGameModeDefault_eventAddRewindComponent_Parms
		{
			const URewindComponent* RewindComponent;
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
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent = { "RewindComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameModeDefault_eventAddRewindComponent_Parms, RewindComponent), Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent_Statics::NewProp_RewindComponent_MetaData)) };
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
	struct Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics
	{
		struct FPSGameModeDefault_eventGetRewindComponentsSet_Parms
		{
			TSet<URewindComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameModeDefault_eventGetRewindComponentsSet_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameModeDefault, nullptr, "GetRewindComponentsSet", nullptr, nullptr, sizeof(FPSGameModeDefault_eventGetRewindComponentsSet_Parms), Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics
	{
		struct FPSGameModeDefault_eventRemoveRewindComponent_Parms
		{
			const URewindComponent* RewindComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::NewProp_RewindComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::NewProp_RewindComponent = { "RewindComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameModeDefault_eventRemoveRewindComponent_Parms, RewindComponent), Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::NewProp_RewindComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::NewProp_RewindComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::NewProp_RewindComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameModeDefault, nullptr, "RemoveRewindComponent", nullptr, nullptr, sizeof(FPSGameModeDefault_eventRemoveRewindComponent_Parms), Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Sets actors back to their original positions, based on the last saved data\n" },
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
		{ "ToolTip", "Sets actors back to their original positions, based on the last saved data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameModeDefault, nullptr, "ResetActorPositionsToBefore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics
	{
		struct FPSGameModeDefault_eventRewindActors_Parms
		{
			TMap<AActor*,FRewindDataStruct> ValuesToUseInRewind;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValuesToUseInRewind_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValuesToUseInRewind_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValuesToUseInRewind_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ValuesToUseInRewind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind_ValueProp = { "ValuesToUseInRewind", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRewindDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind_Key_KeyProp = { "ValuesToUseInRewind_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind = { "ValuesToUseInRewind", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameModeDefault_eventRewindActors_Parms, ValuesToUseInRewind), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::NewProp_ValuesToUseInRewind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Rewinds actors to the values set in the input parameter\n" },
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
		{ "ToolTip", "Rewinds actors to the values set in the input parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameModeDefault, nullptr, "RewindActors", nullptr, nullptr, sizeof(FPSGameModeDefault_eventRewindActors_Parms), Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameModeDefault_RewindActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameModeDefault_RewindActors_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewindComponentsSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewindComponentsSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RewindComponentsSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedRewindValues_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SavedRewindValues_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedRewindValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SavedRewindValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameModeDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameModeDefault_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameModeDefault_AddRewindComponent, "AddRewindComponent" }, // 2505931985
		{ &Z_Construct_UFunction_AFPSGameModeDefault_GetRewindComponentsSet, "GetRewindComponentsSet" }, // 1463600685
		{ &Z_Construct_UFunction_AFPSGameModeDefault_RemoveRewindComponent, "RemoveRewindComponent" }, // 595260972
		{ &Z_Construct_UFunction_AFPSGameModeDefault_ResetActorPositionsToBefore, "ResetActorPositionsToBefore" }, // 135903384
		{ &Z_Construct_UFunction_AFPSGameModeDefault_RewindActors, "RewindActors" }, // 1534095678
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsSet_ElementProp = { "RewindComponentsSet", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URewindComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsSet_MetaData[] = {
		{ "Comment", "//Stores references to all the rewind components, all rewind components add themselves to this on Beginplay\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
		{ "ToolTip", "Stores references to all the rewind components, all rewind components add themselves to this on Beginplay" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsSet = { "RewindComponentsSet", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameModeDefault, RewindComponentsSet), METADATA_PARAMS(Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues_ValueProp = { "SavedRewindValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRewindDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues_Key_KeyProp = { "SavedRewindValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues_MetaData[] = {
		{ "Comment", "//Saved data storing all the actors and their rewind data structs needed from before a rewind takes place,\n//so that the rewinded actors can be set back to their original positions afterwards.\n" },
		{ "ModuleRelativePath", "FPSGameModeDefault.h" },
		{ "ToolTip", "Saved data storing all the actors and their rewind data structs needed from before a rewind takes place,\nso that the rewinded actors can be set back to their original positions afterwards." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues = { "SavedRewindValues", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGameModeDefault, SavedRewindValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameModeDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_RewindComponentsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeDefault_Statics::NewProp_SavedRewindValues,
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
	IMPLEMENT_CLASS(AFPSGameModeDefault, 1801247326);
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
