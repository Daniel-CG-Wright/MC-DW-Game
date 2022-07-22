// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class InteractionTypes : uint8;
#ifdef FPSGAME_InteractableObjectComponent_generated_h
#error "InteractableObjectComponent.generated.h already included, missing '#pragma once' in InteractableObjectComponent.h"
#endif
#define FPSGAME_InteractableObjectComponent_generated_h

#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_SPARSE_DATA
#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInteractionTime); \
	DECLARE_FUNCTION(execGetInteractionTime); \
	DECLARE_FUNCTION(execSetInteractionType); \
	DECLARE_FUNCTION(execGetInteractionType);


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInteractionTime); \
	DECLARE_FUNCTION(execGetInteractionTime); \
	DECLARE_FUNCTION(execSetInteractionType); \
	DECLARE_FUNCTION(execGetInteractionType);


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractableObjectComponent(); \
	friend struct Z_Construct_UClass_UInteractableObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractableObjectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UInteractableObjectComponent)


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUInteractableObjectComponent(); \
	friend struct Z_Construct_UClass_UInteractableObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractableObjectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(UInteractableObjectComponent)


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractableObjectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableObjectComponent(UInteractableObjectComponent&&); \
	NO_API UInteractableObjectComponent(const UInteractableObjectComponent&); \
public:


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableObjectComponent(UInteractableObjectComponent&&); \
	NO_API UInteractableObjectComponent(const UInteractableObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractableObjectComponent)


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ThisInteractionType() { return STRUCT_OFFSET(UInteractableObjectComponent, ThisInteractionType); } \
	FORCEINLINE static uint32 __PPO__InteractionTime() { return STRUCT_OFFSET(UInteractableObjectComponent, InteractionTime); }


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_17_PROLOG
#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_SPARSE_DATA \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_INCLASS \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_SPARSE_DATA \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_InteractableObjectComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UInteractableObjectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_InteractableObjectComponent_h


#define FOREACH_ENUM_INTERACTIONTYPES(op) \
	op(InteractionTypes::WEAPON_PICKUP) 

enum class InteractionTypes : uint8;
template<> FPSGAME_API UEnum* StaticEnum<InteractionTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
