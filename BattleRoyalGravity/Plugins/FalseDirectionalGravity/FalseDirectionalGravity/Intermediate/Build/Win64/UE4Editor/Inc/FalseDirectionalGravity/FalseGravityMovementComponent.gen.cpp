// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FalseDirectionalGravity/Public/FalseGravityMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFalseGravityMovementComponent() {}
// Cross Module References
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_UFalseGravityMovementComponent_NoRegister();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_UFalseGravityMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_FalseDirectionalGravity();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor();
	FALSEDIRECTIONALGRAVITY_API UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityVolumeBase_NoRegister();
// End Cross Module References
	void UFalseGravityMovementComponent::StaticRegisterNativesUFalseGravityMovementComponent()
	{
		UClass* Class = UFalseGravityMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravityDirection", &UFalseGravityMovementComponent::execGetGravityDirection },
			{ "GetVolumeGravityDirection", &UFalseGravityMovementComponent::execGetVolumeGravityDirection },
			{ "IsExistFloor", &UFalseGravityMovementComponent::execIsExistFloor },
			{ "SetGravityDirection", &UFalseGravityMovementComponent::execSetGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics
	{
		struct FalseGravityMovementComponent_eventGetGravityDirection_Parms
		{
			bool bAvoidZeroGravity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bAvoidZeroGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvoidZeroGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FalseGravityMovementComponent_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit(void* Obj)
	{
		((FalseGravityMovementComponent_eventGetGravityDirection_Parms*)Obj)->bAvoidZeroGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity = { UE4CodeGen_Private::EPropertyClass::Bool, "bAvoidZeroGravity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FalseGravityMovementComponent_eventGetGravityDirection_Parms), &Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "CPP_Default_bAvoidZeroGravity", "false" },
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
		{ "ToolTip", "Return direction of current character gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFalseGravityMovementComponent, "GetGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(FalseGravityMovementComponent_eventGetGravityDirection_Parms), Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics
	{
		struct FalseGravityMovementComponent_eventGetVolumeGravityDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FalseGravityMovementComponent_eventGetVolumeGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
		{ "ToolTip", "Return direction of current gravity volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFalseGravityMovementComponent, "GetVolumeGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(FalseGravityMovementComponent_eventGetVolumeGravityDirection_Parms), Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics
	{
		struct FalseGravityMovementComponent_eventIsExistFloor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FalseGravityMovementComponent_eventIsExistFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FalseGravityMovementComponent_eventIsExistFloor_Parms), &Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
		{ "ToolTip", "Return is exist floor under character or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFalseGravityMovementComponent, "IsExistFloor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(FalseGravityMovementComponent_eventIsExistFloor_Parms), Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics
	{
		struct FalseGravityMovementComponent_eventSetGravityDirection_Parms
		{
			FVector NewGravityDirection;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::NewProp_NewGravityDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "NewGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FalseGravityMovementComponent_eventSetGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::NewProp_NewGravityDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
		{ "ToolTip", "Set gravity direction, may use non normalized vectors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFalseGravityMovementComponent, "SetGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(FalseGravityMovementComponent_eventSetGravityDirection_Parms), Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFalseGravityMovementComponent_NoRegister()
	{
		return UFalseGravityMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFalseGravityMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomGravityDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGravityVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentGravityVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugLines_MetaData[];
#endif
		static void NewProp_bShowDebugLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugLines;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFalseGravityMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FalseDirectionalGravity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFalseGravityMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFalseGravityMovementComponent_GetGravityDirection, "GetGravityDirection" }, // 3428267627
		{ &Z_Construct_UFunction_UFalseGravityMovementComponent_GetVolumeGravityDirection, "GetVolumeGravityDirection" }, // 1653894577
		{ &Z_Construct_UFunction_UFalseGravityMovementComponent_IsExistFloor, "IsExistFloor" }, // 1404101902
		{ &Z_Construct_UFunction_UFalseGravityMovementComponent_SetGravityDirection, "SetGravityDirection" }, // 3076054973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFalseGravityMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FalseGravityMovementComponent.h" },
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
		{ "ToolTip", "Custom gravity movement component which moves provides directional gravity movement" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CustomGravityDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CustomGravityDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomGravityDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFalseGravityMovementComponent, CustomGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CustomGravityDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CustomGravityDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CurrentGravityVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CurrentGravityVolume = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentGravityVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFalseGravityMovementComponent, CurrentGravityVolume), Z_Construct_UClass_AFalseGravityVolumeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CurrentGravityVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CurrentGravityVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_bShowDebugLines_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/FalseGravityMovementComponent.h" },
		{ "ToolTip", "Showing velocity, acceleration" },
	};
#endif
	void Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_bShowDebugLines_SetBit(void* Obj)
	{
		((UFalseGravityMovementComponent*)Obj)->bShowDebugLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_bShowDebugLines = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowDebugLines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFalseGravityMovementComponent), &Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_bShowDebugLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_bShowDebugLines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_bShowDebugLines_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFalseGravityMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CustomGravityDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_CurrentGravityVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFalseGravityMovementComponent_Statics::NewProp_bShowDebugLines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFalseGravityMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFalseGravityMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFalseGravityMovementComponent_Statics::ClassParams = {
		&UFalseGravityMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFalseGravityMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFalseGravityMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFalseGravityMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFalseGravityMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFalseGravityMovementComponent, 2838857580);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFalseGravityMovementComponent(Z_Construct_UClass_UFalseGravityMovementComponent, &UFalseGravityMovementComponent::StaticClass, TEXT("/Script/FalseDirectionalGravity"), TEXT("UFalseGravityMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFalseGravityMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
