// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponActor;
#ifdef FPSGAME_PlayerWeaponSystem_generated_h
#error "PlayerWeaponSystem.generated.h already included, missing '#pragma once' in PlayerWeaponSystem.h"
#endif
#define FPSGAME_PlayerWeaponSystem_generated_h

#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_SPARSE_DATA
#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_RPC_WRAPPERS \
	virtual bool ServerSetAmmo_Validate(int32 , int32 ); \
	virtual void ServerSetAmmo_Implementation(int32 SlotNumber, int32 Ammo); \
 \
	DECLARE_FUNCTION(execServerSetAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_WeaponChanged); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execSwitchToNextAvailableWeapon); \
	DECLARE_FUNCTION(execAddWeapon);


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetAmmo_Validate(int32 , int32 ); \
	virtual void ServerSetAmmo_Implementation(int32 SlotNumber, int32 Ammo); \
 \
	DECLARE_FUNCTION(execServerSetAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_WeaponChanged); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execSwitchToNextAvailableWeapon); \
	DECLARE_FUNCTION(execAddWeapon);


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_EVENT_PARMS \
	struct PlayerWeaponSystem_eventServerSetAmmo_Parms \
	{ \
		int32 SlotNumber; \
		int32 Ammo; \
	};


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_CALLBACK_WRAPPERS
#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerWeaponSystem(); \
	friend struct Z_Construct_UClass_UPlayerWeaponSystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerWeaponSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWeaponSystem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Weapons=NETFIELD_REP_START, \
		CurrentWeaponSlot, \
		NETFIELD_REP_END=CurrentWeaponSlot	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerWeaponSystem(); \
	friend struct Z_Construct_UClass_UPlayerWeaponSystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerWeaponSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWeaponSystem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Weapons=NETFIELD_REP_START, \
		CurrentWeaponSlot, \
		NETFIELD_REP_END=CurrentWeaponSlot	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWeaponSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWeaponSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWeaponSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWeaponSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerWeaponSystem(UPlayerWeaponSystem&&); \
	NO_API UPlayerWeaponSystem(const UPlayerWeaponSystem&); \
public:


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerWeaponSystem(UPlayerWeaponSystem&&); \
	NO_API UPlayerWeaponSystem(const UPlayerWeaponSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWeaponSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWeaponSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerWeaponSystem)


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_PRIVATE_PROPERTY_OFFSET
#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_16_PROLOG \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_EVENT_PARMS


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_SPARSE_DATA \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_INCLASS \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_SPARSE_DATA \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_PlayerWeaponSystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UPlayerWeaponSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_PlayerWeaponSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
