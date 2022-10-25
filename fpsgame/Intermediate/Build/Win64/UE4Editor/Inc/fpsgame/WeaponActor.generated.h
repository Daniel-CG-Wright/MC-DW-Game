// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWeaponDataStruct;
#ifdef FPSGAME_WeaponActor_generated_h
#error "WeaponActor.generated.h already included, missing '#pragma once' in WeaponActor.h"
#endif
#define FPSGAME_WeaponActor_generated_h

#define fpsgame_Source_fpsgame_WeaponActor_h_234_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponDataStruct_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponDataStruct>();

#define fpsgame_Source_fpsgame_WeaponActor_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponStats_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponStats>();

#define fpsgame_Source_fpsgame_WeaponActor_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponMetaData_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponMetaData>();

#define fpsgame_Source_fpsgame_WeaponActor_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponVisualAssets>();

#define fpsgame_Source_fpsgame_WeaponActor_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponPositionalDetails>();

#define fpsgame_Source_fpsgame_WeaponActor_h_266_SPARSE_DATA
#define fpsgame_Source_fpsgame_WeaponActor_h_266_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWeaponDataStruct); \
	DECLARE_FUNCTION(execGetWeaponDataStruct);


#define fpsgame_Source_fpsgame_WeaponActor_h_266_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWeaponDataStruct); \
	DECLARE_FUNCTION(execGetWeaponDataStruct);


#define fpsgame_Source_fpsgame_WeaponActor_h_266_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor)


#define fpsgame_Source_fpsgame_WeaponActor_h_266_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor)


#define fpsgame_Source_fpsgame_WeaponActor_h_266_STANDARD_CONSTRUCTORS \
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


#define fpsgame_Source_fpsgame_WeaponActor_h_266_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponActor(AWeaponActor&&); \
	NO_API AWeaponActor(const AWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponActor)


#define fpsgame_Source_fpsgame_WeaponActor_h_266_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponData() { return STRUCT_OFFSET(AWeaponActor, WeaponData); }


#define fpsgame_Source_fpsgame_WeaponActor_h_263_PROLOG
#define fpsgame_Source_fpsgame_WeaponActor_h_266_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponActor_h_266_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponActor_h_266_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponActor_h_266_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_WeaponActor_h_266_INCLASS \
	fpsgame_Source_fpsgame_WeaponActor_h_266_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_WeaponActor_h_266_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponActor_h_266_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponActor_h_266_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponActor_h_266_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponActor_h_266_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponActor_h_266_ENHANCED_CONSTRUCTORS \
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
	op(FireMode::BOLT) 

enum class FireMode : uint8;
template<> FPSGAME_API UEnum* StaticEnum<FireMode>();

#define FOREACH_ENUM_FIRETYPE(op) \
	op(FireType::HITSCAN) \
	op(FireType::PROJECTILE) 

enum class FireType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<FireType>();

#define FOREACH_ENUM_GUNS(op) \
	op(Guns::NONE) \
	op(Guns::PROTOTYPE_PISTOL) \
	op(Guns::PROTOTYPE_AR) \
	op(Guns::PROTOTYPE_BURST) \
	op(Guns::PROTOTYPE_SHOTGUN) \
	op(Guns::LAST) 

enum class Guns : uint8;
template<> FPSGAME_API UEnum* StaticEnum<Guns>();

#define FOREACH_ENUM_EQUIPS(op) \
	op(Equips::PRIMARY) \
	op(Equips::SECONDARY) \
	op(Equips::BOTH) \
	op(Equips::MELEE) 

enum class Equips : uint8;
template<> FPSGAME_API UEnum* StaticEnum<Equips>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
