// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGFocusableInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGFocusableInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableInterface();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface USGFocusableInterface Function BeginFocus ****************************
void ISGFocusableInterface::BeginFocus()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BeginFocus instead.");
}
static FName NAME_USGFocusableInterface_BeginFocus = FName(TEXT("BeginFocus"));
void ISGFocusableInterface::Execute_BeginFocus(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGFocusableInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USGFocusableInterface_BeginFocus);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISGFocusableInterface*)(O->GetNativeInterfaceAddress(USGFocusableInterface::StaticClass())))
	{
		I->BeginFocus_Implementation();
	}
}
struct Z_Construct_UFunction_USGFocusableInterface_BeginFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Called when the object begins being focused (hovered/looked at)\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the object begins being focused (hovered/looked at)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableInterface_BeginFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableInterface, nullptr, "BeginFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_BeginFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableInterface_BeginFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGFocusableInterface_BeginFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableInterface_BeginFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGFocusableInterface::execBeginFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginFocus_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGFocusableInterface Function BeginFocus ******************************

// ********** Begin Interface USGFocusableInterface Function EndFocus ******************************
void ISGFocusableInterface::EndFocus()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndFocus instead.");
}
static FName NAME_USGFocusableInterface_EndFocus = FName(TEXT("EndFocus"));
void ISGFocusableInterface::Execute_EndFocus(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGFocusableInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USGFocusableInterface_EndFocus);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISGFocusableInterface*)(O->GetNativeInterfaceAddress(USGFocusableInterface::StaticClass())))
	{
		I->EndFocus_Implementation();
	}
}
struct Z_Construct_UFunction_USGFocusableInterface_EndFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Called when the object stops being focused\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the object stops being focused" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableInterface_EndFocus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableInterface, nullptr, "EndFocus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_EndFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableInterface_EndFocus_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGFocusableInterface_EndFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableInterface_EndFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGFocusableInterface::execEndFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndFocus_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGFocusableInterface Function EndFocus ********************************

// ********** Begin Interface USGFocusableInterface Function GetFocusScaleDuration *****************
struct SGFocusableInterface_eventGetFocusScaleDuration_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	SGFocusableInterface_eventGetFocusScaleDuration_Parms()
		: ReturnValue(0)
	{
	}
};
float ISGFocusableInterface::GetFocusScaleDuration() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFocusScaleDuration instead.");
	SGFocusableInterface_eventGetFocusScaleDuration_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGFocusableInterface_GetFocusScaleDuration = FName(TEXT("GetFocusScaleDuration"));
