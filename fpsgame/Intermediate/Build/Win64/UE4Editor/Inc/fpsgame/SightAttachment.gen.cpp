// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/SightAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSightAttachment() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_USightAttachment_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_USightAttachment();
	FPSGAME_API UClass* Z_Construct_UClass_UAttachmentBase();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void USightAttachment::StaticRegisterNativesUSightAttachment()
	{
	}
	UClass* Z_Construct_UClass_USightAttachment_NoRegister()
	{
		return USightAttachment::StaticClass();
	}
	struct Z_Construct_UClass_USightAttachment_Statics
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
	UObject* (*const Z_Construct_UClass_USightAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttachmentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SightAttachment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SightAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachment_Statics::NewProp_ZoomFactor_MetaData[] = {
		{ "Category", "SightAttachment" },
		{ "Comment", "//Zoom factor of sight, consider changing to a graph for multiple zoom values. 1.0x is same as normal\n" },
		{ "ModuleRelativePath", "SightAttachment.h" },
		{ "ToolTip", "Zoom factor of sight, consider changing to a graph for multiple zoom values. 1.0x is same as normal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightAttachment_Statics::NewProp_ZoomFactor = { "ZoomFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachment, ZoomFactor), METADATA_PARAMS(Z_Construct_UClass_USightAttachment_Statics::NewProp_ZoomFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::NewProp_ZoomFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachment_Statics::NewProp_WalkingSpeedFactor_MetaData[] = {
		{ "Category", "SightAttachment" },
		{ "Comment", "//Factor of normal walking speed caused by zooming in (1.0 is normal)\n" },
		{ "ModuleRelativePath", "SightAttachment.h" },
		{ "ToolTip", "Factor of normal walking speed caused by zooming in (1.0 is normal)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightAttachment_Statics::NewProp_WalkingSpeedFactor = { "WalkingSpeedFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachment, WalkingSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_USightAttachment_Statics::NewProp_WalkingSpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::NewProp_WalkingSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachment_Statics::NewProp_SpreadAngleFactor_MetaData[] = {
		{ "Category", "SightAttachment" },
		{ "Comment", "//Spread angle factor when aiming in (1.0 is normal)\n" },
		{ "ModuleRelativePath", "SightAttachment.h" },
		{ "ToolTip", "Spread angle factor when aiming in (1.0 is normal)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightAttachment_Statics::NewProp_SpreadAngleFactor = { "SpreadAngleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachment, SpreadAngleFactor), METADATA_PARAMS(Z_Construct_UClass_USightAttachment_Statics::NewProp_SpreadAngleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::NewProp_SpreadAngleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachment_Statics::NewProp_RecoilFactor_MetaData[] = {
		{ "Category", "SightAttachment" },
		{ "Comment", "//Recoil factor when aiming in (1.0 is normal)\n" },
		{ "ModuleRelativePath", "SightAttachment.h" },
		{ "ToolTip", "Recoil factor when aiming in (1.0 is normal)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USightAttachment_Statics::NewProp_RecoilFactor = { "RecoilFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachment, RecoilFactor), METADATA_PARAMS(Z_Construct_UClass_USightAttachment_Statics::NewProp_RecoilFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::NewProp_RecoilFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachment_Statics::NewProp_OffsetFromAttachmentPoint_MetaData[] = {
		{ "Category", "SightAttachment" },
		{ "Comment", "//The centre of the attachment's lens is this vector from the base attachment point (as centering is done by centering on the attachment point then adding this offset).\n" },
		{ "ModuleRelativePath", "SightAttachment.h" },
		{ "ToolTip", "The centre of the attachment's lens is this vector from the base attachment point (as centering is done by centering on the attachment point then adding this offset)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USightAttachment_Statics::NewProp_OffsetFromAttachmentPoint = { "OffsetFromAttachmentPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachment, OffsetFromAttachmentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USightAttachment_Statics::NewProp_OffsetFromAttachmentPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::NewProp_OffsetFromAttachmentPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USightAttachment_Statics::NewProp_ScreenTexture_MetaData[] = {
		{ "Category", "SightAttachment" },
		{ "Comment", "//Texture to apply across the screen when ADSing\n" },
		{ "ModuleRelativePath", "SightAttachment.h" },
		{ "ToolTip", "Texture to apply across the screen when ADSing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USightAttachment_Statics::NewProp_ScreenTexture = { "ScreenTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USightAttachment, ScreenTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USightAttachment_Statics::NewProp_ScreenTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::NewProp_ScreenTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USightAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachment_Statics::NewProp_ZoomFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachment_Statics::NewProp_WalkingSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachment_Statics::NewProp_SpreadAngleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachment_Statics::NewProp_RecoilFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachment_Statics::NewProp_OffsetFromAttachmentPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USightAttachment_Statics::NewProp_ScreenTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USightAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USightAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USightAttachment_Statics::ClassParams = {
		&USightAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USightAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USightAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USightAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USightAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USightAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USightAttachment, 2897067131);
	template<> FPSGAME_API UClass* StaticClass<USightAttachment>()
	{
		return USightAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USightAttachment(Z_Construct_UClass_USightAttachment, &USightAttachment::StaticClass, TEXT("/Script/fpsgame"), TEXT("USightAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USightAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
