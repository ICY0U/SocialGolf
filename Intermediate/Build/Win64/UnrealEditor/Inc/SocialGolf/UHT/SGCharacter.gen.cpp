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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketball_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupCandle_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubManager_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractionComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGCharacter Function CalculateOptimalThrowPower *************************
struct Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics
{
	struct SGCharacter_eventCalculateOptimalThrowPower_Parms
	{
		FVector ThrowDirection;
		float BasePower;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventCalculateOptimalThrowPower_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::NewProp_BasePower = { "BasePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventCalculateOptimalThrowPower_Parms, BasePower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventCalculateOptimalThrowPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::NewProp_ThrowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::NewProp_BasePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "CalculateOptimalThrowPower", Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::SGCharacter_eventCalculateOptimalThrowPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::SGCharacter_eventCalculateOptimalThrowPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execCalculateOptimalThrowPower)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BasePower);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateOptimalThrowPower(Z_Param_Out_ThrowDirection,Z_Param_BasePower);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function CalculateOptimalThrowPower ***************************

// ********** Begin Class ASGCharacter Function DropBasketball *************************************
struct Z_Construct_UFunction_ASGCharacter_DropBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_DropBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "DropBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_DropBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_DropBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_DropBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_DropBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execDropBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropBasketball();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function DropBasketball ***************************************

// ********** Begin Class ASGCharacter Function ForceRefreshAppearance *****************************
struct Z_Construct_UFunction_ASGCharacter_ForceRefreshAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug function to force refresh appearance\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug function to force refresh appearance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ForceRefreshAppearance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ForceRefreshAppearance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ForceRefreshAppearance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ForceRefreshAppearance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ForceRefreshAppearance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ForceRefreshAppearance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execForceRefreshAppearance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceRefreshAppearance();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ForceRefreshAppearance *******************************

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

// ********** Begin Class ASGCharacter Function GetHeldBasketball **********************************
struct Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics
{
	struct SGCharacter_eventGetHeldBasketball_Parms
	{
		ASGBasketball* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventGetHeldBasketball_Parms, ReturnValue), Z_Construct_UClass_ASGBasketball_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "GetHeldBasketball", Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::SGCharacter_eventGetHeldBasketball_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::SGCharacter_eventGetHeldBasketball_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_GetHeldBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_GetHeldBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execGetHeldBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASGBasketball**)Z_Param__Result=P_THIS->GetHeldBasketball();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function GetHeldBasketball ************************************

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

// ********** Begin Class ASGCharacter Function InitializeDefaultMaterials *************************
struct Z_Construct_UFunction_ASGCharacter_InitializeDefaultMaterials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_InitializeDefaultMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "InitializeDefaultMaterials", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_InitializeDefaultMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_InitializeDefaultMaterials_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_InitializeDefaultMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_InitializeDefaultMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execInitializeDefaultMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDefaultMaterials();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function InitializeDefaultMaterials ***************************

// ********** Begin Class ASGCharacter Function IsHoldingBasketball ********************************
struct Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics
{
	struct SGCharacter_eventIsHoldingBasketball_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCharacter_eventIsHoldingBasketball_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCharacter_eventIsHoldingBasketball_Parms), &Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "IsHoldingBasketball", Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::SGCharacter_eventIsHoldingBasketball_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::SGCharacter_eventIsHoldingBasketball_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execIsHoldingBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHoldingBasketball();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function IsHoldingBasketball **********************************

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

// ********** Begin Class ASGCharacter Function MulticastNotifyAppearanceChanged *******************
struct SGCharacter_eventMulticastNotifyAppearanceChanged_Parms
{
	FString PlayerName;
	FString ChangeType;
};
static FName NAME_ASGCharacter_MulticastNotifyAppearanceChanged = FName(TEXT("MulticastNotifyAppearanceChanged"));
void ASGCharacter::MulticastNotifyAppearanceChanged(const FString& PlayerName, const FString& ChangeType)
{
	SGCharacter_eventMulticastNotifyAppearanceChanged_Parms Parms;
	Parms.PlayerName=PlayerName;
	Parms.ChangeType=ChangeType;
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_MulticastNotifyAppearanceChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multicast RPC to notify all clients about appearance changes\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast RPC to notify all clients about appearance changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChangeType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventMulticastNotifyAppearanceChanged_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventMulticastNotifyAppearanceChanged_Parms, ChangeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeType_MetaData), NewProp_ChangeType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::NewProp_ChangeType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "MulticastNotifyAppearanceChanged", Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::PropPointers), sizeof(SGCharacter_eventMulticastNotifyAppearanceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGCharacter_eventMulticastNotifyAppearanceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execMulticastNotifyAppearanceChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChangeType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastNotifyAppearanceChanged_Implementation(Z_Param_PlayerName,Z_Param_ChangeType);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function MulticastNotifyAppearanceChanged *********************

// ********** Begin Class ASGCharacter Function OnRep_HeldBasketball *******************************
struct Z_Construct_UFunction_ASGCharacter_OnRep_HeldBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_OnRep_HeldBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "OnRep_HeldBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_OnRep_HeldBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_OnRep_HeldBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_OnRep_HeldBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_OnRep_HeldBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execOnRep_HeldBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HeldBasketball();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function OnRep_HeldBasketball *********************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optimized maximum power for realistic shots (replicated)\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optimized maximum power for realistic shots (replicated)" },
#endif
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

// ********** Begin Class ASGCharacter Function RandomizeAllPlayersAppearance **********************
struct Z_Construct_UFunction_ASGCharacter_RandomizeAllPlayersAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to randomize all players' appearances (server only)\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to randomize all players' appearances (server only)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_RandomizeAllPlayersAppearance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "RandomizeAllPlayersAppearance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_RandomizeAllPlayersAppearance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_RandomizeAllPlayersAppearance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_RandomizeAllPlayersAppearance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_RandomizeAllPlayersAppearance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execRandomizeAllPlayersAppearance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RandomizeAllPlayersAppearance();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function RandomizeAllPlayersAppearance ************************

// ********** Begin Class ASGCharacter Function RandomizePlayerAppearance **************************
struct Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics
{
	struct SGCharacter_eventRandomizePlayerAppearance_Parms
	{
		ASGCharacter* TargetPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to randomize another player's appearance (server only)\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to randomize another player's appearance (server only)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventRandomizePlayerAppearance_Parms, TargetPlayer), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::NewProp_TargetPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "RandomizePlayerAppearance", Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::SGCharacter_eventRandomizePlayerAppearance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::SGCharacter_eventRandomizePlayerAppearance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execRandomizePlayerAppearance)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_TargetPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RandomizePlayerAppearance(Z_Param_TargetPlayer);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function RandomizePlayerAppearance ****************************

// ********** Begin Class ASGCharacter Function ReleaseBasketball **********************************
struct Z_Construct_UFunction_ASGCharacter_ReleaseBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ReleaseBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ReleaseBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ReleaseBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ReleaseBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ReleaseBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ReleaseBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execReleaseBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseBasketball();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ReleaseBasketball ************************************

// ********** Begin Class ASGCharacter Function ReleaseBasketballShot ******************************
struct Z_Construct_UFunction_ASGCharacter_ReleaseBasketballShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ReleaseBasketballShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ReleaseBasketballShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ReleaseBasketballShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ReleaseBasketballShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ReleaseBasketballShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ReleaseBasketballShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execReleaseBasketballShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseBasketballShot();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ReleaseBasketballShot ********************************

// ********** Begin Class ASGCharacter Function ReleaseGolf ****************************************
struct Z_Construct_UFunction_ASGCharacter_ReleaseGolf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ReleaseGolf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ReleaseGolf", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ReleaseGolf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ReleaseGolf_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ReleaseGolf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ReleaseGolf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execReleaseGolf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseGolf();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ReleaseGolf ******************************************

// ********** Begin Class ASGCharacter Function ServerCycleHeadMaterial ****************************
static FName NAME_ASGCharacter_ServerCycleHeadMaterial = FName(TEXT("ServerCycleHeadMaterial"));
void ASGCharacter::ServerCycleHeadMaterial()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerCycleHeadMaterial);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGCharacter_ServerCycleHeadMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerCycleHeadMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerCycleHeadMaterial", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerCycleHeadMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerCycleHeadMaterial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ServerCycleHeadMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerCycleHeadMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerCycleHeadMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCycleHeadMaterial_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerCycleHeadMaterial ******************************

// ********** Begin Class ASGCharacter Function ServerCycleTorsoMaterial ***************************
static FName NAME_ASGCharacter_ServerCycleTorsoMaterial = FName(TEXT("ServerCycleTorsoMaterial"));
void ASGCharacter::ServerCycleTorsoMaterial()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerCycleTorsoMaterial);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGCharacter_ServerCycleTorsoMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPCs for multiplayer customization\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPCs for multiplayer customization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerCycleTorsoMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerCycleTorsoMaterial", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerCycleTorsoMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerCycleTorsoMaterial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ServerCycleTorsoMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerCycleTorsoMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerCycleTorsoMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerCycleTorsoMaterial_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerCycleTorsoMaterial *****************************

