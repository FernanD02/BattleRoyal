// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef FALSEDIRECTIONALGRAVITY_FalseGravitySpringArm_generated_h
#error "FalseGravitySpringArm.generated.h already included, missing '#pragma once' in FalseGravitySpringArm.h"
#endif
#define FALSEDIRECTIONALGRAVITY_FalseGravitySpringArm_generated_h

#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCollisionFixApplied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCollisionFixApplied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnfixedCameraPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUnfixedCameraPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetTargetRotation(); \
		P_NATIVE_END; \
	}


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCollisionFixApplied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCollisionFixApplied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnfixedCameraPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetUnfixedCameraPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetTargetRotation(); \
		P_NATIVE_END; \
	}


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFalseGravitySpringArm(); \
	friend struct Z_Construct_UClass_UFalseGravitySpringArm_Statics; \
public: \
	DECLARE_CLASS(UFalseGravitySpringArm, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(UFalseGravitySpringArm)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFalseGravitySpringArm(); \
	friend struct Z_Construct_UClass_UFalseGravitySpringArm_Statics; \
public: \
	DECLARE_CLASS(UFalseGravitySpringArm, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FalseDirectionalGravity"), NO_API) \
	DECLARE_SERIALIZER(UFalseGravitySpringArm)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFalseGravitySpringArm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFalseGravitySpringArm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFalseGravitySpringArm); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFalseGravitySpringArm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFalseGravitySpringArm(UFalseGravitySpringArm&&); \
	NO_API UFalseGravitySpringArm(const UFalseGravitySpringArm&); \
public:


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFalseGravitySpringArm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFalseGravitySpringArm(UFalseGravitySpringArm&&); \
	NO_API UFalseGravitySpringArm(const UFalseGravitySpringArm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFalseGravitySpringArm); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFalseGravitySpringArm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFalseGravitySpringArm)


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_PRIVATE_PROPERTY_OFFSET
#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_18_PROLOG
#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_PRIVATE_PROPERTY_OFFSET \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_RPC_WRAPPERS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_INCLASS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_PRIVATE_PROPERTY_OFFSET \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_INCLASS_NO_PURE_DECLS \
	FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FalseGravitySpringArm."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FalseGravityExample_Plugins_FalseDirectionalGravity_Source_FalseDirectionalGravity_Public_FalseGravitySpringArm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
