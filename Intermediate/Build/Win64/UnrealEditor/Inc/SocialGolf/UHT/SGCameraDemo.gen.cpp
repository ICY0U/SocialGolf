// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Demo/SGCameraDemo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCameraDemo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraDemo();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraDemo_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraRecorderActor_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_ECameraRecorderState();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGCameraDemo Function ClearAllRecordings ********************************
struct Z_Construct_UFunction_ASGCameraDemo_ClearAllRecordings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Demo" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_ClearAllRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "ClearAllRecordings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_ClearAllRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_ClearAllRecordings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraDemo_ClearAllRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_ClearAllRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execClearAllRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllRecordings();
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function ClearAllRecordings **********************************

// ********** Begin Class ASGCameraDemo Function ExportAllRecordings *******************************
struct Z_Construct_UFunction_ASGCameraDemo_ExportAllRecordings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Demo" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_ExportAllRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "ExportAllRecordings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_ExportAllRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_ExportAllRecordings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraDemo_ExportAllRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_ExportAllRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execExportAllRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportAllRecordings();
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function ExportAllRecordings *********************************

// ********** Begin Class ASGCameraDemo Function OnRecordingProgress *******************************
struct Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics
{
	struct SGCameraDemo_eventOnRecordingProgress_Parms
	{
		float CurrentTime;
		float TotalTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraDemo_eventOnRecordingProgress_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraDemo_eventOnRecordingProgress_Parms, TotalTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::NewProp_TotalTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "OnRecordingProgress", Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::SGCameraDemo_eventOnRecordingProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::SGCameraDemo_eventOnRecordingProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execOnRecordingProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecordingProgress(Z_Param_CurrentTime,Z_Param_TotalTime);
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function OnRecordingProgress *********************************

// ********** Begin Class ASGCameraDemo Function OnRecordingStateChanged ***************************
struct Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics
{
	struct SGCameraDemo_eventOnRecordingStateChanged_Parms
	{
		ECameraRecorderState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraDemo_eventOnRecordingStateChanged_Parms, NewState), Z_Construct_UEnum_SocialGolf_ECameraRecorderState, METADATA_PARAMS(0, nullptr) }; // 697588561
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "OnRecordingStateChanged", Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::SGCameraDemo_eventOnRecordingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::SGCameraDemo_eventOnRecordingStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execOnRecordingStateChanged)
{
	P_GET_ENUM(ECameraRecorderState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecordingStateChanged(ECameraRecorderState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function OnRecordingStateChanged *****************************

// ********** Begin Class ASGCameraDemo Function PlayAllRecordings *********************************
struct Z_Construct_UFunction_ASGCameraDemo_PlayAllRecordings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Demo" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_PlayAllRecordings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "PlayAllRecordings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_PlayAllRecordings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_PlayAllRecordings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraDemo_PlayAllRecordings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_PlayAllRecordings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execPlayAllRecordings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAllRecordings();
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function PlayAllRecordings ***********************************

// ********** Begin Class ASGCameraDemo Function SimulateContentWarningGameplay ********************
struct Z_Construct_UFunction_ASGCameraDemo_SimulateContentWarningGameplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Demo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Test functions for specific use cases\n" },
#endif
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test functions for specific use cases" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_SimulateContentWarningGameplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "SimulateContentWarningGameplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_SimulateContentWarningGameplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_SimulateContentWarningGameplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraDemo_SimulateContentWarningGameplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_SimulateContentWarningGameplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execSimulateContentWarningGameplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimulateContentWarningGameplay();
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function SimulateContentWarningGameplay **********************

// ********** Begin Class ASGCameraDemo Function StartRecordingAllCameras **************************
struct Z_Construct_UFunction_ASGCameraDemo_StartRecordingAllCameras_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Demo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Demo functions to test the camera system\n" },
#endif
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Demo functions to test the camera system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_StartRecordingAllCameras_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "StartRecordingAllCameras", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_StartRecordingAllCameras_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_StartRecordingAllCameras_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraDemo_StartRecordingAllCameras()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_StartRecordingAllCameras_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execStartRecordingAllCameras)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecordingAllCameras();
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function StartRecordingAllCameras ****************************

// ********** Begin Class ASGCameraDemo Function StopRecordingAllCameras ***************************
struct Z_Construct_UFunction_ASGCameraDemo_StopRecordingAllCameras_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Demo" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGCameraDemo_StopRecordingAllCameras_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGCameraDemo, nullptr, "StopRecordingAllCameras", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGCameraDemo_StopRecordingAllCameras_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGCameraDemo_StopRecordingAllCameras_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGCameraDemo_StopRecordingAllCameras()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGCameraDemo_StopRecordingAllCameras_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGCameraDemo::execStopRecordingAllCameras)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecordingAllCameras();
	P_NATIVE_END;
}
// ********** End Class ASGCameraDemo Function StopRecordingAllCameras *****************************

// ********** Begin Class ASGCameraDemo ************************************************************
void ASGCameraDemo::StaticRegisterNativesASGCameraDemo()
{
	UClass* Class = ASGCameraDemo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllRecordings", &ASGCameraDemo::execClearAllRecordings },
		{ "ExportAllRecordings", &ASGCameraDemo::execExportAllRecordings },
		{ "OnRecordingProgress", &ASGCameraDemo::execOnRecordingProgress },
		{ "OnRecordingStateChanged", &ASGCameraDemo::execOnRecordingStateChanged },
		{ "PlayAllRecordings", &ASGCameraDemo::execPlayAllRecordings },
		{ "SimulateContentWarningGameplay", &ASGCameraDemo::execSimulateContentWarningGameplay },
		{ "StartRecordingAllCameras", &ASGCameraDemo::execStartRecordingAllCameras },
		{ "StopRecordingAllCameras", &ASGCameraDemo::execStopRecordingAllCameras },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGCameraDemo;
UClass* ASGCameraDemo::GetPrivateStaticClass()
{
	using TClass = ASGCameraDemo;
	if (!Z_Registration_Info_UClass_ASGCameraDemo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCameraDemo"),
			Z_Registration_Info_UClass_ASGCameraDemo.InnerSingleton,
			StaticRegisterNativesASGCameraDemo,
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
	return Z_Registration_Info_UClass_ASGCameraDemo.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGCameraDemo_NoRegister()
{
	return ASGCameraDemo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGCameraDemo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Demo actor showing how to use the camera recording system\n * Place this in your level to test camera functionality\n */" },
#endif
		{ "IncludePath", "Demo/SGCameraDemo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Demo actor showing how to use the camera recording system\nPlace this in your level to test camera functionality" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DemoCameras_MetaData[] = {
		{ "Category", "Demo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Demo camera instances\n" },
#endif
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Demo camera instances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfCameras_MetaData[] = {
		{ "Category", "Demo" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpacing_MetaData[] = {
		{ "Category", "Demo" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraClass_MetaData[] = {
		{ "Category", "Demo" },
		{ "ModuleRelativePath", "Demo/SGCameraDemo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DemoCameras_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DemoCameras;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCameras;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpacing;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGCameraDemo_ClearAllRecordings, "ClearAllRecordings" }, // 2533643471
		{ &Z_Construct_UFunction_ASGCameraDemo_ExportAllRecordings, "ExportAllRecordings" }, // 90860209
		{ &Z_Construct_UFunction_ASGCameraDemo_OnRecordingProgress, "OnRecordingProgress" }, // 3790331102
		{ &Z_Construct_UFunction_ASGCameraDemo_OnRecordingStateChanged, "OnRecordingStateChanged" }, // 3030695174
		{ &Z_Construct_UFunction_ASGCameraDemo_PlayAllRecordings, "PlayAllRecordings" }, // 4150109700
		{ &Z_Construct_UFunction_ASGCameraDemo_SimulateContentWarningGameplay, "SimulateContentWarningGameplay" }, // 742120433
		{ &Z_Construct_UFunction_ASGCameraDemo_StartRecordingAllCameras, "StartRecordingAllCameras" }, // 977899310
		{ &Z_Construct_UFunction_ASGCameraDemo_StopRecordingAllCameras, "StopRecordingAllCameras" }, // 477709717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGCameraDemo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_DemoCameras_Inner = { "DemoCameras", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASGCameraRecorderActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_DemoCameras = { "DemoCameras", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCameraDemo, DemoCameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DemoCameras_MetaData), NewProp_DemoCameras_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_NumberOfCameras = { "NumberOfCameras", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCameraDemo, NumberOfCameras), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfCameras_MetaData), NewProp_NumberOfCameras_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_CameraSpacing = { "CameraSpacing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCameraDemo, CameraSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpacing_MetaData), NewProp_CameraSpacing_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_CameraClass = { "CameraClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGCameraDemo, CameraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASGCameraRecorderActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraClass_MetaData), NewProp_CameraClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGCameraDemo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_DemoCameras_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_DemoCameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_NumberOfCameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_CameraSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGCameraDemo_Statics::NewProp_CameraClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraDemo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGCameraDemo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraDemo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGCameraDemo_Statics::ClassParams = {
	&ASGCameraDemo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGCameraDemo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraDemo_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGCameraDemo_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGCameraDemo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGCameraDemo()
{
	if (!Z_Registration_Info_UClass_ASGCameraDemo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGCameraDemo.OuterSingleton, Z_Construct_UClass_ASGCameraDemo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGCameraDemo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGCameraDemo);
ASGCameraDemo::~ASGCameraDemo() {}
// ********** End Class ASGCameraDemo **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGCameraDemo, ASGCameraDemo::StaticClass, TEXT("ASGCameraDemo"), &Z_Registration_Info_UClass_ASGCameraDemo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGCameraDemo), 1210383226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h__Script_SocialGolf_2954259554(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
