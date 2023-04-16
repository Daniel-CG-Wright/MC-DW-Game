// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAttachmentType : uint8;
class UBaseAttachmentComponent;
#ifdef FPSGAME_WeaponAttachmentSystem_generated_h
#error "WeaponAttachmentSystem.generated.h already included, missing '#pragma once' in WeaponAttachmentSystem.h"
#endif
#define FPSGAME_WeaponAttachmentSystem_generated_h

#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_SPARSE_DATA
#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttachment); \
	DECLARE_FUNCTION(execIsAttachmentAttached); \
	DECLARE_FUNCTION(execRemoveAttachment); \
	DECLARE_FUNCTION(execAddAttachment);


#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttachment); \
	DECLARE_FUNCTION(execIsAttachmentAttached); \
	DECLARE_FUNCTION(execRemoveAttachment); \
	DECLARE_FUNCTION(execAddAttachment);


#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponAttachmentSystem(); \
	friend struct Z_Construct_UClass_UWeaponAttachmentSystem_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttachmentSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UWeaponAttachmentSystem)


#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponAttachmentSystem(); \
	friend struct Z_Construct_UClass_UWeaponAttachmentSystem_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttachmentSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UWeaponAttachmentSystem)


#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponAttachmentSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponAttachmentSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAttachmentSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttachmentSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponAttachmentSystem(UWeaponAttachmentSystem&&); \
	NO_API UWeaponAttachmentSystem(const UWeaponAttachmentSystem&); \
public:


#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponAttachmentSystem(UWeaponAttachmentSystem&&); \
	NO_API UWeaponAttachmentSystem(const UWeaponAttachmentSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAttachmentSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttachmentSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponAttachmentSystem)


#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_14_PROLOG
#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_INCLASS \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponAttachmentSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UWeaponAttachmentSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_WeaponAttachmentSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