// ********** Begin Class ASGCharacter Function ServerDropBasketball *******************************
static FName NAME_ASGCharacter_ServerDropBasketball = FName(TEXT("ServerDropBasketball"));
void ASGCharacter::ServerDropBasketball()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerDropBasketball);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGCharacter_ServerDropBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerDropBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerDropBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerDropBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerDropBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ServerDropBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerDropBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerDropBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDropBasketball_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerDropBasketball *********************************

// ********** Begin Class ASGCharacter Function ServerRandomizeAppearance **************************
static FName NAME_ASGCharacter_ServerRandomizeAppearance = FName(TEXT("ServerRandomizeAppearance"));
void ASGCharacter::ServerRandomizeAppearance()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerRandomizeAppearance);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGCharacter_ServerRandomizeAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPC for multiplayer randomize appearance\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPC for multiplayer randomize appearance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerRandomizeAppearance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerRandomizeAppearance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerRandomizeAppearance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerRandomizeAppearance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ServerRandomizeAppearance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerRandomizeAppearance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerRandomizeAppearance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRandomizeAppearance_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerRandomizeAppearance ****************************

// ********** Begin Class ASGCharacter Function ServerSetCustomColors ******************************
struct SGCharacter_eventServerSetCustomColors_Parms
{
	FLinearColor NewPrimaryColor;
	FLinearColor NewSecondaryColor;
	FLinearColor NewAccentColor;
};
static FName NAME_ASGCharacter_ServerSetCustomColors = FName(TEXT("ServerSetCustomColors"));
void ASGCharacter::ServerSetCustomColors(FLinearColor NewPrimaryColor, FLinearColor NewSecondaryColor, FLinearColor NewAccentColor)
{
	SGCharacter_eventServerSetCustomColors_Parms Parms;
	Parms.NewPrimaryColor=NewPrimaryColor;
	Parms.NewSecondaryColor=NewSecondaryColor;
	Parms.NewAccentColor=NewAccentColor;
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerSetCustomColors);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPrimaryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSecondaryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAccentColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::NewProp_NewPrimaryColor = { "NewPrimaryColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventServerSetCustomColors_Parms, NewPrimaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::NewProp_NewSecondaryColor = { "NewSecondaryColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventServerSetCustomColors_Parms, NewSecondaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::NewProp_NewAccentColor = { "NewAccentColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventServerSetCustomColors_Parms, NewAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::NewProp_NewPrimaryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::NewProp_NewSecondaryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::NewProp_NewAccentColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerSetCustomColors", Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::PropPointers), sizeof(SGCharacter_eventServerSetCustomColors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGCharacter_eventServerSetCustomColors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerSetCustomColors)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewPrimaryColor);
	P_GET_STRUCT(FLinearColor,Z_Param_NewSecondaryColor);
	P_GET_STRUCT(FLinearColor,Z_Param_NewAccentColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetCustomColors_Implementation(Z_Param_NewPrimaryColor,Z_Param_NewSecondaryColor,Z_Param_NewAccentColor);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerSetCustomColors ********************************

// ********** Begin Class ASGCharacter Function ServerStartChargingBasketball **********************
static FName NAME_ASGCharacter_ServerStartChargingBasketball = FName(TEXT("ServerStartChargingBasketball"));
void ASGCharacter::ServerStartChargingBasketball()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerStartChargingBasketball);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGCharacter_ServerStartChargingBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerStartChargingBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerStartChargingBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerStartChargingBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerStartChargingBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ServerStartChargingBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerStartChargingBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerStartChargingBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartChargingBasketball_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerStartChargingBasketball ************************

