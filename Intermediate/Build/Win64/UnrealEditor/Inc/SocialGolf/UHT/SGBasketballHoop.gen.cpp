// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Basketball/SGBasketballHoop.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGBasketballHoop() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballHoop();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballHoop_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGBasketballHoop Function AnimateNetOnScore *****************************
struct Z_Construct_UFunction_ASGBasketballHoop_AnimateNetOnScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Visual Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Net animation\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Net animation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_AnimateNetOnScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "AnimateNetOnScore", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_AnimateNetOnScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_AnimateNetOnScore_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_AnimateNetOnScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_AnimateNetOnScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execAnimateNetOnScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimateNetOnScore();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function AnimateNetOnScore *******************************

// ********** Begin Class ASGBasketballHoop Function GetAccuracy ***********************************
struct Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics
{
	struct SGBasketballHoop_eventGetAccuracy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventGetAccuracy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "GetAccuracy", Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::SGBasketballHoop_eventGetAccuracy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::SGBasketballHoop_eventGetAccuracy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execGetAccuracy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAccuracy();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function GetAccuracy *************************************

// ********** Begin Class ASGBasketballHoop Function GetScoringZone ********************************
struct Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics
{
	struct SGBasketballHoop_eventGetScoringZone_Parms
	{
		UBoxComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventGetScoringZone_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "GetScoringZone", Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::SGBasketballHoop_eventGetScoringZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::SGBasketballHoop_eventGetScoringZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execGetScoringZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBoxComponent**)Z_Param__Result=P_THIS->GetScoringZone();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function GetScoringZone **********************************

// ********** Begin Class ASGBasketballHoop Function GetSuccessfulShots ****************************
struct Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics
{
	struct SGBasketballHoop_eventGetSuccessfulShots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventGetSuccessfulShots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "GetSuccessfulShots", Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::SGBasketballHoop_eventGetSuccessfulShots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::SGBasketballHoop_eventGetSuccessfulShots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execGetSuccessfulShots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSuccessfulShots();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function GetSuccessfulShots ******************************

// ********** Begin Class ASGBasketballHoop Function GetTotalShots *********************************
struct Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics
{
	struct SGBasketballHoop_eventGetTotalShots_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventGetTotalShots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "GetTotalShots", Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::SGBasketballHoop_eventGetTotalShots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::SGBasketballHoop_eventGetTotalShots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execGetTotalShots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalShots();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function GetTotalShots ***********************************

// ********** Begin Class ASGBasketballHoop Function MulticastOnBackboardHit ***********************
static FName NAME_ASGBasketballHoop_MulticastOnBackboardHit = FName(TEXT("MulticastOnBackboardHit"));
void ASGBasketballHoop::MulticastOnBackboardHit()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballHoop_MulticastOnBackboardHit);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballHoop_MulticastOnBackboardHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_MulticastOnBackboardHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "MulticastOnBackboardHit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_MulticastOnBackboardHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_MulticastOnBackboardHit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_MulticastOnBackboardHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_MulticastOnBackboardHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execMulticastOnBackboardHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnBackboardHit_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function MulticastOnBackboardHit *************************

// ********** Begin Class ASGBasketballHoop Function MulticastOnRimHit *****************************
static FName NAME_ASGBasketballHoop_MulticastOnRimHit = FName(TEXT("MulticastOnRimHit"));
void ASGBasketballHoop::MulticastOnRimHit()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballHoop_MulticastOnRimHit);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballHoop_MulticastOnRimHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_MulticastOnRimHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "MulticastOnRimHit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_MulticastOnRimHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_MulticastOnRimHit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_MulticastOnRimHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_MulticastOnRimHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execMulticastOnRimHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnRimHit_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function MulticastOnRimHit *******************************

// ********** Begin Class ASGBasketballHoop Function MulticastOnScore ******************************
static FName NAME_ASGBasketballHoop_MulticastOnScore = FName(TEXT("MulticastOnScore"));
void ASGBasketballHoop::MulticastOnScore()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballHoop_MulticastOnScore);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballHoop_MulticastOnScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual feedback\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual feedback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_MulticastOnScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "MulticastOnScore", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_MulticastOnScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_MulticastOnScore_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_MulticastOnScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_MulticastOnScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execMulticastOnScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnScore_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function MulticastOnScore ********************************

// ********** Begin Class ASGBasketballHoop Function OnBackboardCollisionHit ***********************
struct Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics
{
	struct SGBasketballHoop_eventOnBackboardCollisionHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnBackboardCollisionHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnBackboardCollisionHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnBackboardCollisionHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnBackboardCollisionHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnBackboardCollisionHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "OnBackboardCollisionHit", Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::SGBasketballHoop_eventOnBackboardCollisionHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::SGBasketballHoop_eventOnBackboardCollisionHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execOnBackboardCollisionHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackboardCollisionHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function OnBackboardCollisionHit *************************

// ********** Begin Class ASGBasketballHoop Function OnPreScoringZoneBeginOverlap ******************
struct Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics
{
	struct SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms), &Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "OnPreScoringZoneBeginOverlap", Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::SGBasketballHoop_eventOnPreScoringZoneBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execOnPreScoringZoneBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreScoringZoneBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function OnPreScoringZoneBeginOverlap ********************

// ********** Begin Class ASGBasketballHoop Function OnPreScoringZoneEndOverlap ********************
struct Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics
{
	struct SGBasketballHoop_eventOnPreScoringZoneEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnPreScoringZoneEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "OnPreScoringZoneEndOverlap", Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::SGBasketballHoop_eventOnPreScoringZoneEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::SGBasketballHoop_eventOnPreScoringZoneEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execOnPreScoringZoneEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreScoringZoneEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function OnPreScoringZoneEndOverlap **********************

// ********** Begin Class ASGBasketballHoop Function OnRimCollisionHit *****************************
struct Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics
{
	struct SGBasketballHoop_eventOnRimCollisionHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnRimCollisionHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnRimCollisionHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnRimCollisionHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnRimCollisionHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnRimCollisionHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "OnRimCollisionHit", Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::SGBasketballHoop_eventOnRimCollisionHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::SGBasketballHoop_eventOnRimCollisionHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execOnRimCollisionHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRimCollisionHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function OnRimCollisionHit *******************************

// ********** Begin Class ASGBasketballHoop Function OnScoringZoneBeginOverlap *********************
struct Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics
{
	struct SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced collision events\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced collision events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms), &Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "OnScoringZoneBeginOverlap", Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::SGBasketballHoop_eventOnScoringZoneBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execOnScoringZoneBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScoringZoneBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function OnScoringZoneBeginOverlap ***********************

// ********** Begin Class ASGBasketballHoop Function PlayBackboardHitSound *************************
struct Z_Construct_UFunction_ASGBasketballHoop_PlayBackboardHitSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_PlayBackboardHitSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "PlayBackboardHitSound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_PlayBackboardHitSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_PlayBackboardHitSound_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_PlayBackboardHitSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_PlayBackboardHitSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execPlayBackboardHitSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayBackboardHitSound();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function PlayBackboardHitSound ***************************

// ********** Begin Class ASGBasketballHoop Function PlayNetSwishAnimation *************************
static FName NAME_ASGBasketballHoop_PlayNetSwishAnimation = FName(TEXT("PlayNetSwishAnimation"));
void ASGBasketballHoop::PlayNetSwishAnimation()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballHoop_PlayNetSwishAnimation);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballHoop_PlayNetSwishAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Visual Effects" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_PlayNetSwishAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "PlayNetSwishAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_PlayNetSwishAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_PlayNetSwishAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_PlayNetSwishAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_PlayNetSwishAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASGBasketballHoop Function PlayNetSwishAnimation ***************************

// ********** Begin Class ASGBasketballHoop Function PlayRimHitSound *******************************
struct Z_Construct_UFunction_ASGBasketballHoop_PlayRimHitSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_PlayRimHitSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "PlayRimHitSound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_PlayRimHitSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_PlayRimHitSound_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_PlayRimHitSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_PlayRimHitSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execPlayRimHitSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayRimHitSound();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function PlayRimHitSound *********************************

// ********** Begin Class ASGBasketballHoop Function PlayScoreEffects ******************************
struct Z_Construct_UFunction_ASGBasketballHoop_PlayScoreEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_PlayScoreEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "PlayScoreEffects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_PlayScoreEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_PlayScoreEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_PlayScoreEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_PlayScoreEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execPlayScoreEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayScoreEffects();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function PlayScoreEffects ********************************

// ********** Begin Class ASGBasketballHoop Function PlayScoreSound ********************************
struct Z_Construct_UFunction_ASGBasketballHoop_PlayScoreSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Audio functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_PlayScoreSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "PlayScoreSound", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_PlayScoreSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_PlayScoreSound_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_PlayScoreSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_PlayScoreSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execPlayScoreSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayScoreSound();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function PlayScoreSound **********************************

// ********** Begin Class ASGBasketballHoop Function RegisterScore *********************************
struct Z_Construct_UFunction_ASGBasketballHoop_RegisterScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_RegisterScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "RegisterScore", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_RegisterScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_RegisterScore_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_RegisterScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_RegisterScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execRegisterScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterScore();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function RegisterScore ***********************************

// ********** Begin Class ASGBasketballHoop Function RegisterShot **********************************
struct Z_Construct_UFunction_ASGBasketballHoop_RegisterShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scoring functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scoring functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_RegisterShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "RegisterShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_RegisterShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_RegisterShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_RegisterShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_RegisterShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execRegisterShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterShot();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function RegisterShot ************************************

// ********** Begin Class ASGBasketballHoop Function RegisterWithGameManager ***********************
struct Z_Construct_UFunction_ASGBasketballHoop_RegisterWithGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game manager integration\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game manager integration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_RegisterWithGameManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "RegisterWithGameManager", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_RegisterWithGameManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_RegisterWithGameManager_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_RegisterWithGameManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_RegisterWithGameManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execRegisterWithGameManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWithGameManager();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function RegisterWithGameManager *************************

// ********** Begin Class ASGBasketballHoop Function ResetStats ************************************
struct Z_Construct_UFunction_ASGBasketballHoop_ResetStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_ResetStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "ResetStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_ResetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_ResetStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_ResetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_ResetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execResetStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetStats();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function ResetStats **************************************

// ********** Begin Class ASGBasketballHoop Function ServerResetStats ******************************
static FName NAME_ASGBasketballHoop_ServerResetStats = FName(TEXT("ServerResetStats"));
void ASGBasketballHoop::ServerResetStats()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballHoop_ServerResetStats);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballHoop_ServerResetStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPCs\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPCs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_ServerResetStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "ServerResetStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_ServerResetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_ServerResetStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_ServerResetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_ServerResetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execServerResetStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerResetStats_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function ServerResetStats ********************************

// ********** Begin Class ASGBasketballHoop Function SetBackboardColor *****************************
struct Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics
{
	struct SGBasketballHoop_eventSetBackboardColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventSetBackboardColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "SetBackboardColor", Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::SGBasketballHoop_eventSetBackboardColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::SGBasketballHoop_eventSetBackboardColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execSetBackboardColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackboardColor(Z_Param_Out_NewColor);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function SetBackboardColor *******************************

// ********** Begin Class ASGBasketballHoop Function SetNetColor ***********************************
struct Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics
{
	struct SGBasketballHoop_eventSetNetColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventSetNetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "SetNetColor", Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::SGBasketballHoop_eventSetNetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::SGBasketballHoop_eventSetNetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_SetNetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_SetNetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execSetNetColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNetColor(Z_Param_Out_NewColor);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function SetNetColor *************************************

// ********** Begin Class ASGBasketballHoop Function SetPostColor **********************************
struct Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics
{
	struct SGBasketballHoop_eventSetPostColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventSetPostColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "SetPostColor", Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::SGBasketballHoop_eventSetPostColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::SGBasketballHoop_eventSetPostColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_SetPostColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_SetPostColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execSetPostColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPostColor(Z_Param_Out_NewColor);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function SetPostColor ************************************

// ********** Begin Class ASGBasketballHoop Function SetRimColor ***********************************
struct Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics
{
	struct SGBasketballHoop_eventSetRimColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballHoop_eventSetRimColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "SetRimColor", Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::SGBasketballHoop_eventSetRimColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::SGBasketballHoop_eventSetRimColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballHoop_SetRimColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_SetRimColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execSetRimColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRimColor(Z_Param_Out_NewColor);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function SetRimColor *************************************

// ********** Begin Class ASGBasketballHoop Function UpdateHoopColors ******************************
struct Z_Construct_UFunction_ASGBasketballHoop_UpdateHoopColors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Visual Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual customization functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual customization functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballHoop_UpdateHoopColors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballHoop, nullptr, "UpdateHoopColors", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballHoop_UpdateHoopColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballHoop_UpdateHoopColors_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballHoop_UpdateHoopColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballHoop_UpdateHoopColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballHoop::execUpdateHoopColors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHoopColors();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballHoop Function UpdateHoopColors ********************************

// ********** Begin Class ASGBasketballHoop ********************************************************
void ASGBasketballHoop::StaticRegisterNativesASGBasketballHoop()
{
	UClass* Class = ASGBasketballHoop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimateNetOnScore", &ASGBasketballHoop::execAnimateNetOnScore },
		{ "GetAccuracy", &ASGBasketballHoop::execGetAccuracy },
		{ "GetScoringZone", &ASGBasketballHoop::execGetScoringZone },
		{ "GetSuccessfulShots", &ASGBasketballHoop::execGetSuccessfulShots },
		{ "GetTotalShots", &ASGBasketballHoop::execGetTotalShots },
		{ "MulticastOnBackboardHit", &ASGBasketballHoop::execMulticastOnBackboardHit },
		{ "MulticastOnRimHit", &ASGBasketballHoop::execMulticastOnRimHit },
		{ "MulticastOnScore", &ASGBasketballHoop::execMulticastOnScore },
		{ "OnBackboardCollisionHit", &ASGBasketballHoop::execOnBackboardCollisionHit },
		{ "OnPreScoringZoneBeginOverlap", &ASGBasketballHoop::execOnPreScoringZoneBeginOverlap },
		{ "OnPreScoringZoneEndOverlap", &ASGBasketballHoop::execOnPreScoringZoneEndOverlap },
		{ "OnRimCollisionHit", &ASGBasketballHoop::execOnRimCollisionHit },
		{ "OnScoringZoneBeginOverlap", &ASGBasketballHoop::execOnScoringZoneBeginOverlap },
		{ "PlayBackboardHitSound", &ASGBasketballHoop::execPlayBackboardHitSound },
		{ "PlayRimHitSound", &ASGBasketballHoop::execPlayRimHitSound },
		{ "PlayScoreEffects", &ASGBasketballHoop::execPlayScoreEffects },
		{ "PlayScoreSound", &ASGBasketballHoop::execPlayScoreSound },
		{ "RegisterScore", &ASGBasketballHoop::execRegisterScore },
		{ "RegisterShot", &ASGBasketballHoop::execRegisterShot },
		{ "RegisterWithGameManager", &ASGBasketballHoop::execRegisterWithGameManager },
		{ "ResetStats", &ASGBasketballHoop::execResetStats },
		{ "ServerResetStats", &ASGBasketballHoop::execServerResetStats },
		{ "SetBackboardColor", &ASGBasketballHoop::execSetBackboardColor },
		{ "SetNetColor", &ASGBasketballHoop::execSetNetColor },
		{ "SetPostColor", &ASGBasketballHoop::execSetPostColor },
		{ "SetRimColor", &ASGBasketballHoop::execSetRimColor },
		{ "UpdateHoopColors", &ASGBasketballHoop::execUpdateHoopColors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGBasketballHoop;
UClass* ASGBasketballHoop::GetPrivateStaticClass()
{
	using TClass = ASGBasketballHoop;
	if (!Z_Registration_Info_UClass_ASGBasketballHoop.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGBasketballHoop"),
			Z_Registration_Info_UClass_ASGBasketballHoop.InnerSingleton,
			StaticRegisterNativesASGBasketballHoop,
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
	return Z_Registration_Info_UClass_ASGBasketballHoop.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGBasketballHoop_NoRegister()
{
	return ASGBasketballHoop::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGBasketballHoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Basketball/SGBasketballHoop.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackboardMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RimMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoringZone_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RimCollisionZone_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced detection zones\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced detection zones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackboardCollisionZone_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreScoringZone_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Zone above the rim to validate trajectory\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone above the rim to validate trajectory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetStrips_MetaData[] = {
		{ "Category", "Visual Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual components for net\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual components for net" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoopHeight_MetaData[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hoop properties\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hoop properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RimRadius_MetaData[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 10 feet in cm\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "10 feet in cm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoringZoneSize_MetaData[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball rim radius in cm\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball rim radius in cm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumScoringVelocityZ_MetaData[] = {
		{ "Category", "Detection Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced detection settings\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced detection settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumScoringVelocityZ_MetaData[] = {
		{ "Category", "Detection Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum downward velocity to score\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum downward velocity to score" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoringCooldownTime_MetaData[] = {
		{ "Category", "Detection Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum reasonable downward velocity\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum reasonable downward velocity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryValidationAngle_MetaData[] = {
		{ "Category", "Detection Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prevent multiple scores from same ball\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevent multiple scores from same ball" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequirePreScoringZoneEntry_MetaData[] = {
		{ "Category", "Detection Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum angle from vertical for valid shots\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum angle from vertical for valid shots" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalShots_MetaData[] = {
		{ "Category", "Scoring" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scoring system\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scoring system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessfulShots_MetaData[] = {
		{ "Category", "Scoring" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaySoundOnScore_MetaData[] = {
		{ "Category", "Basketball Hoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugInfo_MetaData[] = {
		{ "Category", "Basketball Hoop" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostColor_MetaData[] = {
		{ "Category", "Visual Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual customization settings\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual customization settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackboardColor_MetaData[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RimColor_MetaData[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetColor_MetaData[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNet_MetaData[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetStripCount_MetaData[] = {
		{ "Category", "Visual Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreSoundCue_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound effects\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RimHitSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackboardHitSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketballHoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackboardMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RimMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoringZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RimCollisionZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackboardCollisionZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreScoringZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetStrips_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetStrips;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoopHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RimRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoringZoneSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumScoringVelocityZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumScoringVelocityZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoringCooldownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectoryValidationAngle;
	static void NewProp_bRequirePreScoringZoneEntry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequirePreScoringZoneEntry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalShots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessfulShots;
	static void NewProp_bPlaySoundOnScore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaySoundOnScore;
	static void NewProp_bShowDebugInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackboardColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RimColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetColor;
	static void NewProp_bShowNet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NetStripCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreSoundCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RimHitSoundCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackboardHitSoundCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGBasketballHoop_AnimateNetOnScore, "AnimateNetOnScore" }, // 2623796262
		{ &Z_Construct_UFunction_ASGBasketballHoop_GetAccuracy, "GetAccuracy" }, // 1346292480
		{ &Z_Construct_UFunction_ASGBasketballHoop_GetScoringZone, "GetScoringZone" }, // 2473224699
		{ &Z_Construct_UFunction_ASGBasketballHoop_GetSuccessfulShots, "GetSuccessfulShots" }, // 2558267640
		{ &Z_Construct_UFunction_ASGBasketballHoop_GetTotalShots, "GetTotalShots" }, // 1732845957
		{ &Z_Construct_UFunction_ASGBasketballHoop_MulticastOnBackboardHit, "MulticastOnBackboardHit" }, // 2387080718
		{ &Z_Construct_UFunction_ASGBasketballHoop_MulticastOnRimHit, "MulticastOnRimHit" }, // 3246458492
		{ &Z_Construct_UFunction_ASGBasketballHoop_MulticastOnScore, "MulticastOnScore" }, // 3655588147
		{ &Z_Construct_UFunction_ASGBasketballHoop_OnBackboardCollisionHit, "OnBackboardCollisionHit" }, // 1121697013
		{ &Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneBeginOverlap, "OnPreScoringZoneBeginOverlap" }, // 1384757797
		{ &Z_Construct_UFunction_ASGBasketballHoop_OnPreScoringZoneEndOverlap, "OnPreScoringZoneEndOverlap" }, // 162836509
		{ &Z_Construct_UFunction_ASGBasketballHoop_OnRimCollisionHit, "OnRimCollisionHit" }, // 2992296245
		{ &Z_Construct_UFunction_ASGBasketballHoop_OnScoringZoneBeginOverlap, "OnScoringZoneBeginOverlap" }, // 2248157012
		{ &Z_Construct_UFunction_ASGBasketballHoop_PlayBackboardHitSound, "PlayBackboardHitSound" }, // 3406598804
		{ &Z_Construct_UFunction_ASGBasketballHoop_PlayNetSwishAnimation, "PlayNetSwishAnimation" }, // 2210830294
		{ &Z_Construct_UFunction_ASGBasketballHoop_PlayRimHitSound, "PlayRimHitSound" }, // 3762542475
		{ &Z_Construct_UFunction_ASGBasketballHoop_PlayScoreEffects, "PlayScoreEffects" }, // 1560638738
		{ &Z_Construct_UFunction_ASGBasketballHoop_PlayScoreSound, "PlayScoreSound" }, // 2369657199
		{ &Z_Construct_UFunction_ASGBasketballHoop_RegisterScore, "RegisterScore" }, // 850017793
		{ &Z_Construct_UFunction_ASGBasketballHoop_RegisterShot, "RegisterShot" }, // 4178621437
		{ &Z_Construct_UFunction_ASGBasketballHoop_RegisterWithGameManager, "RegisterWithGameManager" }, // 3085941972
		{ &Z_Construct_UFunction_ASGBasketballHoop_ResetStats, "ResetStats" }, // 1963512308
		{ &Z_Construct_UFunction_ASGBasketballHoop_ServerResetStats, "ServerResetStats" }, // 1670315491
		{ &Z_Construct_UFunction_ASGBasketballHoop_SetBackboardColor, "SetBackboardColor" }, // 807037009
		{ &Z_Construct_UFunction_ASGBasketballHoop_SetNetColor, "SetNetColor" }, // 413818427
		{ &Z_Construct_UFunction_ASGBasketballHoop_SetPostColor, "SetPostColor" }, // 2406033296
		{ &Z_Construct_UFunction_ASGBasketballHoop_SetRimColor, "SetRimColor" }, // 1938059948
		{ &Z_Construct_UFunction_ASGBasketballHoop_UpdateHoopColors, "UpdateHoopColors" }, // 1131609620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGBasketballHoop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_PostMesh = { "PostMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, PostMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostMesh_MetaData), NewProp_PostMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardMesh = { "BackboardMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, BackboardMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackboardMesh_MetaData), NewProp_BackboardMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimMesh = { "RimMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, RimMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RimMesh_MetaData), NewProp_RimMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoringZone = { "ScoringZone", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, ScoringZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoringZone_MetaData), NewProp_ScoringZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimCollisionZone = { "RimCollisionZone", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, RimCollisionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RimCollisionZone_MetaData), NewProp_RimCollisionZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardCollisionZone = { "BackboardCollisionZone", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, BackboardCollisionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackboardCollisionZone_MetaData), NewProp_BackboardCollisionZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_PreScoringZone = { "PreScoringZone", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, PreScoringZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreScoringZone_MetaData), NewProp_PreScoringZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetStrips_Inner = { "NetStrips", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetStrips = { "NetStrips", nullptr, (EPropertyFlags)0x002008800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, NetStrips), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetStrips_MetaData), NewProp_NetStrips_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_HoopHeight = { "HoopHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, HoopHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoopHeight_MetaData), NewProp_HoopHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimRadius = { "RimRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, RimRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RimRadius_MetaData), NewProp_RimRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoringZoneSize = { "ScoringZoneSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, ScoringZoneSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoringZoneSize_MetaData), NewProp_ScoringZoneSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_MinimumScoringVelocityZ = { "MinimumScoringVelocityZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, MinimumScoringVelocityZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumScoringVelocityZ_MetaData), NewProp_MinimumScoringVelocityZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_MaximumScoringVelocityZ = { "MaximumScoringVelocityZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, MaximumScoringVelocityZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumScoringVelocityZ_MetaData), NewProp_MaximumScoringVelocityZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoringCooldownTime = { "ScoringCooldownTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, ScoringCooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoringCooldownTime_MetaData), NewProp_ScoringCooldownTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_TrajectoryValidationAngle = { "TrajectoryValidationAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, TrajectoryValidationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrajectoryValidationAngle_MetaData), NewProp_TrajectoryValidationAngle_MetaData) };
void Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bRequirePreScoringZoneEntry_SetBit(void* Obj)
{
	((ASGBasketballHoop*)Obj)->bRequirePreScoringZoneEntry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bRequirePreScoringZoneEntry = { "bRequirePreScoringZoneEntry", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketballHoop), &Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bRequirePreScoringZoneEntry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequirePreScoringZoneEntry_MetaData), NewProp_bRequirePreScoringZoneEntry_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_TotalShots = { "TotalShots", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, TotalShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalShots_MetaData), NewProp_TotalShots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_SuccessfulShots = { "SuccessfulShots", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, SuccessfulShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessfulShots_MetaData), NewProp_SuccessfulShots_MetaData) };
void Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bPlaySoundOnScore_SetBit(void* Obj)
{
	((ASGBasketballHoop*)Obj)->bPlaySoundOnScore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bPlaySoundOnScore = { "bPlaySoundOnScore", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketballHoop), &Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bPlaySoundOnScore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaySoundOnScore_MetaData), NewProp_bPlaySoundOnScore_MetaData) };
void Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowDebugInfo_SetBit(void* Obj)
{
	((ASGBasketballHoop*)Obj)->bShowDebugInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowDebugInfo = { "bShowDebugInfo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketballHoop), &Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowDebugInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugInfo_MetaData), NewProp_bShowDebugInfo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_PostColor = { "PostColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, PostColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostColor_MetaData), NewProp_PostColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardColor = { "BackboardColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, BackboardColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackboardColor_MetaData), NewProp_BackboardColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimColor = { "RimColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, RimColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RimColor_MetaData), NewProp_RimColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetColor = { "NetColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, NetColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetColor_MetaData), NewProp_NetColor_MetaData) };
void Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowNet_SetBit(void* Obj)
{
	((ASGBasketballHoop*)Obj)->bShowNet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowNet = { "bShowNet", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketballHoop), &Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowNet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNet_MetaData), NewProp_bShowNet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetStripCount = { "NetStripCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, NetStripCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetStripCount_MetaData), NewProp_NetStripCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoreSoundCue = { "ScoreSoundCue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, ScoreSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreSoundCue_MetaData), NewProp_ScoreSoundCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimHitSoundCue = { "RimHitSoundCue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, RimHitSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RimHitSoundCue_MetaData), NewProp_RimHitSoundCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardHitSoundCue = { "BackboardHitSoundCue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballHoop, BackboardHitSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackboardHitSoundCue_MetaData), NewProp_BackboardHitSoundCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGBasketballHoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_PostMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoringZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimCollisionZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardCollisionZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_PreScoringZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetStrips_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetStrips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_HoopHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoringZoneSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_MinimumScoringVelocityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_MaximumScoringVelocityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoringCooldownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_TrajectoryValidationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bRequirePreScoringZoneEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_TotalShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_SuccessfulShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bPlaySoundOnScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowDebugInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_PostColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_bShowNet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_NetStripCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_ScoreSoundCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_RimHitSoundCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballHoop_Statics::NewProp_BackboardHitSoundCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballHoop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGBasketballHoop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballHoop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGBasketballHoop_Statics::ClassParams = {
	&ASGBasketballHoop::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGBasketballHoop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballHoop_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballHoop_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGBasketballHoop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGBasketballHoop()
{
	if (!Z_Registration_Info_UClass_ASGBasketballHoop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGBasketballHoop.OuterSingleton, Z_Construct_UClass_ASGBasketballHoop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGBasketballHoop.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGBasketballHoop::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TotalShots(TEXT("TotalShots"));
	static FName Name_SuccessfulShots(TEXT("SuccessfulShots"));
	const bool bIsValid = true
		&& Name_TotalShots == ClassReps[(int32)ENetFields_Private::TotalShots].Property->GetFName()
		&& Name_SuccessfulShots == ClassReps[(int32)ENetFields_Private::SuccessfulShots].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGBasketballHoop"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGBasketballHoop);
ASGBasketballHoop::~ASGBasketballHoop() {}
// ********** End Class ASGBasketballHoop **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGBasketballHoop, ASGBasketballHoop::StaticClass, TEXT("ASGBasketballHoop"), &Z_Registration_Info_UClass_ASGBasketballHoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGBasketballHoop), 2425649160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h__Script_SocialGolf_1840543233(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
