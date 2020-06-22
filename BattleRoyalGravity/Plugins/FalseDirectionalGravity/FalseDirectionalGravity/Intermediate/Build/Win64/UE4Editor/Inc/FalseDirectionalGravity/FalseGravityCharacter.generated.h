// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UFalseGravityMovementComponent;
#ifdef FALSEDIRECTIONALGRAVITY_FalseGravityCharacter_generated_h
#error "FalseGravityCharacter.generated.h already included, missing '#pragma once' in FalseGravityCharacter.h"
#endif
#define FALSEDIRECTIONALGRAVITY_FalseGravityCharacter_generated_h

#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_RPC_WRAPPERS \
	virtual void SetControlYaw_Implementation(float Yaw); \
	virtual void SyncGravityDirection_Implementation(FVector GravityDirectionIn); \
 \
	DECLARE_FUNCTION(execSetDebugTraceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bDebugTraceEnabledIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDebugTraceEnabled(Z_Param_bDebugTraceEnabledIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResetGravityOnTraceFail) \
	{ \
		P_GET_UBOOL(Z_Param_bResetGravityOnTraceFailIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResetGravityOnTraceFail(Z_Param_bResetGravityOnTraceFailIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseCustomGravityTraceLength) \
	{ \
		P_GET_UBOOL(Z_Param_bUseCustomGravityTraceLengthIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseCustomGravityTraceLength(Z_Param_bUseCustomGravityTraceLengthIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bGravityEnabledIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityEnabled(Z_Param_bGravityEnabledIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseGravityLookUpRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseGravityLookUpRateIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBaseGravityLookUpRate(Z_Param_BaseGravityLookUpRateIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseGravityTurnRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseGravityTurnRateIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBaseGravityTurnRate(Z_Param_BaseGravityTurnRateIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxGravityCameraPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxGravityCameraPitchIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxGravityCameraPitch(Z_Param_MaxGravityCameraPitchIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinGravityCameraPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinGravityCameraPitchIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinGravityCameraPitch(Z_Param_MinGravityCameraPitchIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityFallingInterpolationSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GravityFallingInterpolationSpeedIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityFallingInterpolationSpeed(Z_Param_GravityFallingInterpolationSpeedIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityInterpolationSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GravityInterpolationSpeedIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityInterpolationSpeed(Z_Param_GravityInterpolationSpeedIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxNewGravityDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxNewGravityDegreesIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxNewGravityDegrees(Z_Param_MaxNewGravityDegreesIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityTraceLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GravityTraceLengthIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityTraceLength(Z_Param_GravityTraceLengthIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlYaw) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControlYaw_Implementation(Z_Param_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSyncGravityDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GravityDirectionIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SyncGravityDirection_Implementation(Z_Param_GravityDirectionIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGravityTeleport) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_GET_UBOOL(Z_Param_bFlip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GravityTeleport(Z_Param_Location,Z_Param_Normal,Z_Param_bFlip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFalseGravityMovementComponent**)Z_Param__Result=P_THIS->GetGravityMovementComponent(); \
		P_NATIVE_END; \
	}


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetControlYaw_Implementation(float Yaw); \
	virtual void SyncGravityDirection_Implementation(FVector GravityDirectionIn); \
 \
	DECLARE_FUNCTION(execSetDebugTraceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bDebugTraceEnabledIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDebugTraceEnabled(Z_Param_bDebugTraceEnabledIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResetGravityOnTraceFail) \
	{ \
		P_GET_UBOOL(Z_Param_bResetGravityOnTraceFailIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResetGravityOnTraceFail(Z_Param_bResetGravityOnTraceFailIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseCustomGravityTraceLength) \
	{ \
		P_GET_UBOOL(Z_Param_bUseCustomGravityTraceLengthIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseCustomGravityTraceLength(Z_Param_bUseCustomGravityTraceLengthIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bGravityEnabledIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityEnabled(Z_Param_bGravityEnabledIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseGravityLookUpRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseGravityLookUpRateIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBaseGravityLookUpRate(Z_Param_BaseGravityLookUpRateIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseGravityTurnRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseGravityTurnRateIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBaseGravityTurnRate(Z_Param_BaseGravityTurnRateIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxGravityCameraPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxGravityCameraPitchIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxGravityCameraPitch(Z_Param_MaxGravityCameraPitchIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinGravityCameraPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinGravityCameraPitchIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinGravityCameraPitch(Z_Param_MinGravityCameraPitchIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityFallingInterpolationSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GravityFallingInterpolationSpeedIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityFallingInterpolationSpeed(Z_Param_GravityFallingInterpolationSpeedIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityInterpolationSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GravityInterpolationSpeedIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityInterpolationSpeed(Z_Param_GravityInterpolationSpeedIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxNewGravityDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxNewGravityDegreesIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxNewGravityDegrees(Z_Param_MaxNewGravityDegreesIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityTraceLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GravityTraceLengthIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGravityTraceLength(Z_Param_GravityTraceLengthIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlYaw) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControlYaw_Implementation(Z_Param_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSyncGravityDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GravityDirectionIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SyncGravityDirection_Implementation(Z_Param_GravityDirectionIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGravityTeleport) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_GET_UBOOL(Z_Param_bFlip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GravityTeleport(Z_Param_Location,Z_Param_Normal,Z_Param_bFlip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravityMovementComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFalseGravityMovementComponent**)Z_Param__Result=P_THIS->GetGravityMovementComponent(); \
		P_NATIVE_END; \
	}


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_EVENT_PARMS \
	struct FalseGravityCharacter_eventSetControlYaw_Parms \
	{ \
		float Yaw; \
	}; \
	struct FalseGravityCharacter_eventSyncGravityDirection_Parms \
	{ \
		FVector GravityDirectionIn; \
	};


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_CALLBACK_WRAPPERS
#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFalseGravityCharacter(); \
	friend struct Z_Construct_UClass_AFalseGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AFalseGravityCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(AFalseGravityCharacter)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFalseGravityCharacter(); \
	friend struct Z_Construct_UClass_AFalseGravityCharacter_Statics; \
public: \
	DECLARE_CLASS(AFalseGravityCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(AFalseGravityCharacter)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFalseGravityCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFalseGravityCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFalseGravityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFalseGravityCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFalseGravityCharacter(AFalseGravityCharacter&&); \
	NO_API AFalseGravityCharacter(const AFalseGravityCharacter&); \
public:


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFalseGravityCharacter(AFalseGravityCharacter&&); \
	NO_API AFalseGravityCharacter(const AFalseGravityCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFalseGravityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFalseGravityCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFalseGravityCharacter)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bGravityEnabled() { return STRUCT_OFFSET(AFalseGravityCharacter, bGravityEnabled); } \
	FORCEINLINE static uint32 __PPO__MaxNewGravityDegrees() { return STRUCT_OFFSET(AFalseGravityCharacter, MaxNewGravityDegrees); } \
	FORCEINLINE static uint32 __PPO__bUseCustomGravityTraceLength() { return STRUCT_OFFSET(AFalseGravityCharacter, bUseCustomGravityTraceLength); } \
	FORCEINLINE static uint32 __PPO__GravityTraceLength() { return STRUCT_OFFSET(AFalseGravityCharacter, GravityTraceLength); } \
	FORCEINLINE static uint32 __PPO__GravityInterpolationSpeed() { return STRUCT_OFFSET(AFalseGravityCharacter, GravityInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO__bResetGravityOnTraceFail() { return STRUCT_OFFSET(AFalseGravityCharacter, bResetGravityOnTraceFail); } \
	FORCEINLINE static uint32 __PPO__GravityFallingInterpolationSpeed() { return STRUCT_OFFSET(AFalseGravityCharacter, GravityFallingInterpolationSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseGravityTurnRate() { return STRUCT_OFFSET(AFalseGravityCharacter, BaseGravityTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseGravityLookUpRate() { return STRUCT_OFFSET(AFalseGravityCharacter, BaseGravityLookUpRate); } \
	FORCEINLINE static uint32 __PPO__bDebugTraceEnabled() { return STRUCT_OFFSET(AFalseGravityCharacter, bDebugTraceEnabled); }


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_13_PROLOG \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_EVENT_PARMS


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_RPC_WRAPPERS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_CALLBACK_WRAPPERS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_INCLASS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_CALLBACK_WRAPPERS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
