// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsgame/BaseAttachmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttachmentComponent() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_UBaseAttachmentComponent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UBaseAttachmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_fpsgame();
// End Cross Module References
	DEFINE_FUNCTION(UBaseAttachmentComponent::execOnDetachFromWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDetachFromWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAttachmentComponent::execOnAttachToWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachToWeapon();
		P_NATIVE_END;
	}
	void UBaseAttachmentComponent::StaticRegisterNativesUBaseAttachmentComponent()
	{
		UClass* Class = UBaseAttachmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttachToWeapon", &UBaseAttachmentComponent::execOnAttachToWeapon },
			{ "OnDetachFromWeapon", &UBaseAttachmentComponent::execOnDetachFromWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseAttachmentComponent" },
		{ "Comment", "// Called when attaching this attachment to a weapon.\n" },
		{ "ModuleRelativePath", "BaseAttachmentComponent.h" },
		{ "ToolTip", "Called when attaching this attachment to a weapon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttachmentComponent, nullptr, "OnAttachToWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseAttachmentComponent" },
		{ "Comment", "// Called when detaching this attachment from a weapon.\n" },
		{ "ModuleRelativePath", "BaseAttachmentComponent.h" },
		{ "ToolTip", "Called when detaching this attachment from a weapon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAttachmentComponent, nullptr, "OnDetachFromWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseAttachmentComponent_NoRegister()
	{
		return UBaseAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsgame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseAttachmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAttachmentComponent_OnAttachToWeapon, "OnAttachToWeapon" }, // 1242837406
		{ &Z_Construct_UFunction_UBaseAttachmentComponent_OnDetachFromWeapon, "OnDetachFromWeapon" }, // 1889570497
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BaseAttachmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseAttachmentComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttachmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttachmentComponent_Statics::ClassParams = {
		&UBaseAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseAttachmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttachmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAttachmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseAttachmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseAttachmentComponent, 1906331041);
	template<> FPSGAME_API UClass* StaticClass<UBaseAttachmentComponent>()
	{
		return UBaseAttachmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseAttachmentComponent(Z_Construct_UClass_UBaseAttachmentComponent, &UBaseAttachmentComponent::StaticClass, TEXT("/Script/fpsgame"), TEXT("UBaseAttachmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
