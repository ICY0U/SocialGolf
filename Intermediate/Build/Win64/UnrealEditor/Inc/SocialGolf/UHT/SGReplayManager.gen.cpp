// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGReplayManager.h"
#include "SGReplayTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGReplayManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfBall_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayManager();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayManager_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_ECameraReplayMode();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EReplayEventType();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGReplayData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnReplayRecordingStateChanged ****************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms
	{
		bool bIsRecording;
		float CurrentDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRecording_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::NewProp_bIsRecording_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms*)Obj)->bIsRecording = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::NewProp_CurrentDuration = { "CurrentDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms, CurrentDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::NewProp_bIsRecording,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::NewProp_CurrentDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnReplayRecordingStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplayRecordingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnReplayRecordingStateChanged, bool bIsRecording, float CurrentDuration)
{
	struct _Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms
	{
		bool bIsRecording;
		float CurrentDuration;
	};
	_Script_SocialGolf_eventOnReplayRecordingStateChanged_Parms Parms;
	Parms.bIsRecording=bIsRecording ? true : false;
	Parms.CurrentDuration=CurrentDuration;
	OnReplayRecordingStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReplayRecordingStateChanged ******************************************

// ********** Begin Delegate FOnReplayPlaybackStateChanged *****************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms
	{
		bool bIsPlaying;
		float CurrentTime;
		float TotalDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms*)Obj)->bIsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms, TotalDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_bIsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::NewProp_TotalDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnReplayPlaybackStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplayPlaybackStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnReplayPlaybackStateChanged, bool bIsPlaying, float CurrentTime, float TotalDuration)
{
	struct _Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms
	{
		bool bIsPlaying;
		float CurrentTime;
		float TotalDuration;
	};
	_Script_SocialGolf_eventOnReplayPlaybackStateChanged_Parms Parms;
	Parms.bIsPlaying=bIsPlaying ? true : false;
	Parms.CurrentTime=CurrentTime;
	Parms.TotalDuration=TotalDuration;
	OnReplayPlaybackStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReplayPlaybackStateChanged *******************************************

// ********** Begin Delegate FOnReplayEventRecorded ************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnReplayEventRecorded_Parms
	{
		EReplayEventType EventType;
		FString Description;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplayEventRecorded_Parms, EventType), Z_Construct_UEnum_SocialGolf_EReplayEventType, METADATA_PARAMS(0, nullptr) }; // 1092210602
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplayEventRecorded_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnReplayEventRecorded__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayEventRecorded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayEventRecorded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplayEventRecorded_DelegateWrapper(const FMulticastScriptDelegate& OnReplayEventRecorded, EReplayEventType EventType, const FString& Description)
{
	struct _Script_SocialGolf_eventOnReplayEventRecorded_Parms
	{
		EReplayEventType EventType;
		FString Description;
	};
	_Script_SocialGolf_eventOnReplayEventRecorded_Parms Parms;
	Parms.EventType=EventType;
	Parms.Description=Description;
	OnReplayEventRecorded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReplayEventRecorded **************************************************

// ********** Begin Delegate FOnReplaySaved ********************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnReplaySaved_Parms
	{
		bool bSuccess;
		FString ReplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnReplaySaved_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnReplaySaved_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplaySaved_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::NewProp_ReplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnReplaySaved__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplaySaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplaySaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplaySaved_DelegateWrapper(const FMulticastScriptDelegate& OnReplaySaved, bool bSuccess, const FString& ReplayName)
{
	struct _Script_SocialGolf_eventOnReplaySaved_Parms
	{
		bool bSuccess;
		FString ReplayName;
	};
	_Script_SocialGolf_eventOnReplaySaved_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ReplayName=ReplayName;
	OnReplaySaved.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReplaySaved **********************************************************

// ********** Begin Class USGReplayManager Function ClearCurrentReplay *****************************
struct Z_Construct_UFunction_USGReplayManager_ClearCurrentReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === UTILITY FUNCTIONS ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== UTILITY FUNCTIONS ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_ClearCurrentReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "ClearCurrentReplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_ClearCurrentReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_ClearCurrentReplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_ClearCurrentReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_ClearCurrentReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execClearCurrentReplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCurrentReplay();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function ClearCurrentReplay *******************************

// ********** Begin Class USGReplayManager Function DeleteReplay ***********************************
struct Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics
{
	struct SGReplayManager_eventDeleteReplay_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventDeleteReplay_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGReplayManager_eventDeleteReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayManager_eventDeleteReplay_Parms), &Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "DeleteReplay", Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::SGReplayManager_eventDeleteReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::SGReplayManager_eventDeleteReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_DeleteReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_DeleteReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execDeleteReplay)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteReplay(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function DeleteReplay *************************************

// ********** Begin Class USGReplayManager Function GetAvailableReplays ****************************
struct Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics
{
	struct SGReplayManager_eventGetAvailableReplays_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventGetAvailableReplays_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "GetAvailableReplays", Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::SGReplayManager_eventGetAvailableReplays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::SGReplayManager_eventGetAvailableReplays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_GetAvailableReplays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_GetAvailableReplays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execGetAvailableReplays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableReplays();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function GetAvailableReplays ******************************

// ********** Begin Class USGReplayManager Function GetCurrentCameraMode ***************************
struct Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics
{
	struct SGReplayManager_eventGetCurrentCameraMode_Parms
	{
		ECameraReplayMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventGetCurrentCameraMode_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_ECameraReplayMode, METADATA_PARAMS(0, nullptr) }; // 17504452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "GetCurrentCameraMode", Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::SGReplayManager_eventGetCurrentCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::SGReplayManager_eventGetCurrentCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execGetCurrentCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECameraReplayMode*)Z_Param__Result=P_THIS->GetCurrentCameraMode();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function GetCurrentCameraMode *****************************

// ********** Begin Class USGReplayManager Function GetCurrentReplayData ***************************
struct Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics
{
	struct SGReplayManager_eventGetCurrentReplayData_Parms
	{
		FSGReplayData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventGetCurrentReplayData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSGReplayData, METADATA_PARAMS(0, nullptr) }; // 2410206830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "GetCurrentReplayData", Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::SGReplayManager_eventGetCurrentReplayData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::SGReplayManager_eventGetCurrentReplayData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execGetCurrentReplayData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSGReplayData*)Z_Param__Result=P_THIS->GetCurrentReplayData();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function GetCurrentReplayData *****************************

// ********** Begin Class USGReplayManager Function GetPlaybackTime ********************************
struct Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics
{
	struct SGReplayManager_eventGetPlaybackTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventGetPlaybackTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "GetPlaybackTime", Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::SGReplayManager_eventGetPlaybackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::SGReplayManager_eventGetPlaybackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_GetPlaybackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_GetPlaybackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execGetPlaybackTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlaybackTime();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function GetPlaybackTime **********************************

// ********** Begin Class USGReplayManager Function GetRecordingDuration ***************************
struct Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics
{
	struct SGReplayManager_eventGetRecordingDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventGetRecordingDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "GetRecordingDuration", Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::SGReplayManager_eventGetRecordingDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::SGReplayManager_eventGetRecordingDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_GetRecordingDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_GetRecordingDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execGetRecordingDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRecordingDuration();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function GetRecordingDuration *****************************

// ********** Begin Class USGReplayManager Function GetTotalFrames *********************************
struct Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics
{
	struct SGReplayManager_eventGetTotalFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventGetTotalFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "GetTotalFrames", Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::SGReplayManager_eventGetTotalFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::SGReplayManager_eventGetTotalFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_GetTotalFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_GetTotalFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execGetTotalFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalFrames();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function GetTotalFrames ***********************************

// ********** Begin Class USGReplayManager Function IsPlaying **************************************
struct Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics
{
	struct SGReplayManager_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGReplayManager_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayManager_eventIsPlaying_Parms), &Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "IsPlaying", Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::SGReplayManager_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::SGReplayManager_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function IsPlaying ****************************************

// ********** Begin Class USGReplayManager Function IsRecording ************************************
struct Z_Construct_UFunction_USGReplayManager_IsRecording_Statics
{
	struct SGReplayManager_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGReplayManager_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayManager_eventIsRecording_Parms), &Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "IsRecording", Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::SGReplayManager_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::SGReplayManager_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function IsRecording **************************************

// ********** Begin Class USGReplayManager Function LoadReplay *************************************
struct Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics
{
	struct SGReplayManager_eventLoadReplay_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventLoadReplay_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGReplayManager_eventLoadReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayManager_eventLoadReplay_Parms), &Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "LoadReplay", Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::SGReplayManager_eventLoadReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::SGReplayManager_eventLoadReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_LoadReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_LoadReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execLoadReplay)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadReplay(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function LoadReplay ***************************************

// ********** Begin Class USGReplayManager Function NextCameraMode *********************************
struct Z_Construct_UFunction_USGReplayManager_NextCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_NextCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "NextCameraMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_NextCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_NextCameraMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_NextCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_NextCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execNextCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextCameraMode();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function NextCameraMode ***********************************

// ********** Begin Class USGReplayManager Function PausePlayback **********************************
struct Z_Construct_UFunction_USGReplayManager_PausePlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_PausePlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "PausePlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_PausePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_PausePlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_PausePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_PausePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execPausePlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PausePlayback();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function PausePlayback ************************************

// ********** Begin Class USGReplayManager Function PauseRecording *********************************
struct Z_Construct_UFunction_USGReplayManager_PauseRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_PauseRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "PauseRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_PauseRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_PauseRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_PauseRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_PauseRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execPauseRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseRecording();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function PauseRecording ***********************************

// ********** Begin Class USGReplayManager Function RecordEvent ************************************
struct Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics
{
	struct SGReplayManager_eventRecordEvent_Parms
	{
		EReplayEventType EventType;
		FString Description;
		FVector Location;
		float ShotPower;
		FString ClubUsed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === EVENT FUNCTIONS ===\n" },
#endif
		{ "CPP_Default_ClubUsed", "" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_ShotPower", "0.000000" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== EVENT FUNCTIONS ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubUsed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotPower;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClubUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordEvent_Parms, EventType), Z_Construct_UEnum_SocialGolf_EReplayEventType, METADATA_PARAMS(0, nullptr) }; // 1092210602
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordEvent_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordEvent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_ShotPower = { "ShotPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordEvent_Parms, ShotPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_ClubUsed = { "ClubUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordEvent_Parms, ClubUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubUsed_MetaData), NewProp_ClubUsed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_ShotPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::NewProp_ClubUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "RecordEvent", Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::SGReplayManager_eventRecordEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::SGReplayManager_eventRecordEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_RecordEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_RecordEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execRecordEvent)
{
	P_GET_ENUM(EReplayEventType,Z_Param_EventType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ShotPower);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClubUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordEvent(EReplayEventType(Z_Param_EventType),Z_Param_Description,Z_Param_Out_Location,Z_Param_ShotPower,Z_Param_ClubUsed);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function RecordEvent **************************************

// ********** Begin Class USGReplayManager Function RecordGolfShot *********************************
struct Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics
{
	struct SGReplayManager_eventRecordGolfShot_Parms
	{
		float Power;
		FString ClubName;
		FVector ShotLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClubName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordGolfShot_Parms, Power), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::NewProp_ClubName = { "ClubName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordGolfShot_Parms, ClubName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubName_MetaData), NewProp_ClubName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::NewProp_ShotLocation = { "ShotLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordGolfShot_Parms, ShotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotLocation_MetaData), NewProp_ShotLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::NewProp_Power,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::NewProp_ClubName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::NewProp_ShotLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "RecordGolfShot", Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::SGReplayManager_eventRecordGolfShot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::SGReplayManager_eventRecordGolfShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_RecordGolfShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_RecordGolfShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execRecordGolfShot)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Power);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClubName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ShotLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordGolfShot(Z_Param_Power,Z_Param_ClubName,Z_Param_Out_ShotLocation);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function RecordGolfShot ***********************************

// ********** Begin Class USGReplayManager Function RecordHoleComplete *****************************
struct Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics
{
	struct SGReplayManager_eventRecordHoleComplete_Parms
	{
		int32 Score;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventRecordHoleComplete_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "RecordHoleComplete", Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::SGReplayManager_eventRecordHoleComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::SGReplayManager_eventRecordHoleComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_RecordHoleComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_RecordHoleComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execRecordHoleComplete)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecordHoleComplete(Z_Param_Score);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function RecordHoleComplete *******************************

// ********** Begin Class USGReplayManager Function ResumePlayback *********************************
struct Z_Construct_UFunction_USGReplayManager_ResumePlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_ResumePlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "ResumePlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_ResumePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_ResumePlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_ResumePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_ResumePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execResumePlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumePlayback();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function ResumePlayback ***********************************

// ********** Begin Class USGReplayManager Function ResumeRecording ********************************
struct Z_Construct_UFunction_USGReplayManager_ResumeRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_ResumeRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "ResumeRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_ResumeRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_ResumeRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_ResumeRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_ResumeRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execResumeRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeRecording();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function ResumeRecording **********************************

// ********** Begin Class USGReplayManager Function SaveReplay *************************************
struct Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics
{
	struct SGReplayManager_eventSaveReplay_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === DATA MANAGEMENT ===\n" },
#endif
		{ "CPP_Default_FileName", "" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== DATA MANAGEMENT ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventSaveReplay_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGReplayManager_eventSaveReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayManager_eventSaveReplay_Parms), &Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "SaveReplay", Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::SGReplayManager_eventSaveReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::SGReplayManager_eventSaveReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_SaveReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_SaveReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execSaveReplay)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveReplay(Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function SaveReplay ***************************************

// ********** Begin Class USGReplayManager Function SetCameraMode **********************************
struct Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics
{
	struct SGReplayManager_eventSetCameraMode_Parms
	{
		ECameraReplayMode NewCameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === CAMERA FUNCTIONS ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== CAMERA FUNCTIONS ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewCameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::NewProp_NewCameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::NewProp_NewCameraMode = { "NewCameraMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventSetCameraMode_Parms, NewCameraMode), Z_Construct_UEnum_SocialGolf_ECameraReplayMode, METADATA_PARAMS(0, nullptr) }; // 17504452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::NewProp_NewCameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::NewProp_NewCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "SetCameraMode", Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::SGReplayManager_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::SGReplayManager_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execSetCameraMode)
{
	P_GET_ENUM(ECameraReplayMode,Z_Param_NewCameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(ECameraReplayMode(Z_Param_NewCameraMode));
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function SetCameraMode ************************************

// ********** Begin Class USGReplayManager Function SetPlaybackSpeed *******************************
struct Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics
{
	struct SGReplayManager_eventSetPlaybackSpeed_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventSetPlaybackSpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "SetPlaybackSpeed", Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::SGReplayManager_eventSetPlaybackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::SGReplayManager_eventSetPlaybackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execSetPlaybackSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackSpeed(Z_Param_NewSpeed);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function SetPlaybackSpeed *********************************

// ********** Begin Class USGReplayManager Function SetPlaybackTime ********************************
struct Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics
{
	struct SGReplayManager_eventSetPlaybackTime_Parms
	{
		float NewTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventSetPlaybackTime_Parms, NewTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::NewProp_NewTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "SetPlaybackTime", Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::SGReplayManager_eventSetPlaybackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::SGReplayManager_eventSetPlaybackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_SetPlaybackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_SetPlaybackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execSetPlaybackTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackTime(Z_Param_NewTime);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function SetPlaybackTime **********************************

// ********** Begin Class USGReplayManager Function StartPlayback **********************************
struct Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics
{
	struct SGReplayManager_eventStartPlayback_Parms
	{
		FSGReplayData ReplayData;
		ECameraReplayMode CameraMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === PLAYBACK FUNCTIONS ===\n" },
#endif
		{ "CPP_Default_CameraMode", "Cinematic" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== PLAYBACK FUNCTIONS ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplayData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_ReplayData = { "ReplayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventStartPlayback_Parms, ReplayData), Z_Construct_UScriptStruct_FSGReplayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayData_MetaData), NewProp_ReplayData_MetaData) }; // 2410206830
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_CameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventStartPlayback_Parms, CameraMode), Z_Construct_UEnum_SocialGolf_ECameraReplayMode, METADATA_PARAMS(0, nullptr) }; // 17504452
void Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGReplayManager_eventStartPlayback_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayManager_eventStartPlayback_Parms), &Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_ReplayData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_CameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "StartPlayback", Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::SGReplayManager_eventStartPlayback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::SGReplayManager_eventStartPlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_StartPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_StartPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execStartPlayback)
{
	P_GET_STRUCT_REF(FSGReplayData,Z_Param_Out_ReplayData);
	P_GET_ENUM(ECameraReplayMode,Z_Param_CameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartPlayback(Z_Param_Out_ReplayData,ECameraReplayMode(Z_Param_CameraMode));
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function StartPlayback ************************************

// ********** Begin Class USGReplayManager Function StartRecording *********************************
struct Z_Construct_UFunction_USGReplayManager_StartRecording_Statics
{
	struct SGReplayManager_eventStartRecording_Parms
	{
		FString ReplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === RECORDING FUNCTIONS ===\n" },
#endif
		{ "CPP_Default_ReplayName", "Auto Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== RECORDING FUNCTIONS ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayManager_eventStartRecording_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::NewProp_ReplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "StartRecording", Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::SGReplayManager_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::SGReplayManager_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayManager_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execStartRecording)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording(Z_Param_ReplayName);
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function StartRecording ***********************************

// ********** Begin Class USGReplayManager Function StopPlayback ***********************************
struct Z_Construct_UFunction_USGReplayManager_StopPlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_StopPlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "StopPlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StopPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_StopPlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_StopPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_StopPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execStopPlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlayback();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function StopPlayback *************************************

// ********** Begin Class USGReplayManager Function StopRecording **********************************
struct Z_Construct_UFunction_USGReplayManager_StopRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayManager_StopRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayManager, nullptr, "StopRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayManager_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayManager_StopRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayManager_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayManager_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayManager::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecording();
	P_NATIVE_END;
}
// ********** End Class USGReplayManager Function StopRecording ************************************

// ********** Begin Class USGReplayManager *********************************************************
void USGReplayManager::StaticRegisterNativesUSGReplayManager()
{
	UClass* Class = USGReplayManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCurrentReplay", &USGReplayManager::execClearCurrentReplay },
		{ "DeleteReplay", &USGReplayManager::execDeleteReplay },
		{ "GetAvailableReplays", &USGReplayManager::execGetAvailableReplays },
		{ "GetCurrentCameraMode", &USGReplayManager::execGetCurrentCameraMode },
		{ "GetCurrentReplayData", &USGReplayManager::execGetCurrentReplayData },
		{ "GetPlaybackTime", &USGReplayManager::execGetPlaybackTime },
		{ "GetRecordingDuration", &USGReplayManager::execGetRecordingDuration },
		{ "GetTotalFrames", &USGReplayManager::execGetTotalFrames },
		{ "IsPlaying", &USGReplayManager::execIsPlaying },
		{ "IsRecording", &USGReplayManager::execIsRecording },
		{ "LoadReplay", &USGReplayManager::execLoadReplay },
		{ "NextCameraMode", &USGReplayManager::execNextCameraMode },
		{ "PausePlayback", &USGReplayManager::execPausePlayback },
		{ "PauseRecording", &USGReplayManager::execPauseRecording },
		{ "RecordEvent", &USGReplayManager::execRecordEvent },
		{ "RecordGolfShot", &USGReplayManager::execRecordGolfShot },
		{ "RecordHoleComplete", &USGReplayManager::execRecordHoleComplete },
		{ "ResumePlayback", &USGReplayManager::execResumePlayback },
		{ "ResumeRecording", &USGReplayManager::execResumeRecording },
		{ "SaveReplay", &USGReplayManager::execSaveReplay },
		{ "SetCameraMode", &USGReplayManager::execSetCameraMode },
		{ "SetPlaybackSpeed", &USGReplayManager::execSetPlaybackSpeed },
		{ "SetPlaybackTime", &USGReplayManager::execSetPlaybackTime },
		{ "StartPlayback", &USGReplayManager::execStartPlayback },
		{ "StartRecording", &USGReplayManager::execStartRecording },
		{ "StopPlayback", &USGReplayManager::execStopPlayback },
		{ "StopRecording", &USGReplayManager::execStopRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGReplayManager;
UClass* USGReplayManager::GetPrivateStaticClass()
{
	using TClass = USGReplayManager;
	if (!Z_Registration_Info_UClass_USGReplayManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGReplayManager"),
			Z_Registration_Info_UClass_USGReplayManager.InnerSingleton,
			StaticRegisterNativesUSGReplayManager,
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
	return Z_Registration_Info_UClass_USGReplayManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USGReplayManager_NoRegister()
{
	return USGReplayManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGReplayManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Replay/SGReplayManager.h" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingStateChanged_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === DELEGATES ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== DELEGATES ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackStateChanged_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEventRecorded_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReplaySaved_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingFrameRate_MetaData[] = {
		{ "Category", "Recording Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === RECORDING SETTINGS ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== RECORDING SETTINGS ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartRecording_MetaData[] = {
		{ "Category", "Recording Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStopOnHoleComplete_MetaData[] = {
		{ "Category", "Recording Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecordingDuration_MetaData[] = {
		{ "Category", "Recording Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlaybackSpeed_MetaData[] = {
		{ "Category", "Playback Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === PLAYBACK SETTINGS ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== PLAYBACK SETTINGS ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopPlayback_MetaData[] = {
		{ "Category", "Playback Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSwitchCameras_MetaData[] = {
		{ "Category", "Playback Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSwitchInterval_MetaData[] = {
		{ "Category", "Playback Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CinematicCameraSpeed_MetaData[] = {
		{ "Category", "Camera Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === CAMERA SETTINGS ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== CAMERA SETTINGS ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallFollowDistance_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallFollowHeight_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === RECORDING STATE ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== RECORDING STATE ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordingPaused_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingDuration_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFrameTime_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === PLAYBACK STATE ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== PLAYBACK STATE ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaybackPaused_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackTime_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFrameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraMode_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCameraSwitchTime_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentReplayData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === DATA ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== DATA ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === CACHED REFERENCES ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== CACHED REFERENCES ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBall_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOriginalPawn_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CinematicCameraActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === CINEMATIC CAMERA ===\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== CINEMATIC CAMERA ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventRecorded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReplaySaved;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecordingFrameRate;
	static void NewProp_bAutoStartRecording_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartRecording;
	static void NewProp_bAutoStopOnHoleComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStopOnHoleComplete;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecordingDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPlaybackSpeed;
	static void NewProp_bLoopPlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopPlayback;
	static void NewProp_bAutoSwitchCameras_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSwitchCameras;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSwitchInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CinematicCameraSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallFollowDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallFollowHeight;
	static void NewProp_bIsRecording_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
	static void NewProp_bRecordingPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordingPaused;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecordingDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastFrameTime;
	static void NewProp_bIsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
	static void NewProp_bPlaybackPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaybackPaused;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentFrameIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentCameraMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentCameraMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastCameraSwitchTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentReplayData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedBall;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOriginalPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CinematicCameraActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGReplayManager_ClearCurrentReplay, "ClearCurrentReplay" }, // 3747478619
		{ &Z_Construct_UFunction_USGReplayManager_DeleteReplay, "DeleteReplay" }, // 879412431
		{ &Z_Construct_UFunction_USGReplayManager_GetAvailableReplays, "GetAvailableReplays" }, // 2192527522
		{ &Z_Construct_UFunction_USGReplayManager_GetCurrentCameraMode, "GetCurrentCameraMode" }, // 200043937
		{ &Z_Construct_UFunction_USGReplayManager_GetCurrentReplayData, "GetCurrentReplayData" }, // 2285306140
		{ &Z_Construct_UFunction_USGReplayManager_GetPlaybackTime, "GetPlaybackTime" }, // 3759680489
		{ &Z_Construct_UFunction_USGReplayManager_GetRecordingDuration, "GetRecordingDuration" }, // 2128654329
		{ &Z_Construct_UFunction_USGReplayManager_GetTotalFrames, "GetTotalFrames" }, // 653408023
		{ &Z_Construct_UFunction_USGReplayManager_IsPlaying, "IsPlaying" }, // 2117042781
		{ &Z_Construct_UFunction_USGReplayManager_IsRecording, "IsRecording" }, // 18464416
		{ &Z_Construct_UFunction_USGReplayManager_LoadReplay, "LoadReplay" }, // 4151024940
		{ &Z_Construct_UFunction_USGReplayManager_NextCameraMode, "NextCameraMode" }, // 4195627238
		{ &Z_Construct_UFunction_USGReplayManager_PausePlayback, "PausePlayback" }, // 1553225941
		{ &Z_Construct_UFunction_USGReplayManager_PauseRecording, "PauseRecording" }, // 3429362740
		{ &Z_Construct_UFunction_USGReplayManager_RecordEvent, "RecordEvent" }, // 3761500280
		{ &Z_Construct_UFunction_USGReplayManager_RecordGolfShot, "RecordGolfShot" }, // 2030555668
		{ &Z_Construct_UFunction_USGReplayManager_RecordHoleComplete, "RecordHoleComplete" }, // 2846494751
		{ &Z_Construct_UFunction_USGReplayManager_ResumePlayback, "ResumePlayback" }, // 3308882489
		{ &Z_Construct_UFunction_USGReplayManager_ResumeRecording, "ResumeRecording" }, // 2977623091
		{ &Z_Construct_UFunction_USGReplayManager_SaveReplay, "SaveReplay" }, // 1995161729
		{ &Z_Construct_UFunction_USGReplayManager_SetCameraMode, "SetCameraMode" }, // 1919668497
		{ &Z_Construct_UFunction_USGReplayManager_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 1188188903
		{ &Z_Construct_UFunction_USGReplayManager_SetPlaybackTime, "SetPlaybackTime" }, // 1499541394
		{ &Z_Construct_UFunction_USGReplayManager_StartPlayback, "StartPlayback" }, // 297740401
		{ &Z_Construct_UFunction_USGReplayManager_StartRecording, "StartRecording" }, // 4156077781
		{ &Z_Construct_UFunction_USGReplayManager_StopPlayback, "StopPlayback" }, // 445039157
		{ &Z_Construct_UFunction_USGReplayManager_StopRecording, "StopRecording" }, // 3432218954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGReplayManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnRecordingStateChanged = { "OnRecordingStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, OnRecordingStateChanged), Z_Construct_UDelegateFunction_SocialGolf_OnReplayRecordingStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecordingStateChanged_MetaData), NewProp_OnRecordingStateChanged_MetaData) }; // 3774762757
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnPlaybackStateChanged = { "OnPlaybackStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, OnPlaybackStateChanged), Z_Construct_UDelegateFunction_SocialGolf_OnReplayPlaybackStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackStateChanged_MetaData), NewProp_OnPlaybackStateChanged_MetaData) }; // 1392728825
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnEventRecorded = { "OnEventRecorded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, OnEventRecorded), Z_Construct_UDelegateFunction_SocialGolf_OnReplayEventRecorded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEventRecorded_MetaData), NewProp_OnEventRecorded_MetaData) }; // 1095071754
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnReplaySaved = { "OnReplaySaved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, OnReplaySaved), Z_Construct_UDelegateFunction_SocialGolf_OnReplaySaved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReplaySaved_MetaData), NewProp_OnReplaySaved_MetaData) }; // 497540727
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_RecordingFrameRate = { "RecordingFrameRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, RecordingFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingFrameRate_MetaData), NewProp_RecordingFrameRate_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStartRecording_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bAutoStartRecording = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStartRecording = { "bAutoStartRecording", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStartRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartRecording_MetaData), NewProp_bAutoStartRecording_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStopOnHoleComplete_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bAutoStopOnHoleComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStopOnHoleComplete = { "bAutoStopOnHoleComplete", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStopOnHoleComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStopOnHoleComplete_MetaData), NewProp_bAutoStopOnHoleComplete_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_MaxRecordingDuration = { "MaxRecordingDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, MaxRecordingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRecordingDuration_MetaData), NewProp_MaxRecordingDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_DefaultPlaybackSpeed = { "DefaultPlaybackSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, DefaultPlaybackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlaybackSpeed_MetaData), NewProp_DefaultPlaybackSpeed_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bLoopPlayback_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bLoopPlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bLoopPlayback = { "bLoopPlayback", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bLoopPlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopPlayback_MetaData), NewProp_bLoopPlayback_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoSwitchCameras_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bAutoSwitchCameras = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoSwitchCameras = { "bAutoSwitchCameras", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoSwitchCameras_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSwitchCameras_MetaData), NewProp_bAutoSwitchCameras_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CameraSwitchInterval = { "CameraSwitchInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CameraSwitchInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSwitchInterval_MetaData), NewProp_CameraSwitchInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CinematicCameraSpeed = { "CinematicCameraSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CinematicCameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CinematicCameraSpeed_MetaData), NewProp_CinematicCameraSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_BallFollowDistance = { "BallFollowDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, BallFollowDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallFollowDistance_MetaData), NewProp_BallFollowDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_BallFollowHeight = { "BallFollowHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, BallFollowHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallFollowHeight_MetaData), NewProp_BallFollowHeight_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsRecording_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bIsRecording = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRecording_MetaData), NewProp_bIsRecording_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bRecordingPaused_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bRecordingPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bRecordingPaused = { "bRecordingPaused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bRecordingPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordingPaused_MetaData), NewProp_bRecordingPaused_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_RecordingDuration = { "RecordingDuration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, RecordingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingDuration_MetaData), NewProp_RecordingDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_LastFrameTime = { "LastFrameTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, LastFrameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFrameTime_MetaData), NewProp_LastFrameTime_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bIsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlaying_MetaData), NewProp_bIsPlaying_MetaData) };
void Z_Construct_UClass_USGReplayManager_Statics::NewProp_bPlaybackPaused_SetBit(void* Obj)
{
	((USGReplayManager*)Obj)->bPlaybackPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_bPlaybackPaused = { "bPlaybackPaused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGReplayManager), &Z_Construct_UClass_USGReplayManager_Statics::NewProp_bPlaybackPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaybackPaused_MetaData), NewProp_bPlaybackPaused_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, PlaybackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackTime_MetaData), NewProp_PlaybackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, PlaybackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSpeed_MetaData), NewProp_PlaybackSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentFrameIndex = { "CurrentFrameIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CurrentFrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFrameIndex_MetaData), NewProp_CurrentFrameIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentCameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentCameraMode = { "CurrentCameraMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CurrentCameraMode), Z_Construct_UEnum_SocialGolf_ECameraReplayMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCameraMode_MetaData), NewProp_CurrentCameraMode_MetaData) }; // 17504452
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_LastCameraSwitchTime = { "LastCameraSwitchTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, LastCameraSwitchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCameraSwitchTime_MetaData), NewProp_LastCameraSwitchTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentReplayData = { "CurrentReplayData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CurrentReplayData), Z_Construct_UScriptStruct_FSGReplayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentReplayData_MetaData), NewProp_CurrentReplayData_MetaData) }; // 2410206830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedPlayer = { "CachedPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CachedPlayer), Z_Construct_UClass_ASGCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayer_MetaData), NewProp_CachedPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedBall = { "CachedBall", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CachedBall), Z_Construct_UClass_ASGGolfBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBall_MetaData), NewProp_CachedBall_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedCamera = { "CachedCamera", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CachedCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCamera_MetaData), NewProp_CachedCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedOriginalPawn = { "CachedOriginalPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CachedOriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOriginalPawn_MetaData), NewProp_CachedOriginalPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayManager_Statics::NewProp_CinematicCameraActor = { "CinematicCameraActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayManager, CinematicCameraActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CinematicCameraActor_MetaData), NewProp_CinematicCameraActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGReplayManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnRecordingStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnPlaybackStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnEventRecorded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_OnReplaySaved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_RecordingFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStartRecording,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoStopOnHoleComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_MaxRecordingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_DefaultPlaybackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bLoopPlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bAutoSwitchCameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CameraSwitchInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CinematicCameraSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_BallFollowDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_BallFollowHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsRecording,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bRecordingPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_RecordingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_LastFrameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bIsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_bPlaybackPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_PlaybackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_PlaybackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentCameraMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_LastCameraSwitchTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CurrentReplayData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedBall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CachedOriginalPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayManager_Statics::NewProp_CinematicCameraActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGReplayManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGReplayManager_Statics::ClassParams = {
	&USGReplayManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGReplayManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USGReplayManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGReplayManager()
{
	if (!Z_Registration_Info_UClass_USGReplayManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGReplayManager.OuterSingleton, Z_Construct_UClass_USGReplayManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGReplayManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGReplayManager);
USGReplayManager::~USGReplayManager() {}
// ********** End Class USGReplayManager ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGReplayManager, USGReplayManager::StaticClass, TEXT("USGReplayManager"), &Z_Registration_Info_UClass_USGReplayManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGReplayManager), 1595636363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h__Script_SocialGolf_1915588542(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
