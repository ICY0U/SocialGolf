// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGDistanceRenderingManager.h"
#include "SGDistanceRenderingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGDistanceRenderingManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingManager();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingManager_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGDistanceRenderingSettings();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGRenderingManagerStats();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSGRenderingManagerStats ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats;
class UScriptStruct* FSGRenderingManagerStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGRenderingManagerStats, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGRenderingManagerStats"));
	}
	return Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalRegisteredObjects_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleObjects_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulledObjects_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageDistance_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateDuration_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalRegisteredObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CulledObjects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUpdateTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGRenderingManagerStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_TotalRegisteredObjects = { "TotalRegisteredObjects", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingManagerStats, TotalRegisteredObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalRegisteredObjects_MetaData), NewProp_TotalRegisteredObjects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_VisibleObjects = { "VisibleObjects", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingManagerStats, VisibleObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleObjects_MetaData), NewProp_VisibleObjects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_CulledObjects = { "CulledObjects", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingManagerStats, CulledObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulledObjects_MetaData), NewProp_CulledObjects_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_AverageDistance = { "AverageDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingManagerStats, AverageDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageDistance_MetaData), NewProp_AverageDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_LastUpdateTime = { "LastUpdateTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingManagerStats, LastUpdateTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateTime_MetaData), NewProp_LastUpdateTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_UpdateDuration = { "UpdateDuration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingManagerStats, UpdateDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateDuration_MetaData), NewProp_UpdateDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_TotalRegisteredObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_VisibleObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_CulledObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_AverageDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_LastUpdateTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewProp_UpdateDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGRenderingManagerStats",
	Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::PropPointers),
	sizeof(FSGRenderingManagerStats),
	alignof(FSGRenderingManagerStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGRenderingManagerStats()
{
	if (!Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats.InnerSingleton, Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats.InnerSingleton;
}
// ********** End ScriptStruct FSGRenderingManagerStats ********************************************

// ********** Begin ScriptStruct FSGRenderingLevelChangeRequest ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest;
class UScriptStruct* FSGRenderingLevelChangeRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGRenderingLevelChangeRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLevel_MetaData[] = {
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGRenderingLevelChangeRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingLevelChangeRequest, Component), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_TargetLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_TargetLevel = { "TargetLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingLevelChangeRequest, TargetLevel), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLevel_MetaData), NewProp_TargetLevel_MetaData) }; // 164998566
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGRenderingLevelChangeRequest, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_TargetLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_TargetLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGRenderingLevelChangeRequest",
	Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::PropPointers),
	sizeof(FSGRenderingLevelChangeRequest),
	alignof(FSGRenderingLevelChangeRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest.InnerSingleton, Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest.InnerSingleton;
}
// ********** End ScriptStruct FSGRenderingLevelChangeRequest **************************************

// ********** Begin Class USGDistanceRenderingManager Function ApplyGlobalSettings *****************
struct Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics
{
	struct SGDistanceRenderingManager_eventApplyGlobalSettings_Parms
	{
		FSGDistanceRenderingSettings NewSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventApplyGlobalSettings_Parms, NewSettings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSettings_MetaData), NewProp_NewSettings_MetaData) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::NewProp_NewSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "ApplyGlobalSettings", Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::SGDistanceRenderingManager_eventApplyGlobalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::SGDistanceRenderingManager_eventApplyGlobalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execApplyGlobalSettings)
{
	P_GET_STRUCT_REF(FSGDistanceRenderingSettings,Z_Param_Out_NewSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyGlobalSettings(Z_Param_Out_NewSettings);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function ApplyGlobalSettings *******************

// ********** Begin Class USGDistanceRenderingManager Function DumpRenderingStats ******************
struct Z_Construct_UFunction_USGDistanceRenderingManager_DumpRenderingStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_DumpRenderingStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "DumpRenderingStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_DumpRenderingStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_DumpRenderingStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_DumpRenderingStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_DumpRenderingStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execDumpRenderingStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpRenderingStats();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function DumpRenderingStats ********************

// ********** Begin Class USGDistanceRenderingManager Function ForceUpdateAllObjects ***************
struct Z_Construct_UFunction_USGDistanceRenderingManager_ForceUpdateAllObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_ForceUpdateAllObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "ForceUpdateAllObjects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_ForceUpdateAllObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_ForceUpdateAllObjects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_ForceUpdateAllObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_ForceUpdateAllObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execForceUpdateAllObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceUpdateAllObjects();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function ForceUpdateAllObjects *****************

// ********** Begin Class USGDistanceRenderingManager Function Get *********************************
struct Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics
{
	struct SGDistanceRenderingManager_eventGet_Parms
	{
		const UObject* WorldContext;
		USGDistanceRenderingManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static access\n" },
#endif
		{ "DefaultToSelf", "WorldContext" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static access" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USGDistanceRenderingManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "Get", Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::SGDistanceRenderingManager_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::SGDistanceRenderingManager_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGDistanceRenderingManager**)Z_Param__Result=USGDistanceRenderingManager::Get(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function Get ***********************************

// ********** Begin Class USGDistanceRenderingManager Function GetRegisteredObjectCount ************
struct Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics
{
	struct SGDistanceRenderingManager_eventGetRegisteredObjectCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventGetRegisteredObjectCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "GetRegisteredObjectCount", Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::SGDistanceRenderingManager_eventGetRegisteredObjectCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::SGDistanceRenderingManager_eventGetRegisteredObjectCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execGetRegisteredObjectCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRegisteredObjectCount();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function GetRegisteredObjectCount **************

// ********** Begin Class USGDistanceRenderingManager Function GetRegisteredObjects ****************
struct Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics
{
	struct SGDistanceRenderingManager_eventGetRegisteredObjects_Parms
	{
		TArray<USGDistanceRenderingComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventGetRegisteredObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "GetRegisteredObjects", Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::SGDistanceRenderingManager_eventGetRegisteredObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::SGDistanceRenderingManager_eventGetRegisteredObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execGetRegisteredObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USGDistanceRenderingComponent*>*)Z_Param__Result=P_THIS->GetRegisteredObjects();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function GetRegisteredObjects ******************

// ********** Begin Class USGDistanceRenderingManager Function GetStats ****************************
struct Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics
{
	struct SGDistanceRenderingManager_eventGetStats_Parms
	{
		FSGRenderingManagerStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Statistics and debugging\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Statistics and debugging" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventGetStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGRenderingManagerStats, METADATA_PARAMS(0, nullptr) }; // 1652872074
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "GetStats", Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::SGDistanceRenderingManager_eventGetStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::SGDistanceRenderingManager_eventGetStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_GetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_GetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execGetStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGRenderingManagerStats*)Z_Param__Result=P_THIS->GetStats();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function GetStats ******************************

// ********** Begin Class USGDistanceRenderingManager Function QueueRenderingLevelChange ***********
struct Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics
{
	struct SGDistanceRenderingManager_eventQueueRenderingLevelChange_Parms
	{
		USGDistanceRenderingComponent* Component;
		EDistanceRenderingLevel TargetLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventQueueRenderingLevelChange_Parms, Component), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::NewProp_TargetLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::NewProp_TargetLevel = { "TargetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventQueueRenderingLevelChange_Parms, TargetLevel), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::NewProp_TargetLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::NewProp_TargetLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "QueueRenderingLevelChange", Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::SGDistanceRenderingManager_eventQueueRenderingLevelChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::SGDistanceRenderingManager_eventQueueRenderingLevelChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execQueueRenderingLevelChange)
{
	P_GET_OBJECT(USGDistanceRenderingComponent,Z_Param_Component);
	P_GET_ENUM(EDistanceRenderingLevel,Z_Param_TargetLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueueRenderingLevelChange(Z_Param_Component,EDistanceRenderingLevel(Z_Param_TargetLevel));
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function QueueRenderingLevelChange *************

// ********** Begin Class USGDistanceRenderingManager Function RegisterObject **********************
struct Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics
{
	struct SGDistanceRenderingManager_eventRegisterObject_Parms
	{
		USGDistanceRenderingComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Object management\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventRegisterObject_Parms, Component), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "RegisterObject", Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::SGDistanceRenderingManager_eventRegisterObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::SGDistanceRenderingManager_eventRegisterObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execRegisterObject)
{
	P_GET_OBJECT(USGDistanceRenderingComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterObject(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function RegisterObject ************************

// ********** Begin Class USGDistanceRenderingManager Function ResetAllObjects *********************
struct Z_Construct_UFunction_USGDistanceRenderingManager_ResetAllObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_ResetAllObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "ResetAllObjects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_ResetAllObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_ResetAllObjects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_ResetAllObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_ResetAllObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execResetAllObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllObjects();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function ResetAllObjects ***********************

// ********** Begin Class USGDistanceRenderingManager Function SetGlobalRenderingEnabled ***********
struct Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics
{
	struct SGDistanceRenderingManager_eventSetGlobalRenderingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SGDistanceRenderingManager_eventSetGlobalRenderingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGDistanceRenderingManager_eventSetGlobalRenderingEnabled_Parms), &Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "SetGlobalRenderingEnabled", Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::SGDistanceRenderingManager_eventSetGlobalRenderingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::SGDistanceRenderingManager_eventSetGlobalRenderingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execSetGlobalRenderingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalRenderingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function SetGlobalRenderingEnabled *************

// ********** Begin Class USGDistanceRenderingManager Function ShowDebugInfo ***********************
struct Z_Construct_UFunction_USGDistanceRenderingManager_ShowDebugInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_ShowDebugInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "ShowDebugInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_ShowDebugInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_ShowDebugInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_ShowDebugInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_ShowDebugInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execShowDebugInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDebugInfo();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function ShowDebugInfo *************************

// ********** Begin Class USGDistanceRenderingManager Function ToggleDistanceRendering *************
struct Z_Construct_UFunction_USGDistanceRenderingManager_ToggleDistanceRendering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Console commands\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Console commands" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_ToggleDistanceRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "ToggleDistanceRendering", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_ToggleDistanceRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_ToggleDistanceRendering_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_ToggleDistanceRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_ToggleDistanceRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execToggleDistanceRendering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleDistanceRendering();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function ToggleDistanceRendering ***************

// ********** Begin Class USGDistanceRenderingManager Function UnregisterObject ********************
struct Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics
{
	struct SGDistanceRenderingManager_eventUnregisterObject_Parms
	{
		USGDistanceRenderingComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingManager_eventUnregisterObject_Parms, Component), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "UnregisterObject", Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::SGDistanceRenderingManager_eventUnregisterObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::SGDistanceRenderingManager_eventUnregisterObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execUnregisterObject)
{
	P_GET_OBJECT(USGDistanceRenderingComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterObject(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function UnregisterObject **********************

// ********** Begin Class USGDistanceRenderingManager Function UpdateAllObjects ********************
struct Z_Construct_UFunction_USGDistanceRenderingManager_UpdateAllObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bulk operations\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bulk operations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingManager_UpdateAllObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingManager, nullptr, "UpdateAllObjects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingManager_UpdateAllObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingManager_UpdateAllObjects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGDistanceRenderingManager_UpdateAllObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingManager_UpdateAllObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingManager::execUpdateAllObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAllObjects();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingManager Function UpdateAllObjects **********************

// ********** Begin Class USGDistanceRenderingManager **********************************************
void USGDistanceRenderingManager::StaticRegisterNativesUSGDistanceRenderingManager()
{
	UClass* Class = USGDistanceRenderingManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyGlobalSettings", &USGDistanceRenderingManager::execApplyGlobalSettings },
		{ "DumpRenderingStats", &USGDistanceRenderingManager::execDumpRenderingStats },
		{ "ForceUpdateAllObjects", &USGDistanceRenderingManager::execForceUpdateAllObjects },
		{ "Get", &USGDistanceRenderingManager::execGet },
		{ "GetRegisteredObjectCount", &USGDistanceRenderingManager::execGetRegisteredObjectCount },
		{ "GetRegisteredObjects", &USGDistanceRenderingManager::execGetRegisteredObjects },
		{ "GetStats", &USGDistanceRenderingManager::execGetStats },
		{ "QueueRenderingLevelChange", &USGDistanceRenderingManager::execQueueRenderingLevelChange },
		{ "RegisterObject", &USGDistanceRenderingManager::execRegisterObject },
		{ "ResetAllObjects", &USGDistanceRenderingManager::execResetAllObjects },
		{ "SetGlobalRenderingEnabled", &USGDistanceRenderingManager::execSetGlobalRenderingEnabled },
		{ "ShowDebugInfo", &USGDistanceRenderingManager::execShowDebugInfo },
		{ "ToggleDistanceRendering", &USGDistanceRenderingManager::execToggleDistanceRendering },
		{ "UnregisterObject", &USGDistanceRenderingManager::execUnregisterObject },
		{ "UpdateAllObjects", &USGDistanceRenderingManager::execUpdateAllObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGDistanceRenderingManager;
UClass* USGDistanceRenderingManager::GetPrivateStaticClass()
{
	using TClass = USGDistanceRenderingManager;
	if (!Z_Registration_Info_UClass_USGDistanceRenderingManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGDistanceRenderingManager"),
			Z_Registration_Info_UClass_USGDistanceRenderingManager.InnerSingleton,
			StaticRegisterNativesUSGDistanceRenderingManager,
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
	return Z_Registration_Info_UClass_USGDistanceRenderingManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USGDistanceRenderingManager_NoRegister()
{
	return USGDistanceRenderingManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGDistanceRenderingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rendering/SGDistanceRenderingManager.h" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global settings\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceRendering_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncProcessing_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxUpdatesPerFrame_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerUpdateFrequency_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerformanceUpdate_MetaData[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Registered objects\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registered objects" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSettings;
	static void NewProp_bEnableDistanceRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceRendering;
	static void NewProp_bUseAsyncProcessing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncProcessing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUpdatesPerFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManagerUpdateFrequency;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerformanceUpdate;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegisteredComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_ApplyGlobalSettings, "ApplyGlobalSettings" }, // 3795800658
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_DumpRenderingStats, "DumpRenderingStats" }, // 407779633
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_ForceUpdateAllObjects, "ForceUpdateAllObjects" }, // 3817213826
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_Get, "Get" }, // 1713981734
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjectCount, "GetRegisteredObjectCount" }, // 264709414
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_GetRegisteredObjects, "GetRegisteredObjects" }, // 1307176565
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_GetStats, "GetStats" }, // 128223197
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_QueueRenderingLevelChange, "QueueRenderingLevelChange" }, // 3535258055
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_RegisterObject, "RegisterObject" }, // 3688343577
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_ResetAllObjects, "ResetAllObjects" }, // 2571590971
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_SetGlobalRenderingEnabled, "SetGlobalRenderingEnabled" }, // 3797022769
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_ShowDebugInfo, "ShowDebugInfo" }, // 2094343105
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_ToggleDistanceRendering, "ToggleDistanceRendering" }, // 3725295005
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_UnregisterObject, "UnregisterObject" }, // 605566652
		{ &Z_Construct_UFunction_USGDistanceRenderingManager_UpdateAllObjects, "UpdateAllObjects" }, // 3453302116
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGDistanceRenderingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingManager, GlobalSettings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSettings_MetaData), NewProp_GlobalSettings_MetaData) }; // 2721179896
void Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bEnableDistanceRendering_SetBit(void* Obj)
{
	((USGDistanceRenderingManager*)Obj)->bEnableDistanceRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bEnableDistanceRendering = { "bEnableDistanceRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGDistanceRenderingManager), &Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bEnableDistanceRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDistanceRendering_MetaData), NewProp_bEnableDistanceRendering_MetaData) };
void Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bUseAsyncProcessing_SetBit(void* Obj)
{
	((USGDistanceRenderingManager*)Obj)->bUseAsyncProcessing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bUseAsyncProcessing = { "bUseAsyncProcessing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGDistanceRenderingManager), &Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bUseAsyncProcessing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncProcessing_MetaData), NewProp_bUseAsyncProcessing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_MaxUpdatesPerFrame = { "MaxUpdatesPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingManager, MaxUpdatesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxUpdatesPerFrame_MetaData), NewProp_MaxUpdatesPerFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_ManagerUpdateFrequency = { "ManagerUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingManager, ManagerUpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerUpdateFrequency_MetaData), NewProp_ManagerUpdateFrequency_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_OnPerformanceUpdate = { "OnPerformanceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingManager, OnPerformanceUpdate), Z_Construct_UDelegateFunction_SocialGolf_OnRenderingPerformanceUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerformanceUpdate_MetaData), NewProp_OnPerformanceUpdate_MetaData) }; // 2742383396
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_RegisteredComponents_Inner = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_RegisteredComponents = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingManager, RegisteredComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredComponents_MetaData), NewProp_RegisteredComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGDistanceRenderingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_GlobalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bEnableDistanceRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_bUseAsyncProcessing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_MaxUpdatesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_ManagerUpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_OnPerformanceUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_RegisteredComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingManager_Statics::NewProp_RegisteredComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGDistanceRenderingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGDistanceRenderingManager_Statics::ClassParams = {
	&USGDistanceRenderingManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGDistanceRenderingManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USGDistanceRenderingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGDistanceRenderingManager()
{
	if (!Z_Registration_Info_UClass_USGDistanceRenderingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGDistanceRenderingManager.OuterSingleton, Z_Construct_UClass_USGDistanceRenderingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGDistanceRenderingManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGDistanceRenderingManager);
USGDistanceRenderingManager::~USGDistanceRenderingManager() {}
// ********** End Class USGDistanceRenderingManager ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h__Script_SocialGolf_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSGRenderingManagerStats::StaticStruct, Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics::NewStructOps, TEXT("SGRenderingManagerStats"), &Z_Registration_Info_UScriptStruct_FSGRenderingManagerStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGRenderingManagerStats), 1652872074U) },
		{ FSGRenderingLevelChangeRequest::StaticStruct, Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics::NewStructOps, TEXT("SGRenderingLevelChangeRequest"), &Z_Registration_Info_UScriptStruct_FSGRenderingLevelChangeRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGRenderingLevelChangeRequest), 920307632U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGDistanceRenderingManager, USGDistanceRenderingManager::StaticClass, TEXT("USGDistanceRenderingManager"), &Z_Registration_Info_UClass_USGDistanceRenderingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGDistanceRenderingManager), 648739710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h__Script_SocialGolf_2077787973(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h__Script_SocialGolf_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h__Script_SocialGolf_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
