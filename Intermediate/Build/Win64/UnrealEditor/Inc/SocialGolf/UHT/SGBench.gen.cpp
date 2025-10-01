// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Actors/SGBench.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGBench() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBench();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBench_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGBench Function GetSittingCharacter ************************************
struct Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics
{
	struct SGBench_eventGetSittingCharacter_Parms
	{
		ASGCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bench" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBench_eventGetSittingCharacter_Parms, ReturnValue), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBench, nullptr, "GetSittingCharacter", Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::SGBench_eventGetSittingCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::SGBench_eventGetSittingCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBench_GetSittingCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBench_GetSittingCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBench::execGetSittingCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASGCharacter**)Z_Param__Result=P_THIS->GetSittingCharacter();
	P_NATIVE_END;
}
// ********** End Class ASGBench Function GetSittingCharacter **************************************

// ********** Begin Class ASGBench Function GetSitWorldPosition ************************************
struct Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics
{
	struct SGBench_eventGetSitWorldPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bench" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper functions for safe positioning\n" },
#endif
		{ "ModuleRelativePath", "Actors/SGBench.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper functions for safe positioning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBench_eventGetSitWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBench, nullptr, "GetSitWorldPosition", Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::SGBench_eventGetSitWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::SGBench_eventGetSitWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBench_GetSitWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBench_GetSitWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBench::execGetSitWorldPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSitWorldPosition();
	P_NATIVE_END;
}
// ********** End Class ASGBench Function GetSitWorldPosition **************************************

// ********** Begin Class ASGBench Function GetSitWorldRotation ************************************
struct Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics
{
	struct SGBench_eventGetSitWorldRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bench" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBench_eventGetSitWorldRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBench, nullptr, "GetSitWorldRotation", Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::SGBench_eventGetSitWorldRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::SGBench_eventGetSitWorldRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBench_GetSitWorldRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBench_GetSitWorldRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBench::execGetSitWorldRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetSitWorldRotation();
	P_NATIVE_END;
}
// ********** End Class ASGBench Function GetSitWorldRotation **************************************

// ********** Begin Class ASGBench Function IsBenchOccupied ****************************************
struct Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics
{
	struct SGBench_eventIsBenchOccupied_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bench" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGBench_eventIsBenchOccupied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBench_eventIsBenchOccupied_Parms), &Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBench, nullptr, "IsBenchOccupied", Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::SGBench_eventIsBenchOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::SGBench_eventIsBenchOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBench_IsBenchOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBench_IsBenchOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBench::execIsBenchOccupied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBenchOccupied();
	P_NATIVE_END;
}
// ********** End Class ASGBench Function IsBenchOccupied ******************************************

// ********** Begin Class ASGBench Function OnRep_CurrentSittingCharacter **************************
struct Z_Construct_UFunction_ASGBench_OnRep_CurrentSittingCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBench_OnRep_CurrentSittingCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBench, nullptr, "OnRep_CurrentSittingCharacter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_OnRep_CurrentSittingCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBench_OnRep_CurrentSittingCharacter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBench_OnRep_CurrentSittingCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBench_OnRep_CurrentSittingCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBench::execOnRep_CurrentSittingCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentSittingCharacter();
	P_NATIVE_END;
}
// ********** End Class ASGBench Function OnRep_CurrentSittingCharacter ****************************

