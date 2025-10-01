// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Lighting/SGCandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCandle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCandle();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCandle_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableInterface_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCandleLightChanged *************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnCandleLightChanged_Parms
	{
		bool bIsLit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnCandleLightChanged_Parms*)Obj)->bIsLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit = { "bIsLit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnCandleLightChanged_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::NewProp_bIsLit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnCandleLightChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnCandleLightChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnCandleLightChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCandleLightChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCandleLightChanged, bool bIsLit)
{
	struct _Script_SocialGolf_eventOnCandleLightChanged_Parms
	{
		bool bIsLit;
	};
	_Script_SocialGolf_eventOnCandleLightChanged_Parms Parms;
	Parms.bIsLit=bIsLit ? true : false;
	OnCandleLightChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCandleLightChanged ***************************************************

// ********** Begin Class ASGCandle Function ExtinguishCandle **************************************
struct Z_Construct_UFunction_ASGCandle_ExtinguishCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Candle" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCandle_ExtinguishCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCandle, nullptr, "ExtinguishCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_ExtinguishCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCandle_ExtinguishCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCandle_ExtinguishCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCandle_ExtinguishCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCandle::execExtinguishCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExtinguishCandle();
	P_NATIVE_END;
}
// ********** End Class ASGCandle Function ExtinguishCandle ****************************************

// ********** Begin Class ASGCandle Function IsLit *************************************************
struct Z_Construct_UFunction_ASGCandle_IsLit_Statics
{
	struct SGCandle_eventIsLit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Candle" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGCandle_IsLit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCandle_eventIsLit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGCandle_IsLit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCandle_eventIsLit_Parms), &Z_Construct_UFunction_ASGCandle_IsLit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCandle_IsLit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCandle_IsLit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_IsLit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCandle_IsLit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCandle, nullptr, "IsLit", Z_Construct_UFunction_ASGCandle_IsLit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_IsLit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCandle_IsLit_Statics::SGCandle_eventIsLit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_IsLit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCandle_IsLit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCandle_IsLit_Statics::SGCandle_eventIsLit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCandle_IsLit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCandle_IsLit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCandle::execIsLit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLit();
	P_NATIVE_END;
}
// ********** End Class ASGCandle Function IsLit ***************************************************

// ********** Begin Class ASGCandle Function LightCandle *******************************************
struct Z_Construct_UFunction_ASGCandle_LightCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Candle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Candle functionality\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Candle functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCandle_LightCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCandle, nullptr, "LightCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_LightCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCandle_LightCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCandle_LightCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCandle_LightCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCandle::execLightCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LightCandle();
	P_NATIVE_END;
}
// ********** End Class ASGCandle Function LightCandle *********************************************

// ********** Begin Class ASGCandle Function OnFlickerTimelineUpdate *******************************
struct Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics
{
	struct SGCandle_eventOnFlickerTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCandle_eventOnFlickerTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCandle, nullptr, "OnFlickerTimelineUpdate", Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::SGCandle_eventOnFlickerTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::SGCandle_eventOnFlickerTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCandle::execOnFlickerTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFlickerTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ASGCandle Function OnFlickerTimelineUpdate *********************************

// ********** Begin Class ASGCandle Function OnRep_IsLit *******************************************
struct Z_Construct_UFunction_ASGCandle_OnRep_IsLit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCandle_OnRep_IsLit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCandle, nullptr, "OnRep_IsLit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_OnRep_IsLit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCandle_OnRep_IsLit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCandle_OnRep_IsLit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCandle_OnRep_IsLit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCandle::execOnRep_IsLit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsLit();
	P_NATIVE_END;
}
// ********** End Class ASGCandle Function OnRep_IsLit *********************************************

