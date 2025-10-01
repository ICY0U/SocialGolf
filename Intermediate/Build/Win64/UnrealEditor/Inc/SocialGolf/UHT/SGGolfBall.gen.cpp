// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGGolfBall.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGGolfBall() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfBall();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfBall_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EGolfBallState();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGolfBallState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGolfBallState;
static UEnum* EGolfBallState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGolfBallState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGolfBallState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_EGolfBallState, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("EGolfBallState"));
	}
	return Z_Registration_Info_UEnum_EGolfBallState.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<EGolfBallState>()
{
	return EGolfBallState_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_EGolfBallState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InFlight.DisplayName", "In Flight" },
		{ "InFlight.Name", "EGolfBallState::InFlight" },
		{ "InWater.DisplayName", "In Water" },
		{ "InWater.Name", "EGolfBallState::InWater" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
		{ "OutOfBounds.DisplayName", "Out of Bounds" },
		{ "OutOfBounds.Name", "EGolfBallState::OutOfBounds" },
		{ "Rolling.DisplayName", "Rolling" },
		{ "Rolling.Name", "EGolfBallState::Rolling" },
		{ "Stationary.DisplayName", "Stationary" },
		{ "Stationary.Name", "EGolfBallState::Stationary" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGolfBallState::Stationary", (int64)EGolfBallState::Stationary },
		{ "EGolfBallState::InFlight", (int64)EGolfBallState::InFlight },
		{ "EGolfBallState::Rolling", (int64)EGolfBallState::Rolling },
		{ "EGolfBallState::InWater", (int64)EGolfBallState::InWater },
		{ "EGolfBallState::OutOfBounds", (int64)EGolfBallState::OutOfBounds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_EGolfBallState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"EGolfBallState",
	"EGolfBallState",
	Z_Construct_UEnum_SocialGolf_EGolfBallState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EGolfBallState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EGolfBallState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_EGolfBallState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_EGolfBallState()
{
	if (!Z_Registration_Info_UEnum_EGolfBallState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGolfBallState.InnerSingleton, Z_Construct_UEnum_SocialGolf_EGolfBallState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGolfBallState.InnerSingleton;
}
// ********** End Enum EGolfBallState **************************************************************

// ********** Begin Class ASGGolfBall Function GetBallRadius ***************************************
struct Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics
{
	struct SGGolfBall_eventGetBallRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventGetBallRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "GetBallRadius", Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::SGGolfBall_eventGetBallRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::SGGolfBall_eventGetBallRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_GetBallRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_GetBallRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execGetBallRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBallRadius();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function GetBallRadius *****************************************

// ********** Begin Class ASGGolfBall Function GetBallState ****************************************
struct Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics
{
	struct SGGolfBall_eventGetBallState_Parms
	{
		EGolfBallState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventGetBallState_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_EGolfBallState, METADATA_PARAMS(0, nullptr) }; // 3117357474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "GetBallState", Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::SGGolfBall_eventGetBallState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::SGGolfBall_eventGetBallState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_GetBallState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_GetBallState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execGetBallState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGolfBallState*)Z_Param__Result=P_THIS->GetBallState();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function GetBallState ******************************************

// ********** Begin Class ASGGolfBall Function GetBallVelocity *************************************
struct Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics
{
	struct SGGolfBall_eventGetBallVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventGetBallVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "GetBallVelocity", Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::SGGolfBall_eventGetBallVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::SGGolfBall_eventGetBallVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_GetBallVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_GetBallVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execGetBallVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBallVelocity();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function GetBallVelocity ***************************************

// ********** Begin Class ASGGolfBall Function GetCurrentSpeed *************************************
struct Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics
{
	struct SGGolfBall_eventGetCurrentSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventGetCurrentSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "GetCurrentSpeed", Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::SGGolfBall_eventGetCurrentSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::SGGolfBall_eventGetCurrentSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execGetCurrentSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function GetCurrentSpeed ***************************************

// ********** Begin Class ASGGolfBall Function GetDistanceTraveled *********************************
struct Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics
{
	struct SGGolfBall_eventGetDistanceTraveled_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventGetDistanceTraveled_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "GetDistanceTraveled", Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::SGGolfBall_eventGetDistanceTraveled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::SGGolfBall_eventGetDistanceTraveled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execGetDistanceTraveled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceTraveled();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function GetDistanceTraveled ***********************************

// ********** Begin Class ASGGolfBall Function GetStrokeCount **************************************
struct Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics
{
	struct SGGolfBall_eventGetStrokeCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventGetStrokeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "GetStrokeCount", Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::SGGolfBall_eventGetStrokeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::SGGolfBall_eventGetStrokeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_GetStrokeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_GetStrokeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execGetStrokeCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStrokeCount();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function GetStrokeCount ****************************************

// ********** Begin Class ASGGolfBall Function HitBall *********************************************
struct Z_Construct_UFunction_ASGGolfBall_HitBall_Statics
{
	struct SGGolfBall_eventHitBall_Parms
	{
		FVector HitDirection;
		float Power;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Golf Ball Functions\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Golf Ball Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventHitBall_Parms, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDirection_MetaData), NewProp_HitDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventHitBall_Parms, Power), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::NewProp_HitDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::NewProp_Power,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "HitBall", Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::SGGolfBall_eventHitBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::SGGolfBall_eventHitBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_HitBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_HitBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execHitBall)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Power);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitBall(Z_Param_Out_HitDirection,Z_Param_Power);
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function HitBall ***********************************************

// ********** Begin Class ASGGolfBall Function HitBallWithClub *************************************
struct Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics
{
	struct SGGolfBall_eventHitBallWithClub_Parms
	{
		FVector HitDirection;
		float Power;
		float ClubPowerMultiplier;
		float ClubLaunchAngle;
		float ClubAccuracy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New overloaded function that takes club parameters\n" },
#endif
		{ "CPP_Default_ClubAccuracy", "0.800000" },
		{ "CPP_Default_ClubLaunchAngle", "25.000000" },
		{ "CPP_Default_ClubPowerMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New overloaded function that takes club parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClubPowerMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClubLaunchAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClubAccuracy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventHitBallWithClub_Parms, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDirection_MetaData), NewProp_HitDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventHitBallWithClub_Parms, Power), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_ClubPowerMultiplier = { "ClubPowerMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventHitBallWithClub_Parms, ClubPowerMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_ClubLaunchAngle = { "ClubLaunchAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventHitBallWithClub_Parms, ClubLaunchAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_ClubAccuracy = { "ClubAccuracy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventHitBallWithClub_Parms, ClubAccuracy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_HitDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_Power,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_ClubPowerMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_ClubLaunchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::NewProp_ClubAccuracy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "HitBallWithClub", Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::SGGolfBall_eventHitBallWithClub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::SGGolfBall_eventHitBallWithClub_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_HitBallWithClub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_HitBallWithClub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execHitBallWithClub)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Power);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClubPowerMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClubLaunchAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClubAccuracy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitBallWithClub(Z_Param_Out_HitDirection,Z_Param_Power,Z_Param_ClubPowerMultiplier,Z_Param_ClubLaunchAngle,Z_Param_ClubAccuracy);
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function HitBallWithClub ***************************************

// ********** Begin Class ASGGolfBall Function IsBallStationary ************************************
struct Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics
{
	struct SGGolfBall_eventIsBallStationary_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGGolfBall_eventIsBallStationary_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGGolfBall_eventIsBallStationary_Parms), &Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "IsBallStationary", Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::SGGolfBall_eventIsBallStationary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::SGGolfBall_eventIsBallStationary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_IsBallStationary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_IsBallStationary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execIsBallStationary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBallStationary();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function IsBallStationary **************************************

// ********** Begin Class ASGGolfBall Function OnHit ***********************************************
struct Z_Construct_UFunction_ASGGolfBall_OnHit_Statics
{
	struct SGGolfBall_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "OnHit", Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::SGGolfBall_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::SGGolfBall_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execOnHit)
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
// ********** End Class ASGGolfBall Function OnHit *************************************************

// ********** Begin Class ASGGolfBall Function PlaceBall *******************************************
struct Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics
{
	struct SGGolfBall_eventPlaceBall_Parms
	{
		FVector NewLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventPlaceBall_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLocation_MetaData), NewProp_NewLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::NewProp_NewLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "PlaceBall", Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::SGGolfBall_eventPlaceBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::SGGolfBall_eventPlaceBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_PlaceBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_PlaceBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execPlaceBall)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceBall(Z_Param_Out_NewLocation);
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function PlaceBall *********************************************

// ********** Begin Class ASGGolfBall Function ResetBall *******************************************
struct Z_Construct_UFunction_ASGGolfBall_ResetBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_ResetBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "ResetBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_ResetBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_ResetBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGGolfBall_ResetBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_ResetBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execResetBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetBall();
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function ResetBall *********************************************

// ********** Begin Class ASGGolfBall Function SetBallSize *****************************************
struct Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics
{
	struct SGGolfBall_eventSetBallSize_Parms
	{
		float NewRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Ball" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfBall_eventSetBallSize_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::NewProp_NewRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfBall, nullptr, "SetBallSize", Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::SGGolfBall_eventSetBallSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::SGGolfBall_eventSetBallSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfBall_SetBallSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfBall_SetBallSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfBall::execSetBallSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBallSize(Z_Param_NewRadius);
	P_NATIVE_END;
}
// ********** End Class ASGGolfBall Function SetBallSize *******************************************

// ********** Begin Class ASGGolfBall **************************************************************
void ASGGolfBall::StaticRegisterNativesASGGolfBall()
{
	UClass* Class = ASGGolfBall::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBallRadius", &ASGGolfBall::execGetBallRadius },
		{ "GetBallState", &ASGGolfBall::execGetBallState },
		{ "GetBallVelocity", &ASGGolfBall::execGetBallVelocity },
		{ "GetCurrentSpeed", &ASGGolfBall::execGetCurrentSpeed },
		{ "GetDistanceTraveled", &ASGGolfBall::execGetDistanceTraveled },
		{ "GetStrokeCount", &ASGGolfBall::execGetStrokeCount },
		{ "HitBall", &ASGGolfBall::execHitBall },
		{ "HitBallWithClub", &ASGGolfBall::execHitBallWithClub },
		{ "IsBallStationary", &ASGGolfBall::execIsBallStationary },
		{ "OnHit", &ASGGolfBall::execOnHit },
		{ "PlaceBall", &ASGGolfBall::execPlaceBall },
		{ "ResetBall", &ASGGolfBall::execResetBall },
		{ "SetBallSize", &ASGGolfBall::execSetBallSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGGolfBall;
UClass* ASGGolfBall::GetPrivateStaticClass()
{
	using TClass = ASGGolfBall;
	if (!Z_Registration_Info_UClass_ASGGolfBall.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGGolfBall"),
			Z_Registration_Info_UClass_ASGGolfBall.InnerSingleton,
			StaticRegisterNativesASGGolfBall,
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
	return Z_Registration_Info_UClass_ASGGolfBall.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGGolfBall_NoRegister()
{
	return ASGGolfBall::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGGolfBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Golf/SGGolfBall.h" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMass_MetaData[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Golf Ball Properties\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Golf Ball Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallRadius_MetaData[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Standard golf ball mass in grams\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Standard golf ball mass in grams" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirResistance_MetaData[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Standard golf ball radius in cm (increased from 2.135f)\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Standard golf ball radius in cm (increased from 2.135f)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollingFriction_MetaData[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reduced from 0.5f for less air resistance\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reduced from 0.5f for less air resistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BounceDamping_MetaData[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increased from 0.3f for more ground friction\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increased from 0.3f for more ground friction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopVelocityThreshold_MetaData[] = {
		{ "Category", "Golf Ball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reduced from 0.6f for less bouncy behavior\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reduced from 0.6f for less bouncy behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Golf Ball State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current State\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStationaryPosition_MetaData[] = {
		{ "Category", "Golf Ball State" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceTraveled_MetaData[] = {
		{ "Category", "Golf Ball State" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrokeCount_MetaData[] = {
		{ "Category", "Golf Ball State" },
		{ "ModuleRelativePath", "Golf/SGGolfBall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopVelocityThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastStationaryPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTraveled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGGolfBall_GetBallRadius, "GetBallRadius" }, // 1396222432
		{ &Z_Construct_UFunction_ASGGolfBall_GetBallState, "GetBallState" }, // 1726718309
		{ &Z_Construct_UFunction_ASGGolfBall_GetBallVelocity, "GetBallVelocity" }, // 3068162341
		{ &Z_Construct_UFunction_ASGGolfBall_GetCurrentSpeed, "GetCurrentSpeed" }, // 192865603
		{ &Z_Construct_UFunction_ASGGolfBall_GetDistanceTraveled, "GetDistanceTraveled" }, // 3485210789
		{ &Z_Construct_UFunction_ASGGolfBall_GetStrokeCount, "GetStrokeCount" }, // 490457035
		{ &Z_Construct_UFunction_ASGGolfBall_HitBall, "HitBall" }, // 2253775113
		{ &Z_Construct_UFunction_ASGGolfBall_HitBallWithClub, "HitBallWithClub" }, // 3137441131
		{ &Z_Construct_UFunction_ASGGolfBall_IsBallStationary, "IsBallStationary" }, // 855139300
		{ &Z_Construct_UFunction_ASGGolfBall_OnHit, "OnHit" }, // 1319239891
		{ &Z_Construct_UFunction_ASGGolfBall_PlaceBall, "PlaceBall" }, // 876803763
		{ &Z_Construct_UFunction_ASGGolfBall_ResetBall, "ResetBall" }, // 1574033983
		{ &Z_Construct_UFunction_ASGGolfBall_SetBallSize, "SetBallSize" }, // 1046256290
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGGolfBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMesh_MetaData), NewProp_BallMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BallMass = { "BallMass", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, BallMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMass_MetaData), NewProp_BallMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BallRadius = { "BallRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, BallRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallRadius_MetaData), NewProp_BallRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_AirResistance = { "AirResistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, AirResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirResistance_MetaData), NewProp_AirResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_RollingFriction = { "RollingFriction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, RollingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollingFriction_MetaData), NewProp_RollingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BounceDamping = { "BounceDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, BounceDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BounceDamping_MetaData), NewProp_BounceDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_StopVelocityThreshold = { "StopVelocityThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, StopVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopVelocityThreshold_MetaData), NewProp_StopVelocityThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, CurrentState), Z_Construct_UEnum_SocialGolf_EGolfBallState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 3117357474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_LastStationaryPosition = { "LastStationaryPosition", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, LastStationaryPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStationaryPosition_MetaData), NewProp_LastStationaryPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_DistanceTraveled = { "DistanceTraveled", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, DistanceTraveled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceTraveled_MetaData), NewProp_DistanceTraveled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGGolfBall_Statics::NewProp_StrokeCount = { "StrokeCount", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfBall, StrokeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeCount_MetaData), NewProp_StrokeCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGGolfBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BallMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BallMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BallRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_AirResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_RollingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_BounceDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_StopVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_LastStationaryPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_DistanceTraveled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfBall_Statics::NewProp_StrokeCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfBall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGGolfBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGGolfBall_Statics::ClassParams = {
	&ASGGolfBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGGolfBall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfBall_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfBall_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGGolfBall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGGolfBall()
{
	if (!Z_Registration_Info_UClass_ASGGolfBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGGolfBall.OuterSingleton, Z_Construct_UClass_ASGGolfBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGGolfBall.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGGolfBall);
ASGGolfBall::~ASGGolfBall() {}
// ********** End Class ASGGolfBall ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGolfBallState_StaticEnum, TEXT("EGolfBallState"), &Z_Registration_Info_UEnum_EGolfBallState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3117357474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGGolfBall, ASGGolfBall::StaticClass, TEXT("ASGGolfBall"), &Z_Registration_Info_UClass_ASGGolfBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGGolfBall), 3112891570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h__Script_SocialGolf_3412486593(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
