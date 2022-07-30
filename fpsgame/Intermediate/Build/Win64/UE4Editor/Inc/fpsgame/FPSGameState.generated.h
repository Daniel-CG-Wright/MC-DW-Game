// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSGameState_generated_h
#error "FPSGameState.generated.h already included, missing '#pragma once' in FPSGameState.h"
#endif
#define FPSGAME_FPSGameState_generated_h

#define fpsgame_Source_fpsgame_FPSGameState_h_14_SPARSE_DATA
#define fpsgame_Source_fpsgame_FPSGameState_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxAllowedLatency);


#define fpsgame_Source_fpsgame_FPSGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxAllowedLatency);


#define fpsgame_Source_fpsgame_FPSGameState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameState(); \
	friend struct Z_Construct_UClass_AFPSGameState_Statics; \
public: \
	DECLARE_CLASS(AFPSGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameState)


#define fpsgame_Source_fpsgame_FPSGameState_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameState(); \
	friend struct Z_Construct_UClass_AFPSGameState_Statics; \
public: \
	DECLARE_CLASS(AFPSGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameState)


#define fpsgame_Source_fpsgame_FPSGameState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameState(AFPSGameState&&); \
	NO_API AFPSGameState(const AFPSGameState&); \
public:


#define fpsgame_Source_fpsgame_FPSGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameState(AFPSGameState&&); \
	NO_API AFPSGameState(const AFPSGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameState)


#define fpsgame_Source_fpsgame_FPSGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxAllowedLatencyForRewind() { return STRUCT_OFFSET(AFPSGameState, MaxAllowedLatencyForRewind); }


#define fpsgame_Source_fpsgame_FPSGameState_h_11_PROLOG
#define fpsgame_Source_fpsgame_FPSGameState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_FPSGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_FPSGameState_h_14_SPARSE_DATA \
	fpsgame_Source_fpsgame_FPSGameState_h_14_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_FPSGameState_h_14_INCLASS \
	fpsgame_Source_fpsgame_FPSGameState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_FPSGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_FPSGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_FPSGameState_h_14_SPARSE_DATA \
	fpsgame_Source_fpsgame_FPSGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_FPSGameState_h_14_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_FPSGameState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_FPSGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
