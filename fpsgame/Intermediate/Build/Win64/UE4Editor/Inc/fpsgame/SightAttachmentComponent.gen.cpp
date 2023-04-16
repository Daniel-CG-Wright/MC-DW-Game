// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/SightAttachmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSightAttachmentComponent() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_USightAttachmentComponent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_USightAttachmentComponent();
	FPSGAME_API UClass* Z_Construct_UClass_UBaseAttachmentComponent();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_USightAttachmentComponent_OnAimDownSights = FName(TEXT("OnAimDownSights"));
	void USightAttachmentComponent::OnAimDownSights()
	{
		ProcessEvent(FindFunctionChecked(NAME_USightAttachmentComponent_OnAimDownSights),NULL);
	}
	static FName NAME_USightAttachmentComponent_StopAimDownSights = FName(TEXT("StopAimDownSights"));
	void USightAttachmentComponent::StopAimDownSights()
	{
		ProcessEvent(FindFunctionChecked(NAME_USightAttachmentComponent_StopAimDownSights),NULL);
	}
	void USightAttachmentComponent::StaticRegisterNativesUSightAttachmentComponent()
	{
	}
	struct Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAttachmentComponent" },
		{ "Comment", "// Called when the attachment is aimed down sights, implemented in blueprint\n" },
		{ "ModuleRelativePath", "SightAttachmentComponent.h" },
		{ "ToolTip", "Called when the attachment is aimed down sights, implemented in blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USightAttachmentComponent, nullptr, "OnAimDownSights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights_Statics::Function_MetaDataParams[] = {
		{ "Category", "SightAttachmentComponent" },
		{ "Comment", "// called when the attachment is stopped aiming down sights, implemented in blueprint\n" },
		{ "ModuleRelativePath", "SightAttachmentComponent.h" },
		{ "ToolTip", "called when the attachment is stopped aiming down sights, implemented in blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USightAttachmentComponent, nullptr, "StopAimDownSights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USightAttachmentComponent_NoRegister()
	{
		return USightAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_USightAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScope_MetaData[];
#endif
		static void NewProp_bIsScope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScopeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USightAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseAttachmentComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USightAttachmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USightAttachmentComponent_OnAimDownSights, "OnAimDownSights" }, // 1359473861
		{ &Z_Construct_UFunction_USightAttachmentComponent_StopAimDownSights, "StopAimDownSights" }, // 3743282070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SightAttachmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SightAttachmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ZoomLevel_MetaData[] = {
		{ "Category", "SightAttachmentComponent" },
		{ "Comment", "// Zoom level of the sight, a property\n" },
		{ "ModuleRelativePath", "SightAttachmentComponent.h" },
		{ "ToolTip", "Zoom level of the sight, a property" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ZoomLevel = { "ZoomLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachmentComponent, ZoomLevel), METADATA_PARAMS(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ZoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ZoomLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_bIsScope_MetaData[] = {
		{ "Category", "SightAttachmentComponent" },
		{ "Comment", "// Whether this sight should take up the entire screen, a property\n" },
		{ "ModuleRelativePath", "SightAttachmentComponent.h" },
		{ "ToolTip", "Whether this sight should take up the entire screen, a property" },
	};
#endif
	void Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_bIsScope_SetBit(void* Obj)
	{
		((USightAttachmentComponent*)Obj)->bIsScope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_bIsScope = { "bIsScope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USightAttachmentComponent), &Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_bIsScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_bIsScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_bIsScope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ScopeTexture_MetaData[] = {
		{ "Category", "SightAttachmentComponent" },
		{ "Comment", "// The screen texture if the sight should take up the entire screen, a property\n" },
		{ "ModuleRelativePath", "SightAttachmentComponent.h" },
		{ "ToolTip", "The screen texture if the sight should take up the entire screen, a property" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ScopeTexture = { "ScopeTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachmentComponent, ScopeTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ScopeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ScopeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_WalkSpeedMultiplier_MetaData[] = {
		{ "Category", "SightAttachmentComponent" },
		{ "Comment", "// Walk speed multiplier when using this sight, a property\n" },
		{ "ModuleRelativePath", "SightAttachmentComponent.h" },
		{ "ToolTip", "Walk speed multiplier when using this sight, a property" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_WalkSpeedMultiplier = { "WalkSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachmentComponent, WalkSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_WalkSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_WalkSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USightAttachmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ZoomLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_bIsScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_ScopeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachmentComponent_Statics::NewProp_WalkSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USightAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USightAttachmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USightAttachmentComponent_Statics::ClassParams = {
		&USightAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USightAttachmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USightAttachmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USightAttachmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USightAttachmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USightAttachmentComponent, 1049658308);
	template<> FPSGAME_API UClass* StaticClass<USightAttachmentComponent>()
	{
		return USightAttachmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USightAttachmentComponent(Z_Construct_UClass_USightAttachmentComponent, &USightAttachmentComponent::StaticClass, TEXT("/Script/fpsgame"), TEXT("USightAttachmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USightAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
