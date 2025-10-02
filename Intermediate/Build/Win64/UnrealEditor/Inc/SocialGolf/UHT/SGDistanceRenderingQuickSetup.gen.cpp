// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGDistanceRenderingQuickSetup.h"
#include "SGDistanceRenderingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGDistanceRenderingQuickSetup() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGQuickDistanceRenderingComponent();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGQuickDistanceRenderingComponent_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EQuickSetupType();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGDistanceRenderingSettings();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EQuickSetupType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuickSetupType;
static UEnum* EQuickSetupType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuickSetupType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuickSetupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_EQuickSetupType, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("EQuickSetupType"));
	}
	return Z_Registration_Info_UEnum_EQuickSetupType.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<EQuickSetupType>()
{
	return EQuickSetupType_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_EQuickSetupType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quick setup types for easy selection\n" },
#endif
		{ "Custom.DisplayName", "Custom Settings" },
		{ "Custom.Name", "Custom" },
		{ "Environment.DisplayName", "Environment Objects" },
		{ "Environment.Name", "Environment" },
		{ "GolfCourse.DisplayName", "Golf Course Structures" },
		{ "GolfCourse.Name", "GolfCourse" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick setup types for easy selection" },
#endif
		{ "UIElements.DisplayName", "UI Elements" },
		{ "UIElements.Name", "UIElements" },
		{ "Vegetation.DisplayName", "Vegetation" },
		{ "Vegetation.Name", "Vegetation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Environment", (int64)Environment },
		{ "Vegetation", (int64)Vegetation },
		{ "GolfCourse", (int64)GolfCourse },
		{ "UIElements", (int64)UIElements },
		{ "Custom", (int64)Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_EQuickSetupType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"EQuickSetupType",
	"EQuickSetupType",
	Z_Construct_UEnum_SocialGolf_EQuickSetupType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EQuickSetupType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EQuickSetupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_EQuickSetupType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_EQuickSetupType()
{
	if (!Z_Registration_Info_UEnum_EQuickSetupType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuickSetupType.InnerSingleton, Z_Construct_UEnum_SocialGolf_EQuickSetupType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuickSetupType.InnerSingleton;
}
// ********** End Enum EQuickSetupType *************************************************************

// ********** Begin Class USGQuickDistanceRenderingComponent Function SetupDistanceRendering *******
struct Z_Construct_UFunction_USGQuickDistanceRenderingComponent_SetupDistanceRendering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quick setup function\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick setup function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGQuickDistanceRenderingComponent_SetupDistanceRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGQuickDistanceRenderingComponent, nullptr, "SetupDistanceRendering", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGQuickDistanceRenderingComponent_SetupDistanceRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGQuickDistanceRenderingComponent_SetupDistanceRendering_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGQuickDistanceRenderingComponent_SetupDistanceRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGQuickDistanceRenderingComponent_SetupDistanceRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGQuickDistanceRenderingComponent::execSetupDistanceRendering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupDistanceRendering();
	P_NATIVE_END;
}
// ********** End Class USGQuickDistanceRenderingComponent Function SetupDistanceRendering *********

// ********** Begin Class USGQuickDistanceRenderingComponent ***************************************
void USGQuickDistanceRenderingComponent::StaticRegisterNativesUSGQuickDistanceRenderingComponent()
{
	UClass* Class = USGQuickDistanceRenderingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetupDistanceRendering", &USGQuickDistanceRenderingComponent::execSetupDistanceRendering },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent;
UClass* USGQuickDistanceRenderingComponent::GetPrivateStaticClass()
{
	using TClass = USGQuickDistanceRenderingComponent;
	if (!Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGQuickDistanceRenderingComponent"),
			Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent.InnerSingleton,
			StaticRegisterNativesUSGQuickDistanceRenderingComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USGQuickDistanceRenderingComponent_NoRegister()
{
	return USGQuickDistanceRenderingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Example component that can be added to any actor to enable distance rendering\n * This shows how to create a simple, reusable setup\n */" },
#endif
		{ "IncludePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example component that can be added to any actor to enable distance rendering\nThis shows how to create a simple, reusable setup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetup_MetaData[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration - set these in Blueprint defaults or constructor\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration - set these in Blueprint defaults or constructor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetupType_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "EditCondition", "bAutoSetup" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSettings_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "EditCondition", "!bAutoSetup" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceRenderingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingQuickSetup.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoSetup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetup;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SetupType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceRenderingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGQuickDistanceRenderingComponent_SetupDistanceRendering, "SetupDistanceRendering" }, // 378312337
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGQuickDistanceRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_bAutoSetup_SetBit(void* Obj)
{
	((USGQuickDistanceRenderingComponent*)Obj)->bAutoSetup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_bAutoSetup = { "bAutoSetup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGQuickDistanceRenderingComponent), &Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_bAutoSetup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSetup_MetaData), NewProp_bAutoSetup_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_SetupType = { "SetupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGQuickDistanceRenderingComponent, SetupType), Z_Construct_UEnum_SocialGolf_EQuickSetupType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetupType_MetaData), NewProp_SetupType_MetaData) }; // 2071139182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_CustomSettings = { "CustomSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGQuickDistanceRenderingComponent, CustomSettings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSettings_MetaData), NewProp_CustomSettings_MetaData) }; // 2721179896
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_DistanceRenderingComponent = { "DistanceRenderingComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGQuickDistanceRenderingComponent, DistanceRenderingComponent), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceRenderingComponent_MetaData), NewProp_DistanceRenderingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_bAutoSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_SetupType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_CustomSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::NewProp_DistanceRenderingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::ClassParams = {
	&USGQuickDistanceRenderingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGQuickDistanceRenderingComponent()
{
	if (!Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent.OuterSingleton, Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGQuickDistanceRenderingComponent);
USGQuickDistanceRenderingComponent::~USGQuickDistanceRenderingComponent() {}
// ********** End Class USGQuickDistanceRenderingComponent *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuickSetupType_StaticEnum, TEXT("EQuickSetupType"), &Z_Registration_Info_UEnum_EQuickSetupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2071139182U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGQuickDistanceRenderingComponent, USGQuickDistanceRenderingComponent::StaticClass, TEXT("USGQuickDistanceRenderingComponent"), &Z_Registration_Info_UClass_USGQuickDistanceRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGQuickDistanceRenderingComponent), 3512743076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h__Script_SocialGolf_658807697(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
