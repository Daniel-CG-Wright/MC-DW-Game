// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef FPSGAME_fpscharacter_generated_h
#error "fpscharacter.generated.h already included, missing '#pragma once' in fpscharacter.h"
#endif
#define FPSGAME_fpscharacter_generated_h

#define fpsgame_Source_fpsgame_fpscharacter_h_18_SPARSE_DATA
#define fpsgame_Source_fpsgame_fpscharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoseStamina); \
	DECLARE_FUNCTION(execSetCurrentStamina); \
	DECLARE_FUNCTION(execGetCurrentStamina); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execReleaseCrouch); \
	DECLARE_FUNCTION(execPressCrouch); \
	DECLARE_FUNCTION(execReleaseSprint); \
	DECLARE_FUNCTION(execPressSprint); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputY); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputX); \
	DECLARE_FUNCTION(execMoveX); \
	DECLARE_FUNCTION(execMoveY); \
	DECLARE_FUNCTION(execStartSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execDeductStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentStamina);


#define fpsgame_Source_fpsgame_fpscharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoseStamina); \
	DECLARE_FUNCTION(execSetCurrentStamina); \
	DECLARE_FUNCTION(execGetCurrentStamina); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execReleaseCrouch); \
	DECLARE_FUNCTION(execPressCrouch); \
	DECLARE_FUNCTION(execReleaseSprint); \
	DECLARE_FUNCTION(execPressSprint); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputY); \
	DECLARE_FUNCTION(execApplySensitivityAndInversionToMouseInputX); \
	DECLARE_FUNCTION(execMoveX); \
	DECLARE_FUNCTION(execMoveY); \
	DECLARE_FUNCTION(execStartSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execDeductStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentStamina);


#define fpsgame_Source_fpsgame_fpscharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfpscharacter(); \
	friend struct Z_Construct_UClass_Afpscharacter_Statics; \
public: \
	DECLARE_CLASS(Afpscharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(Afpscharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentStamina=NETFIELD_REP_START, \
		CurrentHealth, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_fpscharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAfpscharacter(); \
	friend struct Z_Construct_UClass_Afpscharacter_Statics; \
public: \
	DECLARE_CLASS(Afpscharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(Afpscharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentStamina=NETFIELD_REP_START, \
		CurrentHealth, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define fpsgame_Source_fpsgame_fpscharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Afpscharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Afpscharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afpscharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afpscharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afpscharacter(Afpscharacter&&); \
	NO_API Afpscharacter(const Afpscharacter&); \
public:


#define fpsgame_Source_fpsgame_fpscharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afpscharacter(Afpscharacter&&); \
	NO_API Afpscharacter(const Afpscharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afpscharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afpscharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Afpscharacter)


#define fpsgame_Source_fpsgame_fpscharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentlyCrouching() { return STRUCT_OFFSET(Afpscharacter, CurrentlyCrouching); } \
	FORCEINLINE static uint32 __PPO__JustLanded() { return STRUCT_OFFSET(Afpscharacter, JustLanded); } \
	FORCEINLINE static uint32 __PPO__DefaultHalfHeight() { return STRUCT_OFFSET(Afpscharacter, DefaultHalfHeight); } \
	FORCEINLINE static uint32 __PPO__CrouchedHalfHeight() { return STRUCT_OFFSET(Afpscharacter, CrouchedHalfHeight); } \
	FORCEINLINE static uint32 __PPO__DefaultSpeed() { return STRUCT_OFFSET(Afpscharacter, DefaultSpeed); } \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(Afpscharacter, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__CrouchSpeed() { return STRUCT_OFFSET(Afpscharacter, CrouchSpeed); } \
	FORCEINLINE static uint32 __PPO__LandingTime() { return STRUCT_OFFSET(Afpscharacter, LandingTime); } \
	FORCEINLINE static uint32 __PPO__StaminaLossIntervalTimeInSeconds() { return STRUCT_OFFSET(Afpscharacter, StaminaLossIntervalTimeInSeconds); } \
	FORCEINLINE static uint32 __PPO__StaminaLossRateWhenSprinting() { return STRUCT_OFFSET(Afpscharacter, StaminaLossRateWhenSprinting); } \
	FORCEINLINE static uint32 __PPO__StaminaLossWhenJumping() { return STRUCT_OFFSET(Afpscharacter, StaminaLossWhenJumping); } \
	FORCEINLINE static uint32 __PPO__MaxStamina() { return STRUCT_OFFSET(Afpscharacter, MaxStamina); } \
	FORCEINLINE static uint32 __PPO__CurrentStamina() { return STRUCT_OFFSET(Afpscharacter, CurrentStamina); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(Afpscharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(Afpscharacter, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__IsSprinting() { return STRUCT_OFFSET(Afpscharacter, IsSprinting); }


#define fpsgame_Source_fpsgame_fpscharacter_h_15_PROLOG
#define fpsgame_Source_fpsgame_fpscharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_fpscharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_fpscharacter_h_18_SPARSE_DATA \
	fpsgame_Source_fpsgame_fpscharacter_h_18_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_fpscharacter_h_18_INCLASS \
	fpsgame_Source_fpsgame_fpscharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_fpscharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_fpscharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_fpscharacter_h_18_SPARSE_DATA \
	fpsgame_Source_fpsgame_fpscharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_fpscharacter_h_18_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_fpscharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class Afpscharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_fpscharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
