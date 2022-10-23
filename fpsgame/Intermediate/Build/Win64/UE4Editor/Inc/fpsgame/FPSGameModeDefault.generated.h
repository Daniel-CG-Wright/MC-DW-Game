// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor; struct FRewindDataStruct;
class URewindComponent;
#ifdef FPSGAME_FPSGameModeDefault_generated_h
#error "FPSGameModeDefault.generated.h already included, missing '#pragma once' in FPSGameModeDefault.h"
#endif
#define FPSGAME_FPSGameModeDefault_generated_h

#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_SPARSE_DATA
#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetActorPositionsToBefore); \
	DECLARE_FUNCTION(execRewindActors); \
	DECLARE_FUNCTION(execRemoveRewindComponent); \
	DECLARE_FUNCTION(execAddRewindComponent); \
	DECLARE_FUNCTION(execGetRewindComponentsSet);


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetActorPositionsToBefore); \
	DECLARE_FUNCTION(execRewindActors); \
	DECLARE_FUNCTION(execRemoveRewindComponent); \
	DECLARE_FUNCTION(execAddRewindComponent); \
	DECLARE_FUNCTION(execGetRewindComponentsSet);


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameModeDefault(); \
	friend struct Z_Construct_UClass_AFPSGameModeDefault_Statics; \
public: \
	DECLARE_CLASS(AFPSGameModeDefault, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameModeDefault)


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameModeDefault(); \
	friend struct Z_Construct_UClass_AFPSGameModeDefault_Statics; \
public: \
	DECLARE_CLASS(AFPSGameModeDefault, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameModeDefault)


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameModeDefault(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameModeDefault) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameModeDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameModeDefault); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameModeDefault(AFPSGameModeDefault&&); \
	NO_API AFPSGameModeDefault(const AFPSGameModeDefault&); \
public:


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameModeDefault(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameModeDefault(AFPSGameModeDefault&&); \
	NO_API AFPSGameModeDefault(const AFPSGameModeDefault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameModeDefault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameModeDefault); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameModeDefault)


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RewindComponentsSet() { return STRUCT_OFFSET(AFPSGameModeDefault, RewindComponentsSet); } \
	FORCEINLINE static uint32 __PPO__SavedRewindValues() { return STRUCT_OFFSET(AFPSGameModeDefault, SavedRewindValues); }


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_13_PROLOG
#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_SPARSE_DATA \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_INCLASS \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_SPARSE_DATA \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_FPSGameModeDefault_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSGameModeDefault>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_FPSGameModeDefault_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