// ********** Begin Class ASGCandle Function ToggleCandle ******************************************
struct Z_Construct_UFunction_ASGCandle_ToggleCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Candle" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCandle_ToggleCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCandle, nullptr, "ToggleCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCandle_ToggleCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCandle_ToggleCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCandle_ToggleCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCandle_ToggleCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCandle::execToggleCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCandle();
	P_NATIVE_END;
}
// ********** End Class ASGCandle Function ToggleCandle ********************************************

// ********** Begin Class ASGCandle ****************************************************************
void ASGCandle::StaticRegisterNativesASGCandle()
{
	UClass* Class = ASGCandle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExtinguishCandle", &ASGCandle::execExtinguishCandle },
		{ "IsLit", &ASGCandle::execIsLit },
		{ "LightCandle", &ASGCandle::execLightCandle },
		{ "OnFlickerTimelineUpdate", &ASGCandle::execOnFlickerTimelineUpdate },
		{ "OnRep_IsLit", &ASGCandle::execOnRep_IsLit },
		{ "ToggleCandle", &ASGCandle::execToggleCandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGCandle;
UClass* ASGCandle::GetPrivateStaticClass()
{
	using TClass = ASGCandle;
	if (!Z_Registration_Info_UClass_ASGCandle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCandle"),
			Z_Registration_Info_UClass_ASGCandle.InnerSingleton,
			StaticRegisterNativesASGCandle,
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
	return Z_Registration_Info_UClass_ASGCandle.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGCandle_NoRegister()
{
	return ASGCandle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lighting/SGCandle.h" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleBaseMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleWickMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlameParticles_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleAudioComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusableComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerTimeline_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartLit_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandleLightColor_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLightIntensity_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Warm candle color\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Warm candle color" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightRadius_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerIntensity_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerSpeed_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much the light flickers (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much the light flickers (0-1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LitText_MetaData[] = {
		{ "Category", "Candle Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How fast the light flickers\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the light flickers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlitText_MetaData[] = {
		{ "Category", "Candle Settings" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlameParticleSystem_MetaData[] = {
		{ "Category", "Candle Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effects\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtinguishSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientFlameSound_MetaData[] = {
		{ "Category", "Candle Effects" },
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCandleLightChanged_MetaData[] = {
		{ "Category", "Candle Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLit_MetaData[] = {
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerCurve_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flickering system\n" },
#endif
		{ "ModuleRelativePath", "Lighting/SGCandle.h" },
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
	static void NewProp_bStartLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartLit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CandleLightColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLightIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlickerSpeed;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LitText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnlitText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlameParticleSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtinguishSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmbientFlameSound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCandleLightChanged;
	static void NewProp_bIsLit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlickerCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGCandle_ExtinguishCandle, "ExtinguishCandle" }, // 793204307
		{ &Z_Construct_UFunction_ASGCandle_IsLit, "IsLit" }, // 3370827782
		{ &Z_Construct_UFunction_ASGCandle_LightCandle, "LightCandle" }, // 4163615605
		{ &Z_Construct_UFunction_ASGCandle_OnFlickerTimelineUpdate, "OnFlickerTimelineUpdate" }, // 41500821
		{ &Z_Construct_UFunction_ASGCandle_OnRep_IsLit, "OnRep_IsLit" }, // 3922155098
		{ &Z_Construct_UFunction_ASGCandle_ToggleCandle, "ToggleCandle" }, // 1715278498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGCandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleBaseMesh = { "CandleBaseMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, CandleBaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleBaseMesh_MetaData), NewProp_CandleBaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleWickMesh = { "CandleWickMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, CandleWickMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleWickMesh_MetaData), NewProp_CandleWickMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleLight = { "CandleLight", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, CandleLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleLight_MetaData), NewProp_CandleLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_FlameParticles = { "FlameParticles", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, FlameParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlameParticles_MetaData), NewProp_FlameParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleAudioComponent = { "CandleAudioComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, CandleAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleAudioComponent_MetaData), NewProp_CandleAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_FocusableComponent = { "FocusableComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, FocusableComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusableComponent_MetaData), NewProp_FocusableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerTimeline = { "FlickerTimeline", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, FlickerTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerTimeline_MetaData), NewProp_FlickerTimeline_MetaData) };
void Z_Construct_UClass_ASGCandle_Statics::NewProp_bStartLit_SetBit(void* Obj)
{
	((ASGCandle*)Obj)->bStartLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_bStartLit = { "bStartLit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGCandle), &Z_Construct_UClass_ASGCandle_Statics::NewProp_bStartLit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartLit_MetaData), NewProp_bStartLit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleLightColor = { "CandleLightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, CandleLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandleLightColor_MetaData), NewProp_CandleLightColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_BaseLightIntensity = { "BaseLightIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, BaseLightIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLightIntensity_MetaData), NewProp_BaseLightIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_LightRadius = { "LightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, LightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightRadius_MetaData), NewProp_LightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerIntensity = { "FlickerIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, FlickerIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerIntensity_MetaData), NewProp_FlickerIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerSpeed = { "FlickerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, FlickerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerSpeed_MetaData), NewProp_FlickerSpeed_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_LitText = { "LitText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, LitText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LitText_MetaData), NewProp_LitText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_UnlitText = { "UnlitText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, UnlitText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlitText_MetaData), NewProp_UnlitText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_FlameParticleSystem = { "FlameParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, FlameParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlameParticleSystem_MetaData), NewProp_FlameParticleSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_LightSound = { "LightSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, LightSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightSound_MetaData), NewProp_LightSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_ExtinguishSound = { "ExtinguishSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, ExtinguishSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtinguishSound_MetaData), NewProp_ExtinguishSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_AmbientFlameSound = { "AmbientFlameSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, AmbientFlameSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientFlameSound_MetaData), NewProp_AmbientFlameSound_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_OnCandleLightChanged = { "OnCandleLightChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, OnCandleLightChanged), Z_Construct_UDelegateFunction_SocialGolf_OnCandleLightChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCandleLightChanged_MetaData), NewProp_OnCandleLightChanged_MetaData) }; // 3873161075
void Z_Construct_UClass_ASGCandle_Statics::NewProp_bIsLit_SetBit(void* Obj)
{
	((ASGCandle*)Obj)->bIsLit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_bIsLit = { "bIsLit", "OnRep_IsLit", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGCandle), &Z_Construct_UClass_ASGCandle_Statics::NewProp_bIsLit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLit_MetaData), NewProp_bIsLit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerCurve = { "FlickerCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCandle, FlickerCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerCurve_MetaData), NewProp_FlickerCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGCandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleBaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleWickMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_FlameParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_FocusableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_bStartLit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_CandleLightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_BaseLightIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_LightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_LitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_UnlitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_FlameParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_LightSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_ExtinguishSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_AmbientFlameSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_OnCandleLightChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_bIsLit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCandle_Statics::NewProp_FlickerCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGCandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGCandle_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGCandle, ISGInteractable), false },  // 3465886030
	{ Z_Construct_UClass_USGFocusableInterface_NoRegister, (int32)VTABLE_OFFSET(ASGCandle, ISGFocusableInterface), false },  // 3854201226
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGCandle_Statics::ClassParams = {
	&ASGCandle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGCandle_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGCandle_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCandle_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGCandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGCandle()
{
	if (!Z_Registration_Info_UClass_ASGCandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGCandle.OuterSingleton, Z_Construct_UClass_ASGCandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGCandle.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGCandle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bIsLit(TEXT("bIsLit"));
	const bool bIsValid = true
		&& Name_bIsLit == ClassReps[(int32)ENetFields_Private::bIsLit].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGCandle"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGCandle);
ASGCandle::~ASGCandle() {}
// ********** End Class ASGCandle ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGCandle, ASGCandle::StaticClass, TEXT("ASGCandle"), &Z_Registration_Info_UClass_ASGCandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGCandle), 1837593252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h__Script_SocialGolf_3240950884(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
