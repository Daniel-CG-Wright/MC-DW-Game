// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_BaseAttachmentComponent_generated_h
#error "BaseAttachmentComponent.generated.h already included, missing '#pragma once' in BaseAttachmentComponent.h"
#endif
#define FPSGAME_BaseAttachmentComponent_generated_h

#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_SPARSE_DATA
#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDetachFromWeapon); \
	DECLARE_FUNCTION(execOnAttachToWeapon);


#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDetachFromWeapon); \
	DECLARE_FUNCTION(execOnAttachToWeapon);


#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAttachmentComponent(); \
	friend struct Z_Construct_UClass_UBaseAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttachmentComponent)


#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBaseAttachmentComponent(); \
	friend struct Z_Construct_UClass_UBaseAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseAttachmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UBaseAttachmentComponent)


#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAttachmentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAttachmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttachmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttachmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseAttachmentComponent(UBaseAttachmentComponent&&); \
	NO_API UBaseAttachmentComponent(const UBaseAttachmentComponent&); \
public:


#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseAttachmentComponent(UBaseAttachmentComponent&&); \
	NO_API UBaseAttachmentComponent(const UBaseAttachmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAttachmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAttachmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseAttachmentComponent)


#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_10_PROLOG
#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_SPARSE_DATA \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_INCLASS \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_SPARSE_DATA \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_BaseAttachmentComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UBaseAttachmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_BaseAttachmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
