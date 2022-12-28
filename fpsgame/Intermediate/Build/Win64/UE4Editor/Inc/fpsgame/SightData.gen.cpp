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
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BASE_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BASE_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetFromAttachmentPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetFromAttachmentPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//Handles data and functionality relating to the weapon sights (primarily ADSing)\n" },
		{ "IncludePath", "SightData.h" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Handles data and functionality relating to the weapon sights (primarily ADSing)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_ZoomFactor_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//Zoom factor of sight, consider changing to a graph for multiple zoom values.\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Zoom factor of sight, consider changing to a graph for multiple zoom values." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_ZoomFactor = { "ZoomFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, ZoomFactor), METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_ZoomFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_ZoomFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_BASE_FOV_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//Used as base FOV in calculations\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Used as base FOV in calculations" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_BASE_FOV = { "BASE_FOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, BASE_FOV), METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_BASE_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_BASE_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_WalkingSpeedFactor_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//Factor of normal walking speed caused by zooming in (1.0 is normal)\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Factor of normal walking speed caused by zooming in (1.0 is normal)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_WalkingSpeedFactor = { "WalkingSpeedFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, WalkingSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_WalkingSpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_WalkingSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_SpreadAngleFactor_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//Spread angle factor when aiming in\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Spread angle factor when aiming in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_SpreadAngleFactor = { "SpreadAngleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, SpreadAngleFactor), METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_SpreadAngleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_SpreadAngleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_RecoilFactor_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//Recoil factor when aiming in\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Recoil factor when aiming in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_RecoilFactor = { "RecoilFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, RecoilFactor), METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_RecoilFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_RecoilFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_SightMesh_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//Mesh of the sight\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Mesh of the sight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_SightMesh = { "SightMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, SightMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_SightMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_SightMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_OffsetFromAttachmentPoint_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//The centre of the attachment's lens is this vector from the base attachment point (as centering is done by centering on the attachment point then adding this offset).\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "The centre of the attachment's lens is this vector from the base attachment point (as centering is done by centering on the attachment point then adding this offset)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_OffsetFromAttachmentPoint = { "OffsetFromAttachmentPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, OffsetFromAttachmentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_OffsetFromAttachmentPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_OffsetFromAttachmentPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightData_Statics::NewProp_ScreenTexture_MetaData[] = {
		{ "Category", "SightData" },
		{ "Comment", "//Texture to apply across the screen when ADSing\n" },
		{ "ModuleRelativePath", "SightData.h" },
		{ "ToolTip", "Texture to apply across the screen when ADSing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightData_Statics::NewProp_ScreenTexture = { "ScreenTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightData, ScreenTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USightData_Statics::NewProp_ScreenTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::NewProp_ScreenTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_ZoomFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_BASE_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_WalkingSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_SpreadAngleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_RecoilFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_SightMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_OffsetFromAttachmentPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightData_Statics::NewProp_ScreenTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USightData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USightData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USightData_Statics::ClassParams = {
		&USightData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USightData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USightData_Statics::PropPointers),
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
	IMPLEMENT_CLASS(USightData, 1121733866);
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
