// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FalseDirectionalGravity/Public/FalseGravityCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFalseGravityCharacter() {}
// Cross Module References
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityCharacter_NoRegister();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FalseDirectionalGravity();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_UFalseGravityMovementComponent_NoRegister();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection();
// End Cross Module References
	static FName NAME_AFalseGravityCharacter_SetControlYaw = FName(TEXT("SetControlYaw"));
	void AFalseGravityCharacter::SetControlYaw(float Yaw)
	{
		FalseGravityCharacter_eventSetControlYaw_Parms Parms;
		Parms.Yaw=Yaw;
		ProcessEvent(FindFunctionChecked(NAME_AFalseGravityCharacter_SetControlYaw),&Parms);
	}
	static FName NAME_AFalseGravityCharacter_SyncGravityDirection = FName(TEXT("SyncGravityDirection"));
	void AFalseGravityCharacter::SyncGravityDirection(FVector GravityDirectionIn)
	{
		FalseGravityCharacter_eventSyncGravityDirection_Parms Parms;
		Parms.GravityDirectionIn=GravityDirectionIn;
		ProcessEvent(FindFunctionChecked(NAME_AFalseGravityCharacter_SyncGravityDirection),&Parms);
	}
	void AFalseGravityCharacter::StaticRegisterNativesAFalseGravityCharacter()
	{
		UClass* Class = AFalseGravityCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravityMovementComponent", &AFalseGravityCharacter::execGetGravityMovementComponent },
			{ "GravityTeleport", &AFalseGravityCharacter::execGravityTeleport },
			{ "SetBaseGravityLookUpRate", &AFalseGravityCharacter::execSetBaseGravityLookUpRate },
			{ "SetBaseGravityTurnRate", &AFalseGravityCharacter::execSetBaseGravityTurnRate },
			{ "SetControlYaw", &AFalseGravityCharacter::execSetControlYaw },
			{ "SetDebugTraceEnabled", &AFalseGravityCharacter::execSetDebugTraceEnabled },
			{ "SetGravityEnabled", &AFalseGravityCharacter::execSetGravityEnabled },
			{ "SetGravityFallingInterpolationSpeed", &AFalseGravityCharacter::execSetGravityFallingInterpolationSpeed },
			{ "SetGravityInterpolationSpeed", &AFalseGravityCharacter::execSetGravityInterpolationSpeed },
			{ "SetGravityTraceLength", &AFalseGravityCharacter::execSetGravityTraceLength },
			{ "SetMaxGravityCameraPitch", &AFalseGravityCharacter::execSetMaxGravityCameraPitch },
			{ "SetMaxNewGravityDegrees", &AFalseGravityCharacter::execSetMaxNewGravityDegrees },
			{ "SetMinGravityCameraPitch", &AFalseGravityCharacter::execSetMinGravityCameraPitch },
			{ "SetResetGravityOnTraceFail", &AFalseGravityCharacter::execSetResetGravityOnTraceFail },
			{ "SetUseCustomGravityTraceLength", &AFalseGravityCharacter::execSetUseCustomGravityTraceLength },
			{ "SyncGravityDirection", &AFalseGravityCharacter::execSyncGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics
	{
		struct FalseGravityCharacter_eventGetGravityMovementComponent_Parms
		{
			UFalseGravityMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventGetGravityMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UFalseGravityMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "GetGravityMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FalseGravityCharacter_eventGetGravityMovementComponent_Parms), Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics
	{
		struct FalseGravityCharacter_eventGravityTeleport_Parms
		{
			FVector Location;
			FVector Normal;
			bool bFlip;
		};
		static void NewProp_bFlip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_bFlip_SetBit(void* Obj)
	{
		((FalseGravityCharacter_eventGravityTeleport_Parms*)Obj)->bFlip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_bFlip = { UE4CodeGen_Private::EPropertyClass::Bool, "bFlip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FalseGravityCharacter_eventGravityTeleport_Parms), &Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventGravityTeleport_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventGravityTeleport_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_bFlip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "GravityTeleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820405, sizeof(FalseGravityCharacter_eventGravityTeleport_Parms), Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics
	{
		struct FalseGravityCharacter_eventSetBaseGravityLookUpRate_Parms
		{
			float BaseGravityLookUpRateIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGravityLookUpRateIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::NewProp_BaseGravityLookUpRateIn = { UE4CodeGen_Private::EPropertyClass::Float, "BaseGravityLookUpRateIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetBaseGravityLookUpRate_Parms, BaseGravityLookUpRateIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::NewProp_BaseGravityLookUpRateIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate !!Needs only for LookUpAtRate!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetBaseGravityLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetBaseGravityLookUpRate_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics
	{
		struct FalseGravityCharacter_eventSetBaseGravityTurnRate_Parms
		{
			float BaseGravityTurnRateIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGravityTurnRateIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::NewProp_BaseGravityTurnRateIn = { UE4CodeGen_Private::EPropertyClass::Float, "BaseGravityTurnRateIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetBaseGravityTurnRate_Parms, BaseGravityTurnRateIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::NewProp_BaseGravityTurnRateIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate !!Needs only for TurnAtRate!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetBaseGravityTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetBaseGravityTurnRate_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::NewProp_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "Yaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetControlYaw_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetControlYaw", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, sizeof(FalseGravityCharacter_eventSetControlYaw_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics
	{
		struct FalseGravityCharacter_eventSetDebugTraceEnabled_Parms
		{
			bool bDebugTraceEnabledIn;
		};
		static void NewProp_bDebugTraceEnabledIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugTraceEnabledIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::NewProp_bDebugTraceEnabledIn_SetBit(void* Obj)
	{
		((FalseGravityCharacter_eventSetDebugTraceEnabled_Parms*)Obj)->bDebugTraceEnabledIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::NewProp_bDebugTraceEnabledIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugTraceEnabledIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FalseGravityCharacter_eventSetDebugTraceEnabled_Parms), &Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::NewProp_bDebugTraceEnabledIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::NewProp_bDebugTraceEnabledIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetDebugTraceEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetDebugTraceEnabled_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics
	{
		struct FalseGravityCharacter_eventSetGravityEnabled_Parms
		{
			bool bGravityEnabledIn;
		};
		static void NewProp_bGravityEnabledIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGravityEnabledIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::NewProp_bGravityEnabledIn_SetBit(void* Obj)
	{
		((FalseGravityCharacter_eventSetGravityEnabled_Parms*)Obj)->bGravityEnabledIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::NewProp_bGravityEnabledIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bGravityEnabledIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FalseGravityCharacter_eventSetGravityEnabled_Parms), &Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::NewProp_bGravityEnabledIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::NewProp_bGravityEnabledIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Target spring arm or camera, not be root component  (or any other scene component that should be controlled) !!This works only if LookUp, LookUpAtRate not overriden!!\nUFUNCTION(Category = \"Gravity\", BlueprintCallable)\nvoid SetGravityPitchTarget(USceneComponent* GravityPitchTargetIn);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetGravityEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetGravityEnabled_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics
	{
		struct FalseGravityCharacter_eventSetGravityFallingInterpolationSpeed_Parms
		{
			float GravityFallingInterpolationSpeedIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityFallingInterpolationSpeedIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::NewProp_GravityFallingInterpolationSpeedIn = { UE4CodeGen_Private::EPropertyClass::Float, "GravityFallingInterpolationSpeedIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetGravityFallingInterpolationSpeed_Parms, GravityFallingInterpolationSpeedIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::NewProp_GravityFallingInterpolationSpeedIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Change gravity speed out floor, above 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetGravityFallingInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetGravityFallingInterpolationSpeed_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics
	{
		struct FalseGravityCharacter_eventSetGravityInterpolationSpeed_Parms
		{
			float GravityInterpolationSpeedIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityInterpolationSpeedIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::NewProp_GravityInterpolationSpeedIn = { UE4CodeGen_Private::EPropertyClass::Float, "GravityInterpolationSpeedIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetGravityInterpolationSpeed_Parms, GravityInterpolationSpeedIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::NewProp_GravityInterpolationSpeedIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Change gravity speed on floor, above 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetGravityInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetGravityInterpolationSpeed_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics
	{
		struct FalseGravityCharacter_eventSetGravityTraceLength_Parms
		{
			float GravityTraceLengthIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityTraceLengthIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::NewProp_GravityTraceLengthIn = { UE4CodeGen_Private::EPropertyClass::Float, "GravityTraceLengthIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetGravityTraceLength_Parms, GravityTraceLengthIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::NewProp_GravityTraceLengthIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Distance after character start use volume gravity, above 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetGravityTraceLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetGravityTraceLength_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics
	{
		struct FalseGravityCharacter_eventSetMaxGravityCameraPitch_Parms
		{
			float MaxGravityCameraPitchIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGravityCameraPitchIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::NewProp_MaxGravityCameraPitchIn = { UE4CodeGen_Private::EPropertyClass::Float, "MaxGravityCameraPitchIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetMaxGravityCameraPitch_Parms, MaxGravityCameraPitchIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::NewProp_MaxGravityCameraPitchIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Max pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetMaxGravityCameraPitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetMaxGravityCameraPitch_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics
	{
		struct FalseGravityCharacter_eventSetMaxNewGravityDegrees_Parms
		{
			float MaxNewGravityDegreesIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNewGravityDegreesIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::NewProp_MaxNewGravityDegreesIn = { UE4CodeGen_Private::EPropertyClass::Float, "MaxNewGravityDegreesIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetMaxNewGravityDegrees_Parms, MaxNewGravityDegreesIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::NewProp_MaxNewGravityDegreesIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Max degrees to set new gravity from floor, above 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetMaxNewGravityDegrees", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetMaxNewGravityDegrees_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics
	{
		struct FalseGravityCharacter_eventSetMinGravityCameraPitch_Parms
		{
			float MinGravityCameraPitchIn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGravityCameraPitchIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::NewProp_MinGravityCameraPitchIn = { UE4CodeGen_Private::EPropertyClass::Float, "MinGravityCameraPitchIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSetMinGravityCameraPitch_Parms, MinGravityCameraPitchIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::NewProp_MinGravityCameraPitchIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Min pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetMinGravityCameraPitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetMinGravityCameraPitch_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics
	{
		struct FalseGravityCharacter_eventSetResetGravityOnTraceFail_Parms
		{
			bool bResetGravityOnTraceFailIn;
		};
		static void NewProp_bResetGravityOnTraceFailIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetGravityOnTraceFailIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::NewProp_bResetGravityOnTraceFailIn_SetBit(void* Obj)
	{
		((FalseGravityCharacter_eventSetResetGravityOnTraceFail_Parms*)Obj)->bResetGravityOnTraceFailIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::NewProp_bResetGravityOnTraceFailIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetGravityOnTraceFailIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FalseGravityCharacter_eventSetResetGravityOnTraceFail_Parms), &Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::NewProp_bResetGravityOnTraceFailIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::NewProp_bResetGravityOnTraceFailIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetResetGravityOnTraceFail", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetResetGravityOnTraceFail_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics
	{
		struct FalseGravityCharacter_eventSetUseCustomGravityTraceLength_Parms
		{
			bool bUseCustomGravityTraceLengthIn;
		};
		static void NewProp_bUseCustomGravityTraceLengthIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomGravityTraceLengthIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::NewProp_bUseCustomGravityTraceLengthIn_SetBit(void* Obj)
	{
		((FalseGravityCharacter_eventSetUseCustomGravityTraceLength_Parms*)Obj)->bUseCustomGravityTraceLengthIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::NewProp_bUseCustomGravityTraceLengthIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomGravityTraceLengthIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FalseGravityCharacter_eventSetUseCustomGravityTraceLength_Parms), &Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::NewProp_bUseCustomGravityTraceLengthIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::NewProp_bUseCustomGravityTraceLengthIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SetUseCustomGravityTraceLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FalseGravityCharacter_eventSetUseCustomGravityTraceLength_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityDirectionIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::NewProp_GravityDirectionIn = { UE4CodeGen_Private::EPropertyClass::Struct, "GravityDirectionIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityCharacter_eventSyncGravityDirection_Parms, GravityDirectionIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::NewProp_GravityDirectionIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFalseGravityCharacter, "SyncGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00824CC0, sizeof(FalseGravityCharacter_eventSyncGravityDirection_Parms), Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFalseGravityCharacter_NoRegister()
	{
		return AFalseGravityCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFalseGravityCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGravityCameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGravityCameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGravityCameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGravityCameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugTraceEnabled_MetaData[];
#endif
		static void NewProp_bDebugTraceEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugTraceEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGravityLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGravityLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGravityTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGravityTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityFallingInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityFallingInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetGravityOnTraceFail_MetaData[];
#endif
		static void NewProp_bResetGravityOnTraceFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetGravityOnTraceFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomGravityTraceLength_MetaData[];
#endif
		static void NewProp_bUseCustomGravityTraceLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomGravityTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNewGravityDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNewGravityDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGravityEnabled_MetaData[];
#endif
		static void NewProp_bGravityEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGravityEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFalseGravityCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FalseDirectionalGravity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFalseGravityCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFalseGravityCharacter_GetGravityMovementComponent, "GetGravityMovementComponent" }, // 1143829832
		{ &Z_Construct_UFunction_AFalseGravityCharacter_GravityTeleport, "GravityTeleport" }, // 3184446394
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityLookUpRate, "SetBaseGravityLookUpRate" }, // 1060156020
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetBaseGravityTurnRate, "SetBaseGravityTurnRate" }, // 3871605245
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetControlYaw, "SetControlYaw" }, // 3456315830
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetDebugTraceEnabled, "SetDebugTraceEnabled" }, // 2912959815
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetGravityEnabled, "SetGravityEnabled" }, // 1325475288
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetGravityFallingInterpolationSpeed, "SetGravityFallingInterpolationSpeed" }, // 3122016444
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetGravityInterpolationSpeed, "SetGravityInterpolationSpeed" }, // 2482306142
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetGravityTraceLength, "SetGravityTraceLength" }, // 2707218340
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetMaxGravityCameraPitch, "SetMaxGravityCameraPitch" }, // 3874272828
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetMaxNewGravityDegrees, "SetMaxNewGravityDegrees" }, // 2347750734
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetMinGravityCameraPitch, "SetMinGravityCameraPitch" }, // 2845198844
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetResetGravityOnTraceFail, "SetResetGravityOnTraceFail" }, // 1746449174
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SetUseCustomGravityTraceLength, "SetUseCustomGravityTraceLength" }, // 317461521
		{ &Z_Construct_UFunction_AFalseGravityCharacter_SyncGravityDirection, "SyncGravityDirection" }, // 3772537254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FalseGravityCharacter.h" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Gravity character class which overrides gravity movement component" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxGravityCameraPitch_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Max pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxGravityCameraPitch = { UE4CodeGen_Private::EPropertyClass::Float, "MaxGravityCameraPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, MaxGravityCameraPitch), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxGravityCameraPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxGravityCameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MinGravityCameraPitch_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Min pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MinGravityCameraPitch = { UE4CodeGen_Private::EPropertyClass::Float, "MinGravityCameraPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, MinGravityCameraPitch), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MinGravityCameraPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MinGravityCameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bDebugTraceEnabled_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bDebugTraceEnabled_SetBit(void* Obj)
	{
		((AFalseGravityCharacter*)Obj)->bDebugTraceEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bDebugTraceEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugTraceEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFalseGravityCharacter), &Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bDebugTraceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bDebugTraceEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bDebugTraceEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityLookUpRate_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate !!Needs only for LookUpAtRate!!" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseGravityLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, BaseGravityLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityTurnRate_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate !!Needs only for TurnAtRate!!" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseGravityTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, BaseGravityTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityFallingInterpolationSpeed_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Change gravity speed out floor" },
		{ "UIMax", "15" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityFallingInterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "GravityFallingInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, GravityFallingInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityFallingInterpolationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityFallingInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bResetGravityOnTraceFail_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bResetGravityOnTraceFail_SetBit(void* Obj)
	{
		((AFalseGravityCharacter*)Obj)->bResetGravityOnTraceFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bResetGravityOnTraceFail = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetGravityOnTraceFail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFalseGravityCharacter), &Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bResetGravityOnTraceFail_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bResetGravityOnTraceFail_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bResetGravityOnTraceFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityInterpolationSpeed_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Change gravity speed on floor" },
		{ "UIMax", "15" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityInterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "GravityInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, GravityInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityInterpolationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityTraceLength_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Distance after character start use volume gravity" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityTraceLength = { UE4CodeGen_Private::EPropertyClass::Float, "GravityTraceLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, GravityTraceLength), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityTraceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bUseCustomGravityTraceLength_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bUseCustomGravityTraceLength_SetBit(void* Obj)
	{
		((AFalseGravityCharacter*)Obj)->bUseCustomGravityTraceLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bUseCustomGravityTraceLength = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomGravityTraceLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFalseGravityCharacter), &Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bUseCustomGravityTraceLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bUseCustomGravityTraceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bUseCustomGravityTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxNewGravityDegrees_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
		{ "ToolTip", "Max degrees to set new gravity from floor" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxNewGravityDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "MaxNewGravityDegrees", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityCharacter, MaxNewGravityDegrees), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxNewGravityDegrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxNewGravityDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bGravityEnabled_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bGravityEnabled_SetBit(void* Obj)
	{
		((AFalseGravityCharacter*)Obj)->bGravityEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bGravityEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bGravityEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFalseGravityCharacter), &Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bGravityEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bGravityEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bGravityEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFalseGravityCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxGravityCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MinGravityCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bDebugTraceEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_BaseGravityTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityFallingInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bResetGravityOnTraceFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_GravityTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bUseCustomGravityTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_MaxNewGravityDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityCharacter_Statics::NewProp_bGravityEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFalseGravityCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFalseGravityCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFalseGravityCharacter_Statics::ClassParams = {
		&AFalseGravityCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFalseGravityCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFalseGravityCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFalseGravityCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFalseGravityCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFalseGravityCharacter, 2926464255);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFalseGravityCharacter(Z_Construct_UClass_AFalseGravityCharacter, &AFalseGravityCharacter::StaticClass, TEXT("/Script/FalseDirectionalGravity"), TEXT("AFalseGravityCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFalseGravityCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
