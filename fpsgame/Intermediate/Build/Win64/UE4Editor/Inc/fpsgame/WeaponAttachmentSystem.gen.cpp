// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/WeaponAttachmentSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAttachmentSystem() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_EAttachmentType();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	FPSGAME_API UClass* Z_Construct_UClass_UWeaponAttachmentSystem_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UWeaponAttachmentSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FPSGAME_API UClass* Z_Construct_UClass_UBaseAttachmentComponent_NoRegister();
// End Cross Module References
	static UEnum* EAttachmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_EAttachmentType, Z_Construct_UPackage__Script_fpsgame(), TEXT("EAttachmentType"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<EAttachmentType>()
	{
		return EAttachmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttachmentType(EAttachmentType_StaticEnum, TEXT("/Script/fpsgame"), TEXT("EAttachmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_EAttachmentType_Hash() { return 2407315568U; }
	UEnum* Z_Construct_UEnum_fpsgame_EAttachmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttachmentType"), 0, Get_Z_Construct_UEnum_fpsgame_EAttachmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttachmentType::SIGHT", (int64)EAttachmentType::SIGHT },
				{ "EAttachmentType::MAG", (int64)EAttachmentType::MAG },
				{ "EAttachmentType::STOCK", (int64)EAttachmentType::STOCK },
				{ "EAttachmentType::UNDERBARREL", (int64)EAttachmentType::UNDERBARREL },
				{ "EAttachmentType::BARREL", (int64)EAttachmentType::BARREL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BARREL.DisplayName", "Barrel" },
				{ "BARREL.Name", "EAttachmentType::BARREL" },
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n1. SIGHT\n2. MAG\n3. STOCK\n4. UNDERBARREL\n5. BARREL\n*/" },
				{ "MAG.DisplayName", "Mag" },
				{ "MAG.Name", "EAttachmentType::MAG" },
				{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
				{ "SIGHT.DisplayName", "Sight" },
				{ "SIGHT.Name", "EAttachmentType::SIGHT" },
				{ "STOCK.DisplayName", "Stock" },
				{ "STOCK.Name", "EAttachmentType::STOCK" },
				{ "ToolTip", "1. SIGHT\n2. MAG\n3. STOCK\n4. UNDERBARREL\n5. BARREL" },
				{ "UNDERBARREL.DisplayName", "Underbarrel" },
				{ "UNDERBARREL.Name", "EAttachmentType::UNDERBARREL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"EAttachmentType",
				"EAttachmentType",
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
	DEFINE_FUNCTION(UWeaponAttachmentSystem::execIsAttachmentAttached)
	{
		P_GET_OBJECT(UBaseAttachmentComponent,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttachmentAttached(Z_Param_Attachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentSystem::execRemoveAttachment)
	{
		P_GET_OBJECT(UBaseAttachmentComponent,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAttachment(Z_Param_Attachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentSystem::execAddAttachment)
	{
		P_GET_OBJECT(UBaseAttachmentComponent,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttachment(Z_Param_Attachment);
		P_NATIVE_END;
	}
	void UWeaponAttachmentSystem::StaticRegisterNativesUWeaponAttachmentSystem()
	{
		UClass* Class = UWeaponAttachmentSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttachment", &UWeaponAttachmentSystem::execAddAttachment },
			{ "IsAttachmentAttached", &UWeaponAttachmentSystem::execIsAttachmentAttached },
			{ "RemoveAttachment", &UWeaponAttachmentSystem::execRemoveAttachment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics
	{
		struct WeaponAttachmentSystem_eventAddAttachment_Parms
		{
			UBaseAttachmentComponent* Attachment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::NewProp_Attachment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventAddAttachment_Parms, Attachment), Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::NewProp_Attachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::NewProp_Attachment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::NewProp_Attachment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponAttachmentSystem" },
		{ "Comment", "// Called when an attachment is added.\n" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
		{ "ToolTip", "Called when an attachment is added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentSystem, nullptr, "AddAttachment", nullptr, nullptr, sizeof(WeaponAttachmentSystem_eventAddAttachment_Parms), Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics
	{
		struct WeaponAttachmentSystem_eventIsAttachmentAttached_Parms
		{
			UBaseAttachmentComponent* Attachment;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventIsAttachmentAttached_Parms, Attachment), Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment_MetaData)) };
	void Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponAttachmentSystem_eventIsAttachmentAttached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponAttachmentSystem_eventIsAttachmentAttached_Parms), &Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponAttachmentSystem" },
		{ "Comment", "// check if this attachment is already attached to the weapon.\n" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
		{ "ToolTip", "check if this attachment is already attached to the weapon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentSystem, nullptr, "IsAttachmentAttached", nullptr, nullptr, sizeof(WeaponAttachmentSystem_eventIsAttachmentAttached_Parms), Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics
	{
		struct WeaponAttachmentSystem_eventRemoveAttachment_Parms
		{
			UBaseAttachmentComponent* Attachment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::NewProp_Attachment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventRemoveAttachment_Parms, Attachment), Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::NewProp_Attachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::NewProp_Attachment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::NewProp_Attachment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponAttachmentSystem" },
		{ "Comment", "// Called when an attachment is removed.\n" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
		{ "ToolTip", "Called when an attachment is removed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentSystem, nullptr, "RemoveAttachment", nullptr, nullptr, sizeof(WeaponAttachmentSystem_eventRemoveAttachment_Parms), Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponAttachmentSystem_NoRegister()
	{
		return UWeaponAttachmentSystem::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponAttachmentSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponAttachmentSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponAttachmentSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment, "AddAttachment" }, // 1073841605
		{ &Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached, "IsAttachmentAttached" }, // 272846090
		{ &Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment, "RemoveAttachment" }, // 3000207022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponAttachmentSystem.h" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_MetaData[] = {
		{ "Category", "WeaponAttachmentSystem" },
		{ "Comment", "// Array storing all attachments.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
		{ "ToolTip", "Array storing all attachments." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponAttachmentSystem, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponAttachmentSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponAttachmentSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponAttachmentSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponAttachmentSystem_Statics::ClassParams = {
		&UWeaponAttachmentSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponAttachmentSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentSystem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponAttachmentSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponAttachmentSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponAttachmentSystem, 3789976106);
	template<> FPSGAME_API UClass* StaticClass<UWeaponAttachmentSystem>()
	{
		return UWeaponAttachmentSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponAttachmentSystem(Z_Construct_UClass_UWeaponAttachmentSystem, &UWeaponAttachmentSystem::StaticClass, TEXT("/Script/fpsgame"), TEXT("UWeaponAttachmentSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponAttachmentSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
