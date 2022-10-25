// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
#ifdef FPSGAME_ProjectileBullet_generated_h
#error "ProjectileBullet.generated.h already included, missing '#pragma once' in ProjectileBullet.h"
#endif
#define FPSGAME_ProjectileBullet_generated_h

#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_SPARSE_DATA
#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDamageType); \
	DECLARE_FUNCTION(execSetDamage); \
	DECLARE_FUNCTION(execGetDamageType); \
	DECLARE_FUNCTION(execGetDamage);


#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDamageType); \
	DECLARE_FUNCTION(execSetDamage); \
	DECLARE_FUNCTION(execGetDamageType); \
	DECLARE_FUNCTION(execGetDamage);


#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBullet(); \
	friend struct Z_Construct_UClass_AProjectileBullet_Statics; \
public: \
	DECLARE_CLASS(AProjectileBullet, AFPSProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBullet)


#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBullet(); \
	friend struct Z_Construct_UClass_AProjectileBullet_Statics; \
public: \
	DECLARE_CLASS(AProjectileBullet, AFPSProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBullet)


#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBullet(AProjectileBullet&&); \
	NO_API AProjectileBullet(const AProjectileBullet&); \
public:


#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBullet(AProjectileBullet&&); \
	NO_API AProjectileBullet(const AProjectileBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBullet)


#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectileBullet, Damage); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AProjectileBullet, DamageType); }


#define fpsgame_Source_fpsgame_ProjectileBullet_h_12_PROLOG
#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_SPARSE_DATA \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_INCLASS \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_ProjectileBullet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_SPARSE_DATA \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_ProjectileBullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AProjectileBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_ProjectileBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
