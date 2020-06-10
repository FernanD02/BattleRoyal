// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FalseDirectionalGravity/Public/FalseGravityVolumeBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFalseGravityVolumeBox() {}
// Cross Module References
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityVolumeBox_NoRegister();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityVolumeBox();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityVolumeBase();
	UPackage* Z_Construct_UPackage__Script_FalseDirectionalGravity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void AFalseGravityVolumeBox::StaticRegisterNativesAFalseGravityVolumeBox()
	{
	}
	UClass* Z_Construct_UClass_AFalseGravityVolumeBox_NoRegister()
	{
		return AFalseGravityVolumeBox::StaticClass();
	}
	struct Z_Construct_UClass_AFalseGravityVolumeBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFalseGravityVolumeBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFalseGravityVolumeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FalseDirectionalGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityVolumeBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FalseGravityVolumeBox.h" },
		{ "ModuleRelativePath", "Public/FalseGravityVolumeBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityVolumeBox.h" },
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityVolumeBox, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FalseGravityVolumeBox.h" },
		{ "ToolTip", "AOriAnimalManager(const FObjectInitializer& ObjectInitializer);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000082008, 1, nullptr, STRUCT_OFFSET(AFalseGravityVolumeBox, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_ArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_ArrowComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFalseGravityVolumeBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityVolumeBox_Statics::NewProp_ArrowComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFalseGravityVolumeBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFalseGravityVolumeBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFalseGravityVolumeBox_Statics::ClassParams = {
		&AFalseGravityVolumeBox::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFalseGravityVolumeBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeBox_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFalseGravityVolumeBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFalseGravityVolumeBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFalseGravityVolumeBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFalseGravityVolumeBox, 2544772643);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFalseGravityVolumeBox(Z_Construct_UClass_AFalseGravityVolumeBox, &AFalseGravityVolumeBox::StaticClass, TEXT("/Script/FalseDirectionalGravity"), TEXT("AFalseGravityVolumeBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFalseGravityVolumeBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
