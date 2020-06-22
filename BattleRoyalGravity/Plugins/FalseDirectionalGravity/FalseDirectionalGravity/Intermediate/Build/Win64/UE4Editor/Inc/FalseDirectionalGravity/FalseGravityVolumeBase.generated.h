// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
#ifdef FALSEDIRECTIONALGRAVITY_FalseGravityVolumeBase_generated_h
#error "FalseGravityVolumeBase.generated.h already included, missing '#pragma once' in FalseGravityVolumeBase.h"
#endif
#define FALSEDIRECTIONALGRAVITY_FalseGravityVolumeBase_generated_h

#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGravityShapeBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GravityShapeBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ActorPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravity(Z_Param_ActorPos); \
		P_NATIVE_END; \
	}


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGravityShapeBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GravityShapeBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGravity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ActorPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetGravity(Z_Param_ActorPos); \
		P_NATIVE_END; \
	}


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFalseGravityVolumeBase(); \
	friend struct Z_Construct_UClass_AFalseGravityVolumeBase_Statics; \
public: \
	DECLARE_CLASS(AFalseGravityVolumeBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(AFalseGravityVolumeBase)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFalseGravityVolumeBase(); \
	friend struct Z_Construct_UClass_AFalseGravityVolumeBase_Statics; \
public: \
	DECLARE_CLASS(AFalseGravityVolumeBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(AFalseGravityVolumeBase)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFalseGravityVolumeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFalseGravityVolumeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFalseGravityVolumeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFalseGravityVolumeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFalseGravityVolumeBase(AFalseGravityVolumeBase&&); \
	NO_API AFalseGravityVolumeBase(const AFalseGravityVolumeBase&); \
public:


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFalseGravityVolumeBase(AFalseGravityVolumeBase&&); \
	NO_API AFalseGravityVolumeBase(const AFalseGravityVolumeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFalseGravityVolumeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFalseGravityVolumeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFalseGravityVolumeBase)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GravityShape() { return STRUCT_OFFSET(AFalseGravityVolumeBase, GravityShape); }


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_12_PROLOG
#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_RPC_WRAPPERS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_INCLASS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_INCLASS_NO_PURE_DECLS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravityVolumeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
