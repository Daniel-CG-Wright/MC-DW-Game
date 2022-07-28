// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/FPSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerController() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSPlayerController::execServerRequestServerTime)
	{
		P_GET_OBJECT(APlayerController,Z_Param_requester);
		P_GET_PROPERTY(FFloatProperty,Z_Param_requestWorldTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerRequestServerTime_Validate(Z_Param_requester,Z_Param_requestWorldTime))
		{
			RPC_ValidateFailed(TEXT("ServerRequestServerTime_Validate"));
			return;
		}
		P_THIS->ServerRequestServerTime_Implementation(Z_Param_requester,Z_Param_requestWorldTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerController::execClientReportServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_requestWorldTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_serverTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReportServerTime_Implementation(Z_Param_requestWorldTime,Z_Param_serverTime);
		P_NATIVE_END;
	}
	static FName NAME_AFPSPlayerController_ClientReportServerTime = FName(TEXT("ClientReportServerTime"));
	void AFPSPlayerController::ClientReportServerTime(float requestWorldTime, float serverTime)
	{
		FPSPlayerController_eventClientReportServerTime_Parms Parms;
		Parms.requestWorldTime=requestWorldTime;
		Parms.serverTime=serverTime;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerController_ClientReportServerTime),&Parms);
	}
	static FName NAME_AFPSPlayerController_ServerRequestServerTime = FName(TEXT("ServerRequestServerTime"));
	void AFPSPlayerController::ServerRequestServerTime(APlayerController* requester, float requestWorldTime)
	{
		FPSPlayerController_eventServerRequestServerTime_Parms Parms;
		Parms.requester=requester;
		Parms.requestWorldTime=requestWorldTime;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerController_ServerRequestServerTime),&Parms);
	}
	void AFPSPlayerController::StaticRegisterNativesAFPSPlayerController()
	{
		UClass* Class = AFPSPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientReportServerTime", &AFPSPlayerController::execClientReportServerTime },
			{ "ServerRequestServerTime", &AFPSPlayerController::execServerRequestServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_requestWorldTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_serverTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::NewProp_requestWorldTime = { "requestWorldTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerController_eventClientReportServerTime_Parms, requestWorldTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::NewProp_serverTime = { "serverTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerController_eventClientReportServerTime_Parms, serverTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::NewProp_requestWorldTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::NewProp_serverTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Reports the current server time to clients in response\n      * to ServerRequestServerTime */" },
		{ "ModuleRelativePath", "FPSPlayerController.h" },
		{ "ToolTip", "Reports the current server time to clients in response\nto ServerRequestServerTime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "ClientReportServerTime", nullptr, nullptr, sizeof(FPSPlayerController_eventClientReportServerTime_Parms), Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_requester;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_requestWorldTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::NewProp_requester = { "requester", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerController_eventServerRequestServerTime_Parms, requester), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::NewProp_requestWorldTime = { "requestWorldTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerController_eventServerRequestServerTime_Parms, requestWorldTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::NewProp_requester,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::NewProp_requestWorldTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Requests current server time so accurate lag\n      * compensation can be performed in ClientReportServerTime\n      * based on the round-trip duration */" },
		{ "ModuleRelativePath", "FPSPlayerController.h" },
		{ "ToolTip", "Requests current server time so accurate lag\ncompensation can be performed in ClientReportServerTime\nbased on the round-trip duration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "ServerRequestServerTime", nullptr, nullptr, sizeof(FPSPlayerController_eventServerRequestServerTime_Parms), Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister()
	{
		return AFPSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerController_ClientReportServerTime, "ClientReportServerTime" }, // 3805714655
		{ &Z_Construct_UFunction_AFPSPlayerController_ServerRequestServerTime, "ServerRequestServerTime" }, // 3521302423
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSPlayerController.h" },
		{ "ModuleRelativePath", "FPSPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams = {
		&AFPSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerController, 3864761983);
	template<> FPSGAME_API UClass* StaticClass<AFPSPlayerController>()
	{
		return AFPSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerController(Z_Construct_UClass_AFPSPlayerController, &AFPSPlayerController::StaticClass, TEXT("/Script/fpsgame"), TEXT("AFPSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
