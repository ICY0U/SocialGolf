// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGCameraRecorderActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCameraRecorderActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraRecorderActor();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraRecorderActor_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGCameraRecorderActor Function DeleteRecording **************************
struct Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics
{
	struct SGCameraRecorderActor_eventDeleteRecording_Parms
	{
		int32 RecordingIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecordingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::NewProp_RecordingIndex = { "RecordingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorderActor_eventDeleteRecording_Parms, RecordingIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::NewProp_RecordingIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "DeleteRecording", Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::SGCameraRecorderActor_eventDeleteRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::SGCameraRecorderActor_eventDeleteRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execDeleteRecording)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RecordingIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteRecording(Z_Param_RecordingIndex);
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function DeleteRecording ****************************

// ********** Begin Class ASGCameraRecorderActor Function GetCameraRecorderComponent ***************
struct Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics
{
	struct SGCameraRecorderActor_eventGetCameraRecorderComponent_Parms
	{
		USGCameraRecorder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the camera recorder component for advanced usage\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the camera recorder component for advanced usage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorderActor_eventGetCameraRecorderComponent_Parms, ReturnValue), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "GetCameraRecorderComponent", Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::SGCameraRecorderActor_eventGetCameraRecorderComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::SGCameraRecorderActor_eventGetCameraRecorderComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execGetCameraRecorderComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGCameraRecorder**)Z_Param__Result=P_THIS->GetCameraRecorderComponent();
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function GetCameraRecorderComponent *****************

// ********** Begin Class ASGCameraRecorderActor Function GetRecordingCount ************************
struct Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics
{
	struct SGCameraRecorderActor_eventGetRecordingCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorderActor_eventGetRecordingCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "GetRecordingCount", Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::SGCameraRecorderActor_eventGetRecordingCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::SGCameraRecorderActor_eventGetRecordingCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execGetRecordingCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRecordingCount();
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function GetRecordingCount **************************

// ********** Begin Class ASGCameraRecorderActor Function IsPlaying ********************************
struct Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics
{
	struct SGCameraRecorderActor_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraRecorderActor_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraRecorderActor_eventIsPlaying_Parms), &Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "IsPlaying", Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::SGCameraRecorderActor_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::SGCameraRecorderActor_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function IsPlaying **********************************

// ********** Begin Class ASGCameraRecorderActor Function IsRecording ******************************
struct Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics
{
	struct SGCameraRecorderActor_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraRecorderActor_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraRecorderActor_eventIsRecording_Parms), &Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "IsRecording", Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::SGCameraRecorderActor_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::SGCameraRecorderActor_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function IsRecording ********************************

// ********** Begin Class ASGCameraRecorderActor Function PlayLatestRecording **********************
struct Z_Construct_UFunction_ASGCameraRecorderActor_PlayLatestRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_PlayLatestRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "PlayLatestRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_PlayLatestRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_PlayLatestRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_PlayLatestRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_PlayLatestRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execPlayLatestRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayLatestRecording();
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function PlayLatestRecording ************************

// ********** Begin Class ASGCameraRecorderActor Function SaveRecordingToDesktop *******************
struct Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics
{
	struct SGCameraRecorderActor_eventSaveRecordingToDesktop_Parms
	{
		int32 RecordingIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecordingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::NewProp_RecordingIndex = { "RecordingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorderActor_eventSaveRecordingToDesktop_Parms, RecordingIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::NewProp_RecordingIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "SaveRecordingToDesktop", Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::SGCameraRecorderActor_eventSaveRecordingToDesktop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::SGCameraRecorderActor_eventSaveRecordingToDesktop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execSaveRecordingToDesktop)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RecordingIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveRecordingToDesktop(Z_Param_RecordingIndex);
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function SaveRecordingToDesktop *********************

// ********** Begin Class ASGCameraRecorderActor Function StartRecording ***************************
struct Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics
{
	struct SGCameraRecorderActor_eventStartRecording_Parms
	{
		FString RecordingName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quick access functions for Blueprint\n" },
#endif
		{ "CPP_Default_RecordingName", "" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick access functions for Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorderActor_eventStartRecording_Parms, RecordingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingName_MetaData), NewProp_RecordingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::NewProp_RecordingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "StartRecording", Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::SGCameraRecorderActor_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::SGCameraRecorderActor_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execStartRecording)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RecordingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording(Z_Param_RecordingName);
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function StartRecording *****************************

// ********** Begin Class ASGCameraRecorderActor Function StopPlayback *****************************
struct Z_Construct_UFunction_ASGCameraRecorderActor_StopPlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_StopPlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "StopPlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_StopPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_StopPlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_StopPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_StopPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execStopPlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlayback();
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function StopPlayback *******************************

// ********** Begin Class ASGCameraRecorderActor Function StopRecording ****************************
struct Z_Construct_UFunction_ASGCameraRecorderActor_StopRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraRecorderActor_StopRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraRecorderActor, nullptr, "StopRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraRecorderActor_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraRecorderActor_StopRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraRecorderActor_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraRecorderActor_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraRecorderActor::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecording();
	P_NATIVE_END;
}
// ********** End Class ASGCameraRecorderActor Function StopRecording ******************************

// ********** Begin Class ASGCameraRecorderActor ***************************************************
void ASGCameraRecorderActor::StaticRegisterNativesASGCameraRecorderActor()
{
	UClass* Class = ASGCameraRecorderActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteRecording", &ASGCameraRecorderActor::execDeleteRecording },
		{ "GetCameraRecorderComponent", &ASGCameraRecorderActor::execGetCameraRecorderComponent },
		{ "GetRecordingCount", &ASGCameraRecorderActor::execGetRecordingCount },
		{ "IsPlaying", &ASGCameraRecorderActor::execIsPlaying },
		{ "IsRecording", &ASGCameraRecorderActor::execIsRecording },
		{ "PlayLatestRecording", &ASGCameraRecorderActor::execPlayLatestRecording },
		{ "SaveRecordingToDesktop", &ASGCameraRecorderActor::execSaveRecordingToDesktop },
		{ "StartRecording", &ASGCameraRecorderActor::execStartRecording },
		{ "StopPlayback", &ASGCameraRecorderActor::execStopPlayback },
		{ "StopRecording", &ASGCameraRecorderActor::execStopRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGCameraRecorderActor;
UClass* ASGCameraRecorderActor::GetPrivateStaticClass()
{
	using TClass = ASGCameraRecorderActor;
	if (!Z_Registration_Info_UClass_ASGCameraRecorderActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCameraRecorderActor"),
			Z_Registration_Info_UClass_ASGCameraRecorderActor.InnerSingleton,
			StaticRegisterNativesASGCameraRecorderActor,
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
	return Z_Registration_Info_UClass_ASGCameraRecorderActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGCameraRecorderActor_NoRegister()
{
	return ASGCameraRecorderActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGCameraRecorderActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/SGCameraRecorderActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRecorderComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRecorderComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_DeleteRecording, "DeleteRecording" }, // 1219794377
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_GetCameraRecorderComponent, "GetCameraRecorderComponent" }, // 380950287
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_GetRecordingCount, "GetRecordingCount" }, // 3034354377
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_IsPlaying, "IsPlaying" }, // 3046248810
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_IsRecording, "IsRecording" }, // 65066199
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_PlayLatestRecording, "PlayLatestRecording" }, // 916437544
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_SaveRecordingToDesktop, "SaveRecordingToDesktop" }, // 1638819653
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_StartRecording, "StartRecording" }, // 1165961032
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_StopPlayback, "StopPlayback" }, // 2670355112
		{ &Z_Construct_UFunction_ASGCameraRecorderActor_StopRecording, "StopRecording" }, // 1140742478
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGCameraRecorderActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCameraRecorderActor_Statics::NewProp_CameraRecorderComponent = { "CameraRecorderComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCameraRecorderActor, CameraRecorderComponent), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRecorderComponent_MetaData), NewProp_CameraRecorderComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCameraRecorderActor_Statics::NewProp_InteractionBox = { "InteractionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCameraRecorderActor, InteractionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionBox_MetaData), NewProp_InteractionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGCameraRecorderActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCameraRecorderActor_Statics::NewProp_CameraRecorderComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCameraRecorderActor_Statics::NewProp_InteractionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraRecorderActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGCameraRecorderActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraRecorderActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGCameraRecorderActor_Statics::ClassParams = {
	&ASGCameraRecorderActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGCameraRecorderActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraRecorderActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraRecorderActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGCameraRecorderActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGCameraRecorderActor()
{
	if (!Z_Registration_Info_UClass_ASGCameraRecorderActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGCameraRecorderActor.OuterSingleton, Z_Construct_UClass_ASGCameraRecorderActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGCameraRecorderActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGCameraRecorderActor);
ASGCameraRecorderActor::~ASGCameraRecorderActor() {}
// ********** End Class ASGCameraRecorderActor *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGCameraRecorderActor, ASGCameraRecorderActor::StaticClass, TEXT("ASGCameraRecorderActor"), &Z_Registration_Info_UClass_ASGCameraRecorderActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGCameraRecorderActor), 3052777429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h__Script_SocialGolf_459960516(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