float ISGFocusableInterface::Execute_GetFocusScaleDuration(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGFocusableInterface::StaticClass()));
	SGFocusableInterface_eventGetFocusScaleDuration_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGFocusableInterface_GetFocusScaleDuration);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISGFocusableInterface*)(O->GetNativeInterfaceAddress(USGFocusableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetFocusScaleDuration_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the duration for the scale animation\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the duration for the scale animation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFocusableInterface_eventGetFocusScaleDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableInterface, nullptr, "GetFocusScaleDuration", Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::PropPointers), sizeof(SGFocusableInterface_eventGetFocusScaleDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGFocusableInterface_eventGetFocusScaleDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGFocusableInterface::execGetFocusScaleDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFocusScaleDuration_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGFocusableInterface Function GetFocusScaleDuration *******************

// ********** Begin Interface USGFocusableInterface Function GetFocusScaleFactor *******************
struct SGFocusableInterface_eventGetFocusScaleFactor_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	SGFocusableInterface_eventGetFocusScaleFactor_Parms()
		: ReturnValue(0)
	{
	}
};
float ISGFocusableInterface::GetFocusScaleFactor() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFocusScaleFactor instead.");
	SGFocusableInterface_eventGetFocusScaleFactor_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGFocusableInterface_GetFocusScaleFactor = FName(TEXT("GetFocusScaleFactor"));
float ISGFocusableInterface::Execute_GetFocusScaleFactor(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGFocusableInterface::StaticClass()));
	SGFocusableInterface_eventGetFocusScaleFactor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGFocusableInterface_GetFocusScaleFactor);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISGFocusableInterface*)(O->GetNativeInterfaceAddress(USGFocusableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetFocusScaleFactor_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the scale factor to apply when focused\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the scale factor to apply when focused" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFocusableInterface_eventGetFocusScaleFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableInterface, nullptr, "GetFocusScaleFactor", Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::PropPointers), sizeof(SGFocusableInterface_eventGetFocusScaleFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGFocusableInterface_eventGetFocusScaleFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGFocusableInterface::execGetFocusScaleFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFocusScaleFactor_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGFocusableInterface Function GetFocusScaleFactor *********************

// ********** Begin Interface USGFocusableInterface Function IsFocused *****************************
struct SGFocusableInterface_eventIsFocused_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SGFocusableInterface_eventIsFocused_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISGFocusableInterface::IsFocused() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsFocused instead.");
	SGFocusableInterface_eventIsFocused_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGFocusableInterface_IsFocused = FName(TEXT("IsFocused"));
bool ISGFocusableInterface::Execute_IsFocused(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGFocusableInterface::StaticClass()));
	SGFocusableInterface_eventIsFocused_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGFocusableInterface_IsFocused);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISGFocusableInterface*)(O->GetNativeInterfaceAddress(USGFocusableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsFocused_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets whether this object is currently focused\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGFocusableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether this object is currently focused" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGFocusableInterface_eventIsFocused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGFocusableInterface_eventIsFocused_Parms), &Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFocusableInterface, nullptr, "IsFocused", Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::PropPointers), sizeof(SGFocusableInterface_eventIsFocused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGFocusableInterface_eventIsFocused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGFocusableInterface_IsFocused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFocusableInterface_IsFocused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGFocusableInterface::execIsFocused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFocused_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGFocusableInterface Function IsFocused *******************************

// ********** Begin Interface USGFocusableInterface ************************************************
void USGFocusableInterface::StaticRegisterNativesUSGFocusableInterface()
{
	UClass* Class = USGFocusableInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginFocus", &ISGFocusableInterface::execBeginFocus },
		{ "EndFocus", &ISGFocusableInterface::execEndFocus },
		{ "GetFocusScaleDuration", &ISGFocusableInterface::execGetFocusScaleDuration },
		{ "GetFocusScaleFactor", &ISGFocusableInterface::execGetFocusScaleFactor },
		{ "IsFocused", &ISGFocusableInterface::execIsFocused },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGFocusableInterface;
UClass* USGFocusableInterface::GetPrivateStaticClass()
{
	using TClass = USGFocusableInterface;
	if (!Z_Registration_Info_UClass_USGFocusableInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGFocusableInterface"),
			Z_Registration_Info_UClass_USGFocusableInterface.InnerSingleton,
			StaticRegisterNativesUSGFocusableInterface,
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
	return Z_Registration_Info_UClass_USGFocusableInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_USGFocusableInterface_NoRegister()
{
	return USGFocusableInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGFocusableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Core/SGFocusableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGFocusableInterface_BeginFocus, "BeginFocus" }, // 16258538
		{ &Z_Construct_UFunction_USGFocusableInterface_EndFocus, "EndFocus" }, // 71428594
		{ &Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleDuration, "GetFocusScaleDuration" }, // 2453357732
		{ &Z_Construct_UFunction_USGFocusableInterface_GetFocusScaleFactor, "GetFocusScaleFactor" }, // 3645419482
		{ &Z_Construct_UFunction_USGFocusableInterface_IsFocused, "IsFocused" }, // 361178787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISGFocusableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGFocusableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGFocusableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGFocusableInterface_Statics::ClassParams = {
	&USGFocusableInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGFocusableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USGFocusableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGFocusableInterface()
{
	if (!Z_Registration_Info_UClass_USGFocusableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGFocusableInterface.OuterSingleton, Z_Construct_UClass_USGFocusableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGFocusableInterface.OuterSingleton;
}
USGFocusableInterface::USGFocusableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGFocusableInterface);
// ********** End Interface USGFocusableInterface **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGFocusableInterface, USGFocusableInterface::StaticClass, TEXT("USGFocusableInterface"), &Z_Registration_Info_UClass_USGFocusableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGFocusableInterface), 3854201226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h__Script_SocialGolf_2625699561(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
