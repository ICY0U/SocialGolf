// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Basketball/SGBasketballStatsWidget.h"
#include "SocialGolf/Basketball/SGBasketballGameManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGBasketballStatsWidget() {}

// ********** Begin Cross Module References ********************************************************
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballGameManager_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballStatsWidget();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballStatsWidget_NoRegister();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FBasketballPlayerStats();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGBasketballStatsWidget Function EndGame ********************************
struct Z_Construct_UFunction_USGBasketballStatsWidget_EndGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_EndGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "EndGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_EndGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execEndGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndGame();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function EndGame **********************************

// ********** Begin Class USGBasketballStatsWidget Function GetAllPlayerStats **********************
struct Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics
{
	struct SGBasketballStatsWidget_eventGetAllPlayerStats_Parms
	{
		TArray<FBasketballPlayerStats> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventGetAllPlayerStats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "GetAllPlayerStats", Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::SGBasketballStatsWidget_eventGetAllPlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::SGBasketballStatsWidget_eventGetAllPlayerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execGetAllPlayerStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FBasketballPlayerStats>*)Z_Param__Result=P_THIS->GetAllPlayerStats();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function GetAllPlayerStats ************************

// ********** Begin Class USGBasketballStatsWidget Function GetGameTimeRemaining *******************
struct Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics
{
	struct SGBasketballStatsWidget_eventGetGameTimeRemaining_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventGetGameTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "GetGameTimeRemaining", Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::SGBasketballStatsWidget_eventGetGameTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::SGBasketballStatsWidget_eventGetGameTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execGetGameTimeRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameTimeRemaining();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function GetGameTimeRemaining *********************

// ********** Begin Class USGBasketballStatsWidget Function GetLocalPlayerStats ********************
struct Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics
{
	struct SGBasketballStatsWidget_eventGetLocalPlayerStats_Parms
	{
		FBasketballPlayerStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventGetLocalPlayerStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "GetLocalPlayerStats", Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::SGBasketballStatsWidget_eventGetLocalPlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::SGBasketballStatsWidget_eventGetLocalPlayerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execGetLocalPlayerStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBasketballPlayerStats*)Z_Param__Result=P_THIS->GetLocalPlayerStats();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function GetLocalPlayerStats **********************

// ********** Begin Class USGBasketballStatsWidget Function GetTopPlayer ***************************
struct Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics
{
	struct SGBasketballStatsWidget_eventGetTopPlayer_Parms
	{
		FBasketballPlayerStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventGetTopPlayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "GetTopPlayer", Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::SGBasketballStatsWidget_eventGetTopPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::SGBasketballStatsWidget_eventGetTopPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execGetTopPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBasketballPlayerStats*)Z_Param__Result=P_THIS->GetTopPlayer();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function GetTopPlayer *****************************

// ********** Begin Class USGBasketballStatsWidget Function IsGameActive ***************************
struct Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics
{
	struct SGBasketballStatsWidget_eventIsGameActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGBasketballStatsWidget_eventIsGameActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketballStatsWidget_eventIsGameActive_Parms), &Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "IsGameActive", Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::SGBasketballStatsWidget_eventIsGameActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::SGBasketballStatsWidget_eventIsGameActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execIsGameActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGameActive();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function IsGameActive *****************************

// ********** Begin Class USGBasketballStatsWidget Function OnGameEnded ****************************
struct SGBasketballStatsWidget_eventOnGameEnded_Parms
{
	FBasketballPlayerStats Winner;
};
static FName NAME_USGBasketballStatsWidget_OnGameEnded = FName(TEXT("OnGameEnded"));
void USGBasketballStatsWidget::OnGameEnded(FBasketballPlayerStats const& Winner)
{
	SGBasketballStatsWidget_eventOnGameEnded_Parms Parms;
	Parms.Winner=Winner;
	UFunction* Func = FindFunctionChecked(NAME_USGBasketballStatsWidget_OnGameEnded);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Winner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventOnGameEnded_Parms, Winner), Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winner_MetaData), NewProp_Winner_MetaData) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::NewProp_Winner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "OnGameEnded", Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::PropPointers), sizeof(SGBasketballStatsWidget_eventOnGameEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketballStatsWidget_eventOnGameEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USGBasketballStatsWidget Function OnGameEnded ******************************

// ********** Begin Class USGBasketballStatsWidget Function OnGameStarted **************************
static FName NAME_USGBasketballStatsWidget_OnGameStarted = FName(TEXT("OnGameStarted"));
void USGBasketballStatsWidget::OnGameStarted()
{
	UFunction* Func = FindFunctionChecked(NAME_USGBasketballStatsWidget_OnGameStarted);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USGBasketballStatsWidget_OnGameStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_OnGameStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "OnGameStarted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_OnGameStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_OnGameStarted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_OnGameStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_OnGameStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USGBasketballStatsWidget Function OnGameStarted ****************************

// ********** Begin Class USGBasketballStatsWidget Function OnPlayerScored *************************
struct SGBasketballStatsWidget_eventOnPlayerScored_Parms
{
	FString PlayerName;
	int32 NewScore;
};
static FName NAME_USGBasketballStatsWidget_OnPlayerScored = FName(TEXT("OnPlayerScored"));
void USGBasketballStatsWidget::OnPlayerScored(const FString& PlayerName, int32 NewScore)
{
	SGBasketballStatsWidget_eventOnPlayerScored_Parms Parms;
	Parms.PlayerName=PlayerName;
	Parms.NewScore=NewScore;
	UFunction* Func = FindFunctionChecked(NAME_USGBasketballStatsWidget_OnPlayerScored);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventOnPlayerScored_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventOnPlayerScored_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "OnPlayerScored", Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::PropPointers), sizeof(SGBasketballStatsWidget_eventOnPlayerScored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketballStatsWidget_eventOnPlayerScored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USGBasketballStatsWidget Function OnPlayerScored ***************************

// ********** Begin Class USGBasketballStatsWidget Function ResetGame ******************************
struct Z_Construct_UFunction_USGBasketballStatsWidget_ResetGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_ResetGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "ResetGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_ResetGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_ResetGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_ResetGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_ResetGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execResetGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetGame();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function ResetGame ********************************

// ********** Begin Class USGBasketballStatsWidget Function SetVisibilityState *********************
struct Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics
{
	struct SGBasketballStatsWidget_eventSetVisibilityState_Parms
	{
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((SGBasketballStatsWidget_eventSetVisibilityState_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketballStatsWidget_eventSetVisibilityState_Parms), &Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "SetVisibilityState", Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::SGBasketballStatsWidget_eventSetVisibilityState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::SGBasketballStatsWidget_eventSetVisibilityState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execSetVisibilityState)
{
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisibilityState(Z_Param_bVisible);
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function SetVisibilityState ***********************

// ********** Begin Class USGBasketballStatsWidget Function StartGame ******************************
struct Z_Construct_UFunction_USGBasketballStatsWidget_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Callable functions from Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callable functions from Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_StartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "StartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_StartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballStatsWidget::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// ********** End Class USGBasketballStatsWidget Function StartGame ********************************

// ********** Begin Class USGBasketballStatsWidget Function UpdateGameStatus ***********************
struct SGBasketballStatsWidget_eventUpdateGameStatus_Parms
{
	bool bGameActive;
	float TimeRemaining;
};
static FName NAME_USGBasketballStatsWidget_UpdateGameStatus = FName(TEXT("UpdateGameStatus"));
void USGBasketballStatsWidget::UpdateGameStatus(bool bGameActive, float TimeRemaining)
{
	SGBasketballStatsWidget_eventUpdateGameStatus_Parms Parms;
	Parms.bGameActive=bGameActive ? true : false;
	Parms.TimeRemaining=TimeRemaining;
	UFunction* Func = FindFunctionChecked(NAME_USGBasketballStatsWidget_UpdateGameStatus);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions to be implemented in Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions to be implemented in Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bGameActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::NewProp_bGameActive_SetBit(void* Obj)
{
	((SGBasketballStatsWidget_eventUpdateGameStatus_Parms*)Obj)->bGameActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::NewProp_bGameActive = { "bGameActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketballStatsWidget_eventUpdateGameStatus_Parms), &Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::NewProp_bGameActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventUpdateGameStatus_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::NewProp_bGameActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::NewProp_TimeRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "UpdateGameStatus", Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::PropPointers), sizeof(SGBasketballStatsWidget_eventUpdateGameStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketballStatsWidget_eventUpdateGameStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USGBasketballStatsWidget Function UpdateGameStatus *************************

// ********** Begin Class USGBasketballStatsWidget Function UpdatePlayerStats **********************
struct SGBasketballStatsWidget_eventUpdatePlayerStats_Parms
{
	TArray<FBasketballPlayerStats> PlayerStats;
};
static FName NAME_USGBasketballStatsWidget_UpdatePlayerStats = FName(TEXT("UpdatePlayerStats"));
void USGBasketballStatsWidget::UpdatePlayerStats(TArray<FBasketballPlayerStats> const& PlayerStats)
{
	SGBasketballStatsWidget_eventUpdatePlayerStats_Parms Parms;
	Parms.PlayerStats=PlayerStats;
	UFunction* Func = FindFunctionChecked(NAME_USGBasketballStatsWidget_UpdatePlayerStats);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::NewProp_PlayerStats_Inner = { "PlayerStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventUpdatePlayerStats_Parms, PlayerStats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStats_MetaData), NewProp_PlayerStats_MetaData) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::NewProp_PlayerStats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::NewProp_PlayerStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "UpdatePlayerStats", Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::PropPointers), sizeof(SGBasketballStatsWidget_eventUpdatePlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketballStatsWidget_eventUpdatePlayerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USGBasketballStatsWidget Function UpdatePlayerStats ************************

// ********** Begin Class USGBasketballStatsWidget Function UpdateTopPlayer ************************
struct SGBasketballStatsWidget_eventUpdateTopPlayer_Parms
{
	FBasketballPlayerStats TopPlayer;
};
static FName NAME_USGBasketballStatsWidget_UpdateTopPlayer = FName(TEXT("UpdateTopPlayer"));
void USGBasketballStatsWidget::UpdateTopPlayer(FBasketballPlayerStats const& TopPlayer)
{
	SGBasketballStatsWidget_eventUpdateTopPlayer_Parms Parms;
	Parms.TopPlayer=TopPlayer;
	UFunction* Func = FindFunctionChecked(NAME_USGBasketballStatsWidget_UpdateTopPlayer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball UI" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::NewProp_TopPlayer = { "TopPlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballStatsWidget_eventUpdateTopPlayer_Parms, TopPlayer), Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopPlayer_MetaData), NewProp_TopPlayer_MetaData) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::NewProp_TopPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballStatsWidget, nullptr, "UpdateTopPlayer", Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::PropPointers), sizeof(SGBasketballStatsWidget_eventUpdateTopPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketballStatsWidget_eventUpdateTopPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USGBasketballStatsWidget Function UpdateTopPlayer **************************

// ********** Begin Class USGBasketballStatsWidget *************************************************
void USGBasketballStatsWidget::StaticRegisterNativesUSGBasketballStatsWidget()
{
	UClass* Class = USGBasketballStatsWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndGame", &USGBasketballStatsWidget::execEndGame },
		{ "GetAllPlayerStats", &USGBasketballStatsWidget::execGetAllPlayerStats },
		{ "GetGameTimeRemaining", &USGBasketballStatsWidget::execGetGameTimeRemaining },
		{ "GetLocalPlayerStats", &USGBasketballStatsWidget::execGetLocalPlayerStats },
		{ "GetTopPlayer", &USGBasketballStatsWidget::execGetTopPlayer },
		{ "IsGameActive", &USGBasketballStatsWidget::execIsGameActive },
		{ "ResetGame", &USGBasketballStatsWidget::execResetGame },
		{ "SetVisibilityState", &USGBasketballStatsWidget::execSetVisibilityState },
		{ "StartGame", &USGBasketballStatsWidget::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGBasketballStatsWidget;
UClass* USGBasketballStatsWidget::GetPrivateStaticClass()
{
	using TClass = USGBasketballStatsWidget;
	if (!Z_Registration_Info_UClass_USGBasketballStatsWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGBasketballStatsWidget"),
			Z_Registration_Info_UClass_USGBasketballStatsWidget.InnerSingleton,
			StaticRegisterNativesUSGBasketballStatsWidget,
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
	return Z_Registration_Info_UClass_USGBasketballStatsWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USGBasketballStatsWidget_NoRegister()
{
	return USGBasketballStatsWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGBasketballStatsWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Basketball/SGBasketballStatsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameManager_MetaData[] = {
		{ "Category", "Basketball" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the game manager\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the game manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI Update frequency\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballStatsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Update frequency" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameManager;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_EndGame, "EndGame" }, // 3309418518
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_GetAllPlayerStats, "GetAllPlayerStats" }, // 546637513
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_GetGameTimeRemaining, "GetGameTimeRemaining" }, // 4239675195
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_GetLocalPlayerStats, "GetLocalPlayerStats" }, // 1561223954
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_GetTopPlayer, "GetTopPlayer" }, // 398875555
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_IsGameActive, "IsGameActive" }, // 2301999619
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_OnGameEnded, "OnGameEnded" }, // 3438454034
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_OnGameStarted, "OnGameStarted" }, // 2360232121
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_OnPlayerScored, "OnPlayerScored" }, // 1943454712
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_ResetGame, "ResetGame" }, // 1418040775
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_SetVisibilityState, "SetVisibilityState" }, // 2816866846
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_StartGame, "StartGame" }, // 2082970313
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_UpdateGameStatus, "UpdateGameStatus" }, // 2865590268
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_UpdatePlayerStats, "UpdatePlayerStats" }, // 1373940489
		{ &Z_Construct_UFunction_USGBasketballStatsWidget_UpdateTopPlayer, "UpdateTopPlayer" }, // 2403370811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGBasketballStatsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGBasketballStatsWidget_Statics::NewProp_GameManager = { "GameManager", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballStatsWidget, GameManager), Z_Construct_UClass_ASGBasketballGameManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameManager_MetaData), NewProp_GameManager_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballStatsWidget_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballStatsWidget, UpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFrequency_MetaData), NewProp_UpdateFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGBasketballStatsWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballStatsWidget_Statics::NewProp_GameManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballStatsWidget_Statics::NewProp_UpdateFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballStatsWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGBasketballStatsWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballStatsWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGBasketballStatsWidget_Statics::ClassParams = {
	&USGBasketballStatsWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGBasketballStatsWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballStatsWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballStatsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USGBasketballStatsWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGBasketballStatsWidget()
{
	if (!Z_Registration_Info_UClass_USGBasketballStatsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGBasketballStatsWidget.OuterSingleton, Z_Construct_UClass_USGBasketballStatsWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGBasketballStatsWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGBasketballStatsWidget);
USGBasketballStatsWidget::~USGBasketballStatsWidget() {}
// ********** End Class USGBasketballStatsWidget ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGBasketballStatsWidget, USGBasketballStatsWidget::StaticClass, TEXT("USGBasketballStatsWidget"), &Z_Registration_Info_UClass_USGBasketballStatsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGBasketballStatsWidget), 3646158639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h__Script_SocialGolf_2418085602(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
