// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGDistanceRenderingBlueprintLibrary.h"
#include "SGDistanceRenderingManager.h"
#include "SGDistanceRenderingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGDistanceRenderingBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingManager_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGDistanceRenderingSettings();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGRenderingManagerStats();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function AddDistanceRenderingToActor 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventAddDistanceRenderingToActor_Parms
	{
		AActor* Actor;
		FSGDistanceRenderingSettings Settings;
		USGDistanceRenderingComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component Setup\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component Setup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventAddDistanceRenderingToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventAddDistanceRenderingToActor_Parms, Settings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2721179896
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventAddDistanceRenderingToActor_Parms, ReturnValue), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "AddDistanceRenderingToActor", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::SGDistanceRenderingBlueprintLibrary_eventAddDistanceRenderingToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::SGDistanceRenderingBlueprintLibrary_eventAddDistanceRenderingToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execAddDistanceRenderingToActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FSGDistanceRenderingSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGDistanceRenderingComponent**)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::AddDistanceRenderingToActor(Z_Param_Actor,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function AddDistanceRenderingToActor **

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function ApplyGlobalDistanceRenderingSettings 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventApplyGlobalDistanceRenderingSettings_Parms
	{
		const UObject* WorldContext;
		FSGDistanceRenderingSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings Management\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings Management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventApplyGlobalDistanceRenderingSettings_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventApplyGlobalDistanceRenderingSettings_Parms, Settings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "ApplyGlobalDistanceRenderingSettings", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventApplyGlobalDistanceRenderingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventApplyGlobalDistanceRenderingSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execApplyGlobalDistanceRenderingSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FSGDistanceRenderingSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::ApplyGlobalDistanceRenderingSettings(Z_Param_WorldContext,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function ApplyGlobalDistanceRenderingSettings 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function CalculateRenderingLevelForDistance 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventCalculateRenderingLevelForDistance_Parms
	{
		float Distance;
		FSGDistanceRenderingSettings Settings;
		float ImportanceMultiplier;
		EDistanceRenderingLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility Functions\n" },
#endif
		{ "CPP_Default_ImportanceMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportanceMultiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCalculateRenderingLevelForDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCalculateRenderingLevelForDistance_Parms, Settings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2721179896
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_ImportanceMultiplier = { "ImportanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCalculateRenderingLevelForDistance_Parms, ImportanceMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCalculateRenderingLevelForDistance_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_ImportanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "CalculateRenderingLevelForDistance", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::SGDistanceRenderingBlueprintLibrary_eventCalculateRenderingLevelForDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::SGDistanceRenderingBlueprintLibrary_eventCalculateRenderingLevelForDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execCalculateRenderingLevelForDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_STRUCT_REF(FSGDistanceRenderingSettings,Z_Param_Out_Settings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ImportanceMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDistanceRenderingLevel*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::CalculateRenderingLevelForDistance(Z_Param_Distance,Z_Param_Out_Settings,Z_Param_ImportanceMultiplier);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function CalculateRenderingLevelForDistance 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function CreateDistanceRenderingSettings 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms
	{
		float VeryHighDetailDistance;
		float HighDetailDistance;
		float MediumDetailDistance;
		float LowDetailDistance;
		float VeryLowDetailDistance;
		float CullingDistance;
		float UpdateFrequency;
		bool bUseAsyncUpdates;
		int32 MaxObjectsPerFrame;
		FSGDistanceRenderingSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "CPP_Default_bUseAsyncUpdates", "true" },
		{ "CPP_Default_CullingDistance", "15000.000000" },
		{ "CPP_Default_HighDetailDistance", "1500.000000" },
		{ "CPP_Default_LowDetailDistance", "6000.000000" },
		{ "CPP_Default_MaxObjectsPerFrame", "50" },
		{ "CPP_Default_MediumDetailDistance", "3000.000000" },
		{ "CPP_Default_UpdateFrequency", "10.000000" },
		{ "CPP_Default_VeryHighDetailDistance", "500.000000" },
		{ "CPP_Default_VeryLowDetailDistance", "10000.000000" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_VeryHighDetailDistance = { "VeryHighDetailDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, VeryHighDetailDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_HighDetailDistance = { "HighDetailDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, HighDetailDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_MediumDetailDistance = { "MediumDetailDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, MediumDetailDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_LowDetailDistance = { "LowDetailDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, LowDetailDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_VeryLowDetailDistance = { "VeryLowDetailDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, VeryLowDetailDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_CullingDistance = { "CullingDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, CullingDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, UpdateFrequency), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates_SetBit(void* Obj)
{
	((SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms*)Obj)->bUseAsyncUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates = { "bUseAsyncUpdates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms), &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_MaxObjectsPerFrame = { "MaxObjectsPerFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, MaxObjectsPerFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(0, nullptr) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_VeryHighDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_HighDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_MediumDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_LowDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_VeryLowDetailDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_CullingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_UpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_bUseAsyncUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_MaxObjectsPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "CreateDistanceRenderingSettings", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventCreateDistanceRenderingSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execCreateDistanceRenderingSettings)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VeryHighDetailDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HighDetailDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MediumDetailDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LowDetailDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VeryLowDetailDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CullingDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateFrequency);
	P_GET_UBOOL(Z_Param_bUseAsyncUpdates);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxObjectsPerFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGDistanceRenderingSettings*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::CreateDistanceRenderingSettings(Z_Param_VeryHighDetailDistance,Z_Param_HighDetailDistance,Z_Param_MediumDetailDistance,Z_Param_LowDetailDistance,Z_Param_VeryLowDetailDistance,Z_Param_CullingDistance,Z_Param_UpdateFrequency,Z_Param_bUseAsyncUpdates,Z_Param_MaxObjectsPerFrame);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function CreateDistanceRenderingSettings 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function EnableDistanceRendering ****
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventEnableDistanceRendering_Parms
	{
		const UObject* WorldContext;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// System Control\n" },
#endif
		{ "CPP_Default_bEnable", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System Control" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventEnableDistanceRendering_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
void Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SGDistanceRenderingBlueprintLibrary_eventEnableDistanceRendering_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGDistanceRenderingBlueprintLibrary_eventEnableDistanceRendering_Parms), &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "EnableDistanceRendering", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::SGDistanceRenderingBlueprintLibrary_eventEnableDistanceRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::SGDistanceRenderingBlueprintLibrary_eventEnableDistanceRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execEnableDistanceRendering)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::EnableDistanceRendering(Z_Param_WorldContext,Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function EnableDistanceRendering ******

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function ForceUpdateAllDistanceRendering 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventForceUpdateAllDistanceRendering_Parms
	{
		const UObject* WorldContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventForceUpdateAllDistanceRendering_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "ForceUpdateAllDistanceRendering", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::SGDistanceRenderingBlueprintLibrary_eventForceUpdateAllDistanceRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::SGDistanceRenderingBlueprintLibrary_eventForceUpdateAllDistanceRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execForceUpdateAllDistanceRendering)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::ForceUpdateAllDistanceRendering(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function ForceUpdateAllDistanceRendering 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetDefaultDistanceRenderingSettings 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetDefaultDistanceRenderingSettings_Parms
	{
		FSGDistanceRenderingSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDefaultDistanceRenderingSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(0, nullptr) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetDefaultDistanceRenderingSettings", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDefaultDistanceRenderingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDefaultDistanceRenderingSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetDefaultDistanceRenderingSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGDistanceRenderingSettings*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetDefaultDistanceRenderingSettings();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetDefaultDistanceRenderingSettings 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetDistanceBetweenActors ***
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetDistanceBetweenActors_Parms
	{
		AActor* ActorA;
		AActor* ActorB;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::NewProp_ActorA = { "ActorA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceBetweenActors_Parms, ActorA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::NewProp_ActorB = { "ActorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceBetweenActors_Parms, ActorB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceBetweenActors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::NewProp_ActorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::NewProp_ActorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetDistanceBetweenActors", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceBetweenActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceBetweenActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetDistanceBetweenActors)
{
	P_GET_OBJECT(AActor,Z_Param_ActorA);
	P_GET_OBJECT(AActor,Z_Param_ActorB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetDistanceBetweenActors(Z_Param_ActorA,Z_Param_ActorB);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetDistanceBetweenActors *****

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetDistanceRenderingComponent 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingComponent_Parms
	{
		AActor* Actor;
		USGDistanceRenderingComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingComponent_Parms, ReturnValue), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetDistanceRenderingComponent", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetDistanceRenderingComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGDistanceRenderingComponent**)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetDistanceRenderingComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetDistanceRenderingComponent 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetDistanceRenderingManager 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingManager_Parms
	{
		const UObject* WorldContext;
		USGDistanceRenderingManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Manager Access\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager Access" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingManager_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingManager_Parms, ReturnValue), Z_Construct_UClass_USGDistanceRenderingManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetDistanceRenderingManager", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetDistanceRenderingManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGDistanceRenderingManager**)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetDistanceRenderingManager(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetDistanceRenderingManager **

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetDistanceRenderingStats **
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingStats_Parms
	{
		const UObject* WorldContext;
		FSGRenderingManagerStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingStats_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGRenderingManagerStats, METADATA_PARAMS(0, nullptr) }; // 1652872074
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetDistanceRenderingStats", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceRenderingStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetDistanceRenderingStats)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGRenderingManagerStats*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetDistanceRenderingStats(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetDistanceRenderingStats ****

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetDistanceToNearestPlayer *
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetDistanceToNearestPlayer_Parms
	{
		const UObject* WorldContext;
		FVector Location;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceToNearestPlayer_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceToNearestPlayer_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetDistanceToNearestPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetDistanceToNearestPlayer", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceToNearestPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::SGDistanceRenderingBlueprintLibrary_eventGetDistanceToNearestPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetDistanceToNearestPlayer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetDistanceToNearestPlayer(Z_Param_WorldContext,Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetDistanceToNearestPlayer ***

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetEnvironmentObjectRenderingSettings 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetEnvironmentObjectRenderingSettings_Parms
	{
		FSGDistanceRenderingSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetEnvironmentObjectRenderingSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(0, nullptr) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetEnvironmentObjectRenderingSettings", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetEnvironmentObjectRenderingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetEnvironmentObjectRenderingSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetEnvironmentObjectRenderingSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGDistanceRenderingSettings*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetEnvironmentObjectRenderingSettings();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetEnvironmentObjectRenderingSettings 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetGolfCourseRenderingSettings 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetGolfCourseRenderingSettings_Parms
	{
		FSGDistanceRenderingSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Preset Configurations\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preset Configurations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetGolfCourseRenderingSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(0, nullptr) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetGolfCourseRenderingSettings", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetGolfCourseRenderingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetGolfCourseRenderingSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetGolfCourseRenderingSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGDistanceRenderingSettings*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetGolfCourseRenderingSettings();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetGolfCourseRenderingSettings 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetUIElementRenderingSettings 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetUIElementRenderingSettings_Parms
	{
		FSGDistanceRenderingSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetUIElementRenderingSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(0, nullptr) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetUIElementRenderingSettings", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetUIElementRenderingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetUIElementRenderingSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetUIElementRenderingSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGDistanceRenderingSettings*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetUIElementRenderingSettings();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetUIElementRenderingSettings 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function GetVegetationRenderingSettings 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventGetVegetationRenderingSettings_Parms
	{
		FSGDistanceRenderingSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventGetVegetationRenderingSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(0, nullptr) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "GetVegetationRenderingSettings", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetVegetationRenderingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::SGDistanceRenderingBlueprintLibrary_eventGetVegetationRenderingSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execGetVegetationRenderingSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGDistanceRenderingSettings*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::GetVegetationRenderingSettings();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function GetVegetationRenderingSettings 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function IsDistanceRenderingEnabled *
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventIsDistanceRenderingEnabled_Parms
	{
		const UObject* WorldContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventIsDistanceRenderingEnabled_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
void Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGDistanceRenderingBlueprintLibrary_eventIsDistanceRenderingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGDistanceRenderingBlueprintLibrary_eventIsDistanceRenderingEnabled_Parms), &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "IsDistanceRenderingEnabled", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::SGDistanceRenderingBlueprintLibrary_eventIsDistanceRenderingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::SGDistanceRenderingBlueprintLibrary_eventIsDistanceRenderingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execIsDistanceRenderingEnabled)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USGDistanceRenderingBlueprintLibrary::IsDistanceRenderingEnabled(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function IsDistanceRenderingEnabled ***

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function RemoveDistanceRenderingFromActor 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventRemoveDistanceRenderingFromActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventRemoveDistanceRenderingFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "RemoveDistanceRenderingFromActor", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::SGDistanceRenderingBlueprintLibrary_eventRemoveDistanceRenderingFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::SGDistanceRenderingBlueprintLibrary_eventRemoveDistanceRenderingFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execRemoveDistanceRenderingFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::RemoveDistanceRenderingFromActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function RemoveDistanceRenderingFromActor 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function SetupDistanceRenderingForActors 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActors_Parms
	{
		TArray<AActor*> Actors;
		FSGDistanceRenderingSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bulk Operations\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bulk Operations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActors_Parms, Settings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "SetupDistanceRenderingForActors", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execSetupDistanceRenderingForActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_GET_STRUCT_REF(FSGDistanceRenderingSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActors(Z_Param_Out_Actors,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function SetupDistanceRenderingForActors 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function SetupDistanceRenderingForActorsOfClass 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsOfClass_Parms
	{
		const UObject* WorldContext;
		TSubclassOf<AActor> ActorClass;
		FSGDistanceRenderingSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsOfClass_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsOfClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsOfClass_Parms, Settings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "SetupDistanceRenderingForActorsOfClass", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execSetupDistanceRenderingForActorsOfClass)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT_REF(FSGDistanceRenderingSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsOfClass(Z_Param_WorldContext,Z_Param_ActorClass,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function SetupDistanceRenderingForActorsOfClass 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function SetupDistanceRenderingForActorsWithTag 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsWithTag_Parms
	{
		const UObject* WorldContext;
		FName Tag;
		FSGDistanceRenderingSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsWithTag_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsWithTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsWithTag_Parms, Settings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2721179896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "SetupDistanceRenderingForActorsWithTag", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsWithTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::SGDistanceRenderingBlueprintLibrary_eventSetupDistanceRenderingForActorsWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execSetupDistanceRenderingForActorsWithTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_STRUCT_REF(FSGDistanceRenderingSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::SetupDistanceRenderingForActorsWithTag(Z_Param_WorldContext,Z_Param_Tag,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function SetupDistanceRenderingForActorsWithTag 

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function ShowDistanceRenderingStats *
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventShowDistanceRenderingStats_Parms
	{
		const UObject* WorldContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debugging and Statistics\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debugging and Statistics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventShowDistanceRenderingStats_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "ShowDistanceRenderingStats", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::SGDistanceRenderingBlueprintLibrary_eventShowDistanceRenderingStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::SGDistanceRenderingBlueprintLibrary_eventShowDistanceRenderingStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execShowDistanceRenderingStats)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::ShowDistanceRenderingStats(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function ShowDistanceRenderingStats ***

// ********** Begin Class USGDistanceRenderingBlueprintLibrary Function ToggleDistanceRenderingDebug 
struct Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics
{
	struct SGDistanceRenderingBlueprintLibrary_eventToggleDistanceRenderingDebug_Parms
	{
		const UObject* WorldContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingBlueprintLibrary_eventToggleDistanceRenderingDebug_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, nullptr, "ToggleDistanceRenderingDebug", Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::SGDistanceRenderingBlueprintLibrary_eventToggleDistanceRenderingDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::SGDistanceRenderingBlueprintLibrary_eventToggleDistanceRenderingDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingBlueprintLibrary::execToggleDistanceRenderingDebug)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	USGDistanceRenderingBlueprintLibrary::ToggleDistanceRenderingDebug(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingBlueprintLibrary Function ToggleDistanceRenderingDebug *

// ********** Begin Class USGDistanceRenderingBlueprintLibrary *************************************
void USGDistanceRenderingBlueprintLibrary::StaticRegisterNativesUSGDistanceRenderingBlueprintLibrary()
{
	UClass* Class = USGDistanceRenderingBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDistanceRenderingToActor", &USGDistanceRenderingBlueprintLibrary::execAddDistanceRenderingToActor },
		{ "ApplyGlobalDistanceRenderingSettings", &USGDistanceRenderingBlueprintLibrary::execApplyGlobalDistanceRenderingSettings },
		{ "CalculateRenderingLevelForDistance", &USGDistanceRenderingBlueprintLibrary::execCalculateRenderingLevelForDistance },
		{ "CreateDistanceRenderingSettings", &USGDistanceRenderingBlueprintLibrary::execCreateDistanceRenderingSettings },
		{ "EnableDistanceRendering", &USGDistanceRenderingBlueprintLibrary::execEnableDistanceRendering },
		{ "ForceUpdateAllDistanceRendering", &USGDistanceRenderingBlueprintLibrary::execForceUpdateAllDistanceRendering },
		{ "GetDefaultDistanceRenderingSettings", &USGDistanceRenderingBlueprintLibrary::execGetDefaultDistanceRenderingSettings },
		{ "GetDistanceBetweenActors", &USGDistanceRenderingBlueprintLibrary::execGetDistanceBetweenActors },
		{ "GetDistanceRenderingComponent", &USGDistanceRenderingBlueprintLibrary::execGetDistanceRenderingComponent },
		{ "GetDistanceRenderingManager", &USGDistanceRenderingBlueprintLibrary::execGetDistanceRenderingManager },
		{ "GetDistanceRenderingStats", &USGDistanceRenderingBlueprintLibrary::execGetDistanceRenderingStats },
		{ "GetDistanceToNearestPlayer", &USGDistanceRenderingBlueprintLibrary::execGetDistanceToNearestPlayer },
		{ "GetEnvironmentObjectRenderingSettings", &USGDistanceRenderingBlueprintLibrary::execGetEnvironmentObjectRenderingSettings },
		{ "GetGolfCourseRenderingSettings", &USGDistanceRenderingBlueprintLibrary::execGetGolfCourseRenderingSettings },
		{ "GetUIElementRenderingSettings", &USGDistanceRenderingBlueprintLibrary::execGetUIElementRenderingSettings },
		{ "GetVegetationRenderingSettings", &USGDistanceRenderingBlueprintLibrary::execGetVegetationRenderingSettings },
		{ "IsDistanceRenderingEnabled", &USGDistanceRenderingBlueprintLibrary::execIsDistanceRenderingEnabled },
		{ "RemoveDistanceRenderingFromActor", &USGDistanceRenderingBlueprintLibrary::execRemoveDistanceRenderingFromActor },
		{ "SetupDistanceRenderingForActors", &USGDistanceRenderingBlueprintLibrary::execSetupDistanceRenderingForActors },
		{ "SetupDistanceRenderingForActorsOfClass", &USGDistanceRenderingBlueprintLibrary::execSetupDistanceRenderingForActorsOfClass },
		{ "SetupDistanceRenderingForActorsWithTag", &USGDistanceRenderingBlueprintLibrary::execSetupDistanceRenderingForActorsWithTag },
		{ "ShowDistanceRenderingStats", &USGDistanceRenderingBlueprintLibrary::execShowDistanceRenderingStats },
		{ "ToggleDistanceRenderingDebug", &USGDistanceRenderingBlueprintLibrary::execToggleDistanceRenderingDebug },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary;
UClass* USGDistanceRenderingBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = USGDistanceRenderingBlueprintLibrary;
	if (!Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGDistanceRenderingBlueprintLibrary"),
			Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUSGDistanceRenderingBlueprintLibrary,
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
	return Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_NoRegister()
{
	return USGDistanceRenderingBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Function Library for Distance Rendering System\n * Provides easy access to distance rendering functionality from Blueprints\n */" },
#endif
		{ "IncludePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Function Library for Distance Rendering System\nProvides easy access to distance rendering functionality from Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_AddDistanceRenderingToActor, "AddDistanceRenderingToActor" }, // 853259301
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ApplyGlobalDistanceRenderingSettings, "ApplyGlobalDistanceRenderingSettings" }, // 1509793941
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CalculateRenderingLevelForDistance, "CalculateRenderingLevelForDistance" }, // 419363611
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_CreateDistanceRenderingSettings, "CreateDistanceRenderingSettings" }, // 904447549
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_EnableDistanceRendering, "EnableDistanceRendering" }, // 285933896
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ForceUpdateAllDistanceRendering, "ForceUpdateAllDistanceRendering" }, // 793763952
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDefaultDistanceRenderingSettings, "GetDefaultDistanceRenderingSettings" }, // 846060066
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceBetweenActors, "GetDistanceBetweenActors" }, // 4253772838
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingComponent, "GetDistanceRenderingComponent" }, // 4116517673
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingManager, "GetDistanceRenderingManager" }, // 1449217842
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceRenderingStats, "GetDistanceRenderingStats" }, // 2375425265
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetDistanceToNearestPlayer, "GetDistanceToNearestPlayer" }, // 3728744084
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetEnvironmentObjectRenderingSettings, "GetEnvironmentObjectRenderingSettings" }, // 2681467873
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetGolfCourseRenderingSettings, "GetGolfCourseRenderingSettings" }, // 172369332
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetUIElementRenderingSettings, "GetUIElementRenderingSettings" }, // 2187269264
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_GetVegetationRenderingSettings, "GetVegetationRenderingSettings" }, // 1455792355
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_IsDistanceRenderingEnabled, "IsDistanceRenderingEnabled" }, // 3792710434
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_RemoveDistanceRenderingFromActor, "RemoveDistanceRenderingFromActor" }, // 3212999887
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActors, "SetupDistanceRenderingForActors" }, // 2957380414
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsOfClass, "SetupDistanceRenderingForActorsOfClass" }, // 2769552377
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_SetupDistanceRenderingForActorsWithTag, "SetupDistanceRenderingForActorsWithTag" }, // 3198200122
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ShowDistanceRenderingStats, "ShowDistanceRenderingStats" }, // 1549048839
		{ &Z_Construct_UFunction_USGDistanceRenderingBlueprintLibrary_ToggleDistanceRenderingDebug, "ToggleDistanceRenderingDebug" }, // 4125474115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGDistanceRenderingBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics::ClassParams = {
	&USGDistanceRenderingBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary.OuterSingleton;
}
USGDistanceRenderingBlueprintLibrary::USGDistanceRenderingBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGDistanceRenderingBlueprintLibrary);
USGDistanceRenderingBlueprintLibrary::~USGDistanceRenderingBlueprintLibrary() {}
// ********** End Class USGDistanceRenderingBlueprintLibrary ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary, USGDistanceRenderingBlueprintLibrary::StaticClass, TEXT("USGDistanceRenderingBlueprintLibrary"), &Z_Registration_Info_UClass_USGDistanceRenderingBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGDistanceRenderingBlueprintLibrary), 3950236856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h__Script_SocialGolf_2059269172(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
