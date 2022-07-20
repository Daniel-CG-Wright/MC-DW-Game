// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/InteractableObjectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObjectComponent() {}
// Cross Module References
	FPSGAME_API UEnum* Z_Construct_UEnum_fpsgame_InteractionTypes();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
	FPSGAME_API UClass* Z_Construct_UClass_UInteractableObjectComponent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UInteractableObjectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* InteractionTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_fpsgame_InteractionTypes, Z_Construct_UPackage__Script_fpsgame(), TEXT("InteractionTypes"));
		}
		return Singleton;
	}
	template<> FPSGAME_API UEnum* StaticEnum<InteractionTypes>()
	{
		return InteractionTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_InteractionTypes(InteractionTypes_StaticEnum, TEXT("/Script/fpsgame"), TEXT("InteractionTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_fpsgame_InteractionTypes_Hash() { return 2133834003U; }
	UEnum* Z_Construct_UEnum_fpsgame_InteractionTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_fpsgame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("InteractionTypes"), 0, Get_Z_Construct_UEnum_fpsgame_InteractionTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "InteractionTypes::PICKUP", (int64)InteractionTypes::PICKUP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "InteractableObjectComponent.h" },
				{ "PICKUP.Name", "InteractionTypes::PICKUP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_fpsgame,
				nullptr,
				"InteractionTypes",
				"InteractionTypes",
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
	DEFINE_FUNCTION(UInteractableObjectComponent::execSetInteractionType)
	{
		P_GET_ENUM(InteractionTypes,Z_Param_NewInteractionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionType(InteractionTypes(Z_Param_NewInteractionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableObjectComponent::execGetInteractionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(InteractionTypes*)Z_Param__Result=P_THIS->GetInteractionType();
		P_NATIVE_END;
	}
	void UInteractableObjectComponent::StaticRegisterNativesUInteractableObjectComponent()
	{
		UClass* Class = UInteractableObjectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInteractionType", &UInteractableObjectComponent::execGetInteractionType },
			{ "SetInteractionType", &UInteractableObjectComponent::execSetInteractionType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics
	{
		struct InteractableObjectComponent_eventGetInteractionType_Parms
		{
			InteractionTypes ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableObjectComponent_eventGetInteractionType_Parms, ReturnValue), Z_Construct_UEnum_fpsgame_InteractionTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractableObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableObjectComponent, nullptr, "GetInteractionType", nullptr, nullptr, sizeof(InteractableObjectComponent_eventGetInteractionType_Parms), Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics
	{
		struct InteractableObjectComponent_eventSetInteractionType_Parms
		{
			InteractionTypes NewInteractionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewInteractionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewInteractionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::NewProp_NewInteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::NewProp_NewInteractionType = { "NewInteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableObjectComponent_eventSetInteractionType_Parms, NewInteractionType), Z_Construct_UEnum_fpsgame_InteractionTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::NewProp_NewInteractionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::NewProp_NewInteractionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractableObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableObjectComponent, nullptr, "SetInteractionType", nullptr, nullptr, sizeof(InteractableObjectComponent_eventSetInteractionType_Parms), Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractableObjectComponent_NoRegister()
	{
		return UInteractableObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThisInteractionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisInteractionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThisInteractionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractableObjectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableObjectComponent_GetInteractionType, "GetInteractionType" }, // 3207718441
		{ &Z_Construct_UFunction_UInteractableObjectComponent_SetInteractionType, "SetInteractionType" }, // 1109369031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractableObjectComponent.h" },
		{ "ModuleRelativePath", "InteractableObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractableObjectComponent_Statics::NewProp_ThisInteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableObjectComponent_Statics::NewProp_ThisInteractionType_MetaData[] = {
		{ "Category", "Interaction type" },
		{ "ModuleRelativePath", "InteractableObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractableObjectComponent_Statics::NewProp_ThisInteractionType = { "ThisInteractionType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableObjectComponent, ThisInteractionType), Z_Construct_UEnum_fpsgame_InteractionTypes, METADATA_PARAMS(Z_Construct_UClass_UInteractableObjectComponent_Statics::NewProp_ThisInteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableObjectComponent_Statics::NewProp_ThisInteractionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableObjectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableObjectComponent_Statics::NewProp_ThisInteractionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableObjectComponent_Statics::NewProp_ThisInteractionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableObjectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractableObjectComponent_Statics::ClassParams = {
		&UInteractableObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractableObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableObjectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableObjectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractableObjectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractableObjectComponent, 1237613325);
	template<> FPSGAME_API UClass* StaticClass<UInteractableObjectComponent>()
	{
		return UInteractableObjectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractableObjectComponent(Z_Construct_UClass_UInteractableObjectComponent, &UInteractableObjectComponent::StaticClass, TEXT("/Script/fpsgame"), TEXT("UInteractableObjectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableObjectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