// ********** Begin Class ASGCharacter Function ServerStopChargingBasketball ***********************
static FName NAME_ASGCharacter_ServerStopChargingBasketball = FName(TEXT("ServerStopChargingBasketball"));
void ASGCharacter::ServerStopChargingBasketball()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerStopChargingBasketball);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGCharacter_ServerStopChargingBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerStopChargingBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerStopChargingBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerStopChargingBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerStopChargingBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_ServerStopChargingBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerStopChargingBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerStopChargingBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopChargingBasketball_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerStopChargingBasketball *************************

// ********** Begin Class ASGCharacter Function ServerThrowBasketball ******************************
struct SGCharacter_eventServerThrowBasketball_Parms
{
	float ThrowPower;
};
static FName NAME_ASGCharacter_ServerThrowBasketball = FName(TEXT("ServerThrowBasketball"));
void ASGCharacter::ServerThrowBasketball(float ThrowPower)
{
	SGCharacter_eventServerThrowBasketball_Parms Parms;
	Parms.ThrowPower=ThrowPower;
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerThrowBasketball);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball server RPCs for multiplayer\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball server RPCs for multiplayer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventServerThrowBasketball_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::NewProp_ThrowPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerThrowBasketball", Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::PropPointers), sizeof(SGCharacter_eventServerThrowBasketball_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGCharacter_eventServerThrowBasketball_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerThrowBasketball)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerThrowBasketball_Implementation(Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerThrowBasketball ********************************

