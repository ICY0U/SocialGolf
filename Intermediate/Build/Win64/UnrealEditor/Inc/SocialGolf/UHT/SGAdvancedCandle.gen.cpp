// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Lighting/SGAdvancedCandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGAdvancedCandle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGAdvancedCandle();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGAdvancedCandle_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableInterface_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_ECandleLightMode();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_ECandleType();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FCandlePreset();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECandleType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECandleType;
static UEnum* ECandleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECandleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECandleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_ECandleType, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("ECandleType"));
	}
	return Z_Registration_Info_UEnum_ECandleType.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<ECandleType>()
{
	return ECandleType_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_ECandleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Lantern.DisplayName", "Lantern" },
		{ "Lantern.Name", "ECandleType::Lantern" },
		{ "LargeCandle.DisplayName", "Large Candle" },
		{ "LargeCandle.Name", "ECandleType::LargeCandle" },
		{ "MediumCandle.DisplayName", "Medium Candle" },
		{ "MediumCandle.Name", "ECandleType::MediumCandle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
		{ "OilLamp.DisplayName", "Oil Lamp" },
		{ "OilLamp.Name", "ECandleType::OilLamp" },
		{ "SmallCandle.DisplayName", "Small Candle" },
		{ "SmallCandle.Name", "ECandleType::SmallCandle" },
		{ "Torch.DisplayName", "Torch" },
		{ "Torch.Name", "ECandleType::Torch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECandleType::SmallCandle", (int64)ECandleType::SmallCandle },
		{ "ECandleType::MediumCandle", (int64)ECandleType::MediumCandle },
		{ "ECandleType::LargeCandle", (int64)ECandleType::LargeCandle },
		{ "ECandleType::Torch", (int64)ECandleType::Torch },
		{ "ECandleType::Lantern", (int64)ECandleType::Lantern },
		{ "ECandleType::OilLamp", (int64)ECandleType::OilLamp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_ECandleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"ECandleType",
	"ECandleType",
	Z_Construct_UEnum_SocialGolf_ECandleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECandleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECandleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_ECandleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_ECandleType()
{
	if (!Z_Registration_Info_UEnum_ECandleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECandleType.InnerSingleton, Z_Construct_UEnum_SocialGolf_ECandleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECandleType.InnerSingleton;
}
// ********** End Enum ECandleType *****************************************************************

// ********** Begin Enum ECandleLightMode **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECandleLightMode;
static UEnum* ECandleLightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECandleLightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECandleLightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_ECandleLightMode, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("ECandleLightMode"));
	}
	return Z_Registration_Info_UEnum_ECandleLightMode.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<ECandleLightMode>()
{
	return ECandleLightMode_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_ECandleLightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dramatic.DisplayName", "Dramatic Flickering" },
		{ "Dramatic.Name", "ECandleLightMode::Dramatic" },
		{ "Magical.DisplayName", "Magical Glow" },
		{ "Magical.Name", "ECandleLightMode::Magical" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
		{ "Realistic.DisplayName", "Realistic Flickering" },
		{ "Realistic.Name", "ECandleLightMode::Realistic" },
		{ "Steady.DisplayName", "Steady Light" },
		{ "Steady.Name", "ECandleLightMode::Steady" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECandleLightMode::Realistic", (int64)ECandleLightMode::Realistic },
		{ "ECandleLightMode::Steady", (int64)ECandleLightMode::Steady },
		{ "ECandleLightMode::Dramatic", (int64)ECandleLightMode::Dramatic },
		{ "ECandleLightMode::Magical", (int64)ECandleLightMode::Magical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_ECandleLightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"ECandleLightMode",
	"ECandleLightMode",
	Z_Construct_UEnum_SocialGolf_ECandleLightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECandleLightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECandleLightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_ECandleLightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_ECandleLightMode()
{
	if (!Z_Registration_Info_UEnum_ECandleLightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECandleLightMode.InnerSingleton, Z_Construct_UEnum_SocialGolf_ECandleLightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECandleLightMode.InnerSingleton;
}
// ********** End Enum ECandleLightMode ************************************************************

// ********** Begin ScriptStruct FCandlePreset *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCandlePreset;
class UScriptStruct* FCandlePreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCandlePreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCandlePreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCandlePreset, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("CandlePreset"));
	}
	return Z_Registration_Info_UScriptStruct_FCandlePreset.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCandlePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "Category", "CandlePreset" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseIntensity_MetaData[] = {
		{ "Category", "CandlePreset" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightRadius_MetaData[] = {
		{ "Category", "CandlePreset" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerIntensity_MetaData[] = {
		{ "Category", "CandlePreset" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerSpeed_MetaData[] = {
		{ "Category", "CandlePreset" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "CandlePreset" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleScale_MetaData[] = {
		{ "Category", "CandlePreset" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCandlePreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCandlePreset, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_BaseIntensity = { "BaseIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCandlePreset, BaseIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseIntensity_MetaData), NewProp_BaseIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_LightRadius = { "LightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCandlePreset, LightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightRadius_MetaData), NewProp_LightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_FlickerIntensity = { "FlickerIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCandlePreset, FlickerIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerIntensity_MetaData), NewProp_FlickerIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_FlickerSpeed = { "FlickerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCandlePreset, FlickerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerSpeed_MetaData), NewProp_FlickerSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCandlePreset, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_ParticleScale = { "ParticleScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCandlePreset, ParticleScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleScale_MetaData), NewProp_ParticleScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCandlePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_BaseIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_LightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_FlickerIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_FlickerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCandlePreset_Statics::NewProp_ParticleScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCandlePreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCandlePreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"CandlePreset",
	Z_Construct_UScriptStruct_FCandlePreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCandlePreset_Statics::PropPointers),
	sizeof(FCandlePreset),
	alignof(FCandlePreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCandlePreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCandlePreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCandlePreset()
{
	if (!Z_Registration_Info_UScriptStruct_FCandlePreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCandlePreset.InnerSingleton, Z_Construct_UScriptStruct_FCandlePreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCandlePreset.InnerSingleton;
}
// ********** End ScriptStruct FCandlePreset *******************************************************

// ********** Begin Delegate FOnAdvancedCandleLightChanged *****************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms
	{
		bool bIsLit;
		ECandleType CandleType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CandleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CandleType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms*)Obj)->bIsLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit = { "bIsLit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_CandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_CandleType = { "CandleType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms, CandleType), Z_Construct_UEnum_SocialGolf_ECandleType, METADATA_PARAMS(0, nullptr) }; // 1845814285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_CandleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::NewProp_CandleType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnAdvancedCandleLightChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAdvancedCandleLightChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAdvancedCandleLightChanged, bool bIsLit, ECandleType CandleType)
{
	struct _Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms
	{
		bool bIsLit;
		ECandleType CandleType;
	};
	_Script_SocialGolf_eventOnAdvancedCandleLightChanged_Parms Parms;
	Parms.bIsLit=bIsLit ? true : false;
	Parms.CandleType=CandleType;
	OnAdvancedCandleLightChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAdvancedCandleLightChanged *******************************************

// ********** Begin Class ASGAdvancedCandle Function AutoRelight ***********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_AutoRelight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-relight system\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-relight system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_AutoRelight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "AutoRelight", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_AutoRelight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_AutoRelight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_AutoRelight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_AutoRelight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execAutoRelight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoRelight();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function AutoRelight *************************************

// ********** Begin Class ASGAdvancedCandle Function ExtinguishCandle ******************************
struct Z_Construct_UFunction_ASGAdvancedCandle_ExtinguishCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_ExtinguishCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "ExtinguishCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_ExtinguishCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_ExtinguishCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_ExtinguishCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_ExtinguishCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execExtinguishCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExtinguishCandle();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function ExtinguishCandle ********************************

// ********** Begin Class ASGAdvancedCandle Function GetCandleType *********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics
{
	struct SGAdvancedCandle_eventGetCandleType_Parms
	{
		ECandleType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGAdvancedCandle_eventGetCandleType_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_ECandleType, METADATA_PARAMS(0, nullptr) }; // 1845814285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "GetCandleType", Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::SGAdvancedCandle_eventGetCandleType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::SGAdvancedCandle_eventGetCandleType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execGetCandleType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECandleType*)Z_Param__Result=P_THIS->GetCandleType();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function GetCandleType ***********************************

// ********** Begin Class ASGAdvancedCandle Function GetLightMode **********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics
{
	struct SGAdvancedCandle_eventGetLightMode_Parms
	{
		ECandleLightMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGAdvancedCandle_eventGetLightMode_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_ECandleLightMode, METADATA_PARAMS(0, nullptr) }; // 1978194171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "GetLightMode", Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::SGAdvancedCandle_eventGetLightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::SGAdvancedCandle_eventGetLightMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execGetLightMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECandleLightMode*)Z_Param__Result=P_THIS->GetLightMode();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function GetLightMode ************************************

// ********** Begin Class ASGAdvancedCandle Function IsLit *****************************************
struct Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics
{
	struct SGAdvancedCandle_eventIsLit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGAdvancedCandle_eventIsLit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGAdvancedCandle_eventIsLit_Parms), &Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "IsLit", Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::SGAdvancedCandle_eventIsLit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::SGAdvancedCandle_eventIsLit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_IsLit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_IsLit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execIsLit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLit();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function IsLit *******************************************

// ********** Begin Class ASGAdvancedCandle Function LightCandle ***********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_LightCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Candle functionality\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Candle functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_LightCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "LightCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_LightCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_LightCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_LightCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_LightCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execLightCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LightCandle();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function LightCandle *************************************

// ********** Begin Class ASGAdvancedCandle Function OnColorTimelineUpdate *************************
struct Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics
{
	struct SGAdvancedCandle_eventOnColorTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGAdvancedCandle_eventOnColorTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "OnColorTimelineUpdate", Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::SGAdvancedCandle_eventOnColorTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::SGAdvancedCandle_eventOnColorTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execOnColorTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnColorTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function OnColorTimelineUpdate ***************************

// ********** Begin Class ASGAdvancedCandle Function OnFlickerTimelineUpdate ***********************
struct Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics
{
	struct SGAdvancedCandle_eventOnFlickerTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGAdvancedCandle_eventOnFlickerTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "OnFlickerTimelineUpdate", Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::SGAdvancedCandle_eventOnFlickerTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::SGAdvancedCandle_eventOnFlickerTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execOnFlickerTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlickerTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function OnFlickerTimelineUpdate *************************

// ********** Begin Class ASGAdvancedCandle Function OnRep_CandleType ******************************
struct Z_Construct_UFunction_ASGAdvancedCandle_OnRep_CandleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_OnRep_CandleType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "OnRep_CandleType", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnRep_CandleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_OnRep_CandleType_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_OnRep_CandleType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_OnRep_CandleType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execOnRep_CandleType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CandleType();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function OnRep_CandleType ********************************

// ********** Begin Class ASGAdvancedCandle Function OnRep_IsLit ***********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_OnRep_IsLit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_OnRep_IsLit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "OnRep_IsLit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_OnRep_IsLit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_OnRep_IsLit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_OnRep_IsLit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_OnRep_IsLit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execOnRep_IsLit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsLit();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function OnRep_IsLit *************************************

// ********** Begin Class ASGAdvancedCandle Function SetCandleType *********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics
{
	struct SGAdvancedCandle_eventSetCandleType_Parms
	{
		ECandleType NewType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGAdvancedCandle_eventSetCandleType_Parms, NewType), Z_Construct_UEnum_SocialGolf_ECandleType, METADATA_PARAMS(0, nullptr) }; // 1845814285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::NewProp_NewType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::NewProp_NewType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "SetCandleType", Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::SGAdvancedCandle_eventSetCandleType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::SGAdvancedCandle_eventSetCandleType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execSetCandleType)
{
	P_GET_ENUM(ECandleType,Z_Param_NewType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCandleType(ECandleType(Z_Param_NewType));
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function SetCandleType ***********************************

// ********** Begin Class ASGAdvancedCandle Function SetLightMode **********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics
{
	struct SGAdvancedCandle_eventSetLightMode_Parms
	{
		ECandleLightMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGAdvancedCandle_eventSetLightMode_Parms, NewMode), Z_Construct_UEnum_SocialGolf_ECandleLightMode, METADATA_PARAMS(0, nullptr) }; // 1978194171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "SetLightMode", Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::SGAdvancedCandle_eventSetLightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::SGAdvancedCandle_eventSetLightMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execSetLightMode)
{
	P_GET_ENUM(ECandleLightMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightMode(ECandleLightMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function SetLightMode ************************************

// ********** Begin Class ASGAdvancedCandle Function ToggleCandle **********************************
struct Z_Construct_UFunction_ASGAdvancedCandle_ToggleCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced Candle" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGAdvancedCandle_ToggleCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGAdvancedCandle, nullptr, "ToggleCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGAdvancedCandle_ToggleCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGAdvancedCandle_ToggleCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGAdvancedCandle_ToggleCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGAdvancedCandle_ToggleCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGAdvancedCandle::execToggleCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCandle();
	P_NATIVE_END;
}
// ********** End Class ASGAdvancedCandle Function ToggleCandle ************************************

// ********** Begin Class ASGAdvancedCandle ********************************************************
void ASGAdvancedCandle::StaticRegisterNativesASGAdvancedCandle()
{
	UClass* Class = ASGAdvancedCandle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoRelight", &ASGAdvancedCandle::execAutoRelight },
		{ "ExtinguishCandle", &ASGAdvancedCandle::execExtinguishCandle },
		{ "GetCandleType", &ASGAdvancedCandle::execGetCandleType },
		{ "GetLightMode", &ASGAdvancedCandle::execGetLightMode },
		{ "IsLit", &ASGAdvancedCandle::execIsLit },
		{ "LightCandle", &ASGAdvancedCandle::execLightCandle },
		{ "OnColorTimelineUpdate", &ASGAdvancedCandle::execOnColorTimelineUpdate },
		{ "OnFlickerTimelineUpdate", &ASGAdvancedCandle::execOnFlickerTimelineUpdate },
		{ "OnRep_CandleType", &ASGAdvancedCandle::execOnRep_CandleType },
		{ "OnRep_IsLit", &ASGAdvancedCandle::execOnRep_IsLit },
		{ "SetCandleType", &ASGAdvancedCandle::execSetCandleType },
		{ "SetLightMode", &ASGAdvancedCandle::execSetLightMode },
		{ "ToggleCandle", &ASGAdvancedCandle::execToggleCandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGAdvancedCandle;
UClass* ASGAdvancedCandle::GetPrivateStaticClass()
{
	using TClass = ASGAdvancedCandle;
	if (!Z_Registration_Info_UClass_ASGAdvancedCandle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGAdvancedCandle"),
			Z_Registration_Info_UClass_ASGAdvancedCandle.InnerSingleton,
			StaticRegisterNativesASGAdvancedCandle,
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
	return Z_Registration_Info_UClass_ASGAdvancedCandle.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGAdvancedCandle_NoRegister()
{
	return ASGAdvancedCandle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGAdvancedCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lighting/SGAdvancedCandle.h" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleBaseMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleWickMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlameParticles_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Secondary softer light for realism\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Secondary softer light for realism" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmokeParticles_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleAudioComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusableComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerTimeline_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTimeline_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleType_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMode_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartLit_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeExtinguished_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRelight_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRelightDelay_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically relight after extinguishing\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically relight after extinguishing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LitText_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlitText_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermanentText_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandlePresets_MetaData[] = {
		{ "Category", "Candle Presets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Presets for different candle types\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Presets for different candle types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlameParticleSystem_MetaData[] = {
		{ "Category", "Candle Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effects\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmokeParticleSystem_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtinguishSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientFlameSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMagicalCandle_MetaData[] = {
		{ "Category", "Magical Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Magical effects\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magical effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicalColors_MetaData[] = {
		{ "Category", "Magical Effects" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorChangeSpeed_MetaData[] = {
		{ "Category", "Magical Effects" },
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCandleLightChanged_MetaData[] = {
		{ "Category", "Candle Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLit_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCandleType_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealisticFlickerCurve_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Curve systems\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve systems" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DramaticFlickerCurve_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicalFlickerCurve_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorChangeCurve_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGAdvancedCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandleBaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandleWickMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmokeParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandleAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlickerTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorTimeline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CandleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CandleType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightMode;
	static void NewProp_bStartLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartLit;
	static void NewProp_bCanBeExtinguished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeExtinguished;
	static void NewProp_bAutoRelight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRelight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRelightDelay;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LitText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnlitText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PermanentText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CandlePresets_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CandlePresets_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CandlePresets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CandlePresets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameParticleSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmokeParticleSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtinguishSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmbientFlameSound;
	static void NewProp_bMagicalCandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMagicalCandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicalColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MagicalColors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorChangeSpeed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCandleLightChanged;
	static void NewProp_bIsLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicatedCandleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReplicatedCandleType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealisticFlickerCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DramaticFlickerCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagicalFlickerCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorChangeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGAdvancedCandle_AutoRelight, "AutoRelight" }, // 74888708
		{ &Z_Construct_UFunction_ASGAdvancedCandle_ExtinguishCandle, "ExtinguishCandle" }, // 2202256928
		{ &Z_Construct_UFunction_ASGAdvancedCandle_GetCandleType, "GetCandleType" }, // 2192885966
		{ &Z_Construct_UFunction_ASGAdvancedCandle_GetLightMode, "GetLightMode" }, // 3522921492
		{ &Z_Construct_UFunction_ASGAdvancedCandle_IsLit, "IsLit" }, // 314431724
		{ &Z_Construct_UFunction_ASGAdvancedCandle_LightCandle, "LightCandle" }, // 3512004450
		{ &Z_Construct_UFunction_ASGAdvancedCandle_OnColorTimelineUpdate, "OnColorTimelineUpdate" }, // 1446246656
		{ &Z_Construct_UFunction_ASGAdvancedCandle_OnFlickerTimelineUpdate, "OnFlickerTimelineUpdate" }, // 3811570304
		{ &Z_Construct_UFunction_ASGAdvancedCandle_OnRep_CandleType, "OnRep_CandleType" }, // 3674097494
		{ &Z_Construct_UFunction_ASGAdvancedCandle_OnRep_IsLit, "OnRep_IsLit" }, // 1175998546
		{ &Z_Construct_UFunction_ASGAdvancedCandle_SetCandleType, "SetCandleType" }, // 2118216959
		{ &Z_Construct_UFunction_ASGAdvancedCandle_SetLightMode, "SetLightMode" }, // 689886225
		{ &Z_Construct_UFunction_ASGAdvancedCandle_ToggleCandle, "ToggleCandle" }, // 894941722
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGAdvancedCandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleBaseMesh = { "CandleBaseMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, CandleBaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleBaseMesh_MetaData), NewProp_CandleBaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleWickMesh = { "CandleWickMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, CandleWickMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleWickMesh_MetaData), NewProp_CandleWickMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MainLight = { "MainLight", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, MainLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainLight_MetaData), NewProp_MainLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FillLight = { "FillLight", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, FillLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillLight_MetaData), NewProp_FillLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FlameParticles = { "FlameParticles", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, FlameParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlameParticles_MetaData), NewProp_FlameParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_SmokeParticles = { "SmokeParticles", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, SmokeParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmokeParticles_MetaData), NewProp_SmokeParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleAudioComponent = { "CandleAudioComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, CandleAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleAudioComponent_MetaData), NewProp_CandleAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FocusableComponent = { "FocusableComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, FocusableComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusableComponent_MetaData), NewProp_FocusableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FlickerTimeline = { "FlickerTimeline", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, FlickerTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerTimeline_MetaData), NewProp_FlickerTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ColorTimeline = { "ColorTimeline", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, ColorTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTimeline_MetaData), NewProp_ColorTimeline_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleType = { "CandleType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, CandleType), Z_Construct_UEnum_SocialGolf_ECandleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleType_MetaData), NewProp_CandleType_MetaData) }; // 1845814285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LightMode = { "LightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, LightMode), Z_Construct_UEnum_SocialGolf_ECandleLightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMode_MetaData), NewProp_LightMode_MetaData) }; // 1978194171
void Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bStartLit_SetBit(void* Obj)
{
	((ASGAdvancedCandle*)Obj)->bStartLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bStartLit = { "bStartLit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGAdvancedCandle), &Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bStartLit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartLit_MetaData), NewProp_bStartLit_MetaData) };
void Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bCanBeExtinguished_SetBit(void* Obj)
{
	((ASGAdvancedCandle*)Obj)->bCanBeExtinguished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bCanBeExtinguished = { "bCanBeExtinguished", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGAdvancedCandle), &Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bCanBeExtinguished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeExtinguished_MetaData), NewProp_bCanBeExtinguished_MetaData) };
void Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bAutoRelight_SetBit(void* Obj)
{
	((ASGAdvancedCandle*)Obj)->bAutoRelight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bAutoRelight = { "bAutoRelight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGAdvancedCandle), &Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bAutoRelight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRelight_MetaData), NewProp_bAutoRelight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_AutoRelightDelay = { "AutoRelightDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, AutoRelightDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRelightDelay_MetaData), NewProp_AutoRelightDelay_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LitText = { "LitText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, LitText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LitText_MetaData), NewProp_LitText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_UnlitText = { "UnlitText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, UnlitText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlitText_MetaData), NewProp_UnlitText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_PermanentText = { "PermanentText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, PermanentText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermanentText_MetaData), NewProp_PermanentText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets_ValueProp = { "CandlePresets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCandlePreset, METADATA_PARAMS(0, nullptr) }; // 2734064070
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets_Key_KeyProp = { "CandlePresets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SocialGolf_ECandleType, METADATA_PARAMS(0, nullptr) }; // 1845814285
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets = { "CandlePresets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, CandlePresets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandlePresets_MetaData), NewProp_CandlePresets_MetaData) }; // 1845814285 2734064070
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FlameParticleSystem = { "FlameParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, FlameParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlameParticleSystem_MetaData), NewProp_FlameParticleSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_SmokeParticleSystem = { "SmokeParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, SmokeParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmokeParticleSystem_MetaData), NewProp_SmokeParticleSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LightSound = { "LightSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, LightSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightSound_MetaData), NewProp_LightSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ExtinguishSound = { "ExtinguishSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, ExtinguishSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtinguishSound_MetaData), NewProp_ExtinguishSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_AmbientFlameSound = { "AmbientFlameSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, AmbientFlameSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientFlameSound_MetaData), NewProp_AmbientFlameSound_MetaData) };
void Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bMagicalCandle_SetBit(void* Obj)
{
	((ASGAdvancedCandle*)Obj)->bMagicalCandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bMagicalCandle = { "bMagicalCandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGAdvancedCandle), &Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bMagicalCandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMagicalCandle_MetaData), NewProp_bMagicalCandle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MagicalColors_Inner = { "MagicalColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MagicalColors = { "MagicalColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, MagicalColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicalColors_MetaData), NewProp_MagicalColors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ColorChangeSpeed = { "ColorChangeSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, ColorChangeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorChangeSpeed_MetaData), NewProp_ColorChangeSpeed_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_OnCandleLightChanged = { "OnCandleLightChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, OnCandleLightChanged), Z_Construct_UDelegateFunction_SocialGolf_OnAdvancedCandleLightChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCandleLightChanged_MetaData), NewProp_OnCandleLightChanged_MetaData) }; // 4159555702
void Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bIsLit_SetBit(void* Obj)
{
	((ASGAdvancedCandle*)Obj)->bIsLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bIsLit = { "bIsLit", "OnRep_IsLit", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGAdvancedCandle), &Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bIsLit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLit_MetaData), NewProp_bIsLit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ReplicatedCandleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ReplicatedCandleType = { "ReplicatedCandleType", "OnRep_CandleType", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, ReplicatedCandleType), Z_Construct_UEnum_SocialGolf_ECandleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedCandleType_MetaData), NewProp_ReplicatedCandleType_MetaData) }; // 1845814285
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_RealisticFlickerCurve = { "RealisticFlickerCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, RealisticFlickerCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealisticFlickerCurve_MetaData), NewProp_RealisticFlickerCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_DramaticFlickerCurve = { "DramaticFlickerCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, DramaticFlickerCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DramaticFlickerCurve_MetaData), NewProp_DramaticFlickerCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MagicalFlickerCurve = { "MagicalFlickerCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, MagicalFlickerCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicalFlickerCurve_MetaData), NewProp_MagicalFlickerCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ColorChangeCurve = { "ColorChangeCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGAdvancedCandle, ColorChangeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorChangeCurve_MetaData), NewProp_ColorChangeCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGAdvancedCandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleBaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleWickMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MainLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FillLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FlameParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_SmokeParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FocusableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FlickerTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ColorTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bStartLit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bCanBeExtinguished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bAutoRelight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_AutoRelightDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_UnlitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_PermanentText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_CandlePresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_FlameParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_SmokeParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_LightSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ExtinguishSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_AmbientFlameSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bMagicalCandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MagicalColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MagicalColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ColorChangeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_OnCandleLightChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_bIsLit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ReplicatedCandleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ReplicatedCandleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_RealisticFlickerCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_DramaticFlickerCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_MagicalFlickerCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGAdvancedCandle_Statics::NewProp_ColorChangeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGAdvancedCandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGAdvancedCandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGAdvancedCandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGAdvancedCandle_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGAdvancedCandle, ISGInteractable), false },  // 3465886030
	{ Z_Construct_UClass_USGFocusableInterface_NoRegister, (int32)VTABLE_OFFSET(ASGAdvancedCandle, ISGFocusableInterface), false },  // 3854201226
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGAdvancedCandle_Statics::ClassParams = {
	&ASGAdvancedCandle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGAdvancedCandle_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGAdvancedCandle_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGAdvancedCandle_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGAdvancedCandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGAdvancedCandle()
{
	if (!Z_Registration_Info_UClass_ASGAdvancedCandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGAdvancedCandle.OuterSingleton, Z_Construct_UClass_ASGAdvancedCandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGAdvancedCandle.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGAdvancedCandle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bIsLit(TEXT("bIsLit"));
	static FName Name_ReplicatedCandleType(TEXT("ReplicatedCandleType"));
	const bool bIsValid = true
		&& Name_bIsLit == ClassReps[(int32)ENetFields_Private::bIsLit].Property->GetFName()
		&& Name_ReplicatedCandleType == ClassReps[(int32)ENetFields_Private::ReplicatedCandleType].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGAdvancedCandle"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGAdvancedCandle);
ASGAdvancedCandle::~ASGAdvancedCandle() {}
// ********** End Class ASGAdvancedCandle **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECandleType_StaticEnum, TEXT("ECandleType"), &Z_Registration_Info_UEnum_ECandleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1845814285U) },
		{ ECandleLightMode_StaticEnum, TEXT("ECandleLightMode"), &Z_Registration_Info_UEnum_ECandleLightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1978194171U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCandlePreset::StaticStruct, Z_Construct_UScriptStruct_FCandlePreset_Statics::NewStructOps, TEXT("CandlePreset"), &Z_Registration_Info_UScriptStruct_FCandlePreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCandlePreset), 2734064070U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGAdvancedCandle, ASGAdvancedCandle::StaticClass, TEXT("ASGAdvancedCandle"), &Z_Registration_Info_UClass_ASGAdvancedCandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGAdvancedCandle), 2394989844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_2256387181(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
