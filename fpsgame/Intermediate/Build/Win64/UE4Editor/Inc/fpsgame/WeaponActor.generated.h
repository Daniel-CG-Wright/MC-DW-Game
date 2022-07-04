// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_WeaponActor_generated_h
#error "WeaponActor.generated.h already included, missing '#pragma once' in WeaponActor.h"
#endif
#define FPSGAME_WeaponActor_generated_h

#define fpsgame_Source_fpsgame_WeaponActor_h_54_SPARSE_DATA
#define fpsgame_Source_fpsgame_WeaponActor_h_54_RPC_WRAPPERS
#define fpsgame_Source_fpsgame_WeaponActor_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define fpsgame_Source_fpsgame_WeaponActor_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor)


#define fpsgame_Source_fpsgame_WeaponActor_h_54_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor)


#define fpsgame_Source_fpsgame_WeaponActor_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponActor(AWeaponActor&&); \
	NO_API AWeaponActor(const AWeaponActor&); \
public:


#define fpsgame_Source_fpsgame_WeaponActor_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponActor(AWeaponActor&&); \
	NO_API AWeaponActor(const AWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponActor)


#define fpsgame_Source_fpsgame_WeaponActor_h_54_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Source_fpsgame_WeaponActor_h_51_PROLOG
#define fpsgame_Source_fpsgame_WeaponActor_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponActor_h_54_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponActor_h_54_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponActor_h_54_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_WeaponActor_h_54_INCLASS \
	fpsgame_Source_fpsgame_WeaponActor_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_WeaponActor_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponActor_h_54_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponActor_h_54_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponActor_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponActor_h_54_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponActor_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AWeaponActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_WeaponActor_h


#define FOREACH_ENUM_WEAPONTYPE(op) \
	op(WeaponType::AR) \
	op(WeaponType::SMG) \
	op(WeaponType::PISTOL) \
	op(WeaponType::SHOTGUN) \
	op(WeaponType::SNIPER_RIFLE) 

enum class WeaponType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<WeaponType>();

#define FOREACH_ENUM_FIREMODE(op) \
	op(FireMode::AUTO) \
	op(FireMode::BURST) \
	op(FireMode::SEMI) \
	op(FireMode::BOLT) \
	op(FireMode::BEAM) 

enum class FireMode : uint8;
template<> FPSGAME_API UEnum* StaticEnum<FireMode>();

#define FOREACH_ENUM_FIRETYPE(op) \
	op(FireType::HITSCAN) \
	op(FireType::PROJECTILE) \
	op(FireType::HYBRID) 

enum class FireType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<FireType>();

#define FOREACH_ENUM_GUNS(op) \
	op(Guns::PROTOTYPE_PISTOL) 

enum class Guns : uint8;
template<> FPSGAME_API UEnum* StaticEnum<Guns>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
