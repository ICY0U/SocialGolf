// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGCameraSaveGame.h"
#include "SGCameraRecorder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCameraSaveGame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraSaveGame();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraSaveGame_NoRegister();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRecordingData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGCameraSaveGame Function AddRecording **********************************
struct Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics
{
	struct SGCameraSaveGame_eventAddRecording_Parms
	{
		FCameraRecordingData RecordingData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper functions\n" },
#endif
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::NewProp_RecordingData = { "RecordingData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventAddRecording_Parms, RecordingData), Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingData_MetaData), NewProp_RecordingData_MetaData) }; // 1406517318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::NewProp_RecordingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraSaveGame, nullptr, "AddRecording", Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::SGCameraSaveGame_eventAddRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::SGCameraSaveGame_eventAddRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraSaveGame_AddRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraSaveGame_AddRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraSaveGame::execAddRecording)
{
	P_GET_STRUCT_REF(FCameraRecordingData,Z_Param_Out_RecordingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRecording(Z_Param_Out_RecordingData);
	P_NATIVE_END;
}
// ********** End Class USGCameraSaveGame Function AddRecording ************************************

// ********** Begin Class USGCameraSaveGame Function ClearAllRecordings ****************************
struct Z_Construct_UFunction_USGCameraSaveGame_ClearAllRecordings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Save" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraSaveGame_ClearAllRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraSaveGame, nullptr, "ClearAllRecordings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_ClearAllRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraSaveGame_ClearAllRecordings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraSaveGame_ClearAllRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraSaveGame_ClearAllRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraSaveGame::execClearAllRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllRecordings();
	P_NATIVE_END;
}
// ********** End Class USGCameraSaveGame Function ClearAllRecordings ******************************

// ********** Begin Class USGCameraSaveGame Function GetCameraDataForLocation **********************
struct Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics
{
	struct SGCameraSaveGame_eventGetCameraDataForLocation_Parms
	{
		FString LocationID;
		FCameraRecordingData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Save" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocationID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::NewProp_LocationID = { "LocationID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventGetCameraDataForLocation_Parms, LocationID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationID_MetaData), NewProp_LocationID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventGetCameraDataForLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(0, nullptr) }; // 1406517318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::NewProp_LocationID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraSaveGame, nullptr, "GetCameraDataForLocation", Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::SGCameraSaveGame_eventGetCameraDataForLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::SGCameraSaveGame_eventGetCameraDataForLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraSaveGame::execGetCameraDataForLocation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LocationID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCameraRecordingData*)Z_Param__Result=P_THIS->GetCameraDataForLocation(Z_Param_LocationID);
	P_NATIVE_END;
}
// ********** End Class USGCameraSaveGame Function GetCameraDataForLocation ************************

// ********** Begin Class USGCameraSaveGame Function GetRecordingCount *****************************
struct Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics
{
	struct SGCameraSaveGame_eventGetRecordingCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Save" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventGetRecordingCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraSaveGame, nullptr, "GetRecordingCount", Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::SGCameraSaveGame_eventGetRecordingCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::SGCameraSaveGame_eventGetRecordingCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraSaveGame::execGetRecordingCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRecordingCount();
	P_NATIVE_END;
}
// ********** End Class USGCameraSaveGame Function GetRecordingCount *******************************

// ********** Begin Class USGCameraSaveGame Function HasCameraDataForLocation **********************
struct Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics
{
	struct SGCameraSaveGame_eventHasCameraDataForLocation_Parms
	{
		FString LocationID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Save" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocationID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::NewProp_LocationID = { "LocationID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventHasCameraDataForLocation_Parms, LocationID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationID_MetaData), NewProp_LocationID_MetaData) };
void Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraSaveGame_eventHasCameraDataForLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraSaveGame_eventHasCameraDataForLocation_Parms), &Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::NewProp_LocationID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraSaveGame, nullptr, "HasCameraDataForLocation", Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::SGCameraSaveGame_eventHasCameraDataForLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::SGCameraSaveGame_eventHasCameraDataForLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraSaveGame::execHasCameraDataForLocation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LocationID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCameraDataForLocation(Z_Param_LocationID);
	P_NATIVE_END;
}
// ********** End Class USGCameraSaveGame Function HasCameraDataForLocation ************************

