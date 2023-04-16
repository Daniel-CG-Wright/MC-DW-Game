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
	FPSGAME_API UClass* Z_Construct_UClass_UWeaponAttachmentSystem_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UWeaponAttachmentSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSGAME_API UClass* Z_Construct_UClass_UBaseAttachmentComponent_NoRegister();
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_EAttachmentType();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponAttachmentSystem::execGetAttachment)
	{
		P_GET_ENUM(EAttachmentType,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UBaseAttachmentComponent> *)Z_Param__Result=P_THIS->GetAttachment(EAttachmentType(Z_Param_Attachment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentSystem::execIsAttachmentAttached)
	{
		P_GET_ENUM(EAttachmentType,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttachmentAttached(EAttachmentType(Z_Param_Attachment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentSystem::execRemoveAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAttachment(Z_Param_Attachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttachmentSystem::execAddAttachment)
	{
		P_GET_OBJECT(UClass,Z_Param_Attachment);
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
			{ "GetAttachment", &UWeaponAttachmentSystem::execGetAttachment },
			{ "IsAttachmentAttached", &UWeaponAttachmentSystem::execIsAttachmentAttached },
			{ "RemoveAttachment", &UWeaponAttachmentSystem::execRemoveAttachment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics
	{
		struct WeaponAttachmentSystem_eventAddAttachment_Parms
		{
			TSubclassOf<UBaseAttachmentComponent>  Attachment;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Attachment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventAddAttachment_Parms, Attachment), Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	struct Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics
	{
		struct WeaponAttachmentSystem_eventGetAttachment_Parms
		{
			EAttachmentType Attachment;
			TSubclassOf<UBaseAttachmentComponent>  ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attachment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attachment;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::NewProp_Attachment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventGetAttachment_Parms, Attachment), Z_Construct_UEnum_fpsgame_EAttachmentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventGetAttachment_Parms, ReturnValue), Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::NewProp_Attachment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponAttachmentSystem" },
		{ "Comment", "// Get the attachment of this type fromn the map (or nullptr if it doesn't exist)\n" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
		{ "ToolTip", "Get the attachment of this type fromn the map (or nullptr if it doesn't exist)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttachmentSystem, nullptr, "GetAttachment", nullptr, nullptr, sizeof(WeaponAttachmentSystem_eventGetAttachment_Parms), Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics
	{
		struct WeaponAttachmentSystem_eventIsAttachmentAttached_Parms
		{
			EAttachmentType Attachment;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attachment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attachment;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventIsAttachmentAttached_Parms, Attachment), Z_Construct_UEnum_fpsgame_EAttachmentType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponAttachmentSystem_eventIsAttachmentAttached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponAttachmentSystem_eventIsAttachmentAttached_Parms), &Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponAttachmentSystem" },
		{ "Comment", "// check if an attachment of this type is already attached to the weapon.\n" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
		{ "ToolTip", "check if an attachment of this type is already attached to the weapon." },
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
			TSubclassOf<UBaseAttachmentComponent>  Attachment;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Attachment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttachmentSystem_eventRemoveAttachment_Parms, Attachment), Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Attachments_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attachments_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attachments_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponAttachmentSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponAttachmentSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponAttachmentSystem_AddAttachment, "AddAttachment" }, // 3670262698
		{ &Z_Construct_UFunction_UWeaponAttachmentSystem_GetAttachment, "GetAttachment" }, // 3568974464
		{ &Z_Construct_UFunction_UWeaponAttachmentSystem_IsAttachmentAttached, "IsAttachmentAttached" }, // 3682857929
		{ &Z_Construct_UFunction_UWeaponAttachmentSystem_RemoveAttachment, "RemoveAttachment" }, // 3460741095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponAttachmentSystem.h" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_ValueProp = { "Attachments", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBaseAttachmentComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_Key_KeyProp = { "Attachments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_fpsgame_EAttachmentType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_MetaData[] = {
		{ "Category", "WeaponAttachmentSystem" },
		{ "Comment", "// Map storing each type of attachment and the attachment itself.\n" },
		{ "ModuleRelativePath", "WeaponAttachmentSystem.h" },
		{ "ToolTip", "Map storing each type of attachment and the attachment itself." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponAttachmentSystem, Attachments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponAttachmentSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttachmentSystem_Statics::NewProp_Attachments_Key_KeyProp,
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
	IMPLEMENT_CLASS(UWeaponAttachmentSystem, 2976124108);
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