// ********** Begin Class ASGCharacter Function ServerThrowBasketballWithDirection *****************
struct SGCharacter_eventServerThrowBasketballWithDirection_Parms
{
	float ThrowPower;
	FVector ThrowDirection;
};
static FName NAME_ASGCharacter_ServerThrowBasketballWithDirection = FName(TEXT("ServerThrowBasketballWithDirection"));
void ASGCharacter::ServerThrowBasketballWithDirection(float ThrowPower, FVector const& ThrowDirection)
{
	SGCharacter_eventServerThrowBasketballWithDirection_Parms Parms;
	Parms.ThrowPower=ThrowPower;
	Parms.ThrowDirection=ThrowDirection;
	UFunction* Func = FindFunctionChecked(NAME_ASGCharacter_ServerThrowBasketballWithDirection);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventServerThrowBasketballWithDirection_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventServerThrowBasketballWithDirection_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowDirection_MetaData), NewProp_ThrowDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::NewProp_ThrowPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::NewProp_ThrowDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ServerThrowBasketballWithDirection", Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::PropPointers), sizeof(SGCharacter_eventServerThrowBasketballWithDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGCharacter_eventServerThrowBasketballWithDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execServerThrowBasketballWithDirection)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_GET_STRUCT(FVector,Z_Param_ThrowDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerThrowBasketballWithDirection_Implementation(Z_Param_ThrowPower,Z_Param_ThrowDirection);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ServerThrowBasketballWithDirection *******************

