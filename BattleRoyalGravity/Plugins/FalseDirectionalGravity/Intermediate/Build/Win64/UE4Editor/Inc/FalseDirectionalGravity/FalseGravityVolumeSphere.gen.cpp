// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FalseDirectionalGravity/Public/FalseGravityVolumeSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFalseGravityVolumeSphere() {}
// Cross Module References
	FALSEDIRECTIONALGRAVITY_API UEnum* Z_Construct_UEnum_FalseDirectionalGravity_EGravitySphereDirection();
	UPackage* Z_Construct_UPackage__Script_FalseDirectionalGravity();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityVolumeSphere_NoRegister();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityVolumeSphere();
	FALSEDIRECTIONALGRAVITY_API UClass* Z_Construct_UClass_AFalseGravityVolumeBase();
// End Cross Module References
	static UEnum* EGravitySphereDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FalseDirectionalGravity_EGravitySphereDirection, Z_Construct_UPackage__Script_FalseDirectionalGravity(), TEXT("EGravitySphereDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGravitySphereDirection(EGravitySphereDirection_StaticEnum, TEXT("/Script/FalseDirectionalGravity"), TEXT("EGravitySphereDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FalseDirectionalGravity_EGravitySphereDirection_CRC() { return 2909121853U; }
	UEnum* Z_Construct_UEnum_FalseDirectionalGravity_EGravitySphereDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FalseDirectionalGravity();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGravitySphereDirection"), 0, Get_Z_Construct_UEnum_FalseDirectionalGravity_EGravitySphereDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGravitySphereDirection::GSD_Inside", (int64)EGravitySphereDirection::GSD_Inside },
				{ "EGravitySphereDirection::GSD_Outside", (int64)EGravitySphereDirection::GSD_Outside },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GSD_Inside.DisplayName", "Inside" },
				{ "GSD_Outside.DisplayName", "Outside" },
				{ "ModuleRelativePath", "Public/FalseGravityVolumeSphere.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FalseDirectionalGravity,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGravitySphereDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGravitySphereDirection",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFalseGravityVolumeSphere::StaticRegisterNativesAFalseGravityVolumeSphere()
	{
	}
	UClass* Z_Construct_UClass_AFalseGravityVolumeSphere_NoRegister()
	{
		return AFalseGravityVolumeSphere::StaticClass();
	}
	struct Z_Construct_UClass_AFalseGravityVolumeSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFalseGravityVolumeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FalseDirectionalGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FalseGravityVolumeSphere.h" },
		{ "ModuleRelativePath", "Public/FalseGravityVolumeSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityVolumeSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Enum, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityVolumeSphere, Direction), Z_Construct_UEnum_FalseDirectionalGravity_EGravitySphereDirection, METADATA_PARAMS(Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Direction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Gravity" },
		{ "ModuleRelativePath", "Public/FalseGravityVolumeSphere.h" },
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AFalseGravityVolumeSphere, Radius), METADATA_PARAMS(Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFalseGravityVolumeSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::ClassParams = {
		&AFalseGravityVolumeSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFalseGravityVolumeSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFalseGravityVolumeSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFalseGravityVolumeSphere, 57750665);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFalseGravityVolumeSphere(Z_Construct_UClass_AFalseGravityVolumeSphere, &AFalseGravityVolumeSphere::StaticClass, TEXT("/Script/FalseDirectionalGravity"), TEXT("AFalseGravityVolumeSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFalseGravityVolumeSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