// ********** Begin Class USGCameraSaveGame Function RemoveRecording *******************************
struct Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics
{
	struct SGCameraSaveGame_eventRemoveRecording_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Save" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventRemoveRecording_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraSaveGame, nullptr, "RemoveRecording", Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::SGCameraSaveGame_eventRemoveRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::SGCameraSaveGame_eventRemoveRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraSaveGame::execRemoveRecording)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveRecording(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class USGCameraSaveGame Function RemoveRecording *********************************

// ********** Begin Class USGCameraSaveGame Function SaveCameraDataForLocation *********************
struct Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics
{
	struct SGCameraSaveGame_eventSaveCameraDataForLocation_Parms
	{
		FString LocationID;
		FCameraRecordingData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Location-based camera data management\n" },
#endif
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location-based camera data management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocationID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::NewProp_LocationID = { "LocationID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventSaveCameraDataForLocation_Parms, LocationID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationID_MetaData), NewProp_LocationID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraSaveGame_eventSaveCameraDataForLocation_Parms, Data), Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1406517318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::NewProp_LocationID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraSaveGame, nullptr, "SaveCameraDataForLocation", Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::SGCameraSaveGame_eventSaveCameraDataForLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::SGCameraSaveGame_eventSaveCameraDataForLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraSaveGame::execSaveCameraDataForLocation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LocationID);
	P_GET_STRUCT_REF(FCameraRecordingData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveCameraDataForLocation(Z_Param_LocationID,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class USGCameraSaveGame Function SaveCameraDataForLocation ***********************

// ********** Begin Class USGCameraSaveGame ********************************************************
void USGCameraSaveGame::StaticRegisterNativesUSGCameraSaveGame()
{
	UClass* Class = USGCameraSaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddRecording", &USGCameraSaveGame::execAddRecording },
		{ "ClearAllRecordings", &USGCameraSaveGame::execClearAllRecordings },
		{ "GetCameraDataForLocation", &USGCameraSaveGame::execGetCameraDataForLocation },
		{ "GetRecordingCount", &USGCameraSaveGame::execGetRecordingCount },
		{ "HasCameraDataForLocation", &USGCameraSaveGame::execHasCameraDataForLocation },
		{ "RemoveRecording", &USGCameraSaveGame::execRemoveRecording },
		{ "SaveCameraDataForLocation", &USGCameraSaveGame::execSaveCameraDataForLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGCameraSaveGame;
UClass* USGCameraSaveGame::GetPrivateStaticClass()
{
	using TClass = USGCameraSaveGame;
	if (!Z_Registration_Info_UClass_USGCameraSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCameraSaveGame"),
			Z_Registration_Info_UClass_USGCameraSaveGame.InnerSingleton,
			StaticRegisterNativesUSGCameraSaveGame,
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
	return Z_Registration_Info_UClass_USGCameraSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USGCameraSaveGame_NoRegister()
{
	return USGCameraSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGCameraSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Save/SGCameraSaveGame.h" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedRecordings_MetaData[] = {
		{ "Category", "Camera Recordings" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRecordingsByLocation_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSaveTime_MetaData[] = {
		{ "Category", "Save Info" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveVersion_MetaData[] = {
		{ "Category", "Save Info" },
		{ "ModuleRelativePath", "Save/SGCameraSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedRecordings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedRecordings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRecordingsByLocation_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CameraRecordingsByLocation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CameraRecordingsByLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSaveTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SaveVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGCameraSaveGame_AddRecording, "AddRecording" }, // 2028953941
		{ &Z_Construct_UFunction_USGCameraSaveGame_ClearAllRecordings, "ClearAllRecordings" }, // 1000846768
		{ &Z_Construct_UFunction_USGCameraSaveGame_GetCameraDataForLocation, "GetCameraDataForLocation" }, // 4028675096
		{ &Z_Construct_UFunction_USGCameraSaveGame_GetRecordingCount, "GetRecordingCount" }, // 4128999720
		{ &Z_Construct_UFunction_USGCameraSaveGame_HasCameraDataForLocation, "HasCameraDataForLocation" }, // 3845108953
		{ &Z_Construct_UFunction_USGCameraSaveGame_RemoveRecording, "RemoveRecording" }, // 2932229611
		{ &Z_Construct_UFunction_USGCameraSaveGame_SaveCameraDataForLocation, "SaveCameraDataForLocation" }, // 1210929518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGCameraSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_SavedRecordings_Inner = { "SavedRecordings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(0, nullptr) }; // 1406517318
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_SavedRecordings = { "SavedRecordings", nullptr, (EPropertyFlags)0x0010000001020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraSaveGame, SavedRecordings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedRecordings_MetaData), NewProp_SavedRecordings_MetaData) }; // 1406517318
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_CameraRecordingsByLocation_ValueProp = { "CameraRecordingsByLocation", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(0, nullptr) }; // 1406517318
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_CameraRecordingsByLocation_Key_KeyProp = { "CameraRecordingsByLocation_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_CameraRecordingsByLocation = { "CameraRecordingsByLocation", nullptr, (EPropertyFlags)0x0010000001020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraSaveGame, CameraRecordingsByLocation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRecordingsByLocation_MetaData), NewProp_CameraRecordingsByLocation_MetaData) }; // 1406517318
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_LastSaveTime = { "LastSaveTime", nullptr, (EPropertyFlags)0x0010000001020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraSaveGame, LastSaveTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSaveTime_MetaData), NewProp_LastSaveTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_SaveVersion = { "SaveVersion", nullptr, (EPropertyFlags)0x0010000001020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraSaveGame, SaveVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveVersion_MetaData), NewProp_SaveVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGCameraSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_SavedRecordings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_SavedRecordings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_CameraRecordingsByLocation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_CameraRecordingsByLocation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_CameraRecordingsByLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_LastSaveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraSaveGame_Statics::NewProp_SaveVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGCameraSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGCameraSaveGame_Statics::ClassParams = {
	&USGCameraSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGCameraSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USGCameraSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGCameraSaveGame()
{
	if (!Z_Registration_Info_UClass_USGCameraSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGCameraSaveGame.OuterSingleton, Z_Construct_UClass_USGCameraSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGCameraSaveGame.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGCameraSaveGame);
USGCameraSaveGame::~USGCameraSaveGame() {}
// ********** End Class USGCameraSaveGame **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGCameraSaveGame, USGCameraSaveGame::StaticClass, TEXT("USGCameraSaveGame"), &Z_Registration_Info_UClass_USGCameraSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGCameraSaveGame), 3106669552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h__Script_SocialGolf_3539286455(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
