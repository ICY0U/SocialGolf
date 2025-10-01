// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGInteractable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGInteractable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface USGInteractable Function GetInteractionText **************************
struct SGInteractable_eventGetInteractionText_Parms
{
	FText ReturnValue;
};
FText ISGInteractable::GetInteractionText() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractionText instead.");
	SGInteractable_eventGetInteractionText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGInteractable_GetInteractionText = FName(TEXT("GetInteractionText"));
FText ISGInteractable::Execute_GetInteractionText(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGInteractable::StaticClass()));
	SGInteractable_eventGetInteractionText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGInteractable_GetInteractionText);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISGInteractable*)(O->GetNativeInterfaceAddress(USGInteractable::StaticClass())))
	{
		Parms.ReturnValue = I->GetInteractionText_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Core/SGInteractable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractable_eventGetInteractionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractable, nullptr, "GetInteractionText", Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::PropPointers), sizeof(SGInteractable_eventGetInteractionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGInteractable_eventGetInteractionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGInteractable_GetInteractionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractable_GetInteractionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGInteractable::execGetInteractionText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetInteractionText_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGInteractable Function GetInteractionText ****************************

// ********** Begin Interface USGInteractable Function Interact ************************************
struct SGInteractable_eventInteract_Parms
{
	APawn* InstigatorPawn;
};
void ISGInteractable::Interact(APawn* InstigatorPawn)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_USGInteractable_Interact = FName(TEXT("Interact"));
void ISGInteractable::Execute_Interact(UObject* O, APawn* InstigatorPawn)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGInteractable::StaticClass()));
	SGInteractable_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGInteractable_Interact);
	if (Func)
	{
		Parms.InstigatorPawn=InstigatorPawn;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISGInteractable*)(O->GetNativeInterfaceAddress(USGInteractable::StaticClass())))
	{
		I->Interact_Implementation(InstigatorPawn);
	}
}
struct Z_Construct_UFunction_USGInteractable_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Core/SGInteractable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGInteractable_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractable_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGInteractable_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractable_Interact_Statics::NewProp_InstigatorPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractable_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractable_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractable, nullptr, "Interact", Z_Construct_UFunction_USGInteractable_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractable_Interact_Statics::PropPointers), sizeof(SGInteractable_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractable_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractable_Interact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGInteractable_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGInteractable_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractable_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGInteractable::execInteract)
{
	P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
	P_NATIVE_END;
}
// ********** End Interface USGInteractable Function Interact **************************************

// ********** Begin Interface USGInteractable ******************************************************
void USGInteractable::StaticRegisterNativesUSGInteractable()
{
	UClass* Class = USGInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractionText", &ISGInteractable::execGetInteractionText },
		{ "Interact", &ISGInteractable::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGInteractable;
UClass* USGInteractable::GetPrivateStaticClass()
{
	using TClass = USGInteractable;
	if (!Z_Registration_Info_UClass_USGInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGInteractable"),
			Z_Registration_Info_UClass_USGInteractable.InnerSingleton,
			StaticRegisterNativesUSGInteractable,
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
	return Z_Registration_Info_UClass_USGInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_USGInteractable_NoRegister()
{
	return USGInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/SGInteractable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGInteractable_GetInteractionText, "GetInteractionText" }, // 1228956732
		{ &Z_Construct_UFunction_USGInteractable_Interact, "Interact" }, // 2177453475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISGInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGInteractable_Statics::ClassParams = {
	&USGInteractable::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_USGInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGInteractable()
{
	if (!Z_Registration_Info_UClass_USGInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGInteractable.OuterSingleton, Z_Construct_UClass_USGInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGInteractable.OuterSingleton;
}
USGInteractable::USGInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGInteractable);
// ********** End Interface USGInteractable ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGInteractable, USGInteractable::StaticClass, TEXT("USGInteractable"), &Z_Registration_Info_UClass_USGInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGInteractable), 3465886030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h__Script_SocialGolf_2920762390(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