// ********** Begin Class ASGCharacter Function SetHeldBasketball **********************************
struct Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics
{
	struct SGCharacter_eventSetHeldBasketball_Parms
	{
		ASGBasketball* Basketball;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball system\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Basketball;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::NewProp_Basketball = { "Basketball", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventSetHeldBasketball_Parms, Basketball), Z_Construct_UClass_ASGBasketball_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::NewProp_Basketball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "SetHeldBasketball", Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::SGCharacter_eventSetHeldBasketball_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::SGCharacter_eventSetHeldBasketball_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_SetHeldBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_SetHeldBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execSetHeldBasketball)
{
	P_GET_OBJECT(ASGBasketball,Z_Param_Basketball);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeldBasketball(Z_Param_Basketball);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function SetHeldBasketball ************************************

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

// ********** Begin Class ASGCharacter Function SpawnBasketball ************************************
struct Z_Construct_UFunction_ASGCharacter_SpawnBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_SpawnBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "SpawnBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SpawnBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_SpawnBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_SpawnBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_SpawnBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execSpawnBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBasketball();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function SpawnBasketball **************************************

// ********** Begin Class ASGCharacter Function SpawnBasketballHoop ********************************
struct Z_Construct_UFunction_ASGCharacter_SpawnBasketballHoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_SpawnBasketballHoop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "SpawnBasketballHoop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SpawnBasketballHoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_SpawnBasketballHoop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_SpawnBasketballHoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_SpawnBasketballHoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execSpawnBasketballHoop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBasketballHoop();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function SpawnBasketballHoop **********************************

// ********** Begin Class ASGCharacter Function SpawnGolfBall **************************************
struct Z_Construct_UFunction_ASGCharacter_SpawnGolfBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Golf ball spawning function\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Golf ball spawning function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_SpawnGolfBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "SpawnGolfBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_SpawnGolfBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_SpawnGolfBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_SpawnGolfBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_SpawnGolfBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execSpawnGolfBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnGolfBall();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function SpawnGolfBall ****************************************

// ********** Begin Class ASGCharacter Function StartChargingBasketball ****************************
struct Z_Construct_UFunction_ASGCharacter_StartChargingBasketball_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Separate basketball functions (no conflicts)\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Separate basketball functions (no conflicts)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_StartChargingBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "StartChargingBasketball", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_StartChargingBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_StartChargingBasketball_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_StartChargingBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_StartChargingBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execStartChargingBasketball)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChargingBasketball();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function StartChargingBasketball ******************************

// ********** Begin Class ASGCharacter Function StartChargingBasketballShot ************************
struct Z_Construct_UFunction_ASGCharacter_StartChargingBasketballShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball shooting with charging system (like golf)\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball shooting with charging system (like golf)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_StartChargingBasketballShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "StartChargingBasketballShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_StartChargingBasketballShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_StartChargingBasketballShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_StartChargingBasketballShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_StartChargingBasketballShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execStartChargingBasketballShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChargingBasketballShot();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function StartChargingBasketballShot **************************

// ********** Begin Class ASGCharacter Function StartChargingGolf **********************************
struct Z_Construct_UFunction_ASGCharacter_StartChargingGolf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Separate golf functions (no conflicts)\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Separate golf functions (no conflicts)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_StartChargingGolf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "StartChargingGolf", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_StartChargingGolf_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_StartChargingGolf_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCharacter_StartChargingGolf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_StartChargingGolf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execStartChargingGolf)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChargingGolf();
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function StartChargingGolf ************************************

