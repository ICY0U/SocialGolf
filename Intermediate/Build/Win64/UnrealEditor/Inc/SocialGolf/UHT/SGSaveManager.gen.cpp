// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSaveManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGSaveManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveGame_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveManager();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveManager_NoRegister();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSaveComplete *******************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnSaveComplete_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates for save/load events\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates for save/load events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnSaveComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnSaveComplete_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnSaveComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnSaveComplete__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::_Script_SocialGolf_eventOnSaveComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::_Script_SocialGolf_eventOnSaveComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSaveComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSaveComplete, bool bSuccess, const FString& ErrorMessage)
{
	struct _Script_SocialGolf_eventOnSaveComplete_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
	_Script_SocialGolf_eventOnSaveComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ErrorMessage=ErrorMessage;
	OnSaveComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSaveComplete *********************************************************

// ********** Begin Delegate FOnLoadComplete *******************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnLoadComplete_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SocialGolf_eventOnLoadComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SocialGolf_eventOnLoadComplete_Parms), &Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnLoadComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnLoadComplete__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::_Script_SocialGolf_eventOnLoadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::_Script_SocialGolf_eventOnLoadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadComplete, bool bSuccess, const FString& ErrorMessage)
{
	struct _Script_SocialGolf_eventOnLoadComplete_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
	_Script_SocialGolf_eventOnLoadComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ErrorMessage=ErrorMessage;
	OnLoadComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLoadComplete *********************************************************

// ********** Begin Class USGSaveManager Function DeleteSave ***************************************
struct Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics
{
	struct SGSaveManager_eventDeleteSave_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventDeleteSave_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventDeleteSave_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSaveManager_eventDeleteSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSaveManager_eventDeleteSave_Parms), &Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "DeleteSave", Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::SGSaveManager_eventDeleteSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::SGSaveManager_eventDeleteSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_DeleteSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_DeleteSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execDeleteSave)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteSave(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function DeleteSave *****************************************

// ********** Begin Class USGSaveManager Function DoesSaveExist ************************************
struct Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics
{
	struct SGSaveManager_eventDoesSaveExist_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_SlotName", "AutoSave" },
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventDoesSaveExist_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventDoesSaveExist_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSaveManager_eventDoesSaveExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSaveManager_eventDoesSaveExist_Parms), &Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "DoesSaveExist", Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::SGSaveManager_eventDoesSaveExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::SGSaveManager_eventDoesSaveExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_DoesSaveExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_DoesSaveExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execDoesSaveExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesSaveExist(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function DoesSaveExist **************************************

// ********** Begin Class USGSaveManager Function GetAllSaveSlots **********************************
struct Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics
{
	struct SGSaveManager_eventGetAllSaveSlots_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get save file information\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get save file information" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventGetAllSaveSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "GetAllSaveSlots", Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::SGSaveManager_eventGetAllSaveSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::SGSaveManager_eventGetAllSaveSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execGetAllSaveSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllSaveSlots();
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function GetAllSaveSlots ************************************

// ********** Begin Class USGSaveManager Function GetCurrentSave ***********************************
struct Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics
{
	struct SGSaveManager_eventGetCurrentSave_Parms
	{
		USGSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current save data access\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current save data access" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventGetCurrentSave_Parms, ReturnValue), Z_Construct_UClass_USGSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "GetCurrentSave", Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::SGSaveManager_eventGetCurrentSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::SGSaveManager_eventGetCurrentSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_GetCurrentSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_GetCurrentSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execGetCurrentSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGSaveGame**)Z_Param__Result=P_THIS->GetCurrentSave();
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function GetCurrentSave *************************************

// ********** Begin Class USGSaveManager Function GetSaveGameInfo **********************************
struct Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics
{
	struct SGSaveManager_eventGetSaveGameInfo_Parms
	{
		FString SlotName;
		int32 UserIndex;
		USGSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventGetSaveGameInfo_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventGetSaveGameInfo_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventGetSaveGameInfo_Parms, ReturnValue), Z_Construct_UClass_USGSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "GetSaveGameInfo", Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::SGSaveManager_eventGetSaveGameInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::SGSaveManager_eventGetSaveGameInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execGetSaveGameInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGSaveGame**)Z_Param__Result=P_THIS->GetSaveGameInfo(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function GetSaveGameInfo ************************************

// ********** Begin Class USGSaveManager Function HasCurrentSave ***********************************
struct Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics
{
	struct SGSaveManager_eventHasCurrentSave_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSaveManager_eventHasCurrentSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSaveManager_eventHasCurrentSave_Parms), &Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "HasCurrentSave", Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::SGSaveManager_eventHasCurrentSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::SGSaveManager_eventHasCurrentSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_HasCurrentSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_HasCurrentSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execHasCurrentSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCurrentSave();
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function HasCurrentSave *************************************

// ********** Begin Class USGSaveManager Function LoadGame *****************************************
struct Z_Construct_UFunction_USGSaveManager_LoadGame_Statics
{
	struct SGSaveManager_eventLoadGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "CPP_Default_SlotName", "AutoSave" },
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventLoadGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventLoadGame_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "LoadGame", Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::SGSaveManager_eventLoadGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::SGSaveManager_eventLoadGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execLoadGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGame(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function LoadGame *******************************************

// ********** Begin Class USGSaveManager Function QuickLoad ****************************************
struct Z_Construct_UFunction_USGSaveManager_QuickLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_QuickLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "QuickLoad", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_QuickLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_QuickLoad_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGSaveManager_QuickLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_QuickLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execQuickLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuickLoad();
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function QuickLoad ******************************************

// ********** Begin Class USGSaveManager Function QuickSave ****************************************
struct Z_Construct_UFunction_USGSaveManager_QuickSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quick save/load with default slot\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick save/load with default slot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_QuickSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "QuickSave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_QuickSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_QuickSave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGSaveManager_QuickSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_QuickSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execQuickSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuickSave();
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function QuickSave ******************************************

// ********** Begin Class USGSaveManager Function SaveGame *****************************************
struct Z_Construct_UFunction_USGSaveManager_SaveGame_Statics
{
	struct SGSaveManager_eventSaveGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main save/load functions\n" },
#endif
		{ "CPP_Default_SlotName", "AutoSave" },
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main save/load functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventSaveGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveManager_eventSaveGame_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveManager, nullptr, "SaveGame", Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::SGSaveManager_eventSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::SGSaveManager_eventSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveManager_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveManager_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveManager::execSaveGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGame(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USGSaveManager Function SaveGame *******************************************

// ********** Begin Class USGSaveManager ***********************************************************
void USGSaveManager::StaticRegisterNativesUSGSaveManager()
{
	UClass* Class = USGSaveManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteSave", &USGSaveManager::execDeleteSave },
		{ "DoesSaveExist", &USGSaveManager::execDoesSaveExist },
		{ "GetAllSaveSlots", &USGSaveManager::execGetAllSaveSlots },
		{ "GetCurrentSave", &USGSaveManager::execGetCurrentSave },
		{ "GetSaveGameInfo", &USGSaveManager::execGetSaveGameInfo },
		{ "HasCurrentSave", &USGSaveManager::execHasCurrentSave },
		{ "LoadGame", &USGSaveManager::execLoadGame },
		{ "QuickLoad", &USGSaveManager::execQuickLoad },
		{ "QuickSave", &USGSaveManager::execQuickSave },
		{ "SaveGame", &USGSaveManager::execSaveGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGSaveManager;
UClass* USGSaveManager::GetPrivateStaticClass()
{
	using TClass = USGSaveManager;
	if (!Z_Registration_Info_UClass_USGSaveManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGSaveManager"),
			Z_Registration_Info_UClass_USGSaveManager.InnerSingleton,
			StaticRegisterNativesUSGSaveManager,
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
	return Z_Registration_Info_UClass_USGSaveManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSaveManager_NoRegister()
{
	return USGSaveManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSaveManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Central manager for all save/load operations\n * Handles file I/O, validation, and coordination with saveable objects\n */" },
#endif
		{ "IncludePath", "SaveSystem/SGSaveManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Central manager for all save/load operations\nHandles file I/O, validation, and coordination with saveable objects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveComplete_MetaData[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event delegates\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadComplete_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[] = {
		{ "Category", "Save System|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSlotName_MetaData[] = {
		{ "Category", "Save System|Settings" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncSaving_MetaData[] = {
		{ "Category", "Save System|Settings" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "SaveSystem/SGSaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadComplete;
	static void NewProp_bDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSlotName;
	static void NewProp_bUseAsyncSaving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncSaving;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGSaveManager_DeleteSave, "DeleteSave" }, // 3310085560
		{ &Z_Construct_UFunction_USGSaveManager_DoesSaveExist, "DoesSaveExist" }, // 395262921
		{ &Z_Construct_UFunction_USGSaveManager_GetAllSaveSlots, "GetAllSaveSlots" }, // 337104360
		{ &Z_Construct_UFunction_USGSaveManager_GetCurrentSave, "GetCurrentSave" }, // 720690542
		{ &Z_Construct_UFunction_USGSaveManager_GetSaveGameInfo, "GetSaveGameInfo" }, // 1973792809
		{ &Z_Construct_UFunction_USGSaveManager_HasCurrentSave, "HasCurrentSave" }, // 1541835289
		{ &Z_Construct_UFunction_USGSaveManager_LoadGame, "LoadGame" }, // 450824437
		{ &Z_Construct_UFunction_USGSaveManager_QuickLoad, "QuickLoad" }, // 3022426429
		{ &Z_Construct_UFunction_USGSaveManager_QuickSave, "QuickSave" }, // 2382880568
		{ &Z_Construct_UFunction_USGSaveManager_SaveGame, "SaveGame" }, // 2296461775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSaveManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGSaveManager_Statics::NewProp_OnSaveComplete = { "OnSaveComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSaveManager, OnSaveComplete), Z_Construct_UDelegateFunction_SocialGolf_OnSaveComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveComplete_MetaData), NewProp_OnSaveComplete_MetaData) }; // 312762758
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGSaveManager_Statics::NewProp_OnLoadComplete = { "OnLoadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSaveManager, OnLoadComplete), Z_Construct_UDelegateFunction_SocialGolf_OnLoadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadComplete_MetaData), NewProp_OnLoadComplete_MetaData) }; // 661361583
void Z_Construct_UClass_USGSaveManager_Statics::NewProp_bDebugMode_SetBit(void* Obj)
{
	((USGSaveManager*)Obj)->bDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGSaveManager_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGSaveManager), &Z_Construct_UClass_USGSaveManager_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugMode_MetaData), NewProp_bDebugMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USGSaveManager_Statics::NewProp_DefaultSlotName = { "DefaultSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSaveManager, DefaultSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSlotName_MetaData), NewProp_DefaultSlotName_MetaData) };
void Z_Construct_UClass_USGSaveManager_Statics::NewProp_bUseAsyncSaving_SetBit(void* Obj)
{
	((USGSaveManager*)Obj)->bUseAsyncSaving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGSaveManager_Statics::NewProp_bUseAsyncSaving = { "bUseAsyncSaving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGSaveManager), &Z_Construct_UClass_USGSaveManager_Statics::NewProp_bUseAsyncSaving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncSaving_MetaData), NewProp_bUseAsyncSaving_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGSaveManager_Statics::NewProp_CurrentSaveGame = { "CurrentSaveGame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSaveManager, CurrentSaveGame), Z_Construct_UClass_USGSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveGame_MetaData), NewProp_CurrentSaveGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGSaveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveManager_Statics::NewProp_OnSaveComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveManager_Statics::NewProp_OnLoadComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveManager_Statics::NewProp_bDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveManager_Statics::NewProp_DefaultSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveManager_Statics::NewProp_bUseAsyncSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveManager_Statics::NewProp_CurrentSaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGSaveManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSaveManager_Statics::ClassParams = {
	&USGSaveManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGSaveManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSaveManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGSaveManager()
{
	if (!Z_Registration_Info_UClass_USGSaveManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSaveManager.OuterSingleton, Z_Construct_UClass_USGSaveManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSaveManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGSaveManager);
USGSaveManager::~USGSaveManager() {}
// ********** End Class USGSaveManager *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSaveManager, USGSaveManager::StaticClass, TEXT("USGSaveManager"), &Z_Registration_Info_UClass_USGSaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSaveManager), 3688703446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h__Script_SocialGolf_2942734875(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
