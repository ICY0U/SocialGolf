// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Lighting/SGPickupCandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGPickupCandle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupCandle();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupCandle_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableInterface_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPickupCandleStateChanged *******************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnPickupCandleStateChanged_Parms
	{
		bool bIsPickedUp;
		bool bIsLit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPickedUp;
	static void NewProp_bIsLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsPickedUp_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnPickupCandleStateChanged_Parms*)Obj)->bIsPickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsPickedUp = { "bIsPickedUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnPickupCandleStateChanged_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsPickedUp_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsLit_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnPickupCandleStateChanged_Parms*)Obj)->bIsLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsLit = { "bIsLit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnPickupCandleStateChanged_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsLit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::NewProp_bIsLit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnPickupCandleStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnPickupCandleStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnPickupCandleStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPickupCandleStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPickupCandleStateChanged, bool bIsPickedUp, bool bIsLit)
{
	struct _Script_SocialGolf_eventOnPickupCandleStateChanged_Parms
	{
		bool bIsPickedUp;
		bool bIsLit;
	};
	_Script_SocialGolf_eventOnPickupCandleStateChanged_Parms Parms;
	Parms.bIsPickedUp=bIsPickedUp ? true : false;
	Parms.bIsLit=bIsLit ? true : false;
	OnPickupCandleStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPickupCandleStateChanged *********************************************

// ********** Begin Class ASGPickupCandle Function DropCandle **************************************
struct Z_Construct_UFunction_ASGPickupCandle_DropCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_DropCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "DropCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_DropCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_DropCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_DropCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_DropCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execDropCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropCandle();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function DropCandle ****************************************

// ********** Begin Class ASGPickupCandle Function ExtinguishCandle ********************************
struct Z_Construct_UFunction_ASGPickupCandle_ExtinguishCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_ExtinguishCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "ExtinguishCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_ExtinguishCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_ExtinguishCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_ExtinguishCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_ExtinguishCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execExtinguishCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExtinguishCandle();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function ExtinguishCandle **********************************

// ********** Begin Class ASGPickupCandle Function GetCurrentHolder ********************************
struct Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics
{
	struct SGPickupCandle_eventGetCurrentHolder_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPickupCandle_eventGetCurrentHolder_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "GetCurrentHolder", Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::SGPickupCandle_eventGetCurrentHolder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::SGPickupCandle_eventGetCurrentHolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execGetCurrentHolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetCurrentHolder();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function GetCurrentHolder **********************************

// ********** Begin Class ASGPickupCandle Function IsLit *******************************************
struct Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics
{
	struct SGPickupCandle_eventIsLit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGPickupCandle_eventIsLit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGPickupCandle_eventIsLit_Parms), &Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "IsLit", Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::SGPickupCandle_eventIsLit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::SGPickupCandle_eventIsLit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupCandle_IsLit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_IsLit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execIsLit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLit();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function IsLit *********************************************

// ********** Begin Class ASGPickupCandle Function IsPickedUp **************************************
struct Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics
{
	struct SGPickupCandle_eventIsPickedUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGPickupCandle_eventIsPickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGPickupCandle_eventIsPickedUp_Parms), &Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "IsPickedUp", Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::SGPickupCandle_eventIsPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::SGPickupCandle_eventIsPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupCandle_IsPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_IsPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execIsPickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPickedUp();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function IsPickedUp ****************************************

// ********** Begin Class ASGPickupCandle Function LightCandle *************************************
struct Z_Construct_UFunction_ASGPickupCandle_LightCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_LightCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "LightCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_LightCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_LightCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_LightCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_LightCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execLightCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LightCandle();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function LightCandle ***************************************

// ********** Begin Class ASGPickupCandle Function OnFlickerTimelineUpdate *************************
struct Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics
{
	struct SGPickupCandle_eventOnFlickerTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPickupCandle_eventOnFlickerTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "OnFlickerTimelineUpdate", Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::SGPickupCandle_eventOnFlickerTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::SGPickupCandle_eventOnFlickerTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execOnFlickerTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlickerTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function OnFlickerTimelineUpdate ***************************

// ********** Begin Class ASGPickupCandle Function OnRep_CurrentHolder *****************************
struct Z_Construct_UFunction_ASGPickupCandle_OnRep_CurrentHolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_OnRep_CurrentHolder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "OnRep_CurrentHolder", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_OnRep_CurrentHolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_OnRep_CurrentHolder_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_OnRep_CurrentHolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_OnRep_CurrentHolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execOnRep_CurrentHolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHolder();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function OnRep_CurrentHolder *******************************

// ********** Begin Class ASGPickupCandle Function OnRep_IsLit *************************************
struct Z_Construct_UFunction_ASGPickupCandle_OnRep_IsLit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_OnRep_IsLit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "OnRep_IsLit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_OnRep_IsLit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_OnRep_IsLit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_OnRep_IsLit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_OnRep_IsLit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execOnRep_IsLit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsLit();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function OnRep_IsLit ***************************************

// ********** Begin Class ASGPickupCandle Function OnRep_IsPickedUp ********************************
struct Z_Construct_UFunction_ASGPickupCandle_OnRep_IsPickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_OnRep_IsPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "OnRep_IsPickedUp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_OnRep_IsPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_OnRep_IsPickedUp_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_OnRep_IsPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_OnRep_IsPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execOnRep_IsPickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsPickedUp();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function OnRep_IsPickedUp **********************************

// ********** Begin Class ASGPickupCandle Function OnToggleCandlePressed ***************************
struct Z_Construct_UFunction_ASGPickupCandle_OnToggleCandlePressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input actions for when candle is held\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input actions for when candle is held" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_OnToggleCandlePressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "OnToggleCandlePressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_OnToggleCandlePressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_OnToggleCandlePressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_OnToggleCandlePressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_OnToggleCandlePressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execOnToggleCandlePressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnToggleCandlePressed();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function OnToggleCandlePressed *****************************

// ********** Begin Class ASGPickupCandle Function PickupCandle ************************************
struct Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics
{
	struct SGPickupCandle_eventPickupCandle_Parms
	{
		APawn* Holder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pickup functionality\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pickup functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Holder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::NewProp_Holder = { "Holder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPickupCandle_eventPickupCandle_Parms, Holder), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::NewProp_Holder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "PickupCandle", Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::SGPickupCandle_eventPickupCandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::SGPickupCandle_eventPickupCandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupCandle_PickupCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_PickupCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execPickupCandle)
{
	P_GET_OBJECT(APawn,Z_Param_Holder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickupCandle(Z_Param_Holder);
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function PickupCandle **************************************

// ********** Begin Class ASGPickupCandle Function ToggleCandle ************************************
struct Z_Construct_UFunction_ASGPickupCandle_ToggleCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup Candle" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupCandle_ToggleCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupCandle, nullptr, "ToggleCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupCandle_ToggleCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupCandle_ToggleCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPickupCandle_ToggleCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupCandle_ToggleCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupCandle::execToggleCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCandle();
	P_NATIVE_END;
}
// ********** End Class ASGPickupCandle Function ToggleCandle **************************************

// ********** Begin Class ASGPickupCandle **********************************************************
void ASGPickupCandle::StaticRegisterNativesASGPickupCandle()
{
	UClass* Class = ASGPickupCandle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropCandle", &ASGPickupCandle::execDropCandle },
		{ "ExtinguishCandle", &ASGPickupCandle::execExtinguishCandle },
		{ "GetCurrentHolder", &ASGPickupCandle::execGetCurrentHolder },
		{ "IsLit", &ASGPickupCandle::execIsLit },
		{ "IsPickedUp", &ASGPickupCandle::execIsPickedUp },
		{ "LightCandle", &ASGPickupCandle::execLightCandle },
		{ "OnFlickerTimelineUpdate", &ASGPickupCandle::execOnFlickerTimelineUpdate },
		{ "OnRep_CurrentHolder", &ASGPickupCandle::execOnRep_CurrentHolder },
		{ "OnRep_IsLit", &ASGPickupCandle::execOnRep_IsLit },
		{ "OnRep_IsPickedUp", &ASGPickupCandle::execOnRep_IsPickedUp },
		{ "OnToggleCandlePressed", &ASGPickupCandle::execOnToggleCandlePressed },
		{ "PickupCandle", &ASGPickupCandle::execPickupCandle },
		{ "ToggleCandle", &ASGPickupCandle::execToggleCandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGPickupCandle;
UClass* ASGPickupCandle::GetPrivateStaticClass()
{
	using TClass = ASGPickupCandle;
	if (!Z_Registration_Info_UClass_ASGPickupCandle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGPickupCandle"),
			Z_Registration_Info_UClass_ASGPickupCandle.InnerSingleton,
			StaticRegisterNativesASGPickupCandle,
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
	return Z_Registration_Info_UClass_ASGPickupCandle.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGPickupCandle_NoRegister()
{
	return ASGPickupCandle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGPickupCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lighting/SGPickupCandle.h" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleBaseMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleWickMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlameParticles_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleAudioComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusableComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerTimeline_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentPoint_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attachment point when carried\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attachment point when carried" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartLit_MetaData[] = {
		{ "Category", "Pickup Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDropOnExtinguish_MetaData[] = {
		{ "Category", "Pickup Settings" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtinguishOnDrop_MetaData[] = {
		{ "Category", "Pickup Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-drop when extinguished\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-drop when extinguished" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Pickup Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-extinguish when dropped\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-extinguish when dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachOffset_MetaData[] = {
		{ "Category", "Pickup Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Socket to attach to on character\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket to attach to on character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachRotation_MetaData[] = {
		{ "Category", "Pickup Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset from socket\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset from socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachScale_MetaData[] = {
		{ "Category", "Pickup Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation when held\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation when held" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleLightColor_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Candle Settings\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Candle Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLightIntensity_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightRadius_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Slightly dimmer for handheld\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slightly dimmer for handheld" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerIntensity_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Smaller radius for handheld\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smaller radius for handheld" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerSpeed_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// More flicker for handheld\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "More flicker for handheld" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupText_MetaData[] = {
		{ "Category", "Interaction Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text prompts\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text prompts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropText_MetaData[] = {
		{ "Category", "Interaction Text" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightText_MetaData[] = {
		{ "Category", "Interaction Text" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtinguishText_MetaData[] = {
		{ "Category", "Interaction Text" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlameParticleSystem_MetaData[] = {
		{ "Category", "Candle Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effects\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtinguishSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientFlameSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPickupCandleStateChanged_MetaData[] = {
		{ "Category", "Pickup Candle Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPickedUp_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLit_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHolder_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerCurve_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flickering system\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGPickupCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flickering system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandleBaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandleWickMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandleLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CandleAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlickerTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentPoint;
	static void NewProp_bStartLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartLit;
	static void NewProp_bDropOnExtinguish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropOnExtinguish;
	static void NewProp_bExtinguishOnDrop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtinguishOnDrop;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CandleLightColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLightIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerSpeed;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PickupText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DropText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LightText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ExtinguishText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameParticleSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtinguishSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmbientFlameSound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickupCandleStateChanged;
	static void NewProp_bIsPickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPickedUp;
	static void NewProp_bIsLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHolder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlickerCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGPickupCandle_DropCandle, "DropCandle" }, // 2337853820
		{ &Z_Construct_UFunction_ASGPickupCandle_ExtinguishCandle, "ExtinguishCandle" }, // 3871045916
		{ &Z_Construct_UFunction_ASGPickupCandle_GetCurrentHolder, "GetCurrentHolder" }, // 3811743868
		{ &Z_Construct_UFunction_ASGPickupCandle_IsLit, "IsLit" }, // 2697642442
		{ &Z_Construct_UFunction_ASGPickupCandle_IsPickedUp, "IsPickedUp" }, // 2602043823
		{ &Z_Construct_UFunction_ASGPickupCandle_LightCandle, "LightCandle" }, // 2717801391
		{ &Z_Construct_UFunction_ASGPickupCandle_OnFlickerTimelineUpdate, "OnFlickerTimelineUpdate" }, // 1196426842
		{ &Z_Construct_UFunction_ASGPickupCandle_OnRep_CurrentHolder, "OnRep_CurrentHolder" }, // 4267552528
		{ &Z_Construct_UFunction_ASGPickupCandle_OnRep_IsLit, "OnRep_IsLit" }, // 4252677031
		{ &Z_Construct_UFunction_ASGPickupCandle_OnRep_IsPickedUp, "OnRep_IsPickedUp" }, // 1567633508
		{ &Z_Construct_UFunction_ASGPickupCandle_OnToggleCandlePressed, "OnToggleCandlePressed" }, // 3779877376
		{ &Z_Construct_UFunction_ASGPickupCandle_PickupCandle, "PickupCandle" }, // 1343637446
		{ &Z_Construct_UFunction_ASGPickupCandle_ToggleCandle, "ToggleCandle" }, // 4168802695
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGPickupCandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleBaseMesh = { "CandleBaseMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, CandleBaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleBaseMesh_MetaData), NewProp_CandleBaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleWickMesh = { "CandleWickMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, CandleWickMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleWickMesh_MetaData), NewProp_CandleWickMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleLight = { "CandleLight", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, CandleLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleLight_MetaData), NewProp_CandleLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlameParticles = { "FlameParticles", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, FlameParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlameParticles_MetaData), NewProp_FlameParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleAudioComponent = { "CandleAudioComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, CandleAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleAudioComponent_MetaData), NewProp_CandleAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FocusableComponent = { "FocusableComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, FocusableComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusableComponent_MetaData), NewProp_FocusableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerTimeline = { "FlickerTimeline", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, FlickerTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerTimeline_MetaData), NewProp_FlickerTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachmentPoint = { "AttachmentPoint", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, AttachmentPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentPoint_MetaData), NewProp_AttachmentPoint_MetaData) };
void Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bStartLit_SetBit(void* Obj)
{
	((ASGPickupCandle*)Obj)->bStartLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bStartLit = { "bStartLit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPickupCandle), &Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bStartLit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartLit_MetaData), NewProp_bStartLit_MetaData) };
void Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bDropOnExtinguish_SetBit(void* Obj)
{
	((ASGPickupCandle*)Obj)->bDropOnExtinguish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bDropOnExtinguish = { "bDropOnExtinguish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPickupCandle), &Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bDropOnExtinguish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDropOnExtinguish_MetaData), NewProp_bDropOnExtinguish_MetaData) };
void Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bExtinguishOnDrop_SetBit(void* Obj)
{
	((ASGPickupCandle*)Obj)->bExtinguishOnDrop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bExtinguishOnDrop = { "bExtinguishOnDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPickupCandle), &Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bExtinguishOnDrop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtinguishOnDrop_MetaData), NewProp_bExtinguishOnDrop_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachOffset = { "AttachOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, AttachOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachOffset_MetaData), NewProp_AttachOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachRotation = { "AttachRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, AttachRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachRotation_MetaData), NewProp_AttachRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachScale = { "AttachScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, AttachScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachScale_MetaData), NewProp_AttachScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleLightColor = { "CandleLightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, CandleLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleLightColor_MetaData), NewProp_CandleLightColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_BaseLightIntensity = { "BaseLightIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, BaseLightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLightIntensity_MetaData), NewProp_BaseLightIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_LightRadius = { "LightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, LightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightRadius_MetaData), NewProp_LightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerIntensity = { "FlickerIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, FlickerIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerIntensity_MetaData), NewProp_FlickerIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerSpeed = { "FlickerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, FlickerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerSpeed_MetaData), NewProp_FlickerSpeed_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_PickupText = { "PickupText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, PickupText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupText_MetaData), NewProp_PickupText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_DropText = { "DropText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, DropText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropText_MetaData), NewProp_DropText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_LightText = { "LightText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, LightText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightText_MetaData), NewProp_LightText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_ExtinguishText = { "ExtinguishText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, ExtinguishText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtinguishText_MetaData), NewProp_ExtinguishText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlameParticleSystem = { "FlameParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, FlameParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlameParticleSystem_MetaData), NewProp_FlameParticleSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_DropSound = { "DropSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, DropSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropSound_MetaData), NewProp_DropSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_LightSound = { "LightSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, LightSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightSound_MetaData), NewProp_LightSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_ExtinguishSound = { "ExtinguishSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, ExtinguishSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtinguishSound_MetaData), NewProp_ExtinguishSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AmbientFlameSound = { "AmbientFlameSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, AmbientFlameSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientFlameSound_MetaData), NewProp_AmbientFlameSound_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_OnPickupCandleStateChanged = { "OnPickupCandleStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, OnPickupCandleStateChanged), Z_Construct_UDelegateFunction_SocialGolf_OnPickupCandleStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPickupCandleStateChanged_MetaData), NewProp_OnPickupCandleStateChanged_MetaData) }; // 2736580270
void Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsPickedUp_SetBit(void* Obj)
{
	((ASGPickupCandle*)Obj)->bIsPickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsPickedUp = { "bIsPickedUp", "OnRep_IsPickedUp", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPickupCandle), &Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsPickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPickedUp_MetaData), NewProp_bIsPickedUp_MetaData) };
void Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsLit_SetBit(void* Obj)
{
	((ASGPickupCandle*)Obj)->bIsLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsLit = { "bIsLit", "OnRep_IsLit", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPickupCandle), &Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsLit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLit_MetaData), NewProp_bIsLit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CurrentHolder = { "CurrentHolder", "OnRep_CurrentHolder", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, CurrentHolder), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHolder_MetaData), NewProp_CurrentHolder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerCurve = { "FlickerCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupCandle, FlickerCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerCurve_MetaData), NewProp_FlickerCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGPickupCandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleBaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleWickMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlameParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FocusableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachmentPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bStartLit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bDropOnExtinguish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bExtinguishOnDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AttachScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CandleLightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_BaseLightIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_LightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_PickupText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_DropText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_LightText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_ExtinguishText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlameParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_PickupSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_DropSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_LightSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_ExtinguishSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_AmbientFlameSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_OnPickupCandleStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_bIsLit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_CurrentHolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupCandle_Statics::NewProp_FlickerCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupCandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGPickupCandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupCandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGPickupCandle_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGPickupCandle, ISGInteractable), false },  // 3465886030
	{ Z_Construct_UClass_USGFocusableInterface_NoRegister, (int32)VTABLE_OFFSET(ASGPickupCandle, ISGFocusableInterface), false },  // 3854201226
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGPickupCandle_Statics::ClassParams = {
	&ASGPickupCandle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGPickupCandle_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupCandle_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupCandle_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGPickupCandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGPickupCandle()
{
	if (!Z_Registration_Info_UClass_ASGPickupCandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGPickupCandle.OuterSingleton, Z_Construct_UClass_ASGPickupCandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGPickupCandle.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGPickupCandle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bIsPickedUp(TEXT("bIsPickedUp"));
	static FName Name_bIsLit(TEXT("bIsLit"));
	static FName Name_CurrentHolder(TEXT("CurrentHolder"));
	const bool bIsValid = true
		&& Name_bIsPickedUp == ClassReps[(int32)ENetFields_Private::bIsPickedUp].Property->GetFName()
		&& Name_bIsLit == ClassReps[(int32)ENetFields_Private::bIsLit].Property->GetFName()
		&& Name_CurrentHolder == ClassReps[(int32)ENetFields_Private::CurrentHolder].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGPickupCandle"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGPickupCandle);
ASGPickupCandle::~ASGPickupCandle() {}
// ********** End Class ASGPickupCandle ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGPickupCandle, ASGPickupCandle::StaticClass, TEXT("ASGPickupCandle"), &Z_Registration_Info_UClass_ASGPickupCandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGPickupCandle), 3302139346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h__Script_SocialGolf_3550082468(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
