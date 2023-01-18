// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_SightAttachment_generated_h
#error "SightAttachment.generated.h already included, missing '#pragma once' in SightAttachment.h"
#endif
#define FPSGAME_SightAttachment_generated_h

#define fpsgame_Source_fpsgame_SightAttachment_h_15_SPARSE_DATA
#define fpsgame_Source_fpsgame_SightAttachment_h_15_RPC_WRAPPERS
#define fpsgame_Source_fpsgame_SightAttachment_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define fpsgame_Source_fpsgame_SightAttachment_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSightAttachment(); \
	friend struct Z_Construct_UClass_USightAttachment_Statics; \
public: \
	DECLARE_CLASS(USightAttachment, UAttachmentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(USightAttachment)


#define fpsgame_Source_fpsgame_SightAttachment_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSightAttachment(); \
	friend struct Z_Construct_UClass_USightAttachment_Statics; \
public: \
	DECLARE_CLASS(USightAttachment, UAttachmentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(USightAttachment)


#define fpsgame_Source_fpsgame_SightAttachment_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USightAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USightAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USightAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USightAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USightAttachment(USightAttachment&&); \
	NO_API USightAttachment(const USightAttachment&); \
public:


#define fpsgame_Source_fpsgame_SightAttachment_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USightAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USightAttachment(USightAttachment&&); \
	NO_API USightAttachment(const USightAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USightAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USightAttachment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USightAttachment)


#define fpsgame_Source_fpsgame_SightAttachment_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomFactor() { return STRUCT_OFFSET(USightAttachment, ZoomFactor); } \
	FORCEINLINE static uint32 __PPO__WalkingSpeedFactor() { return STRUCT_OFFSET(USightAttachment, WalkingSpeedFactor); } \
	FORCEINLINE static uint32 __PPO__SpreadAngleFactor() { return STRUCT_OFFSET(USightAttachment, SpreadAngleFactor); } \
	FORCEINLINE static uint32 __PPO__RecoilFactor() { return STRUCT_OFFSET(USightAttachment, RecoilFactor); } \
	FORCEINLINE static uint32 __PPO__OffsetFromAttachmentPoint() { return STRUCT_OFFSET(USightAttachment, OffsetFromAttachmentPoint); } \
	FORCEINLINE static uint32 __PPO__ScreenTexture() { return STRUCT_OFFSET(USightAttachment, ScreenTexture); }


#define fpsgame_Source_fpsgame_SightAttachment_h_12_PROLOG
#define fpsgame_Source_fpsgame_SightAttachment_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_SightAttachment_h_15_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_SightAttachment_h_15_SPARSE_DATA \
	fpsgame_Source_fpsgame_SightAttachment_h_15_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_SightAttachment_h_15_INCLASS \
	fpsgame_Source_fpsgame_SightAttachment_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_SightAttachment_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_SightAttachment_h_15_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_SightAttachment_h_15_SPARSE_DATA \
	fpsgame_Source_fpsgame_SightAttachment_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_SightAttachment_h_15_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_SightAttachment_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class USightAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_SightAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
