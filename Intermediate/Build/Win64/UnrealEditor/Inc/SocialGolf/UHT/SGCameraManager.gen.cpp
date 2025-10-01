// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCameraManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupableCamera_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraManager();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraManager_NoRegister();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCameraViewChanged **************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnCameraViewChanged_Parms
	{
		bool bIsCameraView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCameraView_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCameraView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::NewProp_bIsCameraView_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnCameraViewChanged_Parms*)Obj)->bIsCameraView = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::NewProp_bIsCameraView = { "bIsCameraView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnCameraViewChanged_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::NewProp_bIsCameraView_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::NewProp_bIsCameraView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnCameraViewChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnCameraViewChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnCameraViewChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCameraViewChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraViewChanged, bool bIsCameraView)
{
	struct _Script_SocialGolf_eventOnCameraViewChanged_Parms
	{
		bool bIsCameraView;
	};
	_Script_SocialGolf_eventOnCameraViewChanged_Parms Parms;
	Parms.bIsCameraView=bIsCameraView ? true : false;
	OnCameraViewChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCameraViewChanged ****************************************************

// ********** Begin Class USGCameraManager Function DropCamera *************************************
struct Z_Construct_UFunction_USGCameraManager_DropCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_DropCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "DropCamera", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_DropCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_DropCamera_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraManager_DropCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_DropCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execDropCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropCamera();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function DropCamera ***************************************

// ********** Begin Class USGCameraManager Function Get ********************************************
struct Z_Construct_UFunction_USGCameraManager_Get_Statics
{
	struct SGCameraManager_eventGet_Parms
	{
		const UObject* WorldContext;
		USGCameraManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Camera Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static access function for easy access from anywhere\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static access function for easy access from anywhere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraManager_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraManager_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USGCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraManager_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraManager_Get_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraManager_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "Get", Z_Construct_UFunction_USGCameraManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraManager_Get_Statics::SGCameraManager_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraManager_Get_Statics::SGCameraManager_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraManager_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGCameraManager**)Z_Param__Result=USGCameraManager::Get(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function Get **********************************************

// ********** Begin Class USGCameraManager Function GetCurrentCamera *******************************
struct Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics
{
	struct SGCameraManager_eventGetCurrentCamera_Parms
	{
		ASGPickupableCamera* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraManager_eventGetCurrentCamera_Parms, ReturnValue), Z_Construct_UClass_ASGPickupableCamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "GetCurrentCamera", Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::SGCameraManager_eventGetCurrentCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::SGCameraManager_eventGetCurrentCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraManager_GetCurrentCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_GetCurrentCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execGetCurrentCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASGPickupableCamera**)Z_Param__Result=P_THIS->GetCurrentCamera();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function GetCurrentCamera *********************************

// ********** Begin Class USGCameraManager Function HasCamera **************************************
struct Z_Construct_UFunction_USGCameraManager_HasCamera_Statics
{
	struct SGCameraManager_eventHasCamera_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
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
void Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraManager_eventHasCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraManager_eventHasCamera_Parms), &Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "HasCamera", Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::SGCameraManager_eventHasCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::SGCameraManager_eventHasCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraManager_HasCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_HasCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execHasCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCamera();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function HasCamera ****************************************

// ********** Begin Class USGCameraManager Function IsCameraViewActive *****************************
struct Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics
{
	struct SGCameraManager_eventIsCameraViewActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraManager_eventIsCameraViewActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraManager_eventIsCameraViewActive_Parms), &Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "IsCameraViewActive", Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::SGCameraManager_eventIsCameraViewActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::SGCameraManager_eventIsCameraViewActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraManager_IsCameraViewActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_IsCameraViewActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execIsCameraViewActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraViewActive();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function IsCameraViewActive *******************************

// ********** Begin Class USGCameraManager Function IsRecording ************************************
struct Z_Construct_UFunction_USGCameraManager_IsRecording_Statics
{
	struct SGCameraManager_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGCameraManager_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGCameraManager_eventIsRecording_Parms), &Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "IsRecording", Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::SGCameraManager_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::SGCameraManager_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraManager_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function IsRecording **************************************

// ********** Begin Class USGCameraManager Function PickUpCamera ***********************************
struct Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics
{
	struct SGCameraManager_eventPickUpCamera_Parms
	{
		ASGPickupableCamera* Camera;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera management\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGCameraManager_eventPickUpCamera_Parms, Camera), Z_Construct_UClass_ASGPickupableCamera_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "PickUpCamera", Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::SGCameraManager_eventPickUpCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::SGCameraManager_eventPickUpCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGCameraManager_PickUpCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_PickUpCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execPickUpCamera)
{
	P_GET_OBJECT(ASGPickupableCamera,Z_Param_Camera);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUpCamera(Z_Param_Camera);
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function PickUpCamera *************************************

// ********** Begin Class USGCameraManager Function StartRecording *********************************
struct Z_Construct_UFunction_USGCameraManager_StartRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_StartRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "StartRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_StartRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraManager_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execStartRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function StartRecording ***********************************

// ********** Begin Class USGCameraManager Function StopRecording **********************************
struct Z_Construct_UFunction_USGCameraManager_StopRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_StopRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "StopRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_StopRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraManager_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecording();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function StopRecording ************************************

// ********** Begin Class USGCameraManager Function ToggleCameraView *******************************
struct Z_Construct_UFunction_USGCameraManager_ToggleCameraView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGCameraManager_ToggleCameraView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGCameraManager, nullptr, "ToggleCameraView", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGCameraManager_ToggleCameraView_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGCameraManager_ToggleCameraView_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGCameraManager_ToggleCameraView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGCameraManager_ToggleCameraView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGCameraManager::execToggleCameraView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCameraView();
	P_NATIVE_END;
}
// ********** End Class USGCameraManager Function ToggleCameraView *********************************

// ********** Begin Class USGCameraManager *********************************************************
void USGCameraManager::StaticRegisterNativesUSGCameraManager()
{
	UClass* Class = USGCameraManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropCamera", &USGCameraManager::execDropCamera },
		{ "Get", &USGCameraManager::execGet },
		{ "GetCurrentCamera", &USGCameraManager::execGetCurrentCamera },
		{ "HasCamera", &USGCameraManager::execHasCamera },
		{ "IsCameraViewActive", &USGCameraManager::execIsCameraViewActive },
		{ "IsRecording", &USGCameraManager::execIsRecording },
		{ "PickUpCamera", &USGCameraManager::execPickUpCamera },
		{ "StartRecording", &USGCameraManager::execStartRecording },
		{ "StopRecording", &USGCameraManager::execStopRecording },
		{ "ToggleCameraView", &USGCameraManager::execToggleCameraView },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGCameraManager;
UClass* USGCameraManager::GetPrivateStaticClass()
{
	using TClass = USGCameraManager;
	if (!Z_Registration_Info_UClass_USGCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCameraManager"),
			Z_Registration_Info_UClass_USGCameraManager.InnerSingleton,
			StaticRegisterNativesUSGCameraManager,
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
	return Z_Registration_Info_UClass_USGCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USGCameraManager_NoRegister()
{
	return USGCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Camera/SGCameraManager.h" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCamera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current state\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCameraViewActive_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalViewTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraViewChanged_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCamera;
	static void NewProp_bIsCameraViewActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCameraViewActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalViewTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropDistance;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraViewChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGCameraManager_DropCamera, "DropCamera" }, // 505690814
		{ &Z_Construct_UFunction_USGCameraManager_Get, "Get" }, // 3975522196
		{ &Z_Construct_UFunction_USGCameraManager_GetCurrentCamera, "GetCurrentCamera" }, // 2603325973
		{ &Z_Construct_UFunction_USGCameraManager_HasCamera, "HasCamera" }, // 3360902075
		{ &Z_Construct_UFunction_USGCameraManager_IsCameraViewActive, "IsCameraViewActive" }, // 1121447240
		{ &Z_Construct_UFunction_USGCameraManager_IsRecording, "IsRecording" }, // 1378074825
		{ &Z_Construct_UFunction_USGCameraManager_PickUpCamera, "PickUpCamera" }, // 1386546023
		{ &Z_Construct_UFunction_USGCameraManager_StartRecording, "StartRecording" }, // 46028246
		{ &Z_Construct_UFunction_USGCameraManager_StopRecording, "StopRecording" }, // 3182849618
		{ &Z_Construct_UFunction_USGCameraManager_ToggleCameraView, "ToggleCameraView" }, // 3900275099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraManager_Statics::NewProp_CurrentCamera = { "CurrentCamera", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraManager, CurrentCamera), Z_Construct_UClass_ASGPickupableCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCamera_MetaData), NewProp_CurrentCamera_MetaData) };
void Z_Construct_UClass_USGCameraManager_Statics::NewProp_bIsCameraViewActive_SetBit(void* Obj)
{
	((USGCameraManager*)Obj)->bIsCameraViewActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGCameraManager_Statics::NewProp_bIsCameraViewActive = { "bIsCameraViewActive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGCameraManager), &Z_Construct_UClass_USGCameraManager_Statics::NewProp_bIsCameraViewActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCameraViewActive_MetaData), NewProp_bIsCameraViewActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGCameraManager_Statics::NewProp_OriginalViewTarget = { "OriginalViewTarget", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraManager, OriginalViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalViewTarget_MetaData), NewProp_OriginalViewTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGCameraManager_Statics::NewProp_DropDistance = { "DropDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraManager, DropDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropDistance_MetaData), NewProp_DropDistance_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGCameraManager_Statics::NewProp_OnCameraViewChanged = { "OnCameraViewChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGCameraManager, OnCameraViewChanged), Z_Construct_UDelegateFunction_SocialGolf_OnCameraViewChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCameraViewChanged_MetaData), NewProp_OnCameraViewChanged_MetaData) }; // 1338626430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraManager_Statics::NewProp_CurrentCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraManager_Statics::NewProp_bIsCameraViewActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraManager_Statics::NewProp_OriginalViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraManager_Statics::NewProp_DropDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGCameraManager_Statics::NewProp_OnCameraViewChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGCameraManager_Statics::ClassParams = {
	&USGCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGCameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USGCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGCameraManager()
{
	if (!Z_Registration_Info_UClass_USGCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGCameraManager.OuterSingleton, Z_Construct_UClass_USGCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGCameraManager);
USGCameraManager::~USGCameraManager() {}
// ********** End Class USGCameraManager ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGCameraManager, USGCameraManager::StaticClass, TEXT("USGCameraManager"), &Z_Registration_Info_UClass_USGCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGCameraManager), 3715300320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h__Script_SocialGolf_4177960255(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
