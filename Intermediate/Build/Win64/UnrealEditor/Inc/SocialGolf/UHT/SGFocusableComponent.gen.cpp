// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGFocusableComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGFocusableComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnFocusChanged *******************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnFocusChanged__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFocusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFocusChanged)
{
	OnFocusChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnFocusChanged *********************************************************

// ********** Begin Class USGFocusableComponent Function BeginFocus ********************************
struct Z_Construct_UFunction_USGFocusableComponent_BeginFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Focus control\n" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Focus control" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableComponent_BeginFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableComponent, nullptr, "BeginFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_BeginFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableComponent_BeginFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGFocusableComponent_BeginFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableComponent_BeginFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGFocusableComponent::execBeginFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginFocus();
	P_NATIVE_END;
}
// ********** End Class USGFocusableComponent Function BeginFocus **********************************

// ********** Begin Class USGFocusableComponent Function EndFocus **********************************
struct Z_Construct_UFunction_USGFocusableComponent_EndFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableComponent_EndFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableComponent, nullptr, "EndFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_EndFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableComponent_EndFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGFocusableComponent_EndFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableComponent_EndFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGFocusableComponent::execEndFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndFocus();
	P_NATIVE_END;
}
// ********** End Class USGFocusableComponent Function EndFocus ************************************

// ********** Begin Class USGFocusableComponent Function IsFocused *********************************
struct Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics
{
	struct SGFocusableComponent_eventIsFocused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGFocusableComponent_eventIsFocused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGFocusableComponent_eventIsFocused_Parms), &Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableComponent, nullptr, "IsFocused", Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::SGFocusableComponent_eventIsFocused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::SGFocusableComponent_eventIsFocused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGFocusableComponent_IsFocused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableComponent_IsFocused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGFocusableComponent::execIsFocused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFocused();
	P_NATIVE_END;
}
// ********** End Class USGFocusableComponent Function IsFocused ***********************************

// ********** Begin Class USGFocusableComponent Function OnScaleTimelineFinished *******************
struct Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableComponent, nullptr, "OnScaleTimelineFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGFocusableComponent::execOnScaleTimelineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScaleTimelineFinished();
	P_NATIVE_END;
}
// ********** End Class USGFocusableComponent Function OnScaleTimelineFinished *********************

// ********** Begin Class USGFocusableComponent Function OnScaleTimelineUpdate *********************
struct Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics
{
	struct SGFocusableComponent_eventOnScaleTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFocusableComponent_eventOnScaleTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableComponent, nullptr, "OnScaleTimelineUpdate", Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::SGFocusableComponent_eventOnScaleTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::SGFocusableComponent_eventOnScaleTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGFocusableComponent::execOnScaleTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScaleTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USGFocusableComponent Function OnScaleTimelineUpdate ***********************

// ********** Begin Class USGFocusableComponent ****************************************************
void USGFocusableComponent::StaticRegisterNativesUSGFocusableComponent()
{
	UClass* Class = USGFocusableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginFocus", &USGFocusableComponent::execBeginFocus },
		{ "EndFocus", &USGFocusableComponent::execEndFocus },
		{ "IsFocused", &USGFocusableComponent::execIsFocused },
		{ "OnScaleTimelineFinished", &USGFocusableComponent::execOnScaleTimelineFinished },
		{ "OnScaleTimelineUpdate", &USGFocusableComponent::execOnScaleTimelineUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGFocusableComponent;
UClass* USGFocusableComponent::GetPrivateStaticClass()
{
	using TClass = USGFocusableComponent;
	if (!Z_Registration_Info_UClass_USGFocusableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGFocusableComponent"),
			Z_Registration_Info_UClass_USGFocusableComponent.InnerSingleton,
			StaticRegisterNativesUSGFocusableComponent,
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
	return Z_Registration_Info_UClass_USGFocusableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister()
{
	return USGFocusableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGFocusableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that handles focus visual effects (like scaling) for interactable objects\n * Automatically scales the actor when focused and returns to normal when unfocused\n */" },
#endif
		{ "IncludePath", "Core/SGFocusableComponent.h" },
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that handles focus visual effects (like scaling) for interactable objects\nAutomatically scales the actor when focused and returns to normal when unfocused" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusScaleFactor_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleAnimationDuration_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFocusEffect_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginFocus_MetaData[] = {
		{ "Category", "Focus Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndFocus_MetaData[] = {
		{ "Category", "Focus Events" },
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleTimeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "Core/SGFocusableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusScaleFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleAnimationDuration;
	static void NewProp_bEnableFocusEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusEffect;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginFocus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndFocus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaleTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaleCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGFocusableComponent_BeginFocus, "BeginFocus" }, // 3521621635
		{ &Z_Construct_UFunction_USGFocusableComponent_EndFocus, "EndFocus" }, // 3966865719
		{ &Z_Construct_UFunction_USGFocusableComponent_IsFocused, "IsFocused" }, // 3600607505
		{ &Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineFinished, "OnScaleTimelineFinished" }, // 1083596559
		{ &Z_Construct_UFunction_USGFocusableComponent_OnScaleTimelineUpdate, "OnScaleTimelineUpdate" }, // 3477873848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGFocusableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_FocusScaleFactor = { "FocusScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGFocusableComponent, FocusScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusScaleFactor_MetaData), NewProp_FocusScaleFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_ScaleAnimationDuration = { "ScaleAnimationDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGFocusableComponent, ScaleAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleAnimationDuration_MetaData), NewProp_ScaleAnimationDuration_MetaData) };
void Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_bEnableFocusEffect_SetBit(void* Obj)
{
	((USGFocusableComponent*)Obj)->bEnableFocusEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_bEnableFocusEffect = { "bEnableFocusEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGFocusableComponent), &Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_bEnableFocusEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFocusEffect_MetaData), NewProp_bEnableFocusEffect_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_OnBeginFocus = { "OnBeginFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGFocusableComponent, OnBeginFocus), Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginFocus_MetaData), NewProp_OnBeginFocus_MetaData) }; // 3634295043
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_OnEndFocus = { "OnEndFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGFocusableComponent, OnEndFocus), Z_Construct_UDelegateFunction_SocialGolf_OnFocusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndFocus_MetaData), NewProp_OnEndFocus_MetaData) }; // 3634295043
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_ScaleTimeline = { "ScaleTimeline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGFocusableComponent, ScaleTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleTimeline_MetaData), NewProp_ScaleTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGFocusableComponent, ScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurve_MetaData), NewProp_ScaleCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGFocusableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_FocusScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_ScaleAnimationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_bEnableFocusEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_OnBeginFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_OnEndFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_ScaleTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGFocusableComponent_Statics::NewProp_ScaleCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGFocusableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGFocusableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGFocusableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGFocusableComponent_Statics::ClassParams = {
	&USGFocusableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGFocusableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGFocusableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGFocusableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USGFocusableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGFocusableComponent()
{
	if (!Z_Registration_Info_UClass_USGFocusableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGFocusableComponent.OuterSingleton, Z_Construct_UClass_USGFocusableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGFocusableComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGFocusableComponent);
USGFocusableComponent::~USGFocusableComponent() {}
// ********** End Class USGFocusableComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGFocusableComponent, USGFocusableComponent::StaticClass, TEXT("USGFocusableComponent"), &Z_Registration_Info_UClass_USGFocusableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGFocusableComponent), 1225276069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h__Script_SocialGolf_1981167119(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
