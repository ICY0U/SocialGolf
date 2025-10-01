// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGCameraRecordingSubsystem.h"
#include "Engine/GameInstance.h"
#include "SGCameraRecorder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCameraRecordingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecordingSubsystem();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecordingSubsystem_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraSaveGame_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_ECameraRecorderState();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRecordingData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCameraRecordingEvent ***********************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnCameraRecordingEvent_Parms
	{
		FString RecordingName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnCameraRecordingEvent_Parms, RecordingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingName_MetaData), NewProp_RecordingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::NewProp_RecordingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnCameraRecordingEvent__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::_Script_SocialGolf_eventOnCameraRecordingEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::_Script_SocialGolf_eventOnCameraRecordingEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCameraRecordingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnCameraRecordingEvent, const FString& RecordingName)
{
	struct _Script_SocialGolf_eventOnCameraRecordingEvent_Parms
	{
		FString RecordingName;
	};
	_Script_SocialGolf_eventOnCameraRecordingEvent_Parms Parms;
	Parms.RecordingName=RecordingName;
	OnCameraRecordingEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCameraRecordingEvent *************************************************

// ********** Begin Class USGCameraRecordingSubsystem Function ClearAllRecordings ******************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_ClearAllRecordings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_ClearAllRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "ClearAllRecordings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_ClearAllRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_ClearAllRecordings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_ClearAllRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_ClearAllRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execClearAllRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllRecordings();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function ClearAllRecordings ********************

// ********** Begin Class USGCameraRecordingSubsystem Function ExportAllRecordingsToDesktop ********
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportAllRecordingsToDesktop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Desktop Export Functions\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Desktop Export Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportAllRecordingsToDesktop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "ExportAllRecordingsToDesktop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportAllRecordingsToDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportAllRecordingsToDesktop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportAllRecordingsToDesktop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportAllRecordingsToDesktop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execExportAllRecordingsToDesktop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportAllRecordingsToDesktop();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function ExportAllRecordingsToDesktop **********

// ********** Begin Class USGCameraRecordingSubsystem Function ExportRecordingToDesktop ************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics
{
	struct SGCameraRecordingSubsystem_eventExportRecordingToDesktop_Parms
	{
		FString RecordingName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventExportRecordingToDesktop_Parms, RecordingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingName_MetaData), NewProp_RecordingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::NewProp_RecordingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "ExportRecordingToDesktop", Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::SGCameraRecordingSubsystem_eventExportRecordingToDesktop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::SGCameraRecordingSubsystem_eventExportRecordingToDesktop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execExportRecordingToDesktop)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RecordingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportRecordingToDesktop(Z_Param_RecordingName);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function ExportRecordingToDesktop **************

// ********** Begin Class USGCameraRecordingSubsystem Function Get *********************************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics
{
	struct SGCameraRecordingSubsystem_eventGet_Parms
	{
		const UObject* WorldContext;
		USGCameraRecordingSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Camera Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static access function for easy access from anywhere\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static access function for easy access from anywhere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_USGCameraRecordingSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "Get", Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::SGCameraRecordingSubsystem_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::SGCameraRecordingSubsystem_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGCameraRecordingSubsystem**)Z_Param__Result=USGCameraRecordingSubsystem::Get(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function Get ***********************************

// ********** Begin Class USGCameraRecordingSubsystem Function GetAllRecordings ********************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics
{
	struct SGCameraRecordingSubsystem_eventGetAllRecordings_Parms
	{
		TArray<FCameraRecordingData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(0, nullptr) }; // 1406517318
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventGetAllRecordings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1406517318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "GetAllRecordings", Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::SGCameraRecordingSubsystem_eventGetAllRecordings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::SGCameraRecordingSubsystem_eventGetAllRecordings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execGetAllRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FCameraRecordingData>*)Z_Param__Result=P_THIS->GetAllRecordings();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function GetAllRecordings **********************

// ********** Begin Class USGCameraRecordingSubsystem Function GetTotalRecordingCount **************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics
{
	struct SGCameraRecordingSubsystem_eventGetTotalRecordingCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventGetTotalRecordingCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "GetTotalRecordingCount", Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::SGCameraRecordingSubsystem_eventGetTotalRecordingCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::SGCameraRecordingSubsystem_eventGetTotalRecordingCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execGetTotalRecordingCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalRecordingCount();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function GetTotalRecordingCount ****************

// ********** Begin Class USGCameraRecordingSubsystem Function LoadCameraRecordings ****************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_LoadCameraRecordings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_LoadCameraRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "LoadCameraRecordings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_LoadCameraRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_LoadCameraRecordings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_LoadCameraRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_LoadCameraRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execLoadCameraRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadCameraRecordings();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function LoadCameraRecordings ******************

// ********** Begin Class USGCameraRecordingSubsystem Function OnCameraStateChanged ****************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics
{
	struct SGCameraRecordingSubsystem_eventOnCameraStateChanged_Parms
	{
		ECameraRecorderState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event handler for camera state changes\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handler for camera state changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventOnCameraStateChanged_Parms, NewState), Z_Construct_UEnum_SocialGolf_ECameraRecorderState, METADATA_PARAMS(0, nullptr) }; // 697588561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "OnCameraStateChanged", Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::SGCameraRecordingSubsystem_eventOnCameraStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::SGCameraRecordingSubsystem_eventOnCameraStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execOnCameraStateChanged)
{
	P_GET_ENUM(ECameraRecorderState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraStateChanged(ECameraRecorderState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function OnCameraStateChanged ******************

// ********** Begin Class USGCameraRecordingSubsystem Function RegisterCameraRecorder **************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics
{
	struct SGCameraRecordingSubsystem_eventRegisterCameraRecorder_Parms
	{
		USGCameraRecorder* CameraRecorder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global Recording Management\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global Recording Management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRecorder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRecorder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::NewProp_CameraRecorder = { "CameraRecorder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventRegisterCameraRecorder_Parms, CameraRecorder), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRecorder_MetaData), NewProp_CameraRecorder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::NewProp_CameraRecorder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "RegisterCameraRecorder", Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::SGCameraRecordingSubsystem_eventRegisterCameraRecorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::SGCameraRecordingSubsystem_eventRegisterCameraRecorder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execRegisterCameraRecorder)
{
	P_GET_OBJECT(USGCameraRecorder,Z_Param_CameraRecorder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCameraRecorder(Z_Param_CameraRecorder);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function RegisterCameraRecorder ****************

// ********** Begin Class USGCameraRecordingSubsystem Function SaveCameraRecordings ****************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_SaveCameraRecordings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save/Load Functions\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save/Load Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_SaveCameraRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "SaveCameraRecordings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_SaveCameraRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_SaveCameraRecordings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_SaveCameraRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_SaveCameraRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execSaveCameraRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveCameraRecordings();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function SaveCameraRecordings ******************

// ********** Begin Class USGCameraRecordingSubsystem Function UnregisterCameraRecorder ************
struct Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics
{
	struct SGCameraRecordingSubsystem_eventUnregisterCameraRecorder_Parms
	{
		USGCameraRecorder* CameraRecorder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRecorder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRecorder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::NewProp_CameraRecorder = { "CameraRecorder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecordingSubsystem_eventUnregisterCameraRecorder_Parms, CameraRecorder), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRecorder_MetaData), NewProp_CameraRecorder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::NewProp_CameraRecorder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecordingSubsystem, nullptr, "UnregisterCameraRecorder", Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::SGCameraRecordingSubsystem_eventUnregisterCameraRecorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::SGCameraRecordingSubsystem_eventUnregisterCameraRecorder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecordingSubsystem::execUnregisterCameraRecorder)
{
	P_GET_OBJECT(USGCameraRecorder,Z_Param_CameraRecorder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterCameraRecorder(Z_Param_CameraRecorder);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecordingSubsystem Function UnregisterCameraRecorder **************

// ********** Begin Class USGCameraRecordingSubsystem **********************************************
void USGCameraRecordingSubsystem::StaticRegisterNativesUSGCameraRecordingSubsystem()
{
	UClass* Class = USGCameraRecordingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllRecordings", &USGCameraRecordingSubsystem::execClearAllRecordings },
		{ "ExportAllRecordingsToDesktop", &USGCameraRecordingSubsystem::execExportAllRecordingsToDesktop },
		{ "ExportRecordingToDesktop", &USGCameraRecordingSubsystem::execExportRecordingToDesktop },
		{ "Get", &USGCameraRecordingSubsystem::execGet },
		{ "GetAllRecordings", &USGCameraRecordingSubsystem::execGetAllRecordings },
		{ "GetTotalRecordingCount", &USGCameraRecordingSubsystem::execGetTotalRecordingCount },
		{ "LoadCameraRecordings", &USGCameraRecordingSubsystem::execLoadCameraRecordings },
		{ "OnCameraStateChanged", &USGCameraRecordingSubsystem::execOnCameraStateChanged },
		{ "RegisterCameraRecorder", &USGCameraRecordingSubsystem::execRegisterCameraRecorder },
		{ "SaveCameraRecordings", &USGCameraRecordingSubsystem::execSaveCameraRecordings },
		{ "UnregisterCameraRecorder", &USGCameraRecordingSubsystem::execUnregisterCameraRecorder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGCameraRecordingSubsystem;
UClass* USGCameraRecordingSubsystem::GetPrivateStaticClass()
{
	using TClass = USGCameraRecordingSubsystem;
	if (!Z_Registration_Info_UClass_USGCameraRecordingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCameraRecordingSubsystem"),
			Z_Registration_Info_UClass_USGCameraRecordingSubsystem.InnerSingleton,
			StaticRegisterNativesUSGCameraRecordingSubsystem,
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
	return Z_Registration_Info_UClass_USGCameraRecordingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USGCameraRecordingSubsystem_NoRegister()
{
	return USGCameraRecordingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGCameraRecordingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/SGCameraRecordingSubsystem.h" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingStarted_MetaData[] = {
		{ "Category", "Camera Recording Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingFinished_MetaData[] = {
		{ "Category", "Camera Recording Events" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackStarted_MetaData[] = {
		{ "Category", "Camera Recording Events" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackFinished_MetaData[] = {
		{ "Category", "Camera Recording Events" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveOnRecordingFinish_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadOnStartup_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredCameras_MetaData[] = {
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Camera/SGCameraRecordingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackFinished;
	static void NewProp_bAutoSaveOnRecordingFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveOnRecordingFinish;
	static void NewProp_bAutoLoadOnStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadOnStartup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegisteredCameras_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredCameras;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_ClearAllRecordings, "ClearAllRecordings" }, // 903782307
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportAllRecordingsToDesktop, "ExportAllRecordingsToDesktop" }, // 2651473339
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_ExportRecordingToDesktop, "ExportRecordingToDesktop" }, // 299064171
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_Get, "Get" }, // 638606269
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_GetAllRecordings, "GetAllRecordings" }, // 1410821586
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_GetTotalRecordingCount, "GetTotalRecordingCount" }, // 3679162252
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_LoadCameraRecordings, "LoadCameraRecordings" }, // 2376997011
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_OnCameraStateChanged, "OnCameraStateChanged" }, // 1424313402
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_RegisterCameraRecorder, "RegisterCameraRecorder" }, // 3340639000
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_SaveCameraRecordings, "SaveCameraRecordings" }, // 4095432928
		{ &Z_Construct_UFunction_USGCameraRecordingSubsystem_UnregisterCameraRecorder, "UnregisterCameraRecorder" }, // 1995109214
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGCameraRecordingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnRecordingStarted = { "OnRecordingStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecordingSubsystem, OnRecordingStarted), Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecordingStarted_MetaData), NewProp_OnRecordingStarted_MetaData) }; // 1292775602
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnRecordingFinished = { "OnRecordingFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecordingSubsystem, OnRecordingFinished), Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecordingFinished_MetaData), NewProp_OnRecordingFinished_MetaData) }; // 1292775602
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnPlaybackStarted = { "OnPlaybackStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecordingSubsystem, OnPlaybackStarted), Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackStarted_MetaData), NewProp_OnPlaybackStarted_MetaData) }; // 1292775602
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnPlaybackFinished = { "OnPlaybackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecordingSubsystem, OnPlaybackFinished), Z_Construct_UDelegateFunction_SocialGolf_OnCameraRecordingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaybackFinished_MetaData), NewProp_OnPlaybackFinished_MetaData) }; // 1292775602
void Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoSaveOnRecordingFinish_SetBit(void* Obj)
{
	((USGCameraRecordingSubsystem*)Obj)->bAutoSaveOnRecordingFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoSaveOnRecordingFinish = { "bAutoSaveOnRecordingFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGCameraRecordingSubsystem), &Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoSaveOnRecordingFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSaveOnRecordingFinish_MetaData), NewProp_bAutoSaveOnRecordingFinish_MetaData) };
void Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoLoadOnStartup_SetBit(void* Obj)
{
	((USGCameraRecordingSubsystem*)Obj)->bAutoLoadOnStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoLoadOnStartup = { "bAutoLoadOnStartup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGCameraRecordingSubsystem), &Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoLoadOnStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoadOnStartup_MetaData), NewProp_bAutoLoadOnStartup_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecordingSubsystem, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotName_MetaData), NewProp_SaveSlotName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_RegisteredCameras_Inner = { "RegisteredCameras", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_RegisteredCameras = { "RegisteredCameras", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecordingSubsystem, RegisteredCameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredCameras_MetaData), NewProp_RegisteredCameras_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_CameraSaveGame = { "CameraSaveGame", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecordingSubsystem, CameraSaveGame), Z_Construct_UClass_USGCameraSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSaveGame_MetaData), NewProp_CameraSaveGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnRecordingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnRecordingFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnPlaybackStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_OnPlaybackFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoSaveOnRecordingFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_bAutoLoadOnStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_RegisteredCameras_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_RegisteredCameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::NewProp_CameraSaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::ClassParams = {
	&USGCameraRecordingSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGCameraRecordingSubsystem()
{
	if (!Z_Registration_Info_UClass_USGCameraRecordingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGCameraRecordingSubsystem.OuterSingleton, Z_Construct_UClass_USGCameraRecordingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGCameraRecordingSubsystem.OuterSingleton;
}
USGCameraRecordingSubsystem::USGCameraRecordingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGCameraRecordingSubsystem);
USGCameraRecordingSubsystem::~USGCameraRecordingSubsystem() {}
// ********** End Class USGCameraRecordingSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGCameraRecordingSubsystem, USGCameraRecordingSubsystem::StaticClass, TEXT("USGCameraRecordingSubsystem"), &Z_Registration_Info_UClass_USGCameraRecordingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGCameraRecordingSubsystem), 3145615853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h__Script_SocialGolf_351355164(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