// ********** Begin Class ASGBench Function SitOnBench *********************************************
struct Z_Construct_UFunction_ASGBench_SitOnBench_Statics
{
	struct SGBench_eventSitOnBench_Parms
	{
		ASGCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bench" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bench functionality\n" },
#endif
		{ "ModuleRelativePath", "Actors/SGBench.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bench functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBench_SitOnBench_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBench_eventSitOnBench_Parms, Character), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBench_SitOnBench_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBench_SitOnBench_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_SitOnBench_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBench_SitOnBench_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBench, nullptr, "SitOnBench", Z_Construct_UFunction_ASGBench_SitOnBench_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_SitOnBench_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBench_SitOnBench_Statics::SGBench_eventSitOnBench_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_SitOnBench_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBench_SitOnBench_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBench_SitOnBench_Statics::SGBench_eventSitOnBench_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBench_SitOnBench()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBench_SitOnBench_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBench::execSitOnBench)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SitOnBench(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class ASGBench Function SitOnBench ***********************************************

// ********** Begin Class ASGBench Function StandUpFromBench ***************************************
struct Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics
{
	struct SGBench_eventStandUpFromBench_Parms
	{
		ASGCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bench" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBench_eventStandUpFromBench_Parms, Character), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBench, nullptr, "StandUpFromBench", Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::SGBench_eventStandUpFromBench_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::SGBench_eventStandUpFromBench_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBench_StandUpFromBench()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBench_StandUpFromBench_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBench::execStandUpFromBench)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StandUpFromBench(Z_Param_Character);
	P_NATIVE_END;
}
// ********** End Class ASGBench Function StandUpFromBench *****************************************

// ********** Begin Class ASGBench *****************************************************************
void ASGBench::StaticRegisterNativesASGBench()
{
	UClass* Class = ASGBench::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSittingCharacter", &ASGBench::execGetSittingCharacter },
		{ "GetSitWorldPosition", &ASGBench::execGetSitWorldPosition },
		{ "GetSitWorldRotation", &ASGBench::execGetSitWorldRotation },
		{ "IsBenchOccupied", &ASGBench::execIsBenchOccupied },
		{ "OnRep_CurrentSittingCharacter", &ASGBench::execOnRep_CurrentSittingCharacter },
		{ "SitOnBench", &ASGBench::execSitOnBench },
		{ "StandUpFromBench", &ASGBench::execStandUpFromBench },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGBench;
UClass* ASGBench::GetPrivateStaticClass()
{
	using TClass = ASGBench;
	if (!Z_Registration_Info_UClass_ASGBench.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGBench"),
			Z_Registration_Info_UClass_ASGBench.InnerSingleton,
			StaticRegisterNativesASGBench,
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
	return Z_Registration_Info_UClass_ASGBench.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGBench_NoRegister()
{
	return ASGBench::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGBench_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/SGBench.h" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SitHeight_MetaData[] = {
		{ "Category", "Bench Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Actors/SGBench.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandDistance_MetaData[] = {
		{ "Category", "Bench Settings" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SitText_MetaData[] = {
		{ "Category", "Bench Settings" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandUpText_MetaData[] = {
		{ "Category", "Bench Settings" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedText_MetaData[] = {
		{ "Category", "Bench Settings" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BenchMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SitPosition_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusableComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSittingCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SGBench.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SitHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandDistance;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SitText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_StandUpText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OccupiedText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BenchMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SitPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSittingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGBench_GetSittingCharacter, "GetSittingCharacter" }, // 233879372
		{ &Z_Construct_UFunction_ASGBench_GetSitWorldPosition, "GetSitWorldPosition" }, // 3787963565
		{ &Z_Construct_UFunction_ASGBench_GetSitWorldRotation, "GetSitWorldRotation" }, // 133075928
		{ &Z_Construct_UFunction_ASGBench_IsBenchOccupied, "IsBenchOccupied" }, // 2120333295
		{ &Z_Construct_UFunction_ASGBench_OnRep_CurrentSittingCharacter, "OnRep_CurrentSittingCharacter" }, // 3710078312
		{ &Z_Construct_UFunction_ASGBench_SitOnBench, "SitOnBench" }, // 3078079113
		{ &Z_Construct_UFunction_ASGBench_StandUpFromBench, "StandUpFromBench" }, // 2586269375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGBench>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_SitHeight = { "SitHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, SitHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SitHeight_MetaData), NewProp_SitHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_StandDistance = { "StandDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, StandDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandDistance_MetaData), NewProp_StandDistance_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_SitText = { "SitText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, SitText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SitText_MetaData), NewProp_SitText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_StandUpText = { "StandUpText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, StandUpText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandUpText_MetaData), NewProp_StandUpText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_OccupiedText = { "OccupiedText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, OccupiedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedText_MetaData), NewProp_OccupiedText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_BenchMesh = { "BenchMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, BenchMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BenchMesh_MetaData), NewProp_BenchMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_SitPosition = { "SitPosition", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, SitPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SitPosition_MetaData), NewProp_SitPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_FocusableComponent = { "FocusableComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, FocusableComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusableComponent_MetaData), NewProp_FocusableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBench_Statics::NewProp_CurrentSittingCharacter = { "CurrentSittingCharacter", "OnRep_CurrentSittingCharacter", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBench, CurrentSittingCharacter), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSittingCharacter_MetaData), NewProp_CurrentSittingCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGBench_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_SitHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_StandDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_SitText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_StandUpText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_OccupiedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_BenchMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_SitPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_FocusableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBench_Statics::NewProp_CurrentSittingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBench_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGBench_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBench_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGBench_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGBench, ISGInteractable), false },  // 3465886030
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGBench_Statics::ClassParams = {
	&ASGBench::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGBench_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGBench_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBench_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGBench_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGBench()
{
	if (!Z_Registration_Info_UClass_ASGBench.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGBench.OuterSingleton, Z_Construct_UClass_ASGBench_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGBench.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGBench::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentSittingCharacter(TEXT("CurrentSittingCharacter"));
	const bool bIsValid = true
		&& Name_CurrentSittingCharacter == ClassReps[(int32)ENetFields_Private::CurrentSittingCharacter].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGBench"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGBench);
ASGBench::~ASGBench() {}
// ********** End Class ASGBench *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGBench, ASGBench::StaticClass, TEXT("ASGBench"), &Z_Registration_Info_UClass_ASGBench, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGBench), 789104619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h__Script_SocialGolf_4098593574(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
