// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Characters/SGCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupCandle_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubManager_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractionComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGCharacter Function ForceStandUp ***************************************
struct Z_Construct_UFunction_ASGCharacter_ForceStandUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sitting" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ForceStandUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ForceStandUp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ForceStandUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ForceStandUp_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ForceStandUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ForceStandUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execForceStandUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceStandUp();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ForceStandUp *****************************************

// ********** Begin Class ASGCharacter Function GetGolfClubManager *********************************
struct Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics
{
	struct SGCharacter_eventGetGolfClubManager_Parms
	{
		USGGolfClubManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Golf club system\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Golf club system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventGetGolfClubManager_Parms, ReturnValue), Z_Construct_UClass_USGGolfClubManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "GetGolfClubManager", Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::SGCharacter_eventGetGolfClubManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::SGCharacter_eventGetGolfClubManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_GetGolfClubManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_GetGolfClubManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execGetGolfClubManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGGolfClubManager**)Z_Param__Result=P_THIS->GetGolfClubManager();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function GetGolfClubManager ***********************************

// ********** Begin Class ASGCharacter Function GetHeldCandle **************************************
struct Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics
{
	struct SGCharacter_eventGetHeldCandle_Parms
	{
		ASGPickupCandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventGetHeldCandle_Parms, ReturnValue), Z_Construct_UClass_ASGPickupCandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "GetHeldCandle", Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::SGCharacter_eventGetHeldCandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::SGCharacter_eventGetHeldCandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_GetHeldCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_GetHeldCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execGetHeldCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASGPickupCandle**)Z_Param__Result=P_THIS->GetHeldCandle();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function GetHeldCandle ****************************************

// ********** Begin Class ASGCharacter Function IsHoldingCandle ************************************
struct Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics
{
	struct SGCharacter_eventIsHoldingCandle_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCharacter_eventIsHoldingCandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCharacter_eventIsHoldingCandle_Parms), &Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "IsHoldingCandle", Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::SGCharacter_eventIsHoldingCandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::SGCharacter_eventIsHoldingCandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_IsHoldingCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_IsHoldingCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execIsHoldingCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHoldingCandle();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function IsHoldingCandle **************************************

