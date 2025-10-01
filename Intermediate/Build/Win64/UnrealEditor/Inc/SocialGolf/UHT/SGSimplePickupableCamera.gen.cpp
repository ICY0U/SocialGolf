// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSimplePickupableCamera.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGSimplePickupableCamera() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGSimplePickupableCamera();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGSimplePickupableCamera_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGSimplePickupableCamera Function Drop **********************************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_Drop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_Drop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "Drop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_Drop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_Drop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_Drop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_Drop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Drop();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function Drop ************************************

// ********** Begin Class ASGSimplePickupableCamera Function GetCameraRecorder *********************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics
{
	struct SGSimplePickupableCamera_eventGetCameraRecorder_Parms
	{
		USGCameraRecorder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSimplePickupableCamera_eventGetCameraRecorder_Parms, ReturnValue), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "GetCameraRecorder", Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::SGSimplePickupableCamera_eventGetCameraRecorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::SGSimplePickupableCamera_eventGetCameraRecorder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execGetCameraRecorder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGCameraRecorder**)Z_Param__Result=P_THIS->GetCameraRecorder();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function GetCameraRecorder ***********************

// ********** Begin Class ASGSimplePickupableCamera Function GetCurrentOwner ***********************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics
{
	struct SGSimplePickupableCamera_eventGetCurrentOwner_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSimplePickupableCamera_eventGetCurrentOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "GetCurrentOwner", Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::SGSimplePickupableCamera_eventGetCurrentOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::SGSimplePickupableCamera_eventGetCurrentOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execGetCurrentOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetCurrentOwner();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function GetCurrentOwner *************************

// ********** Begin Class ASGSimplePickupableCamera Function IsCameraViewActive ********************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics
{
	struct SGSimplePickupableCamera_eventIsCameraViewActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSimplePickupableCamera_eventIsCameraViewActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSimplePickupableCamera_eventIsCameraViewActive_Parms), &Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "IsCameraViewActive", Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::SGSimplePickupableCamera_eventIsCameraViewActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::SGSimplePickupableCamera_eventIsCameraViewActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execIsCameraViewActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraViewActive();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function IsCameraViewActive **********************

// ********** Begin Class ASGSimplePickupableCamera Function IsPickedUp ****************************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics
{
	struct SGSimplePickupableCamera_eventIsPickedUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSimplePickupableCamera_eventIsPickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSimplePickupableCamera_eventIsPickedUp_Parms), &Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "IsPickedUp", Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::SGSimplePickupableCamera_eventIsPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::SGSimplePickupableCamera_eventIsPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execIsPickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPickedUp();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function IsPickedUp ******************************

// ********** Begin Class ASGSimplePickupableCamera Function OnDropCameraPressed *******************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_OnDropCameraPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_OnDropCameraPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "OnDropCameraPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_OnDropCameraPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_OnDropCameraPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_OnDropCameraPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_OnDropCameraPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execOnDropCameraPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropCameraPressed();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function OnDropCameraPressed *********************

// ********** Begin Class ASGSimplePickupableCamera Function OnToggleCameraPressed *****************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_OnToggleCameraPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input handlers\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_OnToggleCameraPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "OnToggleCameraPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_OnToggleCameraPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_OnToggleCameraPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_OnToggleCameraPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_OnToggleCameraPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execOnToggleCameraPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnToggleCameraPressed();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function OnToggleCameraPressed *******************

// ********** Begin Class ASGSimplePickupableCamera Function PickUp ********************************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics
{
	struct SGSimplePickupableCamera_eventPickUp_Parms
	{
		APawn* Picker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main functionality\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Picker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSimplePickupableCamera_eventPickUp_Parms, Picker), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::NewProp_Picker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "PickUp", Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::SGSimplePickupableCamera_eventPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::SGSimplePickupableCamera_eventPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execPickUp)
{
	P_GET_OBJECT(APawn,Z_Param_Picker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUp(Z_Param_Picker);
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function PickUp **********************************

// ********** Begin Class ASGSimplePickupableCamera Function ToggleCameraView **********************
struct Z_Construct_UFunction_ASGSimplePickupableCamera_ToggleCameraView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSimplePickupableCamera_ToggleCameraView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSimplePickupableCamera, nullptr, "ToggleCameraView", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSimplePickupableCamera_ToggleCameraView_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSimplePickupableCamera_ToggleCameraView_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGSimplePickupableCamera_ToggleCameraView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSimplePickupableCamera_ToggleCameraView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSimplePickupableCamera::execToggleCameraView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCameraView();
	P_NATIVE_END;
}
// ********** End Class ASGSimplePickupableCamera Function ToggleCameraView ************************

// ********** Begin Class ASGSimplePickupableCamera ************************************************
void ASGSimplePickupableCamera::StaticRegisterNativesASGSimplePickupableCamera()
{
	UClass* Class = ASGSimplePickupableCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Drop", &ASGSimplePickupableCamera::execDrop },
		{ "GetCameraRecorder", &ASGSimplePickupableCamera::execGetCameraRecorder },
		{ "GetCurrentOwner", &ASGSimplePickupableCamera::execGetCurrentOwner },
		{ "IsCameraViewActive", &ASGSimplePickupableCamera::execIsCameraViewActive },
		{ "IsPickedUp", &ASGSimplePickupableCamera::execIsPickedUp },
		{ "OnDropCameraPressed", &ASGSimplePickupableCamera::execOnDropCameraPressed },
		{ "OnToggleCameraPressed", &ASGSimplePickupableCamera::execOnToggleCameraPressed },
		{ "PickUp", &ASGSimplePickupableCamera::execPickUp },
		{ "ToggleCameraView", &ASGSimplePickupableCamera::execToggleCameraView },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGSimplePickupableCamera;
UClass* ASGSimplePickupableCamera::GetPrivateStaticClass()
{
	using TClass = ASGSimplePickupableCamera;
	if (!Z_Registration_Info_UClass_ASGSimplePickupableCamera.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGSimplePickupableCamera"),
			Z_Registration_Info_UClass_ASGSimplePickupableCamera.InnerSingleton,
			StaticRegisterNativesASGSimplePickupableCamera,
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
	return Z_Registration_Info_UClass_ASGSimplePickupableCamera.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGSimplePickupableCamera_NoRegister()
{
	return ASGSimplePickupableCamera::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGSimplePickupableCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/SGSimplePickupableCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRecorderComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPickedUp_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCameraViewActive_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOwner_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/SGSimplePickupableCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRecorderComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropDistance;
	static void NewProp_bIsPickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPickedUp;
	static void NewProp_bIsCameraViewActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCameraViewActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalViewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_Drop, "Drop" }, // 3546551524
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_GetCameraRecorder, "GetCameraRecorder" }, // 1257761575
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_GetCurrentOwner, "GetCurrentOwner" }, // 2943151996
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_IsCameraViewActive, "IsCameraViewActive" }, // 2979377554
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_IsPickedUp, "IsPickedUp" }, // 1998068500
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_OnDropCameraPressed, "OnDropCameraPressed" }, // 1745225464
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_OnToggleCameraPressed, "OnToggleCameraPressed" }, // 2019268009
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_PickUp, "PickUp" }, // 606612929
		{ &Z_Construct_UFunction_ASGSimplePickupableCamera_ToggleCameraView, "ToggleCameraView" }, // 4193058566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGSimplePickupableCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CameraMeshComponent = { "CameraMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, CameraMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMeshComponent_MetaData), NewProp_CameraMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, InteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CameraRecorderComponent = { "CameraRecorderComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, CameraRecorderComponent), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRecorderComponent_MetaData), NewProp_CameraRecorderComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRadius_MetaData), NewProp_InteractionRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMesh_MetaData), NewProp_CameraMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_DropDistance = { "DropDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, DropDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDistance_MetaData), NewProp_DropDistance_MetaData) };
void Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsPickedUp_SetBit(void* Obj)
{
	((ASGSimplePickupableCamera*)Obj)->bIsPickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsPickedUp = { "bIsPickedUp", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGSimplePickupableCamera), &Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsPickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPickedUp_MetaData), NewProp_bIsPickedUp_MetaData) };
void Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsCameraViewActive_SetBit(void* Obj)
{
	((ASGSimplePickupableCamera*)Obj)->bIsCameraViewActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsCameraViewActive = { "bIsCameraViewActive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGSimplePickupableCamera), &Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsCameraViewActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCameraViewActive_MetaData), NewProp_bIsCameraViewActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CurrentOwner = { "CurrentOwner", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, CurrentOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOwner_MetaData), NewProp_CurrentOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_OriginalViewTarget = { "OriginalViewTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSimplePickupableCamera, OriginalViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalViewTarget_MetaData), NewProp_OriginalViewTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGSimplePickupableCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CameraMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CameraRecorderComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CameraMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_DropDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_bIsCameraViewActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_CurrentOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSimplePickupableCamera_Statics::NewProp_OriginalViewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGSimplePickupableCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGSimplePickupableCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGSimplePickupableCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGSimplePickupableCamera, ISGInteractable), false },  // 3465886030
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGSimplePickupableCamera_Statics::ClassParams = {
	&ASGSimplePickupableCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGSimplePickupableCamera_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGSimplePickupableCamera_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGSimplePickupableCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGSimplePickupableCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGSimplePickupableCamera()
{
	if (!Z_Registration_Info_UClass_ASGSimplePickupableCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGSimplePickupableCamera.OuterSingleton, Z_Construct_UClass_ASGSimplePickupableCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGSimplePickupableCamera.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGSimplePickupableCamera);
ASGSimplePickupableCamera::~ASGSimplePickupableCamera() {}
// ********** End Class ASGSimplePickupableCamera **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGSimplePickupableCamera, ASGSimplePickupableCamera::StaticClass, TEXT("ASGSimplePickupableCamera"), &Z_Registration_Info_UClass_ASGSimplePickupableCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGSimplePickupableCamera), 2795705610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h__Script_SocialGolf_953050756(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
