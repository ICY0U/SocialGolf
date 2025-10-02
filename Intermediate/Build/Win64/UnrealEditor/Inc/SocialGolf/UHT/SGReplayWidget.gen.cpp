// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGReplayWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGReplayWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayManager_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayWidget();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayWidget_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EReplayEventType();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnReplaySelected *****************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnReplaySelected_Parms
	{
		FString ReplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplaySelected_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::NewProp_ReplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnReplaySelected__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplaySelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplaySelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplaySelected_DelegateWrapper(const FMulticastScriptDelegate& OnReplaySelected, const FString& ReplayName)
{
	struct _Script_SocialGolf_eventOnReplaySelected_Parms
	{
		FString ReplayName;
	};
	_Script_SocialGolf_eventOnReplaySelected_Parms Parms;
	Parms.ReplayName=ReplayName;
	OnReplaySelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReplaySelected *******************************************************

// ********** Begin Class USGReplayWidget Function DeleteSelectedReplay ****************************
struct Z_Construct_UFunction_USGReplayWidget_DeleteSelectedReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_DeleteSelectedReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "DeleteSelectedReplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_DeleteSelectedReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_DeleteSelectedReplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_DeleteSelectedReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_DeleteSelectedReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execDeleteSelectedReplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSelectedReplay();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function DeleteSelectedReplay ******************************

// ********** Begin Class USGReplayWidget Function InitializeReplayWidget **************************
struct Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics
{
	struct SGReplayWidget_eventInitializeReplayWidget_Parms
	{
		USGReplayManager* InReplayManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize with replay manager reference (renamed to avoid conflict)\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize with replay manager reference (renamed to avoid conflict)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReplayManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InReplayManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::NewProp_InReplayManager = { "InReplayManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventInitializeReplayWidget_Parms, InReplayManager), Z_Construct_UClass_USGReplayManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReplayManager_MetaData), NewProp_InReplayManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::NewProp_InReplayManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "InitializeReplayWidget", Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::SGReplayWidget_eventInitializeReplayWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::SGReplayWidget_eventInitializeReplayWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execInitializeReplayWidget)
{
	P_GET_OBJECT(USGReplayManager,Z_Param_InReplayManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeReplayWidget(Z_Param_InReplayManager);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function InitializeReplayWidget ****************************

// ********** Begin Class USGReplayWidget Function LoadSelectedReplay ******************************
struct Z_Construct_UFunction_USGReplayWidget_LoadSelectedReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replay management\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replay management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_LoadSelectedReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "LoadSelectedReplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_LoadSelectedReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_LoadSelectedReplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_LoadSelectedReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_LoadSelectedReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execLoadSelectedReplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSelectedReplay();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function LoadSelectedReplay ********************************

// ********** Begin Class USGReplayWidget Function NextCamera **************************************
struct Z_Construct_UFunction_USGReplayWidget_NextCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera controls\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera controls" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_NextCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "NextCamera", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_NextCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_NextCamera_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_NextCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_NextCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execNextCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextCamera();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function NextCamera ****************************************

// ********** Begin Class USGReplayWidget Function OnCameraModeChanged *****************************
struct Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics
{
	struct SGReplayWidget_eventOnCameraModeChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combo box event handlers\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combo box event handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnCameraModeChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnCameraModeChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnCameraModeChanged", Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::SGReplayWidget_eventOnCameraModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::SGReplayWidget_eventOnCameraModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnCameraModeChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraModeChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnCameraModeChanged *******************************

// ********** Begin Class USGReplayWidget Function OnDeleteReplayButtonClicked *********************
struct Z_Construct_UFunction_USGReplayWidget_OnDeleteReplayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnDeleteReplayButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnDeleteReplayButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnDeleteReplayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnDeleteReplayButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnDeleteReplayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnDeleteReplayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnDeleteReplayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeleteReplayButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnDeleteReplayButtonClicked ***********************

// ********** Begin Class USGReplayWidget Function OnEventRecorded *********************************
struct Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics
{
	struct SGReplayWidget_eventOnEventRecorded_Parms
	{
		EReplayEventType EventType;
		FString Description;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnEventRecorded_Parms, EventType), Z_Construct_UEnum_SocialGolf_EReplayEventType, METADATA_PARAMS(0, nullptr) }; // 1092210602
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnEventRecorded_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnEventRecorded", Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::SGReplayWidget_eventOnEventRecorded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::SGReplayWidget_eventOnEventRecorded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnEventRecorded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnEventRecorded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnEventRecorded)
{
	P_GET_ENUM(EReplayEventType,Z_Param_EventType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEventRecorded(EReplayEventType(Z_Param_EventType),Z_Param_Description);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnEventRecorded ***********************************

// ********** Begin Class USGReplayWidget Function OnLoadReplayButtonClicked ***********************
struct Z_Construct_UFunction_USGReplayWidget_OnLoadReplayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnLoadReplayButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnLoadReplayButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnLoadReplayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnLoadReplayButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnLoadReplayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnLoadReplayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnLoadReplayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadReplayButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnLoadReplayButtonClicked *************************

// ********** Begin Class USGReplayWidget Function OnNextCameraButtonClicked ***********************
struct Z_Construct_UFunction_USGReplayWidget_OnNextCameraButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnNextCameraButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnNextCameraButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnNextCameraButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnNextCameraButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnNextCameraButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnNextCameraButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnNextCameraButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextCameraButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnNextCameraButtonClicked *************************

// ********** Begin Class USGReplayWidget Function OnPausePlayButtonClicked ************************
struct Z_Construct_UFunction_USGReplayWidget_OnPausePlayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnPausePlayButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnPausePlayButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPausePlayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnPausePlayButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnPausePlayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnPausePlayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnPausePlayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPausePlayButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnPausePlayButtonClicked **************************

// ********** Begin Class USGReplayWidget Function OnPauseRecordButtonClicked **********************
struct Z_Construct_UFunction_USGReplayWidget_OnPauseRecordButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnPauseRecordButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnPauseRecordButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPauseRecordButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnPauseRecordButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnPauseRecordButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnPauseRecordButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnPauseRecordButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPauseRecordButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnPauseRecordButtonClicked ************************

// ********** Begin Class USGReplayWidget Function OnPlaybackSliderChanged *************************
struct Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics
{
	struct SGReplayWidget_eventOnPlaybackSliderChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Slider event handlers\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slider event handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnPlaybackSliderChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnPlaybackSliderChanged", Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::SGReplayWidget_eventOnPlaybackSliderChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::SGReplayWidget_eventOnPlaybackSliderChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnPlaybackSliderChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlaybackSliderChanged(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnPlaybackSliderChanged ***************************

// ********** Begin Class USGReplayWidget Function OnPlaybackStateChanged **************************
struct Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics
{
	struct SGReplayWidget_eventOnPlaybackStateChanged_Parms
	{
		bool bPlaying;
		float CurrentTime;
		float TotalDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_bPlaying_SetBit(void* Obj)
{
	((SGReplayWidget_eventOnPlaybackStateChanged_Parms*)Obj)->bPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayWidget_eventOnPlaybackStateChanged_Parms), &Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnPlaybackStateChanged_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnPlaybackStateChanged_Parms, TotalDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_bPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::NewProp_TotalDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnPlaybackStateChanged", Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::SGReplayWidget_eventOnPlaybackStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::SGReplayWidget_eventOnPlaybackStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnPlaybackStateChanged)
{
	P_GET_UBOOL(Z_Param_bPlaying);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlaybackStateChanged(Z_Param_bPlaying,Z_Param_CurrentTime,Z_Param_TotalDuration);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnPlaybackStateChanged ****************************

// ********** Begin Class USGReplayWidget Function OnPlayButtonClicked *****************************
struct Z_Construct_UFunction_USGReplayWidget_OnPlayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnPlayButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnPlayButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnPlayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnPlayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnPlayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnPlayButtonClicked *******************************

// ********** Begin Class USGReplayWidget Function OnRecordButtonClicked ***************************
struct Z_Construct_UFunction_USGReplayWidget_OnRecordButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Button event handlers\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Button event handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnRecordButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnRecordButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnRecordButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnRecordButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnRecordButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnRecordButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnRecordButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecordButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnRecordButtonClicked *****************************

// ********** Begin Class USGReplayWidget Function OnRecordingStateChanged *************************
struct Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics
{
	struct SGReplayWidget_eventOnRecordingStateChanged_Parms
	{
		bool bRecording;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replay manager event handlers\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replay manager event handlers" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bRecording_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecording;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::NewProp_bRecording_SetBit(void* Obj)
{
	((SGReplayWidget_eventOnRecordingStateChanged_Parms*)Obj)->bRecording = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::NewProp_bRecording = { "bRecording", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayWidget_eventOnRecordingStateChanged_Parms), &Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::NewProp_bRecording_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnRecordingStateChanged_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::NewProp_bRecording,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnRecordingStateChanged", Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::SGReplayWidget_eventOnRecordingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::SGReplayWidget_eventOnRecordingStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnRecordingStateChanged)
{
	P_GET_UBOOL(Z_Param_bRecording);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecordingStateChanged(Z_Param_bRecording,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnRecordingStateChanged ***************************

// ********** Begin Class USGReplayWidget Function OnRefreshListButtonClicked **********************
struct Z_Construct_UFunction_USGReplayWidget_OnRefreshListButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnRefreshListButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnRefreshListButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnRefreshListButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnRefreshListButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnRefreshListButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnRefreshListButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnRefreshListButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRefreshListButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnRefreshListButtonClicked ************************

// ********** Begin Class USGReplayWidget Function OnReplayListSelectionChanged ********************
struct Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics
{
	struct SGReplayWidget_eventOnReplayListSelectionChanged_Parms
	{
		UObject* SelectedItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List view event handlers\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List view event handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnReplayListSelectionChanged_Parms, SelectedItem), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::NewProp_SelectedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnReplayListSelectionChanged", Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::SGReplayWidget_eventOnReplayListSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::SGReplayWidget_eventOnReplayListSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnReplayListSelectionChanged)
{
	P_GET_OBJECT(UObject,Z_Param_SelectedItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReplayListSelectionChanged(Z_Param_SelectedItem);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnReplayListSelectionChanged **********************

// ********** Begin Class USGReplayWidget Function OnReplaySaved ***********************************
struct Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics
{
	struct SGReplayWidget_eventOnReplaySaved_Parms
	{
		bool bSuccess;
		FString ReplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SGReplayWidget_eventOnReplaySaved_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGReplayWidget_eventOnReplaySaved_Parms), &Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnReplaySaved_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::NewProp_ReplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnReplaySaved", Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::SGReplayWidget_eventOnReplaySaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::SGReplayWidget_eventOnReplaySaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnReplaySaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnReplaySaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnReplaySaved)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReplaySaved(Z_Param_bSuccess,Z_Param_ReplayName);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnReplaySaved *************************************

// ********** Begin Class USGReplayWidget Function OnSaveReplayButtonClicked ***********************
struct Z_Construct_UFunction_USGReplayWidget_OnSaveReplayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnSaveReplayButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnSaveReplayButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnSaveReplayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnSaveReplayButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnSaveReplayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnSaveReplayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnSaveReplayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveReplayButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnSaveReplayButtonClicked *************************

// ********** Begin Class USGReplayWidget Function OnSpeedSliderChanged ****************************
struct Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics
{
	struct SGReplayWidget_eventOnSpeedSliderChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventOnSpeedSliderChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnSpeedSliderChanged", Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::SGReplayWidget_eventOnSpeedSliderChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::SGReplayWidget_eventOnSpeedSliderChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnSpeedSliderChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSpeedSliderChanged(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnSpeedSliderChanged ******************************

// ********** Begin Class USGReplayWidget Function OnStopPlayButtonClicked *************************
struct Z_Construct_UFunction_USGReplayWidget_OnStopPlayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnStopPlayButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnStopPlayButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnStopPlayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnStopPlayButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnStopPlayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnStopPlayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnStopPlayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStopPlayButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnStopPlayButtonClicked ***************************

// ********** Begin Class USGReplayWidget Function OnStopRecordButtonClicked ***********************
struct Z_Construct_UFunction_USGReplayWidget_OnStopRecordButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_OnStopRecordButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "OnStopRecordButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_OnStopRecordButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_OnStopRecordButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_OnStopRecordButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_OnStopRecordButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execOnStopRecordButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStopRecordButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function OnStopRecordButtonClicked *************************

// ********** Begin Class USGReplayWidget Function PausePlayback ***********************************
struct Z_Construct_UFunction_USGReplayWidget_PausePlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_PausePlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "PausePlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_PausePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_PausePlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_PausePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_PausePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execPausePlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PausePlayback();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function PausePlayback *************************************

// ********** Begin Class USGReplayWidget Function PauseRecording **********************************
struct Z_Construct_UFunction_USGReplayWidget_PauseRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_PauseRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "PauseRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_PauseRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_PauseRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_PauseRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_PauseRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execPauseRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseRecording();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function PauseRecording ************************************

// ********** Begin Class USGReplayWidget Function RefreshReplayList *******************************
struct Z_Construct_UFunction_USGReplayWidget_RefreshReplayList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_RefreshReplayList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "RefreshReplayList", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_RefreshReplayList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_RefreshReplayList_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_RefreshReplayList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_RefreshReplayList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execRefreshReplayList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshReplayList();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function RefreshReplayList *********************************

// ********** Begin Class USGReplayWidget Function RefreshUI ***************************************
struct Z_Construct_UFunction_USGReplayWidget_RefreshUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update UI state\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update UI state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_RefreshUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "RefreshUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_RefreshUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_RefreshUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_RefreshUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_RefreshUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execRefreshUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshUI();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function RefreshUI *****************************************

// ********** Begin Class USGReplayWidget Function SaveCurrentReplay *******************************
struct Z_Construct_UFunction_USGReplayWidget_SaveCurrentReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_SaveCurrentReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "SaveCurrentReplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_SaveCurrentReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_SaveCurrentReplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_SaveCurrentReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_SaveCurrentReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execSaveCurrentReplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveCurrentReplay();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function SaveCurrentReplay *********************************

// ********** Begin Class USGReplayWidget Function SetCameraMode ***********************************
struct Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics
{
	struct SGReplayWidget_eventSetCameraMode_Parms
	{
		int32 ModeIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::NewProp_ModeIndex = { "ModeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayWidget_eventSetCameraMode_Parms, ModeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::NewProp_ModeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "SetCameraMode", Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::SGReplayWidget_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::SGReplayWidget_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayWidget_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execSetCameraMode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ModeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_ModeIndex);
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function SetCameraMode *************************************

// ********** Begin Class USGReplayWidget Function StartPlayback ***********************************
struct Z_Construct_UFunction_USGReplayWidget_StartPlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback controls\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback controls" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_StartPlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "StartPlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_StartPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_StartPlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_StartPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_StartPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execStartPlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPlayback();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function StartPlayback *************************************

// ********** Begin Class USGReplayWidget Function StartRecording **********************************
struct Z_Construct_UFunction_USGReplayWidget_StartRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recording controls\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recording controls" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_StartRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "StartRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_StartRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execStartRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function StartRecording ************************************

// ********** Begin Class USGReplayWidget Function StopPlayback ************************************
struct Z_Construct_UFunction_USGReplayWidget_StopPlayback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_StopPlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "StopPlayback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_StopPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_StopPlayback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_StopPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_StopPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execStopPlayback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlayback();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function StopPlayback **************************************

// ********** Begin Class USGReplayWidget Function StopRecording ***********************************
struct Z_Construct_UFunction_USGReplayWidget_StopRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_StopRecording_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "StopRecording", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_StopRecording_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecording();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function StopRecording *************************************

// ********** Begin Class USGReplayWidget Function TogglePlayPause *********************************
struct Z_Construct_UFunction_USGReplayWidget_TogglePlayPause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayWidget_TogglePlayPause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayWidget, nullptr, "TogglePlayPause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayWidget_TogglePlayPause_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayWidget_TogglePlayPause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayWidget_TogglePlayPause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayWidget_TogglePlayPause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayWidget::execTogglePlayPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePlayPause();
	P_NATIVE_END;
}
// ********** End Class USGReplayWidget Function TogglePlayPause ***********************************

// ********** Begin Class USGReplayWidget **********************************************************
void USGReplayWidget::StaticRegisterNativesUSGReplayWidget()
{
	UClass* Class = USGReplayWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteSelectedReplay", &USGReplayWidget::execDeleteSelectedReplay },
		{ "InitializeReplayWidget", &USGReplayWidget::execInitializeReplayWidget },
		{ "LoadSelectedReplay", &USGReplayWidget::execLoadSelectedReplay },
		{ "NextCamera", &USGReplayWidget::execNextCamera },
		{ "OnCameraModeChanged", &USGReplayWidget::execOnCameraModeChanged },
		{ "OnDeleteReplayButtonClicked", &USGReplayWidget::execOnDeleteReplayButtonClicked },
		{ "OnEventRecorded", &USGReplayWidget::execOnEventRecorded },
		{ "OnLoadReplayButtonClicked", &USGReplayWidget::execOnLoadReplayButtonClicked },
		{ "OnNextCameraButtonClicked", &USGReplayWidget::execOnNextCameraButtonClicked },
		{ "OnPausePlayButtonClicked", &USGReplayWidget::execOnPausePlayButtonClicked },
		{ "OnPauseRecordButtonClicked", &USGReplayWidget::execOnPauseRecordButtonClicked },
		{ "OnPlaybackSliderChanged", &USGReplayWidget::execOnPlaybackSliderChanged },
		{ "OnPlaybackStateChanged", &USGReplayWidget::execOnPlaybackStateChanged },
		{ "OnPlayButtonClicked", &USGReplayWidget::execOnPlayButtonClicked },
		{ "OnRecordButtonClicked", &USGReplayWidget::execOnRecordButtonClicked },
		{ "OnRecordingStateChanged", &USGReplayWidget::execOnRecordingStateChanged },
		{ "OnRefreshListButtonClicked", &USGReplayWidget::execOnRefreshListButtonClicked },
		{ "OnReplayListSelectionChanged", &USGReplayWidget::execOnReplayListSelectionChanged },
		{ "OnReplaySaved", &USGReplayWidget::execOnReplaySaved },
		{ "OnSaveReplayButtonClicked", &USGReplayWidget::execOnSaveReplayButtonClicked },
		{ "OnSpeedSliderChanged", &USGReplayWidget::execOnSpeedSliderChanged },
		{ "OnStopPlayButtonClicked", &USGReplayWidget::execOnStopPlayButtonClicked },
		{ "OnStopRecordButtonClicked", &USGReplayWidget::execOnStopRecordButtonClicked },
		{ "PausePlayback", &USGReplayWidget::execPausePlayback },
		{ "PauseRecording", &USGReplayWidget::execPauseRecording },
		{ "RefreshReplayList", &USGReplayWidget::execRefreshReplayList },
		{ "RefreshUI", &USGReplayWidget::execRefreshUI },
		{ "SaveCurrentReplay", &USGReplayWidget::execSaveCurrentReplay },
		{ "SetCameraMode", &USGReplayWidget::execSetCameraMode },
		{ "StartPlayback", &USGReplayWidget::execStartPlayback },
		{ "StartRecording", &USGReplayWidget::execStartRecording },
		{ "StopPlayback", &USGReplayWidget::execStopPlayback },
		{ "StopRecording", &USGReplayWidget::execStopRecording },
		{ "TogglePlayPause", &USGReplayWidget::execTogglePlayPause },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGReplayWidget;
UClass* USGReplayWidget::GetPrivateStaticClass()
{
	using TClass = USGReplayWidget;
	if (!Z_Registration_Info_UClass_USGReplayWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGReplayWidget"),
			Z_Registration_Info_UClass_USGReplayWidget.InnerSingleton,
			StaticRegisterNativesUSGReplayWidget,
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
	return Z_Registration_Info_UClass_USGReplayWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USGReplayWidget_NoRegister()
{
	return USGReplayWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGReplayWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Replay/SGReplayWidget.h" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReplaySelected_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recording Panel\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recording Panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopRecordButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseRecordButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingStatusText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingTimeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback Panel\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback Panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopPlayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PausePlayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackTimeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeedText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackProgress_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextCameraButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera Controls\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Controls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayListView_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replay List\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replay List" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadReplayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteReplayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveReplayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefreshListButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayInfoText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Info Panel\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Info Panel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventListText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedReplayName_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReplaySelected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopRecordButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseRecordButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordingStatusText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordingTimeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopPlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PausePlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaybackSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedSlider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaybackTimeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaybackSpeedText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaybackProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextCameraButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeCombo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplayListView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadReplayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteReplayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveReplayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefreshListButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplayInfoText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventListText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplayManager;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedReplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGReplayWidget_DeleteSelectedReplay, "DeleteSelectedReplay" }, // 2747130995
		{ &Z_Construct_UFunction_USGReplayWidget_InitializeReplayWidget, "InitializeReplayWidget" }, // 2009101560
		{ &Z_Construct_UFunction_USGReplayWidget_LoadSelectedReplay, "LoadSelectedReplay" }, // 3380841184
		{ &Z_Construct_UFunction_USGReplayWidget_NextCamera, "NextCamera" }, // 3144832625
		{ &Z_Construct_UFunction_USGReplayWidget_OnCameraModeChanged, "OnCameraModeChanged" }, // 1779042551
		{ &Z_Construct_UFunction_USGReplayWidget_OnDeleteReplayButtonClicked, "OnDeleteReplayButtonClicked" }, // 2312749960
		{ &Z_Construct_UFunction_USGReplayWidget_OnEventRecorded, "OnEventRecorded" }, // 840309071
		{ &Z_Construct_UFunction_USGReplayWidget_OnLoadReplayButtonClicked, "OnLoadReplayButtonClicked" }, // 1165095851
		{ &Z_Construct_UFunction_USGReplayWidget_OnNextCameraButtonClicked, "OnNextCameraButtonClicked" }, // 484329764
		{ &Z_Construct_UFunction_USGReplayWidget_OnPausePlayButtonClicked, "OnPausePlayButtonClicked" }, // 4143637572
		{ &Z_Construct_UFunction_USGReplayWidget_OnPauseRecordButtonClicked, "OnPauseRecordButtonClicked" }, // 970938432
		{ &Z_Construct_UFunction_USGReplayWidget_OnPlaybackSliderChanged, "OnPlaybackSliderChanged" }, // 1946482529
		{ &Z_Construct_UFunction_USGReplayWidget_OnPlaybackStateChanged, "OnPlaybackStateChanged" }, // 256846411
		{ &Z_Construct_UFunction_USGReplayWidget_OnPlayButtonClicked, "OnPlayButtonClicked" }, // 3161961649
		{ &Z_Construct_UFunction_USGReplayWidget_OnRecordButtonClicked, "OnRecordButtonClicked" }, // 3186612842
		{ &Z_Construct_UFunction_USGReplayWidget_OnRecordingStateChanged, "OnRecordingStateChanged" }, // 3872955953
		{ &Z_Construct_UFunction_USGReplayWidget_OnRefreshListButtonClicked, "OnRefreshListButtonClicked" }, // 1724525326
		{ &Z_Construct_UFunction_USGReplayWidget_OnReplayListSelectionChanged, "OnReplayListSelectionChanged" }, // 2216784024
		{ &Z_Construct_UFunction_USGReplayWidget_OnReplaySaved, "OnReplaySaved" }, // 3946466869
		{ &Z_Construct_UFunction_USGReplayWidget_OnSaveReplayButtonClicked, "OnSaveReplayButtonClicked" }, // 2379112377
		{ &Z_Construct_UFunction_USGReplayWidget_OnSpeedSliderChanged, "OnSpeedSliderChanged" }, // 2785894389
		{ &Z_Construct_UFunction_USGReplayWidget_OnStopPlayButtonClicked, "OnStopPlayButtonClicked" }, // 1059817972
		{ &Z_Construct_UFunction_USGReplayWidget_OnStopRecordButtonClicked, "OnStopRecordButtonClicked" }, // 1193460043
		{ &Z_Construct_UFunction_USGReplayWidget_PausePlayback, "PausePlayback" }, // 316083248
		{ &Z_Construct_UFunction_USGReplayWidget_PauseRecording, "PauseRecording" }, // 755394688
		{ &Z_Construct_UFunction_USGReplayWidget_RefreshReplayList, "RefreshReplayList" }, // 1744457607
		{ &Z_Construct_UFunction_USGReplayWidget_RefreshUI, "RefreshUI" }, // 3780486462
		{ &Z_Construct_UFunction_USGReplayWidget_SaveCurrentReplay, "SaveCurrentReplay" }, // 359225135
		{ &Z_Construct_UFunction_USGReplayWidget_SetCameraMode, "SetCameraMode" }, // 434671065
		{ &Z_Construct_UFunction_USGReplayWidget_StartPlayback, "StartPlayback" }, // 4211695162
		{ &Z_Construct_UFunction_USGReplayWidget_StartRecording, "StartRecording" }, // 2952835344
		{ &Z_Construct_UFunction_USGReplayWidget_StopPlayback, "StopPlayback" }, // 3991689255
		{ &Z_Construct_UFunction_USGReplayWidget_StopRecording, "StopRecording" }, // 1281349232
		{ &Z_Construct_UFunction_USGReplayWidget_TogglePlayPause, "TogglePlayPause" }, // 2118083717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGReplayWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_OnReplaySelected = { "OnReplaySelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, OnReplaySelected), Z_Construct_UDelegateFunction_SocialGolf_OnReplaySelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReplaySelected_MetaData), NewProp_OnReplaySelected_MetaData) }; // 3771366774
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RecordButton = { "RecordButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, RecordButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordButton_MetaData), NewProp_RecordButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_StopRecordButton = { "StopRecordButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, StopRecordButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopRecordButton_MetaData), NewProp_StopRecordButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PauseRecordButton = { "PauseRecordButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, PauseRecordButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseRecordButton_MetaData), NewProp_PauseRecordButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RecordingStatusText = { "RecordingStatusText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, RecordingStatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingStatusText_MetaData), NewProp_RecordingStatusText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RecordingTimeText = { "RecordingTimeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, RecordingTimeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingTimeText_MetaData), NewProp_RecordingTimeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlayButton = { "PlayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, PlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayButton_MetaData), NewProp_PlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_StopPlayButton = { "StopPlayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, StopPlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopPlayButton_MetaData), NewProp_StopPlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PausePlayButton = { "PausePlayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, PausePlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PausePlayButton_MetaData), NewProp_PausePlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackSlider = { "PlaybackSlider", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, PlaybackSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSlider_MetaData), NewProp_PlaybackSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_SpeedSlider = { "SpeedSlider", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, SpeedSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedSlider_MetaData), NewProp_SpeedSlider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackTimeText = { "PlaybackTimeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, PlaybackTimeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackTimeText_MetaData), NewProp_PlaybackTimeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackSpeedText = { "PlaybackSpeedText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, PlaybackSpeedText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSpeedText_MetaData), NewProp_PlaybackSpeedText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackProgress = { "PlaybackProgress", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, PlaybackProgress), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackProgress_MetaData), NewProp_PlaybackProgress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_NextCameraButton = { "NextCameraButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, NextCameraButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextCameraButton_MetaData), NewProp_NextCameraButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_CameraModeCombo = { "CameraModeCombo", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, CameraModeCombo), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeCombo_MetaData), NewProp_CameraModeCombo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_CameraModeText = { "CameraModeText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, CameraModeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeText_MetaData), NewProp_CameraModeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_ReplayListView = { "ReplayListView", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, ReplayListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayListView_MetaData), NewProp_ReplayListView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_LoadReplayButton = { "LoadReplayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, LoadReplayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadReplayButton_MetaData), NewProp_LoadReplayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_DeleteReplayButton = { "DeleteReplayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, DeleteReplayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteReplayButton_MetaData), NewProp_DeleteReplayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_SaveReplayButton = { "SaveReplayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, SaveReplayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveReplayButton_MetaData), NewProp_SaveReplayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RefreshListButton = { "RefreshListButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, RefreshListButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefreshListButton_MetaData), NewProp_RefreshListButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_ReplayInfoText = { "ReplayInfoText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, ReplayInfoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayInfoText_MetaData), NewProp_ReplayInfoText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_EventListText = { "EventListText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, EventListText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventListText_MetaData), NewProp_EventListText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_ReplayManager = { "ReplayManager", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, ReplayManager), Z_Construct_UClass_USGReplayManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayManager_MetaData), NewProp_ReplayManager_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USGReplayWidget_Statics::NewProp_SelectedReplayName = { "SelectedReplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayWidget, SelectedReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedReplayName_MetaData), NewProp_SelectedReplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGReplayWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_OnReplaySelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RecordButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_StopRecordButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PauseRecordButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RecordingStatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RecordingTimeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_StopPlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PausePlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_SpeedSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackTimeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackSpeedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_PlaybackProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_NextCameraButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_CameraModeCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_CameraModeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_ReplayListView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_LoadReplayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_DeleteReplayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_SaveReplayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_RefreshListButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_ReplayInfoText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_EventListText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_ReplayManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayWidget_Statics::NewProp_SelectedReplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGReplayWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGReplayWidget_Statics::ClassParams = {
	&USGReplayWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGReplayWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USGReplayWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGReplayWidget()
{
	if (!Z_Registration_Info_UClass_USGReplayWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGReplayWidget.OuterSingleton, Z_Construct_UClass_USGReplayWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGReplayWidget.OuterSingleton;
}
USGReplayWidget::USGReplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGReplayWidget);
USGReplayWidget::~USGReplayWidget() {}
// ********** End Class USGReplayWidget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGReplayWidget, USGReplayWidget::StaticClass, TEXT("USGReplayWidget"), &Z_Registration_Info_UClass_USGReplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGReplayWidget), 2807336999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h__Script_SocialGolf_1031453105(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
