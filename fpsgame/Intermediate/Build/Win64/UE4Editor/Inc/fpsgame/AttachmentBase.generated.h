// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_AttachmentBase_generated_h
#error "AttachmentBase.generated.h already included, missing '#pragma once' in AttachmentBase.h"
#endif
#define FPSGAME_AttachmentBase_generated_h

#define fpsgame_Source_fpsgame_AttachmentBase_h_26_SPARSE_DATA
#define fpsgame_Source_fpsgame_AttachmentBase_h_26_RPC_WRAPPERS
#define fpsgame_Source_fpsgame_AttachmentBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define fpsgame_Source_fpsgame_AttachmentBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttachmentBase(); \
	friend struct Z_Construct_UClass_UAttachmentBase_Statics; \
public: \
	DECLARE_CLASS(UAttachmentBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UAttachmentBase)


#define fpsgame_Source_fpsgame_AttachmentBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAttachmentBase(); \
	friend struct Z_Construct_UClass_UAttachmentBase_Statics; \
public: \
	DECLARE_CLASS(UAttachmentBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UAttachmentBase)


#define fpsgame_Source_fpsgame_AttachmentBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttachmentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttachmentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttachmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttachmentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttachmentBase(UAttachmentBase&&); \
	NO_API UAttachmentBase(const UAttachmentBase&); \
public:


#define fpsgame_Source_fpsgame_AttachmentBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttachmentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttachmentBase(UAttachmentBase&&); \
	NO_API UAttachmentBase(const UAttachmentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttachmentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttachmentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttachmentBase)


#define fpsgame_Source_fpsgame_AttachmentBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttachmentMesh() { return STRUCT_OFFSET(UAttachmentBase, AttachmentMesh); }


#define fpsgame_Source_fpsgame_AttachmentBase_h_23_PROLOG
#define fpsgame_Source_fpsgame_AttachmentBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_SPARSE_DATA \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_INCLASS \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_AttachmentBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_SPARSE_DATA \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_AttachmentBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UAttachmentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_AttachmentBase_h


#define FOREACH_ENUM_ATTACHMENTTYPE(op) \
	op(AttachmentType::SIGHT) \
	op(AttachmentType::BARREL) \
	op(AttachmentType::STOCK) \
	op(AttachmentType::GRIP) \
	op(AttachmentType::OTHER) 

enum class AttachmentType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<AttachmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