// ********** Begin Class ASGCharacter Function ThrowBasketball ************************************
struct Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics
{
	struct SGCharacter_eventThrowBasketball_Parms
	{
		float ThrowPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball" },
		{ "CPP_Default_ThrowPower", "1200.000000" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrowPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::NewProp_ThrowPower = { "ThrowPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCharacter_eventThrowBasketball_Parms, ThrowPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::NewProp_ThrowPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCharacter, nullptr, "ThrowBasketball", Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::SGCharacter_eventThrowBasketball_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::SGCharacter_eventThrowBasketball_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCharacter_ThrowBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCharacter_ThrowBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCharacter::execThrowBasketball)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowBasketball(Z_Param_ThrowPower);
	P_NATIVE_END;
}
// ********** End Class ASGCharacter Function ThrowBasketball **************************************

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
		{ "CalculateOptimalThrowPower", &ASGCharacter::execCalculateOptimalThrowPower },
		{ "DropBasketball", &ASGCharacter::execDropBasketball },
		{ "ForceRefreshAppearance", &ASGCharacter::execForceRefreshAppearance },
		{ "ForceStandUp", &ASGCharacter::execForceStandUp },
		{ "GetGolfClubManager", &ASGCharacter::execGetGolfClubManager },
		{ "GetHeldBasketball", &ASGCharacter::execGetHeldBasketball },
		{ "GetHeldCandle", &ASGCharacter::execGetHeldCandle },
		{ "InitializeDefaultMaterials", &ASGCharacter::execInitializeDefaultMaterials },
		{ "IsHoldingBasketball", &ASGCharacter::execIsHoldingBasketball },
		{ "IsHoldingCandle", &ASGCharacter::execIsHoldingCandle },
		{ "IsSitting", &ASGCharacter::execIsSitting },
		{ "MulticastNotifyAppearanceChanged", &ASGCharacter::execMulticastNotifyAppearanceChanged },
		{ "OnRep_HeldBasketball", &ASGCharacter::execOnRep_HeldBasketball },
		{ "OnRep_HeldCandle", &ASGCharacter::execOnRep_HeldCandle },
		{ "OnRep_IsSitting", &ASGCharacter::execOnRep_IsSitting },
		{ "RandomizeAllPlayersAppearance", &ASGCharacter::execRandomizeAllPlayersAppearance },
		{ "RandomizePlayerAppearance", &ASGCharacter::execRandomizePlayerAppearance },
		{ "ReleaseBasketball", &ASGCharacter::execReleaseBasketball },
		{ "ReleaseBasketballShot", &ASGCharacter::execReleaseBasketballShot },
		{ "ReleaseGolf", &ASGCharacter::execReleaseGolf },
		{ "ServerCycleHeadMaterial", &ASGCharacter::execServerCycleHeadMaterial },
		{ "ServerCycleTorsoMaterial", &ASGCharacter::execServerCycleTorsoMaterial },
		{ "ServerDropBasketball", &ASGCharacter::execServerDropBasketball },
		{ "ServerRandomizeAppearance", &ASGCharacter::execServerRandomizeAppearance },
		{ "ServerSetCustomColors", &ASGCharacter::execServerSetCustomColors },
		{ "ServerStartChargingBasketball", &ASGCharacter::execServerStartChargingBasketball },
		{ "ServerStopChargingBasketball", &ASGCharacter::execServerStopChargingBasketball },
		{ "ServerThrowBasketball", &ASGCharacter::execServerThrowBasketball },
		{ "ServerThrowBasketballWithDirection", &ASGCharacter::execServerThrowBasketballWithDirection },
		{ "SetHeldBasketball", &ASGCharacter::execSetHeldBasketball },
		{ "SetHeldCandle", &ASGCharacter::execSetHeldCandle },
		{ "SetMouseSensitivity", &ASGCharacter::execSetMouseSensitivity },
		{ "SetSittingState", &ASGCharacter::execSetSittingState },
		{ "SpawnBasketball", &ASGCharacter::execSpawnBasketball },
		{ "SpawnBasketballHoop", &ASGCharacter::execSpawnBasketballHoop },
		{ "SpawnGolfBall", &ASGCharacter::execSpawnGolfBall },
		{ "StartChargingBasketball", &ASGCharacter::execStartChargingBasketball },
		{ "StartChargingBasketballShot", &ASGCharacter::execStartChargingBasketballShot },
		{ "StartChargingGolf", &ASGCharacter::execStartChargingGolf },
		{ "ThrowBasketball", &ASGCharacter::execThrowBasketball },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasketballCameraOffset_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera offset settings for basketball\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera offset settings for basketball" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasketballChargingCameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransitionSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargingCameraTransitionSpeed_MetaData[] = {
		{ "Category", "Camera" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldBasketball_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball state\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsChargingShot_MetaData[] = {
		{ "Category", "Golf" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Golf charging system\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Golf charging system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotChargeTime_MetaData[] = {
		{ "Category", "Golf" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChargeTime_MetaData[] = {
		{ "Category", "Golf" },
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPower_MetaData[] = {
		{ "Category", "Golf" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum charge time in seconds\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum charge time in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPower_MetaData[] = {
		{ "Category", "Golf" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reduced from 10.0f\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reduced from 10.0f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasketballMinPower_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball charging system (integrated with golf charging) - ENHANCED REALISTIC SETTINGS\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball charging system (integrated with golf charging) - ENHANCED REALISTIC SETTINGS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasketballMaxPower_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reduced minimum power for better control (replicated)\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reduced minimum power for better control (replicated)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static void NewProp_bInvertMouseY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasketballCameraOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasketballChargingCameraOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTransitionSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargingCameraTransitionSpeed;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeldBasketball;
	static void NewProp_bIsChargingShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChargingShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotChargeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxChargeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasketballMinPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BasketballMaxPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGCharacter_CalculateOptimalThrowPower, "CalculateOptimalThrowPower" }, // 992785617
		{ &Z_Construct_UFunction_ASGCharacter_DropBasketball, "DropBasketball" }, // 193893730
		{ &Z_Construct_UFunction_ASGCharacter_ForceRefreshAppearance, "ForceRefreshAppearance" }, // 1691631855
		{ &Z_Construct_UFunction_ASGCharacter_ForceStandUp, "ForceStandUp" }, // 2910955906
		{ &Z_Construct_UFunction_ASGCharacter_GetGolfClubManager, "GetGolfClubManager" }, // 387617003
		{ &Z_Construct_UFunction_ASGCharacter_GetHeldBasketball, "GetHeldBasketball" }, // 266426821
		{ &Z_Construct_UFunction_ASGCharacter_GetHeldCandle, "GetHeldCandle" }, // 2886883673
		{ &Z_Construct_UFunction_ASGCharacter_InitializeDefaultMaterials, "InitializeDefaultMaterials" }, // 781093614
		{ &Z_Construct_UFunction_ASGCharacter_IsHoldingBasketball, "IsHoldingBasketball" }, // 218816672
		{ &Z_Construct_UFunction_ASGCharacter_IsHoldingCandle, "IsHoldingCandle" }, // 1031534720
		{ &Z_Construct_UFunction_ASGCharacter_IsSitting, "IsSitting" }, // 2085313915
		{ &Z_Construct_UFunction_ASGCharacter_MulticastNotifyAppearanceChanged, "MulticastNotifyAppearanceChanged" }, // 526007757
		{ &Z_Construct_UFunction_ASGCharacter_OnRep_HeldBasketball, "OnRep_HeldBasketball" }, // 1521144765
		{ &Z_Construct_UFunction_ASGCharacter_OnRep_HeldCandle, "OnRep_HeldCandle" }, // 3159767774
		{ &Z_Construct_UFunction_ASGCharacter_OnRep_IsSitting, "OnRep_IsSitting" }, // 395284840
		{ &Z_Construct_UFunction_ASGCharacter_RandomizeAllPlayersAppearance, "RandomizeAllPlayersAppearance" }, // 1576733952
		{ &Z_Construct_UFunction_ASGCharacter_RandomizePlayerAppearance, "RandomizePlayerAppearance" }, // 3605005733
		{ &Z_Construct_UFunction_ASGCharacter_ReleaseBasketball, "ReleaseBasketball" }, // 1623981729
		{ &Z_Construct_UFunction_ASGCharacter_ReleaseBasketballShot, "ReleaseBasketballShot" }, // 907545860
		{ &Z_Construct_UFunction_ASGCharacter_ReleaseGolf, "ReleaseGolf" }, // 1161123862
		{ &Z_Construct_UFunction_ASGCharacter_ServerCycleHeadMaterial, "ServerCycleHeadMaterial" }, // 4087684834
		{ &Z_Construct_UFunction_ASGCharacter_ServerCycleTorsoMaterial, "ServerCycleTorsoMaterial" }, // 3564409311
		{ &Z_Construct_UFunction_ASGCharacter_ServerDropBasketball, "ServerDropBasketball" }, // 1595346218
		{ &Z_Construct_UFunction_ASGCharacter_ServerRandomizeAppearance, "ServerRandomizeAppearance" }, // 3416315889
		{ &Z_Construct_UFunction_ASGCharacter_ServerSetCustomColors, "ServerSetCustomColors" }, // 1876706535
		{ &Z_Construct_UFunction_ASGCharacter_ServerStartChargingBasketball, "ServerStartChargingBasketball" }, // 421627346
		{ &Z_Construct_UFunction_ASGCharacter_ServerStopChargingBasketball, "ServerStopChargingBasketball" }, // 2715566241
		{ &Z_Construct_UFunction_ASGCharacter_ServerThrowBasketball, "ServerThrowBasketball" }, // 841853507
		{ &Z_Construct_UFunction_ASGCharacter_ServerThrowBasketballWithDirection, "ServerThrowBasketballWithDirection" }, // 1765809335
		{ &Z_Construct_UFunction_ASGCharacter_SetHeldBasketball, "SetHeldBasketball" }, // 3997586124
		{ &Z_Construct_UFunction_ASGCharacter_SetHeldCandle, "SetHeldCandle" }, // 1610938126
		{ &Z_Construct_UFunction_ASGCharacter_SetMouseSensitivity, "SetMouseSensitivity" }, // 1255980357
		{ &Z_Construct_UFunction_ASGCharacter_SetSittingState, "SetSittingState" }, // 535476422
		{ &Z_Construct_UFunction_ASGCharacter_SpawnBasketball, "SpawnBasketball" }, // 2538000880
		{ &Z_Construct_UFunction_ASGCharacter_SpawnBasketballHoop, "SpawnBasketballHoop" }, // 1829262499
		{ &Z_Construct_UFunction_ASGCharacter_SpawnGolfBall, "SpawnGolfBall" }, // 3798911319
		{ &Z_Construct_UFunction_ASGCharacter_StartChargingBasketball, "StartChargingBasketball" }, // 786565979
		{ &Z_Construct_UFunction_ASGCharacter_StartChargingBasketballShot, "StartChargingBasketballShot" }, // 404781406
		{ &Z_Construct_UFunction_ASGCharacter_StartChargingGolf, "StartChargingGolf" }, // 4141660336
		{ &Z_Construct_UFunction_ASGCharacter_ThrowBasketball, "ThrowBasketball" }, // 2401501251
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballCameraOffset = { "BasketballCameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, BasketballCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasketballCameraOffset_MetaData), NewProp_BasketballCameraOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballChargingCameraOffset = { "BasketballChargingCameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, BasketballChargingCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasketballChargingCameraOffset_MetaData), NewProp_BasketballChargingCameraOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_CameraTransitionSpeed = { "CameraTransitionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, CameraTransitionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTransitionSpeed_MetaData), NewProp_CameraTransitionSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_ChargingCameraTransitionSpeed = { "ChargingCameraTransitionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, ChargingCameraTransitionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargingCameraTransitionSpeed_MetaData), NewProp_ChargingCameraTransitionSpeed_MetaData) };
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_HeldBasketball = { "HeldBasketball", "OnRep_HeldBasketball", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, HeldBasketball), Z_Construct_UClass_ASGBasketball_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldBasketball_MetaData), NewProp_HeldBasketball_MetaData) };
void Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsChargingShot_SetBit(void* Obj)
{
	((ASGCharacter*)Obj)->bIsChargingShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsChargingShot = { "bIsChargingShot", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGCharacter), &Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsChargingShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsChargingShot_MetaData), NewProp_bIsChargingShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_ShotChargeTime = { "ShotChargeTime", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, ShotChargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotChargeTime_MetaData), NewProp_ShotChargeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_MaxChargeTime = { "MaxChargeTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, MaxChargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChargeTime_MetaData), NewProp_MaxChargeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_MinPower = { "MinPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, MinPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPower_MetaData), NewProp_MinPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_MaxPower = { "MaxPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, MaxPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPower_MetaData), NewProp_MaxPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballMinPower = { "BasketballMinPower", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, BasketballMinPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasketballMinPower_MetaData), NewProp_BasketballMinPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballMaxPower = { "BasketballMaxPower", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCharacter, BasketballMaxPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasketballMaxPower_MetaData), NewProp_BasketballMaxPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_bInvertMouseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballCameraOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballChargingCameraOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_CameraTransitionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_ChargingCameraTransitionSpeed,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_HeldBasketball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_bIsChargingShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_ShotChargeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_MaxChargeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_MinPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_MaxPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballMinPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCharacter_Statics::NewProp_BasketballMaxPower,
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
	static FName Name_HeldBasketball(TEXT("HeldBasketball"));
	static FName Name_bIsChargingShot(TEXT("bIsChargingShot"));
	static FName Name_BasketballMinPower(TEXT("BasketballMinPower"));
	static FName Name_BasketballMaxPower(TEXT("BasketballMaxPower"));
	const bool bIsValid = true
		&& Name_bIsSitting == ClassReps[(int32)ENetFields_Private::bIsSitting].Property->GetFName()
		&& Name_HeldCandle == ClassReps[(int32)ENetFields_Private::HeldCandle].Property->GetFName()
		&& Name_HeldBasketball == ClassReps[(int32)ENetFields_Private::HeldBasketball].Property->GetFName()
		&& Name_bIsChargingShot == ClassReps[(int32)ENetFields_Private::bIsChargingShot].Property->GetFName()
		&& Name_BasketballMinPower == ClassReps[(int32)ENetFields_Private::BasketballMinPower].Property->GetFName()
		&& Name_BasketballMaxPower == ClassReps[(int32)ENetFields_Private::BasketballMaxPower].Property->GetFName();
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
		{ Z_Construct_UClass_ASGCharacter, ASGCharacter::StaticClass, TEXT("ASGCharacter"), &Z_Registration_Info_UClass_ASGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGCharacter), 1783193068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h__Script_SocialGolf_1125961954(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
