// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGCameraRecorder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCameraRecorder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_ECameraRecorderState();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRecordingData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCameraRecordingData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraRecordingData;
class UScriptStruct* FCameraRecordingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraRecordingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraRecordingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRecordingData, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("CameraRecordingData"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraRecordingData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCameraRecordingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingName_MetaData[] = {
		{ "Category", "CameraRecordingData" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingDate_MetaData[] = {
		{ "Category", "CameraRecordingData" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "CameraRecordingData" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "CameraRecordingData" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingLocation_MetaData[] = {
		{ "Category", "CameraRecordingData" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingRotation_MetaData[] = {
		{ "Category", "CameraRecordingData" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordingDate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordingRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRecordingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRecordingData, RecordingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingName_MetaData), NewProp_RecordingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingDate = { "RecordingDate", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRecordingData, RecordingDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingDate_MetaData), NewProp_RecordingDate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRecordingData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRecordingData, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingLocation = { "RecordingLocation", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRecordingData, RecordingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingLocation_MetaData), NewProp_RecordingLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingRotation = { "RecordingRotation", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRecordingData, RecordingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingRotation_MetaData), NewProp_RecordingRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRecordingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewProp_RecordingRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRecordingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRecordingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"CameraRecordingData",
	Z_Construct_UScriptStruct_FCameraRecordingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRecordingData_Statics::PropPointers),
	sizeof(FCameraRecordingData),
	alignof(FCameraRecordingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRecordingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRecordingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRecordingData()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraRecordingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraRecordingData.InnerSingleton, Z_Construct_UScriptStruct_FCameraRecordingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCameraRecordingData.InnerSingleton;
}
// ********** End ScriptStruct FCameraRecordingData ************************************************

// ********** Begin Enum ECameraRecorderState ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraRecorderState;
static UEnum* ECameraRecorderState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraRecorderState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraRecorderState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_ECameraRecorderState, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("ECameraRecorderState"));
	}
	return Z_Registration_Info_UEnum_ECameraRecorderState.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<ECameraRecorderState>()
{
	return ECameraRecorderState_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_ECameraRecorderState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.Name", "ECameraRecorderState::Idle" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
		{ "Paused.Name", "ECameraRecorderState::Paused" },
		{ "Playing.Name", "ECameraRecorderState::Playing" },
		{ "Recording.Name", "ECameraRecorderState::Recording" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraRecorderState::Idle", (int64)ECameraRecorderState::Idle },
		{ "ECameraRecorderState::Recording", (int64)ECameraRecorderState::Recording },
		{ "ECameraRecorderState::Playing", (int64)ECameraRecorderState::Playing },
		{ "ECameraRecorderState::Paused", (int64)ECameraRecorderState::Paused },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_ECameraRecorderState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"ECameraRecorderState",
	"ECameraRecorderState",
	Z_Construct_UEnum_SocialGolf_ECameraRecorderState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECameraRecorderState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECameraRecorderState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_ECameraRecorderState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_ECameraRecorderState()
{
	if (!Z_Registration_Info_UEnum_ECameraRecorderState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraRecorderState.InnerSingleton, Z_Construct_UEnum_SocialGolf_ECameraRecorderState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraRecorderState.InnerSingleton;
}
// ********** End Enum ECameraRecorderState ********************************************************

// ********** Begin Delegate FOnRecordingStateChanged **********************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnRecordingStateChanged_Parms
	{
		ECameraRecorderState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnRecordingStateChanged_Parms, NewState), Z_Construct_UEnum_SocialGolf_ECameraRecorderState, METADATA_PARAMS(0, nullptr) }; // 697588561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnRecordingStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnRecordingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnRecordingStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRecordingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingStateChanged, ECameraRecorderState NewState)
{
	struct _Script_SocialGolf_eventOnRecordingStateChanged_Parms
	{
		ECameraRecorderState NewState;
	};
	_Script_SocialGolf_eventOnRecordingStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnRecordingStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRecordingStateChanged ************************************************

// ********** Begin Delegate FOnRecordingProgress **************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnRecordingProgress_Parms
	{
		float CurrentTime;
		float TotalTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnRecordingProgress_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnRecordingProgress_Parms, TotalTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::NewProp_TotalTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnRecordingProgress__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::_Script_SocialGolf_eventOnRecordingProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::_Script_SocialGolf_eventOnRecordingProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRecordingProgress_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingProgress, float CurrentTime, float TotalTime)
{
	struct _Script_SocialGolf_eventOnRecordingProgress_Parms
	{
		float CurrentTime;
		float TotalTime;
	};
	_Script_SocialGolf_eventOnRecordingProgress_Parms Parms;
	Parms.CurrentTime=CurrentTime;
	Parms.TotalTime=TotalTime;
	OnRecordingProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRecordingProgress ****************************************************

// ********** Begin Class USGCameraRecorder Function CreateTestRecordingAndExport ******************
struct Z_Construct_UFunction_USGCameraRecorder_CreateTestRecordingAndExport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_CreateTestRecordingAndExport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "CreateTestRecordingAndExport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_CreateTestRecordingAndExport_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_CreateTestRecordingAndExport_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_CreateTestRecordingAndExport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_CreateTestRecordingAndExport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execCreateTestRecordingAndExport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateTestRecordingAndExport();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function CreateTestRecordingAndExport ********************

// ********** Begin Class USGCameraRecorder Function DeleteRecording *******************************
struct Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics
{
	struct SGCameraRecorder_eventDeleteRecording_Parms
	{
		int32 RecordingIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecordingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::NewProp_RecordingIndex = { "RecordingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventDeleteRecording_Parms, RecordingIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::NewProp_RecordingIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "DeleteRecording", Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::SGCameraRecorder_eventDeleteRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::SGCameraRecorder_eventDeleteRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_DeleteRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_DeleteRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execDeleteRecording)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RecordingIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteRecording(Z_Param_RecordingIndex);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function DeleteRecording *********************************

// ********** Begin Class USGCameraRecorder Function ExportAllRecordingsToDesktop ******************
struct Z_Construct_UFunction_USGCameraRecorder_ExportAllRecordingsToDesktop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_ExportAllRecordingsToDesktop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "ExportAllRecordingsToDesktop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_ExportAllRecordingsToDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_ExportAllRecordingsToDesktop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_ExportAllRecordingsToDesktop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_ExportAllRecordingsToDesktop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execExportAllRecordingsToDesktop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportAllRecordingsToDesktop();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function ExportAllRecordingsToDesktop ********************

// ********** Begin Class USGCameraRecorder Function GetDesktopPathForTesting **********************
struct Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics
{
	struct SGCameraRecorder_eventGetDesktopPathForTesting_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventGetDesktopPathForTesting_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "GetDesktopPathForTesting", Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::SGCameraRecorder_eventGetDesktopPathForTesting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::SGCameraRecorder_eventGetDesktopPathForTesting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execGetDesktopPathForTesting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDesktopPathForTesting();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function GetDesktopPathForTesting ************************

// ********** Begin Class USGCameraRecorder Function GetRecordingCount *****************************
struct Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics
{
	struct SGCameraRecorder_eventGetRecordingCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility Functions\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventGetRecordingCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "GetRecordingCount", Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::SGCameraRecorder_eventGetRecordingCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::SGCameraRecorder_eventGetRecordingCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execGetRecordingCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRecordingCount();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function GetRecordingCount *******************************

// ********** Begin Class USGCameraRecorder Function GetRecordingData ******************************
struct Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics
{
	struct SGCameraRecorder_eventGetRecordingData_Parms
	{
		int32 Index;
		FCameraRecordingData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventGetRecordingData_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventGetRecordingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(0, nullptr) }; // 1406517318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "GetRecordingData", Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::SGCameraRecorder_eventGetRecordingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::SGCameraRecorder_eventGetRecordingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_GetRecordingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_GetRecordingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execGetRecordingData)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCameraRecordingData*)Z_Param__Result=P_THIS->GetRecordingData(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function GetRecordingData ********************************

// ********** Begin Class USGCameraRecorder Function IsPlaying *************************************
struct Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics
{
	struct SGCameraRecorder_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraRecorder_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraRecorder_eventIsPlaying_Parms), &Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "IsPlaying", Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::SGCameraRecorder_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::SGCameraRecorder_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function IsPlaying ***************************************

// ********** Begin Class USGCameraRecorder Function IsRecording ***********************************
struct Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics
{
	struct SGCameraRecorder_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraRecorder_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraRecorder_eventIsRecording_Parms), &Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "IsRecording", Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::SGCameraRecorder_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::SGCameraRecorder_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function IsRecording *************************************

// ********** Begin Class USGCameraRecorder Function LoadRecordingsFromSave ************************
struct Z_Construct_UFunction_USGCameraRecorder_LoadRecordingsFromSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_LoadRecordingsFromSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "LoadRecordingsFromSave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_LoadRecordingsFromSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_LoadRecordingsFromSave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_LoadRecordingsFromSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_LoadRecordingsFromSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execLoadRecordingsFromSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadRecordingsFromSave();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function LoadRecordingsFromSave **************************

// ********** Begin Class USGCameraRecorder Function PausePlayback *********************************
struct Z_Construct_UFunction_USGCameraRecorder_PausePlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_PausePlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "PausePlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_PausePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_PausePlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_PausePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_PausePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execPausePlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PausePlayback();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function PausePlayback ***********************************

// ********** Begin Class USGCameraRecorder Function PauseRecording ********************************
struct Z_Construct_UFunction_USGCameraRecorder_PauseRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_PauseRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "PauseRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_PauseRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_PauseRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_PauseRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_PauseRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execPauseRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseRecording();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function PauseRecording **********************************

// ********** Begin Class USGCameraRecorder Function PlayRecording *********************************
struct Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics
{
	struct SGCameraRecorder_eventPlayRecording_Parms
	{
		int32 RecordingIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback Functions\n" },
#endif
		{ "CPP_Default_RecordingIndex", "-1" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecordingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::NewProp_RecordingIndex = { "RecordingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventPlayRecording_Parms, RecordingIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::NewProp_RecordingIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "PlayRecording", Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::SGCameraRecorder_eventPlayRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::SGCameraRecorder_eventPlayRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_PlayRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_PlayRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execPlayRecording)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RecordingIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayRecording(Z_Param_RecordingIndex);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function PlayRecording ***********************************

// ********** Begin Class USGCameraRecorder Function ResumePlayback ********************************
struct Z_Construct_UFunction_USGCameraRecorder_ResumePlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_ResumePlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "ResumePlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_ResumePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_ResumePlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_ResumePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_ResumePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execResumePlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumePlayback();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function ResumePlayback **********************************

// ********** Begin Class USGCameraRecorder Function ResumeRecording *******************************
struct Z_Construct_UFunction_USGCameraRecorder_ResumeRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_ResumeRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "ResumeRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_ResumeRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_ResumeRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_ResumeRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_ResumeRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execResumeRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeRecording();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function ResumeRecording *********************************

// ********** Begin Class USGCameraRecorder Function SaveRecordingsToSave **************************
struct Z_Construct_UFunction_USGCameraRecorder_SaveRecordingsToSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_SaveRecordingsToSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "SaveRecordingsToSave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_SaveRecordingsToSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_SaveRecordingsToSave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_SaveRecordingsToSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_SaveRecordingsToSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execSaveRecordingsToSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveRecordingsToSave();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function SaveRecordingsToSave ****************************

// ********** Begin Class USGCameraRecorder Function SaveRecordingToDesktop ************************
struct Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics
{
	struct SGCameraRecorder_eventSaveRecordingToDesktop_Parms
	{
		int32 RecordingIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// File Management\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "File Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecordingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::NewProp_RecordingIndex = { "RecordingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventSaveRecordingToDesktop_Parms, RecordingIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::NewProp_RecordingIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "SaveRecordingToDesktop", Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::SGCameraRecorder_eventSaveRecordingToDesktop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::SGCameraRecorder_eventSaveRecordingToDesktop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execSaveRecordingToDesktop)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RecordingIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveRecordingToDesktop(Z_Param_RecordingIndex);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function SaveRecordingToDesktop **************************

// ********** Begin Class USGCameraRecorder Function SeekToTime ************************************
struct Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics
{
	struct SGCameraRecorder_eventSeekToTime_Parms
	{
		float TimeInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventSeekToTime_Parms, TimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::NewProp_TimeInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "SeekToTime", Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::SGCameraRecorder_eventSeekToTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::SGCameraRecorder_eventSeekToTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_SeekToTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_SeekToTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execSeekToTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SeekToTime(Z_Param_TimeInSeconds);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function SeekToTime **************************************

// ********** Begin Class USGCameraRecorder Function StartRecording ********************************
struct Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics
{
	struct SGCameraRecorder_eventStartRecording_Parms
	{
		FString RecordingName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recording Functions\n" },
#endif
		{ "CPP_Default_RecordingName", "" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recording Functions" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraRecorder_eventStartRecording_Parms, RecordingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingName_MetaData), NewProp_RecordingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::NewProp_RecordingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "StartRecording", Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::SGCameraRecorder_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::SGCameraRecorder_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraRecorder_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execStartRecording)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RecordingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording(Z_Param_RecordingName);
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function StartRecording **********************************

// ********** Begin Class USGCameraRecorder Function StopPlayback **********************************
struct Z_Construct_UFunction_USGCameraRecorder_StopPlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -1 for latest\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1 for latest" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_StopPlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "StopPlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_StopPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_StopPlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_StopPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_StopPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execStopPlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlayback();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function StopPlayback ************************************

// ********** Begin Class USGCameraRecorder Function StopRecording *********************************
struct Z_Construct_UFunction_USGCameraRecorder_StopRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_StopRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "StopRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_StopRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecording();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function StopRecording ***********************************

// ********** Begin Class USGCameraRecorder Function TestDesktopExport *****************************
struct Z_Construct_UFunction_USGCameraRecorder_TestDesktopExport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Test and Debug Functions\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test and Debug Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraRecorder_TestDesktopExport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraRecorder, nullptr, "TestDesktopExport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraRecorder_TestDesktopExport_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraRecorder_TestDesktopExport_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraRecorder_TestDesktopExport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraRecorder_TestDesktopExport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraRecorder::execTestDesktopExport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestDesktopExport();
	P_NATIVE_END;
}
// ********** End Class USGCameraRecorder Function TestDesktopExport *******************************

// ********** Begin Class USGCameraRecorder ********************************************************
void USGCameraRecorder::StaticRegisterNativesUSGCameraRecorder()
{
	UClass* Class = USGCameraRecorder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTestRecordingAndExport", &USGCameraRecorder::execCreateTestRecordingAndExport },
		{ "DeleteRecording", &USGCameraRecorder::execDeleteRecording },
		{ "ExportAllRecordingsToDesktop", &USGCameraRecorder::execExportAllRecordingsToDesktop },
		{ "GetDesktopPathForTesting", &USGCameraRecorder::execGetDesktopPathForTesting },
		{ "GetRecordingCount", &USGCameraRecorder::execGetRecordingCount },
		{ "GetRecordingData", &USGCameraRecorder::execGetRecordingData },
		{ "IsPlaying", &USGCameraRecorder::execIsPlaying },
		{ "IsRecording", &USGCameraRecorder::execIsRecording },
		{ "LoadRecordingsFromSave", &USGCameraRecorder::execLoadRecordingsFromSave },
		{ "PausePlayback", &USGCameraRecorder::execPausePlayback },
		{ "PauseRecording", &USGCameraRecorder::execPauseRecording },
		{ "PlayRecording", &USGCameraRecorder::execPlayRecording },
		{ "ResumePlayback", &USGCameraRecorder::execResumePlayback },
		{ "ResumeRecording", &USGCameraRecorder::execResumeRecording },
		{ "SaveRecordingsToSave", &USGCameraRecorder::execSaveRecordingsToSave },
		{ "SaveRecordingToDesktop", &USGCameraRecorder::execSaveRecordingToDesktop },
		{ "SeekToTime", &USGCameraRecorder::execSeekToTime },
		{ "StartRecording", &USGCameraRecorder::execStartRecording },
		{ "StopPlayback", &USGCameraRecorder::execStopPlayback },
		{ "StopRecording", &USGCameraRecorder::execStopRecording },
		{ "TestDesktopExport", &USGCameraRecorder::execTestDesktopExport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGCameraRecorder;
UClass* USGCameraRecorder::GetPrivateStaticClass()
{
	using TClass = USGCameraRecorder;
	if (!Z_Registration_Info_UClass_USGCameraRecorder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCameraRecorder"),
			Z_Registration_Info_UClass_USGCameraRecorder.InnerSingleton,
			StaticRegisterNativesUSGCameraRecorder,
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
	return Z_Registration_Info_UClass_USGCameraRecorder.InnerSingleton;
}
UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister()
{
	return USGCameraRecorder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGCameraRecorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/SGCameraRecorder.h" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingResolutionX_MetaData[] = {
		{ "Category", "Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recording Settings\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recording Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingResolutionY_MetaData[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingFPS_MetaData[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRecordingDuration_MetaData[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
		{ "Category", "Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum recording time in seconds\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum recording time in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlayLastRecording_MetaData[] = {
		{ "Category", "Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback Settings\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopPlayback_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[] = {
		{ "Category", "Visual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual Settings\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMaterial_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenScale_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRecordingTime_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlaybackTime_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedRecordings_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingStateChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordingProgress_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Render Targets\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render Targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Camera/SGCameraRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecordingResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecordingResolutionY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecordingFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRecordingDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static void NewProp_bAutoPlayLastRecording_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlayLastRecording;
	static void NewProp_bLoopPlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopPlayback;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRecordingTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPlaybackTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedRecordings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedRecordings;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGCameraRecorder_CreateTestRecordingAndExport, "CreateTestRecordingAndExport" }, // 1850147099
		{ &Z_Construct_UFunction_USGCameraRecorder_DeleteRecording, "DeleteRecording" }, // 3971258063
		{ &Z_Construct_UFunction_USGCameraRecorder_ExportAllRecordingsToDesktop, "ExportAllRecordingsToDesktop" }, // 953856688
		{ &Z_Construct_UFunction_USGCameraRecorder_GetDesktopPathForTesting, "GetDesktopPathForTesting" }, // 3030248621
		{ &Z_Construct_UFunction_USGCameraRecorder_GetRecordingCount, "GetRecordingCount" }, // 381212656
		{ &Z_Construct_UFunction_USGCameraRecorder_GetRecordingData, "GetRecordingData" }, // 1464068963
		{ &Z_Construct_UFunction_USGCameraRecorder_IsPlaying, "IsPlaying" }, // 2236294368
		{ &Z_Construct_UFunction_USGCameraRecorder_IsRecording, "IsRecording" }, // 2038006446
		{ &Z_Construct_UFunction_USGCameraRecorder_LoadRecordingsFromSave, "LoadRecordingsFromSave" }, // 1237290604
		{ &Z_Construct_UFunction_USGCameraRecorder_PausePlayback, "PausePlayback" }, // 1197921538
		{ &Z_Construct_UFunction_USGCameraRecorder_PauseRecording, "PauseRecording" }, // 2974147002
		{ &Z_Construct_UFunction_USGCameraRecorder_PlayRecording, "PlayRecording" }, // 755497367
		{ &Z_Construct_UFunction_USGCameraRecorder_ResumePlayback, "ResumePlayback" }, // 3100203336
		{ &Z_Construct_UFunction_USGCameraRecorder_ResumeRecording, "ResumeRecording" }, // 1304609086
		{ &Z_Construct_UFunction_USGCameraRecorder_SaveRecordingsToSave, "SaveRecordingsToSave" }, // 3486830260
		{ &Z_Construct_UFunction_USGCameraRecorder_SaveRecordingToDesktop, "SaveRecordingToDesktop" }, // 2290038080
		{ &Z_Construct_UFunction_USGCameraRecorder_SeekToTime, "SeekToTime" }, // 292507755
		{ &Z_Construct_UFunction_USGCameraRecorder_StartRecording, "StartRecording" }, // 2622188268
		{ &Z_Construct_UFunction_USGCameraRecorder_StopPlayback, "StopPlayback" }, // 669233203
		{ &Z_Construct_UFunction_USGCameraRecorder_StopRecording, "StopRecording" }, // 3880435048
		{ &Z_Construct_UFunction_USGCameraRecorder_TestDesktopExport, "TestDesktopExport" }, // 1398938162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGCameraRecorder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RecordingResolutionX = { "RecordingResolutionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, RecordingResolutionX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingResolutionX_MetaData), NewProp_RecordingResolutionX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RecordingResolutionY = { "RecordingResolutionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, RecordingResolutionY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingResolutionY_MetaData), NewProp_RecordingResolutionY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RecordingFPS = { "RecordingFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, RecordingFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingFPS_MetaData), NewProp_RecordingFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_MaxRecordingDuration = { "MaxRecordingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, MaxRecordingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRecordingDuration_MetaData), NewProp_MaxRecordingDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_MetaData), NewProp_FOV_MetaData) };
void Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bAutoPlayLastRecording_SetBit(void* Obj)
{
	((USGCameraRecorder*)Obj)->bAutoPlayLastRecording = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bAutoPlayLastRecording = { "bAutoPlayLastRecording", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGCameraRecorder), &Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bAutoPlayLastRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlayLastRecording_MetaData), NewProp_bAutoPlayLastRecording_MetaData) };
void Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bLoopPlayback_SetBit(void* Obj)
{
	((USGCameraRecorder*)Obj)->bLoopPlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bLoopPlayback = { "bLoopPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGCameraRecorder), &Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bLoopPlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopPlayback_MetaData), NewProp_bLoopPlayback_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMesh_MetaData), NewProp_CameraMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenMaterial = { "ScreenMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, ScreenMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMaterial_MetaData), NewProp_ScreenMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenScale = { "ScreenScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, ScreenScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenScale_MetaData), NewProp_ScreenScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, CurrentState), Z_Construct_UEnum_SocialGolf_ECameraRecorderState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 697588561
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentRecordingTime = { "CurrentRecordingTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, CurrentRecordingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRecordingTime_MetaData), NewProp_CurrentRecordingTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentPlaybackTime = { "CurrentPlaybackTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, CurrentPlaybackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlaybackTime_MetaData), NewProp_CurrentPlaybackTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_SavedRecordings_Inner = { "SavedRecordings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCameraRecordingData, METADATA_PARAMS(0, nullptr) }; // 1406517318
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_SavedRecordings = { "SavedRecordings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, SavedRecordings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedRecordings_MetaData), NewProp_SavedRecordings_MetaData) }; // 1406517318
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_OnRecordingStateChanged = { "OnRecordingStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, OnRecordingStateChanged), Z_Construct_UDelegateFunction_SocialGolf_OnRecordingStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecordingStateChanged_MetaData), NewProp_OnRecordingStateChanged_MetaData) }; // 3397104336
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_OnRecordingProgress = { "OnRecordingProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, OnRecordingProgress), Z_Construct_UDelegateFunction_SocialGolf_OnRecordingProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecordingProgress_MetaData), NewProp_OnRecordingProgress_MetaData) }; // 3354248597
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_SceneCaptureComponent = { "SceneCaptureComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, SceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCaptureComponent_MetaData), NewProp_SceneCaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CameraMeshComponent = { "CameraMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, CameraMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMeshComponent_MetaData), NewProp_CameraMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenMeshComponent = { "ScreenMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, ScreenMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMeshComponent_MetaData), NewProp_ScreenMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenMaterialInstance = { "ScreenMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraRecorder, ScreenMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMaterialInstance_MetaData), NewProp_ScreenMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGCameraRecorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RecordingResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RecordingResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RecordingFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_MaxRecordingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bAutoPlayLastRecording,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_bLoopPlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CameraMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentRecordingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CurrentPlaybackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_SavedRecordings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_SavedRecordings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_OnRecordingStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_OnRecordingProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_SceneCaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_CameraMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraRecorder_Statics::NewProp_ScreenMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecorder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGCameraRecorder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecorder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USGCameraRecorder_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(USGCameraRecorder, ISGInteractable), false },  // 3465886030
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGCameraRecorder_Statics::ClassParams = {
	&USGCameraRecorder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGCameraRecorder_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecorder_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraRecorder_Statics::Class_MetaDataParams), Z_Construct_UClass_USGCameraRecorder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGCameraRecorder()
{
	if (!Z_Registration_Info_UClass_USGCameraRecorder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGCameraRecorder.OuterSingleton, Z_Construct_UClass_USGCameraRecorder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGCameraRecorder.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGCameraRecorder);
USGCameraRecorder::~USGCameraRecorder() {}
// ********** End Class USGCameraRecorder **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraRecorderState_StaticEnum, TEXT("ECameraRecorderState"), &Z_Registration_Info_UEnum_ECameraRecorderState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 697588561U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraRecordingData::StaticStruct, Z_Construct_UScriptStruct_FCameraRecordingData_Statics::NewStructOps, TEXT("CameraRecordingData"), &Z_Registration_Info_UScriptStruct_FCameraRecordingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRecordingData), 1406517318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGCameraRecorder, USGCameraRecorder::StaticClass, TEXT("USGCameraRecorder"), &Z_Registration_Info_UClass_USGCameraRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGCameraRecorder), 3004223764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_2610501590(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
