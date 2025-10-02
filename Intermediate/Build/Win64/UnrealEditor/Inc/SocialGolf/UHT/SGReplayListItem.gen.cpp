// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGReplayListItem.h"
#include "SGReplayTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGReplayListItem() {}

// ********** Begin Cross Module References ********************************************************
SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayListItem();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayListItem_NoRegister();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGReplayData();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnReplayItemSelected *************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnReplayItemSelected_Parms
	{
		FString ReplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplayItemSelected_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::NewProp_ReplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnReplayItemSelected__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayItemSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayItemSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplayItemSelected_DelegateWrapper(const FMulticastScriptDelegate& OnReplayItemSelected, const FString& ReplayName)
{
	struct _Script_SocialGolf_eventOnReplayItemSelected_Parms
	{
		FString ReplayName;
	};
	_Script_SocialGolf_eventOnReplayItemSelected_Parms Parms;
	Parms.ReplayName=ReplayName;
	OnReplayItemSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReplayItemSelected ***************************************************

// ********** Begin Delegate FOnReplayItemDelete ***************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnReplayItemDelete_Parms
	{
		FString ReplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnReplayItemDelete_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::NewProp_ReplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnReplayItemDelete__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayItemDelete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::_Script_SocialGolf_eventOnReplayItemDelete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReplayItemDelete_DelegateWrapper(const FMulticastScriptDelegate& OnReplayItemDelete, const FString& ReplayName)
{
	struct _Script_SocialGolf_eventOnReplayItemDelete_Parms
	{
		FString ReplayName;
	};
	_Script_SocialGolf_eventOnReplayItemDelete_Parms Parms;
	Parms.ReplayName=ReplayName;
	OnReplayItemDelete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReplayItemDelete *****************************************************

// ********** Begin Class USGReplayListItem Function GetReplayName *********************************
struct Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics
{
	struct SGReplayListItem_eventGetReplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayListItem_eventGetReplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayListItem, nullptr, "GetReplayName", Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::SGReplayListItem_eventGetReplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::SGReplayListItem_eventGetReplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayListItem_GetReplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayListItem_GetReplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayListItem::execGetReplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetReplayName();
	P_NATIVE_END;
}
// ********** End Class USGReplayListItem Function GetReplayName ***********************************

// ********** Begin Class USGReplayListItem Function OnDeleteButtonClicked *************************
struct Z_Construct_UFunction_USGReplayListItem_OnDeleteButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayListItem_OnDeleteButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayListItem, nullptr, "OnDeleteButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_OnDeleteButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayListItem_OnDeleteButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayListItem_OnDeleteButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayListItem_OnDeleteButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayListItem::execOnDeleteButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeleteButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayListItem Function OnDeleteButtonClicked ***************************

// ********** Begin Class USGReplayListItem Function OnSelectButtonClicked *************************
struct Z_Construct_UFunction_USGReplayListItem_OnSelectButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayListItem_OnSelectButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayListItem, nullptr, "OnSelectButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_OnSelectButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayListItem_OnSelectButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGReplayListItem_OnSelectButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayListItem_OnSelectButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayListItem::execOnSelectButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectButtonClicked();
	P_NATIVE_END;
}
// ********** End Class USGReplayListItem Function OnSelectButtonClicked ***************************

// ********** Begin Class USGReplayListItem Function SetReplayData *********************************
struct Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics
{
	struct SGReplayListItem_eventSetReplayData_Parms
	{
		FString InReplayName;
		FSGReplayData InReplayData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InReplayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InReplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InReplayData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::NewProp_InReplayName = { "InReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayListItem_eventSetReplayData_Parms, InReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReplayName_MetaData), NewProp_InReplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::NewProp_InReplayData = { "InReplayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGReplayListItem_eventSetReplayData_Parms, InReplayData), Z_Construct_UScriptStruct_FSGReplayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InReplayData_MetaData), NewProp_InReplayData_MetaData) }; // 2410206830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::NewProp_InReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::NewProp_InReplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGReplayListItem, nullptr, "SetReplayData", Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::SGReplayListItem_eventSetReplayData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::SGReplayListItem_eventSetReplayData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGReplayListItem_SetReplayData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGReplayListItem_SetReplayData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGReplayListItem::execSetReplayData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InReplayName);
	P_GET_STRUCT_REF(FSGReplayData,Z_Param_Out_InReplayData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReplayData(Z_Param_InReplayName,Z_Param_Out_InReplayData);
	P_NATIVE_END;
}
// ********** End Class USGReplayListItem Function SetReplayData ***********************************

// ********** Begin Class USGReplayListItem ********************************************************
void USGReplayListItem::StaticRegisterNativesUSGReplayListItem()
{
	UClass* Class = USGReplayListItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetReplayName", &USGReplayListItem::execGetReplayName },
		{ "OnDeleteButtonClicked", &USGReplayListItem::execOnDeleteButtonClicked },
		{ "OnSelectButtonClicked", &USGReplayListItem::execOnSelectButtonClicked },
		{ "SetReplayData", &USGReplayListItem::execSetReplayData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGReplayListItem;
UClass* USGReplayListItem::GetPrivateStaticClass()
{
	using TClass = USGReplayListItem;
	if (!Z_Registration_Info_UClass_USGReplayListItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGReplayListItem"),
			Z_Registration_Info_UClass_USGReplayListItem.InnerSingleton,
			StaticRegisterNativesUSGReplayListItem,
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
	return Z_Registration_Info_UClass_USGReplayListItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USGReplayListItem_NoRegister()
{
	return USGReplayListItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGReplayListItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Replay/SGReplayListItem.h" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemSelected_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDelete_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CourseText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeleteButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayData_MetaData[] = {
		{ "ModuleRelativePath", "Replay/SGReplayListItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDelete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplayNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DateText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DurationText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CourseText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplayData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGReplayListItem_GetReplayName, "GetReplayName" }, // 4163676496
		{ &Z_Construct_UFunction_USGReplayListItem_OnDeleteButtonClicked, "OnDeleteButtonClicked" }, // 495103558
		{ &Z_Construct_UFunction_USGReplayListItem_OnSelectButtonClicked, "OnSelectButtonClicked" }, // 153685265
		{ &Z_Construct_UFunction_USGReplayListItem_SetReplayData, "SetReplayData" }, // 1020611699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGReplayListItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_OnItemSelected = { "OnItemSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, OnItemSelected), Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemSelected_MetaData), NewProp_OnItemSelected_MetaData) }; // 2236891490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_OnItemDelete = { "OnItemDelete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, OnItemDelete), Z_Construct_UDelegateFunction_SocialGolf_OnReplayItemDelete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemDelete_MetaData), NewProp_OnItemDelete_MetaData) }; // 2904839696
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ReplayNameText = { "ReplayNameText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, ReplayNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayNameText_MetaData), NewProp_ReplayNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, PlayerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameText_MetaData), NewProp_PlayerNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_DateText = { "DateText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, DateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateText_MetaData), NewProp_DateText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_DurationText = { "DurationText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, DurationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationText_MetaData), NewProp_DurationText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText_MetaData), NewProp_ScoreText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_CourseText = { "CourseText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, CourseText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CourseText_MetaData), NewProp_CourseText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_SelectButton = { "SelectButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, SelectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectButton_MetaData), NewProp_SelectButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_DeleteButton = { "DeleteButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, DeleteButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeleteButton_MetaData), NewProp_DeleteButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, ThumbnailImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailImage_MetaData), NewProp_ThumbnailImage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ReplayData = { "ReplayData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGReplayListItem, ReplayData), Z_Construct_UScriptStruct_FSGReplayData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayData_MetaData), NewProp_ReplayData_MetaData) }; // 2410206830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGReplayListItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_OnItemSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_OnItemDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ReplayNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_PlayerNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_DateText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_DurationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ScoreText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_CourseText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_SelectButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_DeleteButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ThumbnailImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGReplayListItem_Statics::NewProp_ReplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayListItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGReplayListItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayListItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGReplayListItem_Statics::ClassParams = {
	&USGReplayListItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGReplayListItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayListItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGReplayListItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USGReplayListItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGReplayListItem()
{
	if (!Z_Registration_Info_UClass_USGReplayListItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGReplayListItem.OuterSingleton, Z_Construct_UClass_USGReplayListItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGReplayListItem.OuterSingleton;
}
USGReplayListItem::USGReplayListItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGReplayListItem);
USGReplayListItem::~USGReplayListItem() {}
// ********** End Class USGReplayListItem **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGReplayListItem, USGReplayListItem::StaticClass, TEXT("USGReplayListItem"), &Z_Registration_Info_UClass_USGReplayListItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGReplayListItem), 624928695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h__Script_SocialGolf_3680530663(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
