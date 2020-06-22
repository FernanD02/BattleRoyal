// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FALSEDIRECTIONALGRAVITY_FalseGravityMovementComponent_generated_h
#error "FalseGravityMovementComponent.generated.h already included, missing '#pragma once' in FalseGravityMovementComponent.h"
#endif
#define FALSEDIRECTIONALGRAVITY_FalseGravityMovementComponent_generated_h

#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsExistFloor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsExistFloor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewGravityDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityDirection(Z_Param_NewGravityDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_GET_UBOOL(Z_Param_bAvoidZeroGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_bAvoidZeroGravity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVolumeGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVolumeGravityDirection(); \
		P_NATIVE_END; \
	}


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsExistFloor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsExistFloor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewGravityDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityDirection(Z_Param_NewGravityDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityDirection) \
	{ \
		P_GET_UBOOL(Z_Param_bAvoidZeroGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_bAvoidZeroGravity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVolumeGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVolumeGravityDirection(); \
		P_NATIVE_END; \
	}


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFalseGravityMovementComponent(); \
	friend struct Z_Construct_UClass_UFalseGravityMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFalseGravityMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(UFalseGravityMovementComponent)


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFalseGravityMovementComponent(); \
	friend struct Z_Construct_UClass_UFalseGravityMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFalseGravityMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(UFalseGravityMovementComponent)


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFalseGravityMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFalseGravityMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFalseGravityMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFalseGravityMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFalseGravityMovementComponent(UFalseGravityMovementComponent&&); \
	NO_API UFalseGravityMovementComponent(const UFalseGravityMovementComponent&); \
public:


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFalseGravityMovementComponent(UFalseGravityMovementComponent&&); \
	NO_API UFalseGravityMovementComponent(const UFalseGravityMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFalseGravityMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFalseGravityMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFalseGravityMovementComponent)


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShowDebugLines() { return STRUCT_OFFSET(UFalseGravityMovementComponent, bShowDebugLines); } \
	FORCEINLINE static uint32 __PPO__CurrentGravityVolume() { return STRUCT_OFFSET(UFalseGravityMovementComponent, CurrentGravityVolume); } \
	FORCEINLINE static uint32 __PPO__CustomGravityDirection() { return STRUCT_OFFSET(UFalseGravityMovementComponent, CustomGravityDirection); }


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_12_PROLOG
#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_RPC_WRAPPERS \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_INCLASS \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyalGravity___copia_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
