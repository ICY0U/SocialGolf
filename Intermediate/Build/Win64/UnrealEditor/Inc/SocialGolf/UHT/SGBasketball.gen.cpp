// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Basketball/SGBasketball.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGBasketball() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketball();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketball_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballHoop_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGBasketball Function ApplyEnhancedBouncePhysics ************************
struct Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics
{
	struct SGBasketball_eventApplyEnhancedBouncePhysics_Parms
	{
		FHitResult Hit;
		FVector CurrentVelocity;
		FVector CurrentAngularVelocity;
		USGBasketballPhysicsMaterial* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Enhanced Physics Functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Enhanced Physics Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAngularVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventApplyEnhancedBouncePhysics_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_CurrentVelocity = { "CurrentVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventApplyEnhancedBouncePhysics_Parms, CurrentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentVelocity_MetaData), NewProp_CurrentVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_CurrentAngularVelocity = { "CurrentAngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventApplyEnhancedBouncePhysics_Parms, CurrentAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAngularVelocity_MetaData), NewProp_CurrentAngularVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventApplyEnhancedBouncePhysics_Parms, Material), Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_CurrentVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_CurrentAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "ApplyEnhancedBouncePhysics", Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::SGBasketball_eventApplyEnhancedBouncePhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::SGBasketball_eventApplyEnhancedBouncePhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execApplyEnhancedBouncePhysics)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CurrentVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CurrentAngularVelocity);
	P_GET_OBJECT(USGBasketballPhysicsMaterial,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEnhancedBouncePhysics(Z_Param_Out_Hit,Z_Param_Out_CurrentVelocity,Z_Param_Out_CurrentAngularVelocity,Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function ApplyEnhancedBouncePhysics **************************

// ********** Begin Class ASGBasketball Function ApplySpinDecay ************************************
struct Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics
{
	struct SGBasketball_eventApplySpinDecay_Parms
	{
		FHitResult Hit;
		FVector CurrentAngularVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAngularVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventApplySpinDecay_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::NewProp_CurrentAngularVelocity = { "CurrentAngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventApplySpinDecay_Parms, CurrentAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAngularVelocity_MetaData), NewProp_CurrentAngularVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::NewProp_CurrentAngularVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "ApplySpinDecay", Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::SGBasketball_eventApplySpinDecay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::SGBasketball_eventApplySpinDecay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_ApplySpinDecay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_ApplySpinDecay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execApplySpinDecay)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CurrentAngularVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySpinDecay(Z_Param_Out_Hit,Z_Param_Out_CurrentAngularVelocity);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function ApplySpinDecay **************************************

// ********** Begin Class ASGBasketball Function CalculateEnhancedInitialVelocity ******************
struct Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics
{
	struct SGBasketball_eventCalculateEnhancedInitialVelocity_Parms
	{
		FVector ThrowDirection;
		float ThrowPower;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Telemetry" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateEnhancedInitialVelocity_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateEnhancedInitialVelocity_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateEnhancedInitialVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::NewProp_ThrowPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "CalculateEnhancedInitialVelocity", Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::SGBasketball_eventCalculateEnhancedInitialVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::SGBasketball_eventCalculateEnhancedInitialVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execCalculateEnhancedInitialVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CalculateEnhancedInitialVelocity(Z_Param_Out_ThrowDirection,Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function CalculateEnhancedInitialVelocity ********************

// ********** Begin Class ASGBasketball Function CalculateInitialVelocity **************************
struct Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics
{
	struct SGBasketball_eventCalculateInitialVelocity_Parms
	{
		FVector ThrowDirection;
		float ThrowPower;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Telemetry" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateInitialVelocity_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateInitialVelocity_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateInitialVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::NewProp_ThrowPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "CalculateInitialVelocity", Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::SGBasketball_eventCalculateInitialVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::SGBasketball_eventCalculateInitialVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execCalculateInitialVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CalculateInitialVelocity(Z_Param_Out_ThrowDirection,Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function CalculateInitialVelocity ****************************

// ********** Begin Class ASGBasketball Function CalculateRealisticBasketballSpin ******************
struct Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics
{
	struct SGBasketball_eventCalculateRealisticBasketballSpin_Parms
	{
		FVector ThrowDirection;
		float ThrowPower;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateRealisticBasketballSpin_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateRealisticBasketballSpin_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateRealisticBasketballSpin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::NewProp_ThrowPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "CalculateRealisticBasketballSpin", Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::SGBasketball_eventCalculateRealisticBasketballSpin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::SGBasketball_eventCalculateRealisticBasketballSpin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execCalculateRealisticBasketballSpin)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CalculateRealisticBasketballSpin(Z_Param_Out_ThrowDirection,Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function CalculateRealisticBasketballSpin ********************

// ********** Begin Class ASGBasketball Function CalculateRealisticSpin ****************************
struct Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics
{
	struct SGBasketball_eventCalculateRealisticSpin_Parms
	{
		FVector ThrowDirection;
		float ThrowPower;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateRealisticSpin_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateRealisticSpin_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCalculateRealisticSpin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::NewProp_ThrowPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "CalculateRealisticSpin", Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::SGBasketball_eventCalculateRealisticSpin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::SGBasketball_eventCalculateRealisticSpin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execCalculateRealisticSpin)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CalculateRealisticSpin(Z_Param_Out_ThrowDirection,Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function CalculateRealisticSpin ******************************

// ********** Begin Class ASGBasketball Function CanBePickedUp *************************************
struct Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics
{
	struct SGBasketball_eventCanBePickedUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pickup/Drop functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pickup/Drop functions" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGBasketball_eventCanBePickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketball_eventCanBePickedUp_Parms), &Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "CanBePickedUp", Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::SGBasketball_eventCanBePickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::SGBasketball_eventCanBePickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_CanBePickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_CanBePickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execCanBePickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBePickedUp();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function CanBePickedUp ***************************************

// ********** Begin Class ASGBasketball Function CanInteract ***************************************
struct Z_Construct_UFunction_ASGBasketball_CanInteract_Statics
{
	struct SGBasketball_eventCanInteract_Parms
	{
		ASGCharacter* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventCanInteract_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGBasketball_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketball_eventCanInteract_Parms), &Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "CanInteract", Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::SGBasketball_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::SGBasketball_eventCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_CanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_CanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execCanInteract)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteract(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function CanInteract *****************************************

// ********** Begin Class ASGBasketball Function DrawTrajectoryVisualization ***********************
struct Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics
{
	struct SGBasketball_eventDrawTrajectoryVisualization_Parms
	{
		TArray<FVector> TrajectoryPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Telemetry" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrajectoryPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrajectoryPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::NewProp_TrajectoryPoints_Inner = { "TrajectoryPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::NewProp_TrajectoryPoints = { "TrajectoryPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventDrawTrajectoryVisualization_Parms, TrajectoryPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryPoints_MetaData), NewProp_TrajectoryPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::NewProp_TrajectoryPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::NewProp_TrajectoryPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "DrawTrajectoryVisualization", Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::SGBasketball_eventDrawTrajectoryVisualization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::SGBasketball_eventDrawTrajectoryVisualization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execDrawTrajectoryVisualization)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_TrajectoryPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawTrajectoryVisualization(Z_Param_Out_TrajectoryPoints);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function DrawTrajectoryVisualization *************************

// ********** Begin Class ASGBasketball Function DropBall ******************************************
struct Z_Construct_UFunction_ASGBasketball_DropBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_DropBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "DropBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_DropBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_DropBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketball_DropBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_DropBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execDropBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropBall();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function DropBall ********************************************

// ********** Begin Class ASGBasketball Function GetBallMesh ***************************************
struct Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics
{
	struct SGBasketball_eventGetBallMesh_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventGetBallMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "GetBallMesh", Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::SGBasketball_eventGetBallMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::SGBasketball_eventGetBallMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_GetBallMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_GetBallMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execGetBallMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetBallMesh();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function GetBallMesh *****************************************

// ********** Begin Class ASGBasketball Function GetCollisionComponent *****************************
struct Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics
{
	struct SGBasketball_eventGetCollisionComponent_Parms
	{
		USphereComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventGetCollisionComponent_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "GetCollisionComponent", Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::SGBasketball_eventGetCollisionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::SGBasketball_eventGetCollisionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_GetCollisionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_GetCollisionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execGetCollisionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USphereComponent**)Z_Param__Result=P_THIS->GetCollisionComponent();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function GetCollisionComponent *******************************

// ********** Begin Class ASGBasketball Function GetHoldingPlayer **********************************
struct Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics
{
	struct SGBasketball_eventGetHoldingPlayer_Parms
	{
		ASGCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventGetHoldingPlayer_Parms, ReturnValue), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "GetHoldingPlayer", Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::SGBasketball_eventGetHoldingPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::SGBasketball_eventGetHoldingPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execGetHoldingPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASGCharacter**)Z_Param__Result=P_THIS->GetHoldingPlayer();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function GetHoldingPlayer ************************************

// ********** Begin Class ASGBasketball Function GetLastThrower ************************************
struct Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics
{
	struct SGBasketball_eventGetLastThrower_Parms
	{
		ASGCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventGetLastThrower_Parms, ReturnValue), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "GetLastThrower", Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::SGBasketball_eventGetLastThrower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::SGBasketball_eventGetLastThrower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_GetLastThrower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_GetLastThrower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execGetLastThrower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASGCharacter**)Z_Param__Result=P_THIS->GetLastThrower();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function GetLastThrower **************************************

// ********** Begin Class ASGBasketball Function HasBeenThrown *************************************
struct Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics
{
	struct SGBasketball_eventHasBeenThrown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGBasketball_eventHasBeenThrown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketball_eventHasBeenThrown_Parms), &Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "HasBeenThrown", Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::SGBasketball_eventHasBeenThrown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::SGBasketball_eventHasBeenThrown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_HasBeenThrown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_HasBeenThrown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execHasBeenThrown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBeenThrown();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function HasBeenThrown ***************************************

// ********** Begin Class ASGBasketball Function IsBeingHeld ***************************************
struct Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics
{
	struct SGBasketball_eventIsBeingHeld_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGBasketball_eventIsBeingHeld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketball_eventIsBeingHeld_Parms), &Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "IsBeingHeld", Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::SGBasketball_eventIsBeingHeld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::SGBasketball_eventIsBeingHeld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_IsBeingHeld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_IsBeingHeld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execIsBeingHeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBeingHeld();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function IsBeingHeld *****************************************

// ********** Begin Class ASGBasketball Function MulticastOnBasketballDropped **********************
struct SGBasketball_eventMulticastOnBasketballDropped_Parms
{
	FVector DropLocation;
};
static FName NAME_ASGBasketball_MulticastOnBasketballDropped = FName(TEXT("MulticastOnBasketballDropped"));
void ASGBasketball::MulticastOnBasketballDropped(FVector const& DropLocation)
{
	SGBasketball_eventMulticastOnBasketballDropped_Parms Parms;
	Parms.DropLocation=DropLocation;
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketball_MulticastOnBasketballDropped);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventMulticastOnBasketballDropped_Parms, DropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropLocation_MetaData), NewProp_DropLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::NewProp_DropLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "MulticastOnBasketballDropped", Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::PropPointers), sizeof(SGBasketball_eventMulticastOnBasketballDropped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketball_eventMulticastOnBasketballDropped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execMulticastOnBasketballDropped)
{
	P_GET_STRUCT(FVector,Z_Param_DropLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnBasketballDropped_Implementation(Z_Param_DropLocation);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function MulticastOnBasketballDropped ************************

// ********** Begin Class ASGBasketball Function MulticastOnBasketballPickedUp *********************
struct SGBasketball_eventMulticastOnBasketballPickedUp_Parms
{
	ASGCharacter* Player;
};
static FName NAME_ASGBasketball_MulticastOnBasketballPickedUp = FName(TEXT("MulticastOnBasketballPickedUp"));
void ASGBasketball::MulticastOnBasketballPickedUp(ASGCharacter* Player)
{
	SGBasketball_eventMulticastOnBasketballPickedUp_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketball_MulticastOnBasketballPickedUp);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventMulticastOnBasketballPickedUp_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "MulticastOnBasketballPickedUp", Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::PropPointers), sizeof(SGBasketball_eventMulticastOnBasketballPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketball_eventMulticastOnBasketballPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execMulticastOnBasketballPickedUp)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnBasketballPickedUp_Implementation(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function MulticastOnBasketballPickedUp ***********************

// ********** Begin Class ASGBasketball Function MulticastOnBasketballThrown ***********************
struct SGBasketball_eventMulticastOnBasketballThrown_Parms
{
	FVector Direction;
	float Power;
	FVector StartLocation;
};
static FName NAME_ASGBasketball_MulticastOnBasketballThrown = FName(TEXT("MulticastOnBasketballThrown"));
void ASGBasketball::MulticastOnBasketballThrown(FVector const& Direction, float Power, FVector const& StartLocation)
{
	SGBasketball_eventMulticastOnBasketballThrown_Parms Parms;
	Parms.Direction=Direction;
	Parms.Power=Power;
	Parms.StartLocation=StartLocation;
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketball_MulticastOnBasketballThrown);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multicast RPCs for visual effects\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast RPCs for visual effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventMulticastOnBasketballThrown_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventMulticastOnBasketballThrown_Parms, Power), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventMulticastOnBasketballThrown_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::NewProp_Power,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::NewProp_StartLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "MulticastOnBasketballThrown", Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::PropPointers), sizeof(SGBasketball_eventMulticastOnBasketballThrown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketball_eventMulticastOnBasketballThrown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execMulticastOnBasketballThrown)
{
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Power);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnBasketballThrown_Implementation(Z_Param_Direction,Z_Param_Power,Z_Param_StartLocation);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function MulticastOnBasketballThrown *************************

// ********** Begin Class ASGBasketball Function NotifyGameManagerOfScore **************************
struct Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics
{
	struct SGBasketball_eventNotifyGameManagerOfScore_Parms
	{
		ASGBasketballHoop* Hoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shot Tracking" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::NewProp_Hoop = { "Hoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventNotifyGameManagerOfScore_Parms, Hoop), Z_Construct_UClass_ASGBasketballHoop_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::NewProp_Hoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "NotifyGameManagerOfScore", Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::SGBasketball_eventNotifyGameManagerOfScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::SGBasketball_eventNotifyGameManagerOfScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execNotifyGameManagerOfScore)
{
	P_GET_OBJECT(ASGBasketballHoop,Z_Param_Hoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyGameManagerOfScore(Z_Param_Hoop);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function NotifyGameManagerOfScore ****************************

// ********** Begin Class ASGBasketball Function NotifyGameManagerOfThrow **************************
struct Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfThrow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shot Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shot tracking functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shot tracking functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfThrow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "NotifyGameManagerOfThrow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfThrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfThrow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfThrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfThrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execNotifyGameManagerOfThrow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyGameManagerOfThrow();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function NotifyGameManagerOfThrow ****************************

// ********** Begin Class ASGBasketball Function OnHit *********************************************
struct Z_Construct_UFunction_ASGBasketball_OnHit_Statics
{
	struct SGBasketball_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision events\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "OnHit", Z_Construct_UFunction_ASGBasketball_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_OnHit_Statics::SGBasketball_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_OnHit_Statics::SGBasketball_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function OnHit ***********************************************

// ********** Begin Class ASGBasketball Function OnInteract ****************************************
struct Z_Construct_UFunction_ASGBasketball_OnInteract_Statics
{
	struct SGBasketball_eventOnInteract_Parms
	{
		ASGCharacter* InteractingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction functions (for interaction system)\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction functions (for interaction system)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventOnInteract_Parms, InteractingPlayer), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "OnInteract", Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::SGBasketball_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::SGBasketball_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_OnInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_OnInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execOnInteract)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteract(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function OnInteract ******************************************

// ********** Begin Class ASGBasketball Function OnRep_HoldingPlayer *******************************
struct Z_Construct_UFunction_ASGBasketball_OnRep_HoldingPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_OnRep_HoldingPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "OnRep_HoldingPlayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnRep_HoldingPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_OnRep_HoldingPlayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketball_OnRep_HoldingPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_OnRep_HoldingPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execOnRep_HoldingPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HoldingPlayer();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function OnRep_HoldingPlayer *********************************

// ********** Begin Class ASGBasketball Function OnRep_IsBeingHeld *********************************
struct Z_Construct_UFunction_ASGBasketball_OnRep_IsBeingHeld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_OnRep_IsBeingHeld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "OnRep_IsBeingHeld", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_OnRep_IsBeingHeld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_OnRep_IsBeingHeld_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketball_OnRep_IsBeingHeld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_OnRep_IsBeingHeld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execOnRep_IsBeingHeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsBeingHeld();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function OnRep_IsBeingHeld ***********************************

// ********** Begin Class ASGBasketball Function PickupBall ****************************************
struct Z_Construct_UFunction_ASGBasketball_PickupBall_Statics
{
	struct SGBasketball_eventPickupBall_Parms
	{
		ASGCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPickupBall_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "PickupBall", Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::SGBasketball_eventPickupBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::SGBasketball_eventPickupBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_PickupBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_PickupBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execPickupBall)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickupBall(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function PickupBall ******************************************

// ********** Begin Class ASGBasketball Function PlayBounceSound ***********************************
struct Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics
{
	struct SGBasketball_eventPlayBounceSound_Parms
	{
		float ImpactForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Audio functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::NewProp_ImpactForce = { "ImpactForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPlayBounceSound_Parms, ImpactForce), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::NewProp_ImpactForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "PlayBounceSound", Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::SGBasketball_eventPlayBounceSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::SGBasketball_eventPlayBounceSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_PlayBounceSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_PlayBounceSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execPlayBounceSound)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ImpactForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayBounceSound(Z_Param_ImpactForce);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function PlayBounceSound *************************************

// ********** Begin Class ASGBasketball Function PlayEnhancedBounceSound ***************************
struct Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics
{
	struct SGBasketball_eventPlayEnhancedBounceSound_Parms
	{
		float ImpactForce;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::NewProp_ImpactForce = { "ImpactForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPlayEnhancedBounceSound_Parms, ImpactForce), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPlayEnhancedBounceSound_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::NewProp_ImpactForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "PlayEnhancedBounceSound", Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::SGBasketball_eventPlayEnhancedBounceSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::SGBasketball_eventPlayEnhancedBounceSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execPlayEnhancedBounceSound)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ImpactForce);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayEnhancedBounceSound(Z_Param_ImpactForce,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function PlayEnhancedBounceSound *****************************

// ********** Begin Class ASGBasketball Function PredictAndShowTrajectory **************************
struct Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics
{
	struct SGBasketball_eventPredictAndShowTrajectory_Parms
	{
		FVector StartLocation;
		FVector InitialVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Trajectory Prediction Functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Trajectory Prediction Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictAndShowTrajectory_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictAndShowTrajectory_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::NewProp_InitialVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "PredictAndShowTrajectory", Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::SGBasketball_eventPredictAndShowTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::SGBasketball_eventPredictAndShowTrajectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execPredictAndShowTrajectory)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InitialVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PredictAndShowTrajectory(Z_Param_Out_StartLocation,Z_Param_Out_InitialVelocity);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function PredictAndShowTrajectory ****************************

// ********** Begin Class ASGBasketball Function PredictBounceVelocity *****************************
struct Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics
{
	struct SGBasketball_eventPredictBounceVelocity_Parms
	{
		FVector IncomingVelocity;
		FHitResult Hit;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::NewProp_IncomingVelocity = { "IncomingVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictBounceVelocity_Parms, IncomingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingVelocity_MetaData), NewProp_IncomingVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictBounceVelocity_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictBounceVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::NewProp_IncomingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "PredictBounceVelocity", Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::SGBasketball_eventPredictBounceVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::SGBasketball_eventPredictBounceVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execPredictBounceVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_IncomingVelocity);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->PredictBounceVelocity(Z_Param_Out_IncomingVelocity,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function PredictBounceVelocity *******************************

// ********** Begin Class ASGBasketball Function PredictTrajectoryPath *****************************
struct Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics
{
	struct SGBasketball_eventPredictTrajectoryPath_Parms
	{
		FVector StartLocation;
		FVector InitialVelocity;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Telemetry" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictTrajectoryPath_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictTrajectoryPath_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventPredictTrajectoryPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_InitialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "PredictTrajectoryPath", Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::SGBasketball_eventPredictTrajectoryPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::SGBasketball_eventPredictTrajectoryPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execPredictTrajectoryPath)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InitialVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->PredictTrajectoryPath(Z_Param_Out_StartLocation,Z_Param_Out_InitialVelocity);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function PredictTrajectoryPath *******************************

// ********** Begin Class ASGBasketball Function RegisterMissedShot ********************************
struct Z_Construct_UFunction_ASGBasketball_RegisterMissedShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shot Tracking" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_RegisterMissedShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "RegisterMissedShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_RegisterMissedShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_RegisterMissedShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketball_RegisterMissedShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_RegisterMissedShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execRegisterMissedShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterMissedShot();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function RegisterMissedShot **********************************

// ********** Begin Class ASGBasketball Function ServerDropBall ************************************
static FName NAME_ASGBasketball_ServerDropBall = FName(TEXT("ServerDropBall"));
void ASGBasketball::ServerDropBall()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketball_ServerDropBall);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketball_ServerDropBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_ServerDropBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "ServerDropBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ServerDropBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_ServerDropBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketball_ServerDropBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_ServerDropBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execServerDropBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDropBall_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function ServerDropBall **************************************

// ********** Begin Class ASGBasketball Function ServerPickupBall **********************************
struct SGBasketball_eventServerPickupBall_Parms
{
	ASGCharacter* Player;
};
static FName NAME_ASGBasketball_ServerPickupBall = FName(TEXT("ServerPickupBall"));
void ASGBasketball::ServerPickupBall(ASGCharacter* Player)
{
	SGBasketball_eventServerPickupBall_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketball_ServerPickupBall);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPCs\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPCs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventServerPickupBall_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "ServerPickupBall", Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::PropPointers), sizeof(SGBasketball_eventServerPickupBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketball_eventServerPickupBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_ServerPickupBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_ServerPickupBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execServerPickupBall)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerPickupBall_Implementation(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function ServerPickupBall ************************************

// ********** Begin Class ASGBasketball Function ServerThrowBall ***********************************
struct SGBasketball_eventServerThrowBall_Parms
{
	FVector ThrowDirection;
	float ThrowPower;
};
static FName NAME_ASGBasketball_ServerThrowBall = FName(TEXT("ServerThrowBall"));
void ASGBasketball::ServerThrowBall(FVector const& ThrowDirection, float ThrowPower)
{
	SGBasketball_eventServerThrowBall_Parms Parms;
	Parms.ThrowDirection=ThrowDirection;
	Parms.ThrowPower=ThrowPower;
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketball_ServerThrowBall);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventServerThrowBall_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventServerThrowBall_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::NewProp_ThrowPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "ServerThrowBall", Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::PropPointers), sizeof(SGBasketball_eventServerThrowBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketball_eventServerThrowBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_ServerThrowBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_ServerThrowBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execServerThrowBall)
{
	P_GET_STRUCT(FVector,Z_Param_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerThrowBall_Implementation(Z_Param_ThrowDirection,Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function ServerThrowBall *************************************

// ********** Begin Class ASGBasketball Function ShowThrowPrediction *******************************
struct Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics
{
	struct SGBasketball_eventShowThrowPrediction_Parms
	{
		FVector ThrowDirection;
		float ThrowPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Telemetry" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventShowThrowPrediction_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventShowThrowPrediction_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::NewProp_ThrowPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "ShowThrowPrediction", Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::SGBasketball_eventShowThrowPrediction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::SGBasketball_eventShowThrowPrediction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execShowThrowPrediction)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowThrowPrediction(Z_Param_Out_ThrowDirection,Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function ShowThrowPrediction *********************************

// ********** Begin Class ASGBasketball Function ThrowBall *****************************************
struct Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics
{
	struct SGBasketball_eventThrowBall_Parms
	{
		FVector ThrowDirection;
		float ThrowPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventThrowBall_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketball_eventThrowBall_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::NewProp_ThrowPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketball, nullptr, "ThrowBall", Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::SGBasketball_eventThrowBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::SGBasketball_eventThrowBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketball_ThrowBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketball_ThrowBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketball::execThrowBall)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowBall(Z_Param_Out_ThrowDirection,Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGBasketball Function ThrowBall *******************************************

// ********** Begin Class ASGBasketball ************************************************************
void ASGBasketball::StaticRegisterNativesASGBasketball()
{
	UClass* Class = ASGBasketball::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEnhancedBouncePhysics", &ASGBasketball::execApplyEnhancedBouncePhysics },
		{ "ApplySpinDecay", &ASGBasketball::execApplySpinDecay },
		{ "CalculateEnhancedInitialVelocity", &ASGBasketball::execCalculateEnhancedInitialVelocity },
		{ "CalculateInitialVelocity", &ASGBasketball::execCalculateInitialVelocity },
		{ "CalculateRealisticBasketballSpin", &ASGBasketball::execCalculateRealisticBasketballSpin },
		{ "CalculateRealisticSpin", &ASGBasketball::execCalculateRealisticSpin },
		{ "CanBePickedUp", &ASGBasketball::execCanBePickedUp },
		{ "CanInteract", &ASGBasketball::execCanInteract },
		{ "DrawTrajectoryVisualization", &ASGBasketball::execDrawTrajectoryVisualization },
		{ "DropBall", &ASGBasketball::execDropBall },
		{ "GetBallMesh", &ASGBasketball::execGetBallMesh },
		{ "GetCollisionComponent", &ASGBasketball::execGetCollisionComponent },
		{ "GetHoldingPlayer", &ASGBasketball::execGetHoldingPlayer },
		{ "GetLastThrower", &ASGBasketball::execGetLastThrower },
		{ "HasBeenThrown", &ASGBasketball::execHasBeenThrown },
		{ "IsBeingHeld", &ASGBasketball::execIsBeingHeld },
		{ "MulticastOnBasketballDropped", &ASGBasketball::execMulticastOnBasketballDropped },
		{ "MulticastOnBasketballPickedUp", &ASGBasketball::execMulticastOnBasketballPickedUp },
		{ "MulticastOnBasketballThrown", &ASGBasketball::execMulticastOnBasketballThrown },
		{ "NotifyGameManagerOfScore", &ASGBasketball::execNotifyGameManagerOfScore },
		{ "NotifyGameManagerOfThrow", &ASGBasketball::execNotifyGameManagerOfThrow },
		{ "OnHit", &ASGBasketball::execOnHit },
		{ "OnInteract", &ASGBasketball::execOnInteract },
		{ "OnRep_HoldingPlayer", &ASGBasketball::execOnRep_HoldingPlayer },
		{ "OnRep_IsBeingHeld", &ASGBasketball::execOnRep_IsBeingHeld },
		{ "PickupBall", &ASGBasketball::execPickupBall },
		{ "PlayBounceSound", &ASGBasketball::execPlayBounceSound },
		{ "PlayEnhancedBounceSound", &ASGBasketball::execPlayEnhancedBounceSound },
		{ "PredictAndShowTrajectory", &ASGBasketball::execPredictAndShowTrajectory },
		{ "PredictBounceVelocity", &ASGBasketball::execPredictBounceVelocity },
		{ "PredictTrajectoryPath", &ASGBasketball::execPredictTrajectoryPath },
		{ "RegisterMissedShot", &ASGBasketball::execRegisterMissedShot },
		{ "ServerDropBall", &ASGBasketball::execServerDropBall },
		{ "ServerPickupBall", &ASGBasketball::execServerPickupBall },
		{ "ServerThrowBall", &ASGBasketball::execServerThrowBall },
		{ "ShowThrowPrediction", &ASGBasketball::execShowThrowPrediction },
		{ "ThrowBall", &ASGBasketball::execThrowBall },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGBasketball;
UClass* ASGBasketball::GetPrivateStaticClass()
{
	using TClass = ASGBasketball;
	if (!Z_Registration_Info_UClass_ASGBasketball.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGBasketball"),
			Z_Registration_Info_UClass_ASGBasketball.InnerSingleton,
			StaticRegisterNativesASGBasketball,
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
	return Z_Registration_Info_UClass_ASGBasketball.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGBasketball_NoRegister()
{
	return ASGBasketball::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Basketball/SGBasketball.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrajectoryPrediction_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Trajectory Prediction Properties - PUBLIC for external access\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trajectory Prediction Properties - PUBLIC for external access" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectorySteps_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable/disable trajectory lines\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable trajectory lines" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryStepTime_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of prediction steps\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of prediction steps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryLineThickness_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time between prediction steps\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between prediction steps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryLineDuration_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Thickness of trajectory lines\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thickness of trajectory lines" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryLineColor_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long trajectory lines stay visible\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long trajectory lines stay visible" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPointColor_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color of trajectory lines\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of trajectory lines" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPointSize_MetaData[] = {
		{ "Category", "Basketball Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color of predicted impact point\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of predicted impact point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusableComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction component for pickup\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction component for pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMass_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball properties - INCREASED TO REALISTIC SIZE\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball properties - INCREASED TO REALISTIC SIZE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallRadius_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// kg, realistic basketball weight\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "kg, realistic basketball weight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceRestitution_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm, realistic basketball radius (was 18.0f, now proper basketball size)\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm, realistic basketball radius (was 18.0f, now proper basketball size)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupRange_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much it bounces\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much it bounces" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastThrowPower_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated throw properties for multiplayer\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated throw properties for multiplayer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastThrowDirection_MetaData[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBeingHeld_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingPlayer_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenThrown_MetaData[] = {
		{ "Category", "Shot Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shot tracking\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shot tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastThrower_MetaData[] = {
		{ "Category", "Shot Tracking" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowStartLocation_MetaData[] = {
		{ "Category", "Shot Tracking" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowStartTime_MetaData[] = {
		{ "Category", "Shot Tracking" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceSoundCue_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound effects\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirResistanceMultiplier_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced Basketball Properties for Realistic Physics\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Basketball Properties for Realistic Physics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnusEffectStrength_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier for air resistance effects\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier for air resistance effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinDecayMultiplier_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Strength of Magnus effect from spin\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength of Magnus effect from spin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRealisticPhysics_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How quickly spin decays on bounces\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How quickly spin decays on bounces" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceRandomization_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggle for enhanced physics\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle for enhanced physics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectSurfaceTypes_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Surface Detection and Physics\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface Detection and Physics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBounceVelocity_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to detect and respond to different surfaces\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketball.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to detect and respond to different surfaces" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bShowTrajectoryPrediction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrajectoryPrediction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrajectorySteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectoryStepTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectoryLineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectoryLineDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrajectoryLineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPointColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactPointSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusableComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PickupRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastThrowPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastThrowDirection;
	static void NewProp_bIsBeingHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBeingHeld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingPlayer;
	static void NewProp_bHasBeenThrown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenThrown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastThrower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowStartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowStartTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BounceSoundCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSoundCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowSoundCue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirResistanceMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MagnusEffectStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinDecayMultiplier;
	static void NewProp_bEnableRealisticPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRealisticPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceRandomization;
	static void NewProp_bDetectSurfaceTypes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectSurfaceTypes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumBounceVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGBasketball_ApplyEnhancedBouncePhysics, "ApplyEnhancedBouncePhysics" }, // 1170087471
		{ &Z_Construct_UFunction_ASGBasketball_ApplySpinDecay, "ApplySpinDecay" }, // 391766202
		{ &Z_Construct_UFunction_ASGBasketball_CalculateEnhancedInitialVelocity, "CalculateEnhancedInitialVelocity" }, // 1273545730
		{ &Z_Construct_UFunction_ASGBasketball_CalculateInitialVelocity, "CalculateInitialVelocity" }, // 974246616
		{ &Z_Construct_UFunction_ASGBasketball_CalculateRealisticBasketballSpin, "CalculateRealisticBasketballSpin" }, // 3273565980
		{ &Z_Construct_UFunction_ASGBasketball_CalculateRealisticSpin, "CalculateRealisticSpin" }, // 21918033
		{ &Z_Construct_UFunction_ASGBasketball_CanBePickedUp, "CanBePickedUp" }, // 1997982802
		{ &Z_Construct_UFunction_ASGBasketball_CanInteract, "CanInteract" }, // 1852425550
		{ &Z_Construct_UFunction_ASGBasketball_DrawTrajectoryVisualization, "DrawTrajectoryVisualization" }, // 1065236346
		{ &Z_Construct_UFunction_ASGBasketball_DropBall, "DropBall" }, // 360396100
		{ &Z_Construct_UFunction_ASGBasketball_GetBallMesh, "GetBallMesh" }, // 3711227406
		{ &Z_Construct_UFunction_ASGBasketball_GetCollisionComponent, "GetCollisionComponent" }, // 3532262149
		{ &Z_Construct_UFunction_ASGBasketball_GetHoldingPlayer, "GetHoldingPlayer" }, // 2253345748
		{ &Z_Construct_UFunction_ASGBasketball_GetLastThrower, "GetLastThrower" }, // 1039066033
		{ &Z_Construct_UFunction_ASGBasketball_HasBeenThrown, "HasBeenThrown" }, // 3340432579
		{ &Z_Construct_UFunction_ASGBasketball_IsBeingHeld, "IsBeingHeld" }, // 4191996754
		{ &Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballDropped, "MulticastOnBasketballDropped" }, // 370908776
		{ &Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballPickedUp, "MulticastOnBasketballPickedUp" }, // 1577816970
		{ &Z_Construct_UFunction_ASGBasketball_MulticastOnBasketballThrown, "MulticastOnBasketballThrown" }, // 606143247
		{ &Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfScore, "NotifyGameManagerOfScore" }, // 4203782181
		{ &Z_Construct_UFunction_ASGBasketball_NotifyGameManagerOfThrow, "NotifyGameManagerOfThrow" }, // 4044967274
		{ &Z_Construct_UFunction_ASGBasketball_OnHit, "OnHit" }, // 219900785
		{ &Z_Construct_UFunction_ASGBasketball_OnInteract, "OnInteract" }, // 3075767412
		{ &Z_Construct_UFunction_ASGBasketball_OnRep_HoldingPlayer, "OnRep_HoldingPlayer" }, // 492668999
		{ &Z_Construct_UFunction_ASGBasketball_OnRep_IsBeingHeld, "OnRep_IsBeingHeld" }, // 3281866979
		{ &Z_Construct_UFunction_ASGBasketball_PickupBall, "PickupBall" }, // 343377604
		{ &Z_Construct_UFunction_ASGBasketball_PlayBounceSound, "PlayBounceSound" }, // 3937721361
		{ &Z_Construct_UFunction_ASGBasketball_PlayEnhancedBounceSound, "PlayEnhancedBounceSound" }, // 3049305851
		{ &Z_Construct_UFunction_ASGBasketball_PredictAndShowTrajectory, "PredictAndShowTrajectory" }, // 1727296790
		{ &Z_Construct_UFunction_ASGBasketball_PredictBounceVelocity, "PredictBounceVelocity" }, // 3964162366
		{ &Z_Construct_UFunction_ASGBasketball_PredictTrajectoryPath, "PredictTrajectoryPath" }, // 816919010
		{ &Z_Construct_UFunction_ASGBasketball_RegisterMissedShot, "RegisterMissedShot" }, // 1023163227
		{ &Z_Construct_UFunction_ASGBasketball_ServerDropBall, "ServerDropBall" }, // 867038512
		{ &Z_Construct_UFunction_ASGBasketball_ServerPickupBall, "ServerPickupBall" }, // 2598853539
		{ &Z_Construct_UFunction_ASGBasketball_ServerThrowBall, "ServerThrowBall" }, // 544775545
		{ &Z_Construct_UFunction_ASGBasketball_ShowThrowPrediction, "ShowThrowPrediction" }, // 1580275272
		{ &Z_Construct_UFunction_ASGBasketball_ThrowBall, "ThrowBall" }, // 2666059312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGBasketball>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASGBasketball_Statics::NewProp_bShowTrajectoryPrediction_SetBit(void* Obj)
{
	((ASGBasketball*)Obj)->bShowTrajectoryPrediction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_bShowTrajectoryPrediction = { "bShowTrajectoryPrediction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketball), &Z_Construct_UClass_ASGBasketball_Statics::NewProp_bShowTrajectoryPrediction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTrajectoryPrediction_MetaData), NewProp_bShowTrajectoryPrediction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectorySteps = { "TrajectorySteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, TrajectorySteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectorySteps_MetaData), NewProp_TrajectorySteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryStepTime = { "TrajectoryStepTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, TrajectoryStepTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryStepTime_MetaData), NewProp_TrajectoryStepTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryLineThickness = { "TrajectoryLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, TrajectoryLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryLineThickness_MetaData), NewProp_TrajectoryLineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryLineDuration = { "TrajectoryLineDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, TrajectoryLineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryLineDuration_MetaData), NewProp_TrajectoryLineDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryLineColor = { "TrajectoryLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, TrajectoryLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryLineColor_MetaData), NewProp_TrajectoryLineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_ImpactPointColor = { "ImpactPointColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, ImpactPointColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPointColor_MetaData), NewProp_ImpactPointColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_ImpactPointSize = { "ImpactPointSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, ImpactPointSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPointSize_MetaData), NewProp_ImpactPointSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMesh_MetaData), NewProp_BallMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_FocusableComponent = { "FocusableComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, FocusableComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusableComponent_MetaData), NewProp_FocusableComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_BallMass = { "BallMass", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, BallMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMass_MetaData), NewProp_BallMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_BallRadius = { "BallRadius", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, BallRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallRadius_MetaData), NewProp_BallRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_BounceRestitution = { "BounceRestitution", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, BounceRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceRestitution_MetaData), NewProp_BounceRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_PickupRange = { "PickupRange", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, PickupRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupRange_MetaData), NewProp_PickupRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_LastThrowPower = { "LastThrowPower", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, LastThrowPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastThrowPower_MetaData), NewProp_LastThrowPower_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_LastThrowDirection = { "LastThrowDirection", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, LastThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastThrowDirection_MetaData), NewProp_LastThrowDirection_MetaData) };
void Z_Construct_UClass_ASGBasketball_Statics::NewProp_bIsBeingHeld_SetBit(void* Obj)
{
	((ASGBasketball*)Obj)->bIsBeingHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_bIsBeingHeld = { "bIsBeingHeld", "OnRep_IsBeingHeld", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketball), &Z_Construct_UClass_ASGBasketball_Statics::NewProp_bIsBeingHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBeingHeld_MetaData), NewProp_bIsBeingHeld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_HoldingPlayer = { "HoldingPlayer", "OnRep_HoldingPlayer", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, HoldingPlayer), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingPlayer_MetaData), NewProp_HoldingPlayer_MetaData) };
void Z_Construct_UClass_ASGBasketball_Statics::NewProp_bHasBeenThrown_SetBit(void* Obj)
{
	((ASGBasketball*)Obj)->bHasBeenThrown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_bHasBeenThrown = { "bHasBeenThrown", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketball), &Z_Construct_UClass_ASGBasketball_Statics::NewProp_bHasBeenThrown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenThrown_MetaData), NewProp_bHasBeenThrown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_LastThrower = { "LastThrower", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, LastThrower), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastThrower_MetaData), NewProp_LastThrower_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_ThrowStartLocation = { "ThrowStartLocation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, ThrowStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowStartLocation_MetaData), NewProp_ThrowStartLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_ThrowStartTime = { "ThrowStartTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, ThrowStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowStartTime_MetaData), NewProp_ThrowStartTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_BounceSoundCue = { "BounceSoundCue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, BounceSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceSoundCue_MetaData), NewProp_BounceSoundCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_PickupSoundCue = { "PickupSoundCue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, PickupSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSoundCue_MetaData), NewProp_PickupSoundCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_ThrowSoundCue = { "ThrowSoundCue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, ThrowSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowSoundCue_MetaData), NewProp_ThrowSoundCue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_AirResistanceMultiplier = { "AirResistanceMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, AirResistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirResistanceMultiplier_MetaData), NewProp_AirResistanceMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_MagnusEffectStrength = { "MagnusEffectStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, MagnusEffectStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnusEffectStrength_MetaData), NewProp_MagnusEffectStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_SpinDecayMultiplier = { "SpinDecayMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, SpinDecayMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinDecayMultiplier_MetaData), NewProp_SpinDecayMultiplier_MetaData) };
void Z_Construct_UClass_ASGBasketball_Statics::NewProp_bEnableRealisticPhysics_SetBit(void* Obj)
{
	((ASGBasketball*)Obj)->bEnableRealisticPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_bEnableRealisticPhysics = { "bEnableRealisticPhysics", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketball), &Z_Construct_UClass_ASGBasketball_Statics::NewProp_bEnableRealisticPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRealisticPhysics_MetaData), NewProp_bEnableRealisticPhysics_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_BounceRandomization = { "BounceRandomization", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, BounceRandomization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceRandomization_MetaData), NewProp_BounceRandomization_MetaData) };
void Z_Construct_UClass_ASGBasketball_Statics::NewProp_bDetectSurfaceTypes_SetBit(void* Obj)
{
	((ASGBasketball*)Obj)->bDetectSurfaceTypes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_bDetectSurfaceTypes = { "bDetectSurfaceTypes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketball), &Z_Construct_UClass_ASGBasketball_Statics::NewProp_bDetectSurfaceTypes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectSurfaceTypes_MetaData), NewProp_bDetectSurfaceTypes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketball_Statics::NewProp_MinimumBounceVelocity = { "MinimumBounceVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketball, MinimumBounceVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBounceVelocity_MetaData), NewProp_MinimumBounceVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGBasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_bShowTrajectoryPrediction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectorySteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryStepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryLineDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_TrajectoryLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_ImpactPointColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_ImpactPointSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_BallMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_FocusableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_BallMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_BallRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_BounceRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_PickupRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_LastThrowPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_LastThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_bIsBeingHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_HoldingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_bHasBeenThrown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_LastThrower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_ThrowStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_ThrowStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_BounceSoundCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_PickupSoundCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_ThrowSoundCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_AirResistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_MagnusEffectStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_SpinDecayMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_bEnableRealisticPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_BounceRandomization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_bDetectSurfaceTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketball_Statics::NewProp_MinimumBounceVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketball_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGBasketball_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketball_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGBasketball_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGBasketball, ISGInteractable), false },  // 3465886030
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGBasketball_Statics::ClassParams = {
	&ASGBasketball::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGBasketball_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketball_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketball_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGBasketball_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGBasketball()
{
	if (!Z_Registration_Info_UClass_ASGBasketball.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGBasketball.OuterSingleton, Z_Construct_UClass_ASGBasketball_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGBasketball.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGBasketball::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_BallRadius(TEXT("BallRadius"));
	static FName Name_PickupRange(TEXT("PickupRange"));
	static FName Name_LastThrowPower(TEXT("LastThrowPower"));
	static FName Name_LastThrowDirection(TEXT("LastThrowDirection"));
	static FName Name_bIsBeingHeld(TEXT("bIsBeingHeld"));
	static FName Name_HoldingPlayer(TEXT("HoldingPlayer"));
	static FName Name_bHasBeenThrown(TEXT("bHasBeenThrown"));
	static FName Name_LastThrower(TEXT("LastThrower"));
	const bool bIsValid = true
		&& Name_BallRadius == ClassReps[(int32)ENetFields_Private::BallRadius].Property->GetFName()
		&& Name_PickupRange == ClassReps[(int32)ENetFields_Private::PickupRange].Property->GetFName()
		&& Name_LastThrowPower == ClassReps[(int32)ENetFields_Private::LastThrowPower].Property->GetFName()
		&& Name_LastThrowDirection == ClassReps[(int32)ENetFields_Private::LastThrowDirection].Property->GetFName()
		&& Name_bIsBeingHeld == ClassReps[(int32)ENetFields_Private::bIsBeingHeld].Property->GetFName()
		&& Name_HoldingPlayer == ClassReps[(int32)ENetFields_Private::HoldingPlayer].Property->GetFName()
		&& Name_bHasBeenThrown == ClassReps[(int32)ENetFields_Private::bHasBeenThrown].Property->GetFName()
		&& Name_LastThrower == ClassReps[(int32)ENetFields_Private::LastThrower].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGBasketball"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGBasketball);
ASGBasketball::~ASGBasketball() {}
// ********** End Class ASGBasketball **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGBasketball, ASGBasketball::StaticClass, TEXT("ASGBasketball"), &Z_Registration_Info_UClass_ASGBasketball, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGBasketball), 2879725180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h__Script_SocialGolf_3601173336(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
