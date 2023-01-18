// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/AttachmentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachmentBase() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_AttachmentType();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	FPSGAME_API UClass* Z_Construct_UClass_UAttachmentBase_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UAttachmentBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* AttachmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_AttachmentType, Z_Construct_UPackage__Script_fpsgame(), TEXT("AttachmentType"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<AttachmentType>()
	{
		return AttachmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AttachmentType(AttachmentType_StaticEnum, TEXT("/Script/fpsgame"), TEXT("AttachmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_AttachmentType_Hash() { return 175628049U; }
	UEnum* Z_Construct_UEnum_fpsgame_AttachmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AttachmentType"), 0, Get_Z_Construct_UEnum_fpsgame_AttachmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AttachmentType::SIGHT", (int64)AttachmentType::SIGHT },
				{ "AttachmentType::BARREL", (int64)AttachmentType::BARREL },
				{ "AttachmentType::STOCK", (int64)AttachmentType::STOCK },
				{ "AttachmentType::GRIP", (int64)AttachmentType::GRIP },
				{ "AttachmentType::OTHER", (int64)AttachmentType::OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BARREL.Name", "AttachmentType::BARREL" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "GRIP.Name", "AttachmentType::GRIP" },
				{ "ModuleRelativePath", "AttachmentBase.h" },
				{ "OTHER.Name", "AttachmentType::OTHER" },
				{ "SIGHT.Comment", "/**\n * \n *///Default testing pistol\n" },
				{ "SIGHT.Name", "AttachmentType::SIGHT" },
				{ "SIGHT.ToolTip", "//Default testing pistol" },
				{ "STOCK.Name", "AttachmentType::STOCK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"AttachmentType",
				"AttachmentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAttachmentBase::StaticRegisterNativesUAttachmentBase()
	{
	}
	UClass* Z_Construct_UClass_UAttachmentBase_NoRegister()
	{
		return UAttachmentBase::StaticClass();
	}
	struct Z_Construct_UClass_UAttachmentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttachmentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttachmentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AttachmentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AttachmentBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttachmentBase_Statics::NewProp_AttachmentMesh_MetaData[] = {
		{ "Category", "AttachmentBase" },
		{ "ModuleRelativePath", "AttachmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttachmentBase_Statics::NewProp_AttachmentMesh = { "AttachmentMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttachmentBase, AttachmentMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttachmentBase_Statics::NewProp_AttachmentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttachmentBase_Statics::NewProp_AttachmentMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttachmentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttachmentBase_Statics::NewProp_AttachmentMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttachmentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttachmentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttachmentBase_Statics::ClassParams = {
		&UAttachmentBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttachmentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttachmentBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttachmentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttachmentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttachmentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttachmentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttachmentBase, 3441216767);
	template<> FPSGAME_API UClass* StaticClass<UAttachmentBase>()
	{
		return UAttachmentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttachmentBase(Z_Construct_UClass_UAttachmentBase, &UAttachmentBase::StaticClass, TEXT("/Script/fpsgame"), TEXT("UAttachmentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttachmentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
