// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Basketball/SGBasketballGameManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGBasketballGameManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketball_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballGameManager();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballGameManager_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballHoop_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FBasketballPlayerStats();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBasketballPlayerStats ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBasketballPlayerStats;
class UScriptStruct* FBasketballPlayerStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBasketballPlayerStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBasketballPlayerStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasketballPlayerStats, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("BasketballPlayerStats"));
	}
	return Z_Registration_Info_UScriptStruct_FBasketballPlayerStats.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "BasketballPlayerStats" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalShots_MetaData[] = {
		{ "Category", "BasketballPlayerStats" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessfulShots_MetaData[] = {
		{ "Category", "BasketballPlayerStats" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Category", "BasketballPlayerStats" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "BasketballPlayerStats" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalShots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessfulShots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasketballPlayerStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballPlayerStats, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_TotalShots = { "TotalShots", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballPlayerStats, TotalShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalShots_MetaData), NewProp_TotalShots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_SuccessfulShots = { "SuccessfulShots", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballPlayerStats, SuccessfulShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessfulShots_MetaData), NewProp_SuccessfulShots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballPlayerStats, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasketballPlayerStats, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_TotalShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_SuccessfulShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"BasketballPlayerStats",
	Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::PropPointers),
	sizeof(FBasketballPlayerStats),
	alignof(FBasketballPlayerStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBasketballPlayerStats()
{
	if (!Z_Registration_Info_UScriptStruct_FBasketballPlayerStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBasketballPlayerStats.InnerSingleton, Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBasketballPlayerStats.InnerSingleton;
}
// ********** End ScriptStruct FBasketballPlayerStats **********************************************

// ********** Begin Class ASGBasketballGameManager Function CleanupBasketballs *********************
struct Z_Construct_UFunction_ASGBasketballGameManager_CleanupBasketballs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_CleanupBasketballs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "CleanupBasketballs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_CleanupBasketballs_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_CleanupBasketballs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_CleanupBasketballs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_CleanupBasketballs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execCleanupBasketballs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupBasketballs();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function CleanupBasketballs ***********************

// ********** Begin Class ASGBasketballGameManager Function EndGame ********************************
struct Z_Construct_UFunction_ASGBasketballGameManager_EndGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_EndGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "EndGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_EndGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execEndGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndGame();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function EndGame **********************************

// ********** Begin Class ASGBasketballGameManager Function GetAllPlayerStats **********************
struct Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics
{
	struct SGBasketballGameManager_eventGetAllPlayerStats_Parms
	{
		TArray<FBasketballPlayerStats> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters for UI\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters for UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventGetAllPlayerStats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "GetAllPlayerStats", Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::SGBasketballGameManager_eventGetAllPlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::SGBasketballGameManager_eventGetAllPlayerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execGetAllPlayerStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FBasketballPlayerStats>*)Z_Param__Result=P_THIS->GetAllPlayerStats();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function GetAllPlayerStats ************************

// ********** Begin Class ASGBasketballGameManager Function GetBasketballCount *********************
struct Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics
{
	struct SGBasketballGameManager_eventGetBasketballCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventGetBasketballCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "GetBasketballCount", Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::SGBasketballGameManager_eventGetBasketballCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::SGBasketballGameManager_eventGetBasketballCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execGetBasketballCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBasketballCount();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function GetBasketballCount ***********************

// ********** Begin Class ASGBasketballGameManager Function GetGameTimeRemaining *******************
struct Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics
{
	struct SGBasketballGameManager_eventGetGameTimeRemaining_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventGetGameTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "GetGameTimeRemaining", Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::SGBasketballGameManager_eventGetGameTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::SGBasketballGameManager_eventGetGameTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execGetGameTimeRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameTimeRemaining();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function GetGameTimeRemaining *********************

// ********** Begin Class ASGBasketballGameManager Function GetPlayerStats *************************
struct Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics
{
	struct SGBasketballGameManager_eventGetPlayerStats_Parms
	{
		ASGCharacter* Player;
		FBasketballPlayerStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventGetPlayerStats_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventGetPlayerStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "GetPlayerStats", Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::SGBasketballGameManager_eventGetPlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::SGBasketballGameManager_eventGetPlayerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execGetPlayerStats)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBasketballPlayerStats*)Z_Param__Result=P_THIS->GetPlayerStats(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function GetPlayerStats ***************************

// ********** Begin Class ASGBasketballGameManager Function GetTopPlayer ***************************
struct Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics
{
	struct SGBasketballGameManager_eventGetTopPlayer_Parms
	{
		FBasketballPlayerStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventGetTopPlayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "GetTopPlayer", Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::SGBasketballGameManager_eventGetTopPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::SGBasketballGameManager_eventGetTopPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execGetTopPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBasketballPlayerStats*)Z_Param__Result=P_THIS->GetTopPlayer();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function GetTopPlayer *****************************

// ********** Begin Class ASGBasketballGameManager Function IsGameActive ***************************
struct Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics
{
	struct SGBasketballGameManager_eventIsGameActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGBasketballGameManager_eventIsGameActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketballGameManager_eventIsGameActive_Parms), &Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "IsGameActive", Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::SGBasketballGameManager_eventIsGameActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::SGBasketballGameManager_eventIsGameActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execIsGameActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGameActive();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function IsGameActive *****************************

// ********** Begin Class ASGBasketballGameManager Function MulticastOnGameEnded *******************
static FName NAME_ASGBasketballGameManager_MulticastOnGameEnded = FName(TEXT("MulticastOnGameEnded"));
void ASGBasketballGameManager::MulticastOnGameEnded()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballGameManager_MulticastOnGameEnded);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "MulticastOnGameEnded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execMulticastOnGameEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnGameEnded_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function MulticastOnGameEnded *********************

// ********** Begin Class ASGBasketballGameManager Function MulticastOnGameStarted *****************
static FName NAME_ASGBasketballGameManager_MulticastOnGameStarted = FName(TEXT("MulticastOnGameStarted"));
void ASGBasketballGameManager::MulticastOnGameStarted()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballGameManager_MulticastOnGameStarted);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multicast RPCs\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast RPCs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "MulticastOnGameStarted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameStarted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execMulticastOnGameStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnGameStarted_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function MulticastOnGameStarted *******************

// ********** Begin Class ASGBasketballGameManager Function MulticastOnPlayerScored ****************
struct SGBasketballGameManager_eventMulticastOnPlayerScored_Parms
{
	FString PlayerName;
	int32 NewScore;
};
static FName NAME_ASGBasketballGameManager_MulticastOnPlayerScored = FName(TEXT("MulticastOnPlayerScored"));
void ASGBasketballGameManager::MulticastOnPlayerScored(const FString& PlayerName, int32 NewScore)
{
	SGBasketballGameManager_eventMulticastOnPlayerScored_Parms Parms;
	Parms.PlayerName=PlayerName;
	Parms.NewScore=NewScore;
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballGameManager_MulticastOnPlayerScored);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventMulticastOnPlayerScored_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventMulticastOnPlayerScored_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "MulticastOnPlayerScored", Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::PropPointers), sizeof(SGBasketballGameManager_eventMulticastOnPlayerScored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGBasketballGameManager_eventMulticastOnPlayerScored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execMulticastOnPlayerScored)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastOnPlayerScored_Implementation(Z_Param_PlayerName,Z_Param_NewScore);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function MulticastOnPlayerScored ******************

// ********** Begin Class ASGBasketballGameManager Function OnBasketballScored *********************
struct Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics
{
	struct SGBasketballGameManager_eventOnBasketballScored_Parms
	{
		ASGCharacter* Shooter;
		ASGBasketballHoop* Hoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shooter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventOnBasketballScored_Parms, Shooter), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::NewProp_Hoop = { "Hoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventOnBasketballScored_Parms, Hoop), Z_Construct_UClass_ASGBasketballHoop_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::NewProp_Shooter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::NewProp_Hoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "OnBasketballScored", Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::SGBasketballGameManager_eventOnBasketballScored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::SGBasketballGameManager_eventOnBasketballScored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execOnBasketballScored)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Shooter);
	P_GET_OBJECT(ASGBasketballHoop,Z_Param_Hoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBasketballScored(Z_Param_Shooter,Z_Param_Hoop);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function OnBasketballScored ***********************

// ********** Begin Class ASGBasketballGameManager Function OnBasketballThrown *********************
struct Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics
{
	struct SGBasketballGameManager_eventOnBasketballThrown_Parms
	{
		ASGCharacter* Shooter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shooter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventOnBasketballThrown_Parms, Shooter), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::NewProp_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "OnBasketballThrown", Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::SGBasketballGameManager_eventOnBasketballThrown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::SGBasketballGameManager_eventOnBasketballThrown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execOnBasketballThrown)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Shooter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBasketballThrown(Z_Param_Shooter);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function OnBasketballThrown ***********************

// ********** Begin Class ASGBasketballGameManager Function RegisterHoop ***************************
struct Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics
{
	struct SGBasketballGameManager_eventRegisterHoop_Parms
	{
		ASGBasketballHoop* Hoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hoop management\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hoop management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::NewProp_Hoop = { "Hoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventRegisterHoop_Parms, Hoop), Z_Construct_UClass_ASGBasketballHoop_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::NewProp_Hoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "RegisterHoop", Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::SGBasketballGameManager_eventRegisterHoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::SGBasketballGameManager_eventRegisterHoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execRegisterHoop)
{
	P_GET_OBJECT(ASGBasketballHoop,Z_Param_Hoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterHoop(Z_Param_Hoop);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function RegisterHoop *****************************

// ********** Begin Class ASGBasketballGameManager Function RegisterPlayer *************************
struct Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics
{
	struct SGBasketballGameManager_eventRegisterPlayer_Parms
	{
		ASGCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player management\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventRegisterPlayer_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "RegisterPlayer", Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::SGBasketballGameManager_eventRegisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::SGBasketballGameManager_eventRegisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execRegisterPlayer)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function RegisterPlayer ***************************

// ********** Begin Class ASGBasketballGameManager Function ResetGame ******************************
struct Z_Construct_UFunction_ASGBasketballGameManager_ResetGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_ResetGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "ResetGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_ResetGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_ResetGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_ResetGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_ResetGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execResetGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetGame();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function ResetGame ********************************

// ********** Begin Class ASGBasketballGameManager Function ServerEndGame **************************
static FName NAME_ASGBasketballGameManager_ServerEndGame = FName(TEXT("ServerEndGame"));
void ASGBasketballGameManager::ServerEndGame()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballGameManager_ServerEndGame);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballGameManager_ServerEndGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_ServerEndGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "ServerEndGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_ServerEndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_ServerEndGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_ServerEndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_ServerEndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execServerEndGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerEndGame_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function ServerEndGame ****************************

// ********** Begin Class ASGBasketballGameManager Function ServerResetGame ************************
static FName NAME_ASGBasketballGameManager_ServerResetGame = FName(TEXT("ServerResetGame"));
void ASGBasketballGameManager::ServerResetGame()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballGameManager_ServerResetGame);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballGameManager_ServerResetGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_ServerResetGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "ServerResetGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_ServerResetGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_ServerResetGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_ServerResetGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_ServerResetGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execServerResetGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerResetGame_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function ServerResetGame **************************

// ********** Begin Class ASGBasketballGameManager Function ServerStartGame ************************
static FName NAME_ASGBasketballGameManager_ServerStartGame = FName(TEXT("ServerStartGame"));
void ASGBasketballGameManager::ServerStartGame()
{
	UFunction* Func = FindFunctionChecked(NAME_ASGBasketballGameManager_ServerStartGame);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASGBasketballGameManager_ServerStartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPCs\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPCs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_ServerStartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "ServerStartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_ServerStartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_ServerStartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_ServerStartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_ServerStartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execServerStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartGame_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function ServerStartGame **************************

// ********** Begin Class ASGBasketballGameManager Function SpawnBasketball ************************
struct Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics
{
	struct SGBasketballGameManager_eventSpawnBasketball_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball management\n" },
#endif
		{ "CPP_Default_Location", "" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventSpawnBasketball_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "SpawnBasketball", Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::SGBasketballGameManager_eventSpawnBasketball_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::SGBasketballGameManager_eventSpawnBasketball_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execSpawnBasketball)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBasketball(Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function SpawnBasketball **************************

// ********** Begin Class ASGBasketballGameManager Function StartGame ******************************
struct Z_Construct_UFunction_ASGBasketballGameManager_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game management\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_StartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "StartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_StartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function StartGame ********************************

// ********** Begin Class ASGBasketballGameManager Function UnregisterHoop *************************
struct Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics
{
	struct SGBasketballGameManager_eventUnregisterHoop_Parms
	{
		ASGBasketballHoop* Hoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::NewProp_Hoop = { "Hoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventUnregisterHoop_Parms, Hoop), Z_Construct_UClass_ASGBasketballHoop_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::NewProp_Hoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "UnregisterHoop", Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::SGBasketballGameManager_eventUnregisterHoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::SGBasketballGameManager_eventUnregisterHoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execUnregisterHoop)
{
	P_GET_OBJECT(ASGBasketballHoop,Z_Param_Hoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterHoop(Z_Param_Hoop);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function UnregisterHoop ***************************

// ********** Begin Class ASGBasketballGameManager Function UnregisterPlayer ***********************
struct Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics
{
	struct SGBasketballGameManager_eventUnregisterPlayer_Parms
	{
		ASGCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventUnregisterPlayer_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "UnregisterPlayer", Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::SGBasketballGameManager_eventUnregisterPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::SGBasketballGameManager_eventUnregisterPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execUnregisterPlayer)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function UnregisterPlayer *************************

// ********** Begin Class ASGBasketballGameManager Function UpdatePlayerStats **********************
struct Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics
{
	struct SGBasketballGameManager_eventUpdatePlayerStats_Parms
	{
		ASGCharacter* Player;
		bool bSuccessfulShot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Game" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_bSuccessfulShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessfulShot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballGameManager_eventUpdatePlayerStats_Parms, Player), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::NewProp_bSuccessfulShot_SetBit(void* Obj)
{
	((SGBasketballGameManager_eventUpdatePlayerStats_Parms*)Obj)->bSuccessfulShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::NewProp_bSuccessfulShot = { "bSuccessfulShot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGBasketballGameManager_eventUpdatePlayerStats_Parms), &Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::NewProp_bSuccessfulShot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::NewProp_bSuccessfulShot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGBasketballGameManager, nullptr, "UpdatePlayerStats", Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::SGBasketballGameManager_eventUpdatePlayerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::SGBasketballGameManager_eventUpdatePlayerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGBasketballGameManager::execUpdatePlayerStats)
{
	P_GET_OBJECT(ASGCharacter,Z_Param_Player);
	P_GET_UBOOL(Z_Param_bSuccessfulShot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerStats(Z_Param_Player,Z_Param_bSuccessfulShot);
	P_NATIVE_END;
}
// ********** End Class ASGBasketballGameManager Function UpdatePlayerStats ************************

// ********** Begin Class ASGBasketballGameManager *************************************************
void ASGBasketballGameManager::StaticRegisterNativesASGBasketballGameManager()
{
	UClass* Class = ASGBasketballGameManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CleanupBasketballs", &ASGBasketballGameManager::execCleanupBasketballs },
		{ "EndGame", &ASGBasketballGameManager::execEndGame },
		{ "GetAllPlayerStats", &ASGBasketballGameManager::execGetAllPlayerStats },
		{ "GetBasketballCount", &ASGBasketballGameManager::execGetBasketballCount },
		{ "GetGameTimeRemaining", &ASGBasketballGameManager::execGetGameTimeRemaining },
		{ "GetPlayerStats", &ASGBasketballGameManager::execGetPlayerStats },
		{ "GetTopPlayer", &ASGBasketballGameManager::execGetTopPlayer },
		{ "IsGameActive", &ASGBasketballGameManager::execIsGameActive },
		{ "MulticastOnGameEnded", &ASGBasketballGameManager::execMulticastOnGameEnded },
		{ "MulticastOnGameStarted", &ASGBasketballGameManager::execMulticastOnGameStarted },
		{ "MulticastOnPlayerScored", &ASGBasketballGameManager::execMulticastOnPlayerScored },
		{ "OnBasketballScored", &ASGBasketballGameManager::execOnBasketballScored },
		{ "OnBasketballThrown", &ASGBasketballGameManager::execOnBasketballThrown },
		{ "RegisterHoop", &ASGBasketballGameManager::execRegisterHoop },
		{ "RegisterPlayer", &ASGBasketballGameManager::execRegisterPlayer },
		{ "ResetGame", &ASGBasketballGameManager::execResetGame },
		{ "ServerEndGame", &ASGBasketballGameManager::execServerEndGame },
		{ "ServerResetGame", &ASGBasketballGameManager::execServerResetGame },
		{ "ServerStartGame", &ASGBasketballGameManager::execServerStartGame },
		{ "SpawnBasketball", &ASGBasketballGameManager::execSpawnBasketball },
		{ "StartGame", &ASGBasketballGameManager::execStartGame },
		{ "UnregisterHoop", &ASGBasketballGameManager::execUnregisterHoop },
		{ "UnregisterPlayer", &ASGBasketballGameManager::execUnregisterPlayer },
		{ "UpdatePlayerStats", &ASGBasketballGameManager::execUpdatePlayerStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGBasketballGameManager;
UClass* ASGBasketballGameManager::GetPrivateStaticClass()
{
	using TClass = ASGBasketballGameManager;
	if (!Z_Registration_Info_UClass_ASGBasketballGameManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGBasketballGameManager"),
			Z_Registration_Info_UClass_ASGBasketballGameManager.InnerSingleton,
			StaticRegisterNativesASGBasketballGameManager,
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
	return Z_Registration_Info_UClass_ASGBasketballGameManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGBasketballGameManager_NoRegister()
{
	return ASGBasketballGameManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGBasketballGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Basketball/SGBasketballGameManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameActive_MetaData[] = {
		{ "Category", "Game State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game state\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTimeRemaining_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDuration_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "Game Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 5 minutes default\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "5 minutes default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSpawnBasketballs_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBasketballs_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player stats\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredHoops_MetaData[] = {
		{ "Category", "References" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// References\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedBasketballs_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasketballSpawnLocations_MetaData[] = {
		{ "Category", "Basketball Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spawn locations for basketballs\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballGameManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn locations for basketballs" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bGameActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameTimeRemaining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bAutoSpawnBasketballs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSpawnBasketballs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBasketballs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredHoops_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredHoops;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedBasketballs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedBasketballs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasketballSpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BasketballSpawnLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGBasketballGameManager_CleanupBasketballs, "CleanupBasketballs" }, // 3301069377
		{ &Z_Construct_UFunction_ASGBasketballGameManager_EndGame, "EndGame" }, // 819887492
		{ &Z_Construct_UFunction_ASGBasketballGameManager_GetAllPlayerStats, "GetAllPlayerStats" }, // 2662277378
		{ &Z_Construct_UFunction_ASGBasketballGameManager_GetBasketballCount, "GetBasketballCount" }, // 2301063245
		{ &Z_Construct_UFunction_ASGBasketballGameManager_GetGameTimeRemaining, "GetGameTimeRemaining" }, // 3556798622
		{ &Z_Construct_UFunction_ASGBasketballGameManager_GetPlayerStats, "GetPlayerStats" }, // 3772534224
		{ &Z_Construct_UFunction_ASGBasketballGameManager_GetTopPlayer, "GetTopPlayer" }, // 1443476285
		{ &Z_Construct_UFunction_ASGBasketballGameManager_IsGameActive, "IsGameActive" }, // 1968289468
		{ &Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameEnded, "MulticastOnGameEnded" }, // 3101074120
		{ &Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnGameStarted, "MulticastOnGameStarted" }, // 2873938540
		{ &Z_Construct_UFunction_ASGBasketballGameManager_MulticastOnPlayerScored, "MulticastOnPlayerScored" }, // 263835369
		{ &Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballScored, "OnBasketballScored" }, // 1327259539
		{ &Z_Construct_UFunction_ASGBasketballGameManager_OnBasketballThrown, "OnBasketballThrown" }, // 3981901697
		{ &Z_Construct_UFunction_ASGBasketballGameManager_RegisterHoop, "RegisterHoop" }, // 1535023924
		{ &Z_Construct_UFunction_ASGBasketballGameManager_RegisterPlayer, "RegisterPlayer" }, // 2769494374
		{ &Z_Construct_UFunction_ASGBasketballGameManager_ResetGame, "ResetGame" }, // 1960086426
		{ &Z_Construct_UFunction_ASGBasketballGameManager_ServerEndGame, "ServerEndGame" }, // 3769351006
		{ &Z_Construct_UFunction_ASGBasketballGameManager_ServerResetGame, "ServerResetGame" }, // 3454437305
		{ &Z_Construct_UFunction_ASGBasketballGameManager_ServerStartGame, "ServerStartGame" }, // 2637725468
		{ &Z_Construct_UFunction_ASGBasketballGameManager_SpawnBasketball, "SpawnBasketball" }, // 2228326287
		{ &Z_Construct_UFunction_ASGBasketballGameManager_StartGame, "StartGame" }, // 416737208
		{ &Z_Construct_UFunction_ASGBasketballGameManager_UnregisterHoop, "UnregisterHoop" }, // 3734991960
		{ &Z_Construct_UFunction_ASGBasketballGameManager_UnregisterPlayer, "UnregisterPlayer" }, // 3542044549
		{ &Z_Construct_UFunction_ASGBasketballGameManager_UpdatePlayerStats, "UpdatePlayerStats" }, // 2229765927
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGBasketballGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bGameActive_SetBit(void* Obj)
{
	((ASGBasketballGameManager*)Obj)->bGameActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bGameActive = { "bGameActive", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketballGameManager), &Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bGameActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameActive_MetaData), NewProp_bGameActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_GameTimeRemaining = { "GameTimeRemaining", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, GameTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTimeRemaining_MetaData), NewProp_GameTimeRemaining_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_GameDuration = { "GameDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, GameDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDuration_MetaData), NewProp_GameDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
void Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bAutoSpawnBasketballs_SetBit(void* Obj)
{
	((ASGBasketballGameManager*)Obj)->bAutoSpawnBasketballs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bAutoSpawnBasketballs = { "bAutoSpawnBasketballs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGBasketballGameManager), &Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bAutoSpawnBasketballs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSpawnBasketballs_MetaData), NewProp_bAutoSpawnBasketballs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_MaxBasketballs = { "MaxBasketballs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, MaxBasketballs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBasketballs_MetaData), NewProp_MaxBasketballs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_PlayerStats_Inner = { "PlayerStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBasketballPlayerStats, METADATA_PARAMS(0, nullptr) }; // 2350843782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, PlayerStats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStats_MetaData), NewProp_PlayerStats_MetaData) }; // 2350843782
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_RegisteredHoops_Inner = { "RegisteredHoops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASGBasketballHoop_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_RegisteredHoops = { "RegisteredHoops", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, RegisteredHoops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredHoops_MetaData), NewProp_RegisteredHoops_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_SpawnedBasketballs_Inner = { "SpawnedBasketballs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASGBasketball_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_SpawnedBasketballs = { "SpawnedBasketballs", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, SpawnedBasketballs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedBasketballs_MetaData), NewProp_SpawnedBasketballs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_BasketballSpawnLocations_Inner = { "BasketballSpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_BasketballSpawnLocations = { "BasketballSpawnLocations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGBasketballGameManager, BasketballSpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasketballSpawnLocations_MetaData), NewProp_BasketballSpawnLocations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGBasketballGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bGameActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_GameTimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_GameDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_bAutoSpawnBasketballs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_MaxBasketballs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_PlayerStats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_PlayerStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_RegisteredHoops_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_RegisteredHoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_SpawnedBasketballs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_SpawnedBasketballs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_BasketballSpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGBasketballGameManager_Statics::NewProp_BasketballSpawnLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGBasketballGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGBasketballGameManager_Statics::ClassParams = {
	&ASGBasketballGameManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGBasketballGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballGameManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGBasketballGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGBasketballGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGBasketballGameManager()
{
	if (!Z_Registration_Info_UClass_ASGBasketballGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGBasketballGameManager.OuterSingleton, Z_Construct_UClass_ASGBasketballGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGBasketballGameManager.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGBasketballGameManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bGameActive(TEXT("bGameActive"));
	static FName Name_GameTimeRemaining(TEXT("GameTimeRemaining"));
	static FName Name_PlayerStats(TEXT("PlayerStats"));
	const bool bIsValid = true
		&& Name_bGameActive == ClassReps[(int32)ENetFields_Private::bGameActive].Property->GetFName()
		&& Name_GameTimeRemaining == ClassReps[(int32)ENetFields_Private::GameTimeRemaining].Property->GetFName()
		&& Name_PlayerStats == ClassReps[(int32)ENetFields_Private::PlayerStats].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGBasketballGameManager"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGBasketballGameManager);
ASGBasketballGameManager::~ASGBasketballGameManager() {}
// ********** End Class ASGBasketballGameManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h__Script_SocialGolf_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBasketballPlayerStats::StaticStruct, Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics::NewStructOps, TEXT("BasketballPlayerStats"), &Z_Registration_Info_UScriptStruct_FBasketballPlayerStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasketballPlayerStats), 2350843782U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGBasketballGameManager, ASGBasketballGameManager::StaticClass, TEXT("ASGBasketballGameManager"), &Z_Registration_Info_UClass_ASGBasketballGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGBasketballGameManager), 3557174205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h__Script_SocialGolf_800075277(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h__Script_SocialGolf_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h__Script_SocialGolf_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
