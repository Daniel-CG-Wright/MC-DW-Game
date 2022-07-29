// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoseSnapshot;
#ifdef FPSGAME_RewindComponent_generated_h
#error "RewindComponent.generated.h already included, missing '#pragma once' in RewindComponent.h"
#endif
#define FPSGAME_RewindComponent_generated_h

#define fpsgame_Source_fpsgame_RewindComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRewindDataStruct_Statics; \
	FPSGAME_API static class UScriptStruct* StaticStruct();


template<> FPSGAME_API UScriptStruct* StaticStruct<struct FRewindDataStruct>();

#define fpsgame_Source_fpsgame_RewindComponent_h_37_SPARSE_DATA
#define fpsgame_Source_fpsgame_RewindComponent_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecordDetailsThisTick); \
	DECLARE_FUNCTION(execAddToGameState);


#define fpsgame_Source_fpsgame_RewindComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecordDetailsThisTick); \
	DECLARE_FUNCTION(execAddToGameState);


#define fpsgame_Source_fpsgame_RewindComponent_h_37_EVENT_PARMS \
	struct RewindComponent_eventGetCurrentTickPoseSnapshotBP_Parms \
	{ \
		FPoseSnapshot ReturnValue; \
	};


#define fpsgame_Source_fpsgame_RewindComponent_h_37_CALLBACK_WRAPPERS
#define fpsgame_Source_fpsgame_RewindComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURewindComponent(); \
	friend struct Z_Construct_UClass_URewindComponent_Statics; \
public: \
	DECLARE_CLASS(URewindComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(URewindComponent)


#define fpsgame_Source_fpsgame_RewindComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesURewindComponent(); \
	friend struct Z_Construct_UClass_URewindComponent_Statics; \
public: \
	DECLARE_CLASS(URewindComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(URewindComponent)


#define fpsgame_Source_fpsgame_RewindComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URewindComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URewindComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewindComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URewindComponent(URewindComponent&&); \
	NO_API URewindComponent(const URewindComponent&); \
public:


#define fpsgame_Source_fpsgame_RewindComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URewindComponent(URewindComponent&&); \
	NO_API URewindComponent(const URewindComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewindComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URewindComponent)


#define fpsgame_Source_fpsgame_RewindComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RewindTimestampsAndData() { return STRUCT_OFFSET(URewindComponent, RewindTimestampsAndData); } \
	FORCEINLINE static uint32 __PPO__CurrentPoseSnapshot() { return STRUCT_OFFSET(URewindComponent, CurrentPoseSnapshot); }


#define fpsgame_Source_fpsgame_RewindComponent_h_34_PROLOG \
	fpsgame_Source_fpsgame_RewindComponent_h_37_EVENT_PARMS


#define fpsgame_Source_fpsgame_RewindComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_RewindComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_RewindComponent_h_37_SPARSE_DATA \
	fpsgame_Source_fpsgame_RewindComponent_h_37_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_RewindComponent_h_37_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_RewindComponent_h_37_INCLASS \
	fpsgame_Source_fpsgame_RewindComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_RewindComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_RewindComponent_h_37_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_RewindComponent_h_37_SPARSE_DATA \
	fpsgame_Source_fpsgame_RewindComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_RewindComponent_h_37_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_RewindComponent_h_37_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_RewindComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class URewindComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_RewindComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
