// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef FPSGAME_FPSPlayerController_generated_h
#error "FPSPlayerController.generated.h already included, missing '#pragma once' in FPSPlayerController.h"
#endif
#define FPSGAME_FPSPlayerController_generated_h

#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_SPARSE_DATA
#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_RPC_WRAPPERS \
	virtual bool ServerRequestServerTime_Validate(APlayerController* , float ); \
	virtual void ServerRequestServerTime_Implementation(APlayerController* requester, float requestWorldTime); \
	virtual void ClientReportServerTime_Implementation(float requestWorldTime, float serverTime); \
 \
	DECLARE_FUNCTION(execServerRequestServerTime); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execGetServerTime);


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerRequestServerTime_Validate(APlayerController* , float ); \
	virtual void ServerRequestServerTime_Implementation(APlayerController* requester, float requestWorldTime); \
	virtual void ClientReportServerTime_Implementation(float requestWorldTime, float serverTime); \
 \
	DECLARE_FUNCTION(execServerRequestServerTime); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execGetServerTime);


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_EVENT_PARMS \
	struct FPSPlayerController_eventClientReportServerTime_Parms \
	{ \
		float requestWorldTime; \
		float serverTime; \
	}; \
	struct FPSPlayerController_eventServerRequestServerTime_Parms \
	{ \
		APlayerController* requester; \
		float requestWorldTime; \
	};


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_CALLBACK_WRAPPERS
#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsgame"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public:


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController)


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ServerTime() { return STRUCT_OFFSET(AFPSPlayerController, ServerTime); }


#define fpsgame_Source_fpsgame_FPSPlayerController_h_13_PROLOG \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_EVENT_PARMS


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_SPARSE_DATA \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_RPC_WRAPPERS \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_INCLASS \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsgame_Source_fpsgame_FPSPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_SPARSE_DATA \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_CALLBACK_WRAPPERS \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	fpsgame_Source_fpsgame_FPSPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_FPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
