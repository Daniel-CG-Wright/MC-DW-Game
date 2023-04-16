// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FWeaponDataStruct;
class UWeaponAttachmentSystem;
#ifdef FPSGAME_WeaponActor_generated_h
#error "WeaponActor.generated.h already included, missing '#pragma once' in WeaponActor.h"
#endif
#define FPSGAME_WeaponActor_generated_h

#define fpsgame_Source_fpsgame_WeaponActor_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponDataStruct_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponDataStruct>();

#define fpsgame_Source_fpsgame_WeaponActor_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponRecoil_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponRecoil>();

#define fpsgame_Source_fpsgame_WeaponActor_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponStats_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponStats>();

#define fpsgame_Source_fpsgame_WeaponActor_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponMetaData_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponMetaData>();

#define fpsgame_Source_fpsgame_WeaponActor_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponVisualAssets_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponVisualAssets>();

#define fpsgame_Source_fpsgame_WeaponActor_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponPositionalDetails_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FWeaponPositionalDetails>();

#define fpsgame_Source_fpsgame_WeaponActor_h_240_SPARSE_DATA
#define fpsgame_Source_fpsgame_WeaponActor_h_240_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execOnUnequipWeapon); \
	DECLARE_FUNCTION(execOnEquipWeapon); \
	DECLARE_FUNCTION(execOnDropWeapon); \
	DECLARE_FUNCTION(execOnPickupWeapon); \
	DECLARE_FUNCTION(execSetWeaponDataStruct); \
	DECLARE_FUNCTION(execGetAttachmentSystem); \
	DECLARE_FUNCTION(execGetWeaponDataStruct);


#define fpsgame_Source_fpsgame_WeaponActor_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execOnUnequipWeapon); \
	DECLARE_FUNCTION(execOnEquipWeapon); \
	DECLARE_FUNCTION(execOnDropWeapon); \
	DECLARE_FUNCTION(execOnPickupWeapon); \
	DECLARE_FUNCTION(execSetWeaponDataStruct); \
	DECLARE_FUNCTION(execGetAttachmentSystem); \
	DECLARE_FUNCTION(execGetWeaponDataStruct);


#define fpsgame_Source_fpsgame_WeaponActor_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MagAmmo=NETFIELD_REP_START, \
		NETFIELD_REP_END=MagAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_WeaponActor_h_240_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MagAmmo=NETFIELD_REP_START, \
		NETFIELD_REP_END=MagAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_WeaponActor_h_240_STANDARD_CONSTRUCTORS \
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


#define fpsgame_Source_fpsgame_WeaponActor_h_240_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponActor(AWeaponActor&&); \
	NO_API AWeaponActor(const AWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponActor)


#define fpsgame_Source_fpsgame_WeaponActor_h_240_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponData() { return STRUCT_OFFSET(AWeaponActor, WeaponData); } \
	FORCEINLINE static uint32 __PPO__SightSceneComponent() { return STRUCT_OFFSET(AWeaponActor, SightSceneComponent); } \
	FORCEINLINE static uint32 __PPO__BarrelSceneComponent() { return STRUCT_OFFSET(AWeaponActor, BarrelSceneComponent); } \
	FORCEINLINE static uint32 __PPO__MagSceneComponent() { return STRUCT_OFFSET(AWeaponActor, MagSceneComponent); } \
	FORCEINLINE static uint32 __PPO__StockSceneComponent() { return STRUCT_OFFSET(AWeaponActor, StockSceneComponent); } \
	FORCEINLINE static uint32 __PPO__AttachmentSystem() { return STRUCT_OFFSET(AWeaponActor, AttachmentSystem); }


#define fpsgame_Source_fpsgame_WeaponActor_h_237_PROLOG
#define fpsgame_Source_fpsgame_WeaponActor_h_240_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponActor_h_240_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponActor_h_240_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponActor_h_240_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_WeaponActor_h_240_INCLASS \
	fpsgame_Source_fpsgame_WeaponActor_h_240_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_WeaponActor_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_WeaponActor_h_240_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_WeaponActor_h_240_SPARSE_DATA \
	fpsgame_Source_fpsgame_WeaponActor_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponActor_h_240_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_WeaponActor_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AWeaponActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_WeaponActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
