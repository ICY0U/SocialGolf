// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGDistanceRenderingComponent.h"
#include "SGDistanceRenderingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGDistanceRenderingComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingComponent();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGDistanceRenderingSettings();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGObjectRenderingData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGDistanceRenderingComponent Function ApplyRenderingLevel ***************
struct Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics
{
	struct SGDistanceRenderingComponent_eventApplyRenderingLevel_Parms
	{
		EDistanceRenderingLevel Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component management\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingComponent_eventApplyRenderingLevel_Parms, Level), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::NewProp_Level_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "ApplyRenderingLevel", Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::SGDistanceRenderingComponent_eventApplyRenderingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::SGDistanceRenderingComponent_eventApplyRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execApplyRenderingLevel)
{
	P_GET_ENUM(EDistanceRenderingLevel,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyRenderingLevel(EDistanceRenderingLevel(Z_Param_Level));
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function ApplyRenderingLevel *****************

// ********** Begin Class USGDistanceRenderingComponent Function CalculateTargetRenderingLevel *****
struct Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics
{
	struct SGDistanceRenderingComponent_eventCalculateTargetRenderingLevel_Parms
	{
		float Distance;
		EDistanceRenderingLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingComponent_eventCalculateTargetRenderingLevel_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingComponent_eventCalculateTargetRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "CalculateTargetRenderingLevel", Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::SGDistanceRenderingComponent_eventCalculateTargetRenderingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::SGDistanceRenderingComponent_eventCalculateTargetRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execCalculateTargetRenderingLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDistanceRenderingLevel*)Z_Param__Result=P_THIS->CalculateTargetRenderingLevel(Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function CalculateTargetRenderingLevel *******

// ********** Begin Class USGDistanceRenderingComponent Function GetCurrentRenderingLevel **********
struct Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics
{
	struct SGDistanceRenderingComponent_eventGetCurrentRenderingLevel_Parms
	{
		EDistanceRenderingLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingComponent_eventGetCurrentRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "GetCurrentRenderingLevel", Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::SGDistanceRenderingComponent_eventGetCurrentRenderingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::SGDistanceRenderingComponent_eventGetCurrentRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execGetCurrentRenderingLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDistanceRenderingLevel*)Z_Param__Result=P_THIS->GetCurrentRenderingLevel();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function GetCurrentRenderingLevel ************

// ********** Begin Class USGDistanceRenderingComponent Function GetDistanceToNearestPlayer ********
struct Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics
{
	struct SGDistanceRenderingComponent_eventGetDistanceToNearestPlayer_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingComponent_eventGetDistanceToNearestPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "GetDistanceToNearestPlayer", Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::SGDistanceRenderingComponent_eventGetDistanceToNearestPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::SGDistanceRenderingComponent_eventGetDistanceToNearestPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execGetDistanceToNearestPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceToNearestPlayer();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function GetDistanceToNearestPlayer **********

// ********** Begin Class USGDistanceRenderingComponent Function IsCulled **************************
struct Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics
{
	struct SGDistanceRenderingComponent_eventIsCulled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGDistanceRenderingComponent_eventIsCulled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGDistanceRenderingComponent_eventIsCulled_Parms), &Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "IsCulled", Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::SGDistanceRenderingComponent_eventIsCulled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::SGDistanceRenderingComponent_eventIsCulled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execIsCulled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCulled();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function IsCulled ****************************

// ********** Begin Class USGDistanceRenderingComponent Function IsVisible *************************
struct Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics
{
	struct SGDistanceRenderingComponent_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGDistanceRenderingComponent_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGDistanceRenderingComponent_eventIsVisible_Parms), &Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "IsVisible", Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::SGDistanceRenderingComponent_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::SGDistanceRenderingComponent_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function IsVisible ***************************

// ********** Begin Class USGDistanceRenderingComponent Function SetRenderingLevel *****************
struct Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics
{
	struct SGDistanceRenderingComponent_eventSetRenderingLevel_Parms
	{
		EDistanceRenderingLevel NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::NewProp_NewLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGDistanceRenderingComponent_eventSetRenderingLevel_Parms, NewLevel), Z_Construct_UEnum_SocialGolf_EDistanceRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 164998566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::NewProp_NewLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "SetRenderingLevel", Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::SGDistanceRenderingComponent_eventSetRenderingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::SGDistanceRenderingComponent_eventSetRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execSetRenderingLevel)
{
	P_GET_ENUM(EDistanceRenderingLevel,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderingLevel(EDistanceRenderingLevel(Z_Param_NewLevel));
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function SetRenderingLevel *******************

// ********** Begin Class USGDistanceRenderingComponent Function SetVisibility *********************
struct Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics
{
	struct SGDistanceRenderingComponent_eventSetVisibility_Parms
	{
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((SGDistanceRenderingComponent_eventSetVisibility_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGDistanceRenderingComponent_eventSetVisibility_Parms), &Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "SetVisibility", Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::SGDistanceRenderingComponent_eventSetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::SGDistanceRenderingComponent_eventSetVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execSetVisibility)
{
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisibility(Z_Param_bVisible);
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function SetVisibility ***********************

// ********** Begin Class USGDistanceRenderingComponent Function UpdateDistanceToPlayers ***********
struct Z_Construct_UFunction_USGDistanceRenderingComponent_UpdateDistanceToPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGDistanceRenderingComponent_UpdateDistanceToPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGDistanceRenderingComponent, nullptr, "UpdateDistanceToPlayers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGDistanceRenderingComponent_UpdateDistanceToPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGDistanceRenderingComponent_UpdateDistanceToPlayers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGDistanceRenderingComponent_UpdateDistanceToPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGDistanceRenderingComponent_UpdateDistanceToPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGDistanceRenderingComponent::execUpdateDistanceToPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDistanceToPlayers();
	P_NATIVE_END;
}
// ********** End Class USGDistanceRenderingComponent Function UpdateDistanceToPlayers *************

// ********** Begin Class USGDistanceRenderingComponent ********************************************
void USGDistanceRenderingComponent::StaticRegisterNativesUSGDistanceRenderingComponent()
{
	UClass* Class = USGDistanceRenderingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRenderingLevel", &USGDistanceRenderingComponent::execApplyRenderingLevel },
		{ "CalculateTargetRenderingLevel", &USGDistanceRenderingComponent::execCalculateTargetRenderingLevel },
		{ "GetCurrentRenderingLevel", &USGDistanceRenderingComponent::execGetCurrentRenderingLevel },
		{ "GetDistanceToNearestPlayer", &USGDistanceRenderingComponent::execGetDistanceToNearestPlayer },
		{ "IsCulled", &USGDistanceRenderingComponent::execIsCulled },
		{ "IsVisible", &USGDistanceRenderingComponent::execIsVisible },
		{ "SetRenderingLevel", &USGDistanceRenderingComponent::execSetRenderingLevel },
		{ "SetVisibility", &USGDistanceRenderingComponent::execSetVisibility },
		{ "UpdateDistanceToPlayers", &USGDistanceRenderingComponent::execUpdateDistanceToPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGDistanceRenderingComponent;
UClass* USGDistanceRenderingComponent::GetPrivateStaticClass()
{
	using TClass = USGDistanceRenderingComponent;
	if (!Z_Registration_Info_UClass_USGDistanceRenderingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGDistanceRenderingComponent"),
			Z_Registration_Info_UClass_USGDistanceRenderingComponent.InnerSingleton,
			StaticRegisterNativesUSGDistanceRenderingComponent,
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
	return Z_Registration_Info_UClass_USGDistanceRenderingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister()
{
	return USGDistanceRenderingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGDistanceRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "Rendering/SGDistanceRenderingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingSettings_MetaData[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterWithManager_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDistanceRendering_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportanceMultiplier_MetaData[] = {
		{ "Category", "Distance Rendering" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingData_MetaData[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current state\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRenderingLevelChanged_MetaData[] = {
		{ "Category", "Distance Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStaticMeshComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached components for performance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached components for performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSkeletalMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedInstancedMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rendering/SGDistanceRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderingSettings;
	static void NewProp_bAutoRegisterWithManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterWithManager;
	static void NewProp_bIgnoreDistanceRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDistanceRendering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportanceMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderingData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRenderingLevelChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedStaticMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedStaticMeshComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedSkeletalMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedSkeletalMeshComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedInstancedMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedInstancedMeshComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_ApplyRenderingLevel, "ApplyRenderingLevel" }, // 1601662902
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_CalculateTargetRenderingLevel, "CalculateTargetRenderingLevel" }, // 3666903475
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_GetCurrentRenderingLevel, "GetCurrentRenderingLevel" }, // 2038516050
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_GetDistanceToNearestPlayer, "GetDistanceToNearestPlayer" }, // 121807475
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_IsCulled, "IsCulled" }, // 822034458
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_IsVisible, "IsVisible" }, // 4269207956
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_SetRenderingLevel, "SetRenderingLevel" }, // 1812789621
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_SetVisibility, "SetVisibility" }, // 4194441209
		{ &Z_Construct_UFunction_USGDistanceRenderingComponent_UpdateDistanceToPlayers, "UpdateDistanceToPlayers" }, // 1025788033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGDistanceRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_RenderingSettings = { "RenderingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingComponent, RenderingSettings), Z_Construct_UScriptStruct_FSGDistanceRenderingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingSettings_MetaData), NewProp_RenderingSettings_MetaData) }; // 2721179896
void Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bAutoRegisterWithManager_SetBit(void* Obj)
{
	((USGDistanceRenderingComponent*)Obj)->bAutoRegisterWithManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bAutoRegisterWithManager = { "bAutoRegisterWithManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGDistanceRenderingComponent), &Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bAutoRegisterWithManager_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRegisterWithManager_MetaData), NewProp_bAutoRegisterWithManager_MetaData) };
void Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bIgnoreDistanceRendering_SetBit(void* Obj)
{
	((USGDistanceRenderingComponent*)Obj)->bIgnoreDistanceRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bIgnoreDistanceRendering = { "bIgnoreDistanceRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGDistanceRenderingComponent), &Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bIgnoreDistanceRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreDistanceRendering_MetaData), NewProp_bIgnoreDistanceRendering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_ImportanceMultiplier = { "ImportanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingComponent, ImportanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportanceMultiplier_MetaData), NewProp_ImportanceMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_RenderingData = { "RenderingData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingComponent, RenderingData), Z_Construct_UScriptStruct_FSGObjectRenderingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingData_MetaData), NewProp_RenderingData_MetaData) }; // 3097396211
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_OnRenderingLevelChanged = { "OnRenderingLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingComponent, OnRenderingLevelChanged), Z_Construct_UDelegateFunction_SocialGolf_OnObjectRenderingLevelChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRenderingLevelChanged_MetaData), NewProp_OnRenderingLevelChanged_MetaData) }; // 3057948110
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedStaticMeshComponents_Inner = { "CachedStaticMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedStaticMeshComponents = { "CachedStaticMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingComponent, CachedStaticMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStaticMeshComponents_MetaData), NewProp_CachedStaticMeshComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedSkeletalMeshComponents_Inner = { "CachedSkeletalMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedSkeletalMeshComponents = { "CachedSkeletalMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingComponent, CachedSkeletalMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSkeletalMeshComponents_MetaData), NewProp_CachedSkeletalMeshComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedInstancedMeshComponents_Inner = { "CachedInstancedMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedInstancedMeshComponents = { "CachedInstancedMeshComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGDistanceRenderingComponent, CachedInstancedMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedInstancedMeshComponents_MetaData), NewProp_CachedInstancedMeshComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGDistanceRenderingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_RenderingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bAutoRegisterWithManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_bIgnoreDistanceRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_ImportanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_RenderingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_OnRenderingLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedStaticMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedStaticMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedSkeletalMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedSkeletalMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedInstancedMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGDistanceRenderingComponent_Statics::NewProp_CachedInstancedMeshComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGDistanceRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGDistanceRenderingComponent_Statics::ClassParams = {
	&USGDistanceRenderingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGDistanceRenderingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGDistanceRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USGDistanceRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGDistanceRenderingComponent()
{
	if (!Z_Registration_Info_UClass_USGDistanceRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGDistanceRenderingComponent.OuterSingleton, Z_Construct_UClass_USGDistanceRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGDistanceRenderingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGDistanceRenderingComponent);
USGDistanceRenderingComponent::~USGDistanceRenderingComponent() {}
// ********** End Class USGDistanceRenderingComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGDistanceRenderingComponent, USGDistanceRenderingComponent::StaticClass, TEXT("USGDistanceRenderingComponent"), &Z_Registration_Info_UClass_USGDistanceRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGDistanceRenderingComponent), 942338684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h__Script_SocialGolf_2406737816(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