// ********** Begin Class ASGCharacter Function IsSitting ******************************************
struct Z_Construct_UFunction_ASGCharacter_IsSitting_Statics
{
	struct SGCharacter_eventIsSitting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sitting" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCharacter_eventIsSitting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCharacter_eventIsSitting_Parms), &Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "IsSitting", Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::SGCharacter_eventIsSitting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::SGCharacter_eventIsSitting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_IsSitting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_IsSitting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execIsSitting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSitting();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function IsSitting ********************************************

// ********** Begin Class ASGCharacter Function OnRep_HeldCandle ***********************************
struct Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "OnRep_HeldCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execOnRep_HeldCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HeldCandle();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function OnRep_HeldCandle *************************************

// ********** Begin Class ASGCharacter Function OnRep_IsSitting ************************************
struct Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "OnRep_IsSitting", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execOnRep_IsSitting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsSitting();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function OnRep_IsSitting **************************************

// ********** Begin Class ASGCharacter Function SetHeldCandle **************************************
struct Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics
{
	struct SGCharacter_eventSetHeldCandle_Parms
	{
		ASGPickupCandle* Candle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pickup candle system\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pickup candle system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Candle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::NewProp_Candle = { "Candle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventSetHeldCandle_Parms, Candle), Z_Construct_UClass_ASGPickupCandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::NewProp_Candle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "SetHeldCandle", Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::SGCharacter_eventSetHeldCandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::SGCharacter_eventSetHeldCandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_SetHeldCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_SetHeldCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execSetHeldCandle)
{
	P_GET_OBJECT(ASGPickupCandle,Z_Param_Candle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeldCandle(Z_Param_Candle);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function SetHeldCandle ****************************************

// ********** Begin Class ASGCharacter Function SetMouseSensitivity ********************************
struct Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics
{
	struct SGCharacter_eventSetMouseSensitivity_Parms
	{
		float NewSensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::NewProp_NewSensitivity = { "NewSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventSetMouseSensitivity_Parms, NewSensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::NewProp_NewSensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "SetMouseSensitivity", Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::SGCharacter_eventSetMouseSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::SGCharacter_eventSetMouseSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execSetMouseSensitivity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivity(Z_Param_NewSensitivity);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function SetMouseSensitivity **********************************

// ********** Begin Class ASGCharacter Function SetSittingState ************************************
struct Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics
{
	struct SGCharacter_eventSetSittingState_Parms
	{
		bool bNewSitting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sitting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sitting system\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sitting system" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewSitting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSitting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::NewProp_bNewSitting_SetBit(void* Obj)
{
	((SGCharacter_eventSetSittingState_Parms*)Obj)->bNewSitting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::NewProp_bNewSitting = { "bNewSitting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCharacter_eventSetSittingState_Parms), &Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::NewProp_bNewSitting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::NewProp_bNewSitting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "SetSittingState", Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::SGCharacter_eventSetSittingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::SGCharacter_eventSetSittingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_SetSittingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_SetSittingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execSetSittingState)
{
	P_GET_UBOOL(Z_Param_bNewSitting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSittingState(Z_Param_bNewSitting);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function SetSittingState **************************************

// ********** Begin Class ASGCharacter Function ToggleDebugCollision *******************************
struct Z_Construct_UFunction_ASGCharacter_ToggleDebugCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ToggleDebugCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ToggleDebugCollision", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ToggleDebugCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ToggleDebugCollision_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ToggleDebugCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ToggleDebugCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execToggleDebugCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleDebugCollision();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ToggleDebugCollision *********************************

// ********** Begin Class ASGCharacter *************************************************************
void ASGCharacter::StaticRegisterNativesASGCharacter()
{
	UClass* Class = ASGCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceStandUp", &ASGCharacter::execForceStandUp },
		{ "GetGolfClubManager", &ASGCharacter::execGetGolfClubManager },
		{ "GetHeldCandle", &ASGCharacter::execGetHeldCandle },
		{ "IsHoldingCandle", &ASGCharacter::execIsHoldingCandle },
		{ "IsSitting", &ASGCharacter::execIsSitting },
		{ "OnRep_HeldCandle", &ASGCharacter::execOnRep_HeldCandle },
		{ "OnRep_IsSitting", &ASGCharacter::execOnRep_IsSitting },
		{ "SetHeldCandle", &ASGCharacter::execSetHeldCandle },
		{ "SetMouseSensitivity", &ASGCharacter::execSetMouseSensitivity },
		{ "SetSittingState", &ASGCharacter::execSetSittingState },
		{ "ToggleDebugCollision", &ASGCharacter::execToggleDebugCollision },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGCharacter;
UClass* ASGCharacter::GetPrivateStaticClass()
{
	using TClass = ASGCharacter;
	if (!Z_Registration_Info_UClass_ASGCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCharacter"),
			Z_Registration_Info_UClass_ASGCharacter.InnerSingleton,
			StaticRegisterNativesASGCharacter,
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
	return Z_Registration_Info_UClass_ASGCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGCharacter_NoRegister()
{
	return ASGCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/SGCharacter.h" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input sensitivity settings\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input sensitivity settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMouseY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComp_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GolfClubManager_MetaData[] = {
		{ "Category", "Golf" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceholderRoot_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceholderTorso_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceholderHead_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugCollisionCapsule_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug collision visualization\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug collision visualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugCollision_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug settings\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSitting_MetaData[] = {
		{ "Category", "Sitting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sitting state\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sitting state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldCandle_MetaData[] = {
		{ "Category", "Pickup Candle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pickup candle state\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pickup candle state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static void NewProp_bInvertMouseY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GolfClubManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceholderRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceholderTorso;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceholderHead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugCollisionCapsule;
	static void NewProp_bShowDebugCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugCollision;
	static void NewProp_bIsSitting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSitting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeldCandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGCharacter_ForceStandUp, "ForceStandUp" }, // 2910955906
		{ &Z_Construct_UFunction_ASGCharacter_GetGolfClubManager, "GetGolfClubManager" }, // 387617003
		{ &Z_Construct_UFunction_ASGCharacter_GetHeldCandle, "GetHeldCandle" }, // 2886883673
		{ &Z_Construct_UFunction_ASGCharacter_IsHoldingCandle, "IsHoldingCandle" }, // 1031534720
		{ &Z_Construct_UFunction_ASGCharacter_IsSitting, "IsSitting" }, // 2085313915
		{ &Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle, "OnRep_HeldCandle" }, // 3159767774
		{ &Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting, "OnRep_IsSitting" }, // 1718644888
		{ &Z_Construct_UFunction_ASGCharacter_SetHeldCandle, "SetHeldCandle" }, // 1610938126
		{ &Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity, "SetMouseSensitivity" }, // 1255980357
		{ &Z_Construct_UFunction_ASGCharacter_SetSittingState, "SetSittingState" }, // 535476422
		{ &Z_Construct_UFunction_ASGCharacter_ToggleDebugCollision, "ToggleDebugCollision" }, // 367920617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
void Z_Construct_UClass_ASGCharacter_Statics::NewProp_bInvertMouseY_SetBit(void* Obj)
{
	((ASGCharacter*)Obj)->bInvertMouseY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_bInvertMouseY = { "bInvertMouseY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGCharacter), &Z_Construct_UClass_ASGCharacter_Statics::NewProp_bInvertMouseY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertMouseY_MetaData), NewProp_bInvertMouseY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_InteractionComp = { "InteractionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, InteractionComp), Z_Construct_UClass_USGInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComp_MetaData), NewProp_InteractionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_GolfClubManager = { "GolfClubManager", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, GolfClubManager), Z_Construct_UClass_USGGolfClubManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GolfClubManager_MetaData), NewProp_GolfClubManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_PlaceholderRoot = { "PlaceholderRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, PlaceholderRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceholderRoot_MetaData), NewProp_PlaceholderRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_PlaceholderTorso = { "PlaceholderTorso", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, PlaceholderTorso), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceholderTorso_MetaData), NewProp_PlaceholderTorso_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_PlaceholderHead = { "PlaceholderHead", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, PlaceholderHead), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceholderHead_MetaData), NewProp_PlaceholderHead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_DebugCollisionCapsule = { "DebugCollisionCapsule", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, DebugCollisionCapsule), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugCollisionCapsule_MetaData), NewProp_DebugCollisionCapsule_MetaData) };
void Z_Construct_UClass_ASGCharacter_Statics::NewProp_bShowDebugCollision_SetBit(void* Obj)
{
	((ASGCharacter*)Obj)->bShowDebugCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_bShowDebugCollision = { "bShowDebugCollision", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGCharacter), &Z_Construct_UClass_ASGCharacter_Statics::NewProp_bShowDebugCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugCollision_MetaData), NewProp_bShowDebugCollision_MetaData) };
void Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsSitting_SetBit(void* Obj)
{
	((ASGCharacter*)Obj)->bIsSitting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsSitting = { "bIsSitting", "OnRep_IsSitting", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGCharacter), &Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsSitting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSitting_MetaData), NewProp_bIsSitting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_HeldCandle = { "HeldCandle", "OnRep_HeldCandle", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, HeldCandle), Z_Construct_UClass_ASGPickupCandle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldCandle_MetaData), NewProp_HeldCandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_bInvertMouseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_InteractionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_GolfClubManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_PlaceholderRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_PlaceholderTorso,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_PlaceholderHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_DebugCollisionCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_bShowDebugCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsSitting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_HeldCandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGSaveableInterface_NoRegister, (int32)VTABLE_OFFSET(ASGCharacter, ISGSaveableInterface), false },  // 3905017460
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGCharacter_Statics::ClassParams = {
	&ASGCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGCharacter()
{
	if (!Z_Registration_Info_UClass_ASGCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGCharacter.OuterSingleton, Z_Construct_UClass_ASGCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bIsSitting(TEXT("bIsSitting"));
	static FName Name_HeldCandle(TEXT("HeldCandle"));
	const bool bIsValid = true
		&& Name_bIsSitting == ClassReps[(int32)ENetFields_Private::bIsSitting].Property->GetFName()
		&& Name_HeldCandle == ClassReps[(int32)ENetFields_Private::HeldCandle].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGCharacter);
ASGCharacter::~ASGCharacter() {}
// ********** End Class ASGCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGCharacter, ASGCharacter::StaticClass, TEXT("ASGCharacter"), &Z_Registration_Info_UClass_ASGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGCharacter), 817883736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h__Script_SocialGolf_39186459(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
