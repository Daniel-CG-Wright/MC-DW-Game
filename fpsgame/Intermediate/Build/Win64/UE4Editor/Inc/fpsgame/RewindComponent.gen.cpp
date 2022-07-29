// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/RewindComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewindComponent() {}
// Cross Module References
	FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRewindDataStruct();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	FPSGAME_API UClass* Z_Construct_UClass_URewindComponent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_URewindComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FRewindDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSGAME_API uint32 Get_Z_Construct_UScriptStruct_FRewindDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewindDataStruct, Z_Construct_UPackage__Script_fpsgame(), TEXT("RewindDataStruct"), sizeof(FRewindDataStruct), Get_Z_Construct_UScriptStruct_FRewindDataStruct_Hash());
	}
	return Singleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FRewindDataStruct>()
{
	return FRewindDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewindDataStruct(FRewindDataStruct::StaticStruct, TEXT("/Script/fpsgame"), TEXT("RewindDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_fpsgame_StaticRegisterNativesFRewindDataStruct
{
	FScriptStruct_fpsgame_StaticRegisterNativesFRewindDataStruct()
	{
		UScriptStruct::DeferCppStructOps<FRewindDataStruct>(FName(TEXT("RewindDataStruct")));
	}
} ScriptStruct_fpsgame_StaticRegisterNativesFRewindDataStruct;
	struct Z_Construct_UScriptStruct_FRewindDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewindDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Struct used to store data about parent transform and pose for snapshots.\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "Struct used to store data about parent transform and pose for snapshots." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewindDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotPosition_MetaData[] = {
		{ "Comment", "//stores the position\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "stores the position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotPosition = { "SnapshotPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewindDataStruct, SnapshotPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotRotation_MetaData[] = {
		{ "Comment", "//stores the rotation\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "stores the rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotRotation = { "SnapshotRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewindDataStruct, SnapshotRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotScale_MetaData[] = {
		{ "Comment", "//Stores the scale\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "Stores the scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotScale = { "SnapshotScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewindDataStruct, SnapshotScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_PoseSnapshot_MetaData[] = {
		{ "Comment", "//Stores the pose snapshot\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "Stores the pose snapshot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewindDataStruct, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_PoseSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_PoseSnapshot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewindDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_SnapshotScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewindDataStruct_Statics::NewProp_PoseSnapshot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewindDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
		nullptr,
		&NewStructOps,
		"RewindDataStruct",
		sizeof(FRewindDataStruct),
		alignof(FRewindDataStruct),
		Z_Construct_UScriptStruct_FRewindDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewindDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewindDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewindDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewindDataStruct"), sizeof(FRewindDataStruct), Get_Z_Construct_UScriptStruct_FRewindDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewindDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewindDataStruct_Hash() { return 847806005U; }
	DEFINE_FUNCTION(URewindComponent::execRecordDetailsThisTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecordDetailsThisTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URewindComponent::execAddToGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToGameState();
		P_NATIVE_END;
	}
	static FName NAME_URewindComponent_GetCurrentTickPoseSnapshotBP = FName(TEXT("GetCurrentTickPoseSnapshotBP"));
	FPoseSnapshot URewindComponent::GetCurrentTickPoseSnapshotBP()
	{
		RewindComponent_eventGetCurrentTickPoseSnapshotBP_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_URewindComponent_GetCurrentTickPoseSnapshotBP),&Parms);
		return Parms.ReturnValue;
	}
	void URewindComponent::StaticRegisterNativesURewindComponent()
	{
		UClass* Class = URewindComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToGameState", &URewindComponent::execAddToGameState },
			{ "RecordDetailsThisTick", &URewindComponent::execRecordDetailsThisTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URewindComponent_AddToGameState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URewindComponent_AddToGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_AddToGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "AddToGameState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URewindComponent_AddToGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_AddToGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URewindComponent_AddToGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URewindComponent_AddToGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RewindComponent_eventGetCurrentTickPoseSnapshotBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//To be implemented in blueprints, will get the current tick pose snapshot and store it as current pose snapshot\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "To be implemented in blueprints, will get the current tick pose snapshot and store it as current pose snapshot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "GetCurrentTickPoseSnapshotBP", nullptr, nullptr, sizeof(RewindComponent_eventGetCurrentTickPoseSnapshotBP_Parms), Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Records transform and pose each tick, adds them to timestamp TMap\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "Records transform and pose each tick, adds them to timestamp TMap" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "RecordDetailsThisTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URewindComponent_NoRegister()
	{
		return URewindComponent::StaticClass();
	}
	struct Z_Construct_UClass_URewindComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewindTimestampsAndData_ValueProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RewindTimestampsAndData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewindTimestampsAndData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RewindTimestampsAndData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPoseSnapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentPoseSnapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URewindComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URewindComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URewindComponent_AddToGameState, "AddToGameState" }, // 1926495974
		{ &Z_Construct_UFunction_URewindComponent_GetCurrentTickPoseSnapshotBP, "GetCurrentTickPoseSnapshotBP" }, // 1517789089
		{ &Z_Construct_UFunction_URewindComponent_RecordDetailsThisTick, "RecordDetailsThisTick" }, // 3545378675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewindComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RewindComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RewindComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData_ValueProp = { "RewindTimestampsAndData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRewindDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData_Key_KeyProp = { "RewindTimestampsAndData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData_MetaData[] = {
		{ "Comment", "//Stores timestamps and corresponding data in the data struct\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "Stores timestamps and corresponding data in the data struct" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData = { "RewindTimestampsAndData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URewindComponent, RewindTimestampsAndData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewindComponent_Statics::NewProp_CurrentPoseSnapshot_MetaData[] = {
		{ "Category", "RewindComponent" },
		{ "Comment", "//Output for getting current tick pose snapshot\n" },
		{ "ModuleRelativePath", "RewindComponent.h" },
		{ "ToolTip", "Output for getting current tick pose snapshot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_CurrentPoseSnapshot = { "CurrentPoseSnapshot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URewindComponent, CurrentPoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UClass_URewindComponent_Statics::NewProp_CurrentPoseSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::NewProp_CurrentPoseSnapshot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URewindComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_RewindTimestampsAndData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_CurrentPoseSnapshot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URewindComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URewindComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URewindComponent_Statics::ClassParams = {
		&URewindComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URewindComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URewindComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URewindComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URewindComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URewindComponent, 1181932873);
	template<> FPSGAME_API UClass* StaticClass<URewindComponent>()
	{
		return URewindComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URewindComponent(Z_Construct_UClass_URewindComponent, &URewindComponent::StaticClass, TEXT("/Script/fpsgame"), TEXT("URewindComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URewindComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
