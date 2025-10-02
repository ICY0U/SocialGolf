// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGDistanceRenderingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGDistanceRenderingTypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGDistanceRenderingSettings();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGObjectRenderingData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDistanceRenderingLevel ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistanceRenderingLevel;
static UEnum* EDistanceRenderingLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDistanceRenderingLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDistanceRenderingLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("EDistanceRenderingLevel"));
	}
	return Z_Registration_Info_UEnum_EDistanceRenderingLevel.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<EDistanceRenderingLevel>()
{
	return EDistanceRenderingLevel_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.DisplayName", "High Detail" },
		{ "High.Name", "EDistanceRenderingLevel::High" },
		{ "Low.DisplayName", "Low Detail" },
		{ "Low.Name", "EDistanceRenderingLevel::Low" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EDistanceRenderingLevel::MAX" },
		{ "Medium.DisplayName", "Medium Detail" },
		{ "Medium.Name", "EDistanceRenderingLevel::Medium" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
		{ "None.DisplayName", "Not Rendered" },
		{ "None.Name", "EDistanceRenderingLevel::None" },
		{ "VeryHigh.DisplayName", "Very High Detail" },
		{ "VeryHigh.Name", "EDistanceRenderingLevel::VeryHigh" },
		{ "VeryLow.DisplayName", "Very Low Detail" },
		{ "VeryLow.Name", "EDistanceRenderingLevel::VeryLow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDistanceRenderingLevel::None", (int64)EDistanceRenderingLevel::None },
		{ "EDistanceRenderingLevel::VeryLow", (int64)EDistanceRenderingLevel::VeryLow },
		{ "EDistanceRenderingLevel::Low", (int64)EDistanceRenderingLevel::Low },
		{ "EDistanceRenderingLevel::Medium", (int64)EDistanceRenderingLevel::Medium },
		{ "EDistanceRenderingLevel::High", (int64)EDistanceRenderingLevel::High },
		{ "EDistanceRenderingLevel::VeryHigh", (int64)EDistanceRenderingLevel::VeryHigh },
		{ "EDistanceRenderingLevel::MAX", (int64)EDistanceRenderingLevel::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"EDistanceRenderingLevel",
	"EDistanceRenderingLevel",
	Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel()
{
	if (!Z_Registration_Info_UEnum_EDistanceRenderingLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistanceRenderingLevel.InnerSingleton, Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDistanceRenderingLevel.InnerSingleton;
}
// ********** End Enum EDistanceRenderingLevel *****************************************************

// ********** Begin ScriptStruct FSGDistanceRenderingSettings **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings;
class UScriptStruct* FSGDistanceRenderingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGDistanceRenderingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VeryHighDetailDistance_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance thresholds for different LOD levels (in Unreal Units - cm)\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance thresholds for different LOD levels (in Unreal Units - cm)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighDetailDistance_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 5 meters\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "5 meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumDetailDistance_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 15 meters\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "15 meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowDetailDistance_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 30 meters\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "30 meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VeryLowDetailDistance_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 60 meters\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "60 meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullingDistance_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 100 meters\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "100 meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performance settings\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncUpdates_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates per second\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates per second" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsPerFrame_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use background thread for distance calculations\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use background thread for distance calculations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VeryHighDetailDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighDetailDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumDetailDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowDetailDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VeryLowDetailDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CullingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
	static void NewProp_bUseAsyncUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncUpdates;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsPerFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGDistanceRenderingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_VeryHighDetailDistance = { "VeryHighDetailDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, VeryHighDetailDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VeryHighDetailDistance_MetaData), NewProp_VeryHighDetailDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_HighDetailDistance = { "HighDetailDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, HighDetailDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighDetailDistance_MetaData), NewProp_HighDetailDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_MediumDetailDistance = { "MediumDetailDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, MediumDetailDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumDetailDistance_MetaData), NewProp_MediumDetailDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_LowDetailDistance = { "LowDetailDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, LowDetailDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowDetailDistance_MetaData), NewProp_LowDetailDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_VeryLowDetailDistance = { "VeryLowDetailDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, VeryLowDetailDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VeryLowDetailDistance_MetaData), NewProp_VeryLowDetailDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_CullingDistance = { "CullingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, CullingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullingDistance_MetaData), NewProp_CullingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, UpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFrequency_MetaData), NewProp_UpdateFrequency_MetaData) };
void Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates_SetBit(void* Obj)
{
	((FSGDistanceRenderingSettings*)Obj)->bUseAsyncUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates = { "bUseAsyncUpdates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSGDistanceRenderingSettings), &Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncUpdates_MetaData), NewProp_bUseAsyncUpdates_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_MaxObjectsPerFrame = { "MaxObjectsPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGDistanceRenderingSettings, MaxObjectsPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObjectsPerFrame_MetaData), NewProp_MaxObjectsPerFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_VeryHighDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_HighDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_MediumDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_LowDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_VeryLowDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_CullingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_UpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewProp_MaxObjectsPerFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGDistanceRenderingSettings",
	Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::PropPointers),
	sizeof(FSGDistanceRenderingSettings),
	alignof(FSGDistanceRenderingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGDistanceRenderingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings.InnerSingleton, Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings.InnerSingleton;
}
// ********** End ScriptStruct FSGDistanceRenderingSettings ****************************************

// ********** Begin ScriptStruct FSGObjectRenderingData ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGObjectRenderingData;
class UScriptStruct* FSGObjectRenderingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGObjectRenderingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGObjectRenderingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGObjectRenderingData, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGObjectRenderingData"));
	}
	return Z_Registration_Info_UScriptStruct_FSGObjectRenderingData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToNearestPlayer_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRenderingLevel_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRenderingLevel_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCulled_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateTime_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performance tracking\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCount_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToNearestPlayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRenderingLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentRenderingLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetRenderingLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetRenderingLevel;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsCulled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCulled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUpdateTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGObjectRenderingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGObjectRenderingData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_DistanceToNearestPlayer = { "DistanceToNearestPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGObjectRenderingData, DistanceToNearestPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToNearestPlayer_MetaData), NewProp_DistanceToNearestPlayer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_CurrentRenderingLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_CurrentRenderingLevel = { "CurrentRenderingLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGObjectRenderingData, CurrentRenderingLevel), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRenderingLevel_MetaData), NewProp_CurrentRenderingLevel_MetaData) }; // 164998566
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_TargetRenderingLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_TargetRenderingLevel = { "TargetRenderingLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGObjectRenderingData, TargetRenderingLevel), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRenderingLevel_MetaData), NewProp_TargetRenderingLevel_MetaData) }; // 164998566
void Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((FSGObjectRenderingData*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSGObjectRenderingData), &Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsCulled_SetBit(void* Obj)
{
	((FSGObjectRenderingData*)Obj)->bIsCulled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsCulled = { "bIsCulled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSGObjectRenderingData), &Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsCulled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCulled_MetaData), NewProp_bIsCulled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_LastUpdateTime = { "LastUpdateTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGObjectRenderingData, LastUpdateTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateTime_MetaData), NewProp_LastUpdateTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_UpdateCount = { "UpdateCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGObjectRenderingData, UpdateCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCount_MetaData), NewProp_UpdateCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_DistanceToNearestPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_CurrentRenderingLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_CurrentRenderingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_TargetRenderingLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_TargetRenderingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_bIsCulled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_LastUpdateTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewProp_UpdateCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGObjectRenderingData",
	Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::PropPointers),
	sizeof(FSGObjectRenderingData),
	alignof(FSGObjectRenderingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGObjectRenderingData()
{
	if (!Z_Registration_Info_UScriptStruct_FSGObjectRenderingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGObjectRenderingData.InnerSingleton, Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGObjectRenderingData.InnerSingleton;
}
// ********** End ScriptStruct FSGObjectRenderingData **********************************************

// ********** Begin Delegate FOnObjectRenderingLevelChanged ****************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms
	{
		AActor* Actor;
		EDistanceRenderingLevel OldLevel;
		EDistanceRenderingLevel NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for when object rendering level changes\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for when object rendering level changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_OldLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms, OldLevel), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_NewLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms, NewLevel), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_OldLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_OldLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_NewLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnObjectRenderingLevelChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnObjectRenderingLevelChanged_DelegateWrapper(const FMulticastScriptDelegate& OnObjectRenderingLevelChanged, AActor* Actor, EDistanceRenderingLevel OldLevel, EDistanceRenderingLevel NewLevel)
{
	struct _Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms
	{
		AActor* Actor;
		EDistanceRenderingLevel OldLevel;
		EDistanceRenderingLevel NewLevel;
	};
	_Script_SocialGolf_eventOnObjectRenderingLevelChanged_Parms Parms;
	Parms.Actor=Actor;
	Parms.OldLevel=OldLevel;
	Parms.NewLevel=NewLevel;
	OnObjectRenderingLevelChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnObjectRenderingLevelChanged ******************************************

// ********** Begin Delegate FOnRenderingPerformanceUpdate *****************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms
	{
		int32 TotalObjects;
		int32 VisibleObjects;
		float AverageDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for performance monitoring\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for performance monitoring" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleObjects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::NewProp_TotalObjects = { "TotalObjects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms, TotalObjects), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::NewProp_VisibleObjects = { "VisibleObjects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms, VisibleObjects), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::NewProp_AverageDistance = { "AverageDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms, AverageDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::NewProp_TotalObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::NewProp_VisibleObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::NewProp_AverageDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnRenderingPerformanceUpdate__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::_Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::_Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRenderingPerformanceUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnRenderingPerformanceUpdate, int32 TotalObjects, int32 VisibleObjects, float AverageDistance)
{
	struct _Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms
	{
		int32 TotalObjects;
		int32 VisibleObjects;
		float AverageDistance;
	};
	_Script_SocialGolf_eventOnRenderingPerformanceUpdate_Parms Parms;
	Parms.TotalObjects=TotalObjects;
	Parms.VisibleObjects=VisibleObjects;
	Parms.AverageDistance=AverageDistance;
	OnRenderingPerformanceUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRenderingPerformanceUpdate *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDistanceRenderingLevel_StaticEnum, TEXT("EDistanceRenderingLevel"), &Z_Registration_Info_UEnum_EDistanceRenderingLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 164998566U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSGDistanceRenderingSettings::StaticStruct, Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics::NewStructOps, TEXT("SGDistanceRenderingSettings"), &Z_Registration_Info_UScriptStruct_FSGDistanceRenderingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGDistanceRenderingSettings), 2721179896U) },
		{ FSGObjectRenderingData::StaticStruct, Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics::NewStructOps, TEXT("SGObjectRenderingData"), &Z_Registration_Info_UScriptStruct_FSGObjectRenderingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGObjectRenderingData), 3097396211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h__Script_SocialGolf_1186117221(TEXT("/Script/SocialGolf"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h__Script_SocialGolf_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
