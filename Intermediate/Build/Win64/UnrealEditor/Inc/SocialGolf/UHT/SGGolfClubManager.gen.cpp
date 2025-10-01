// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGGolfClubManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGGolfClubManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubData_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubManager();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubManager_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EGolfClubType();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnClubChanged ********************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnClubChanged_Parms
	{
		EGolfClubType PreviousClub;
		EGolfClubType NewClub;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousClub_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousClub;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewClub_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewClub;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_PreviousClub_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_PreviousClub = { "PreviousClub", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnClubChanged_Parms, PreviousClub), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_NewClub_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_NewClub = { "NewClub", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnClubChanged_Parms, NewClub), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_PreviousClub_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_PreviousClub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_NewClub_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::NewProp_NewClub,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnClubChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnClubChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnClubChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClubChanged_DelegateWrapper(const FMulticastScriptDelegate& OnClubChanged, EGolfClubType PreviousClub, EGolfClubType NewClub)
{
	struct _Script_SocialGolf_eventOnClubChanged_Parms
	{
		EGolfClubType PreviousClub;
		EGolfClubType NewClub;
	};
	_Script_SocialGolf_eventOnClubChanged_Parms Parms;
	Parms.PreviousClub=PreviousClub;
	Parms.NewClub=NewClub;
	OnClubChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnClubChanged **********************************************************

// ********** Begin Class USGGolfClubManager Function GetAccuracy **********************************
struct Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics
{
	struct SGGolfClubManager_eventGetAccuracy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetAccuracy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetAccuracy", Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::SGGolfClubManager_eventGetAccuracy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::SGGolfClubManager_eventGetAccuracy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetAccuracy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetAccuracy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetAccuracy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAccuracy();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetAccuracy ************************************

// ********** Begin Class USGGolfClubManager Function GetAvailableClubs ****************************
struct Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics
{
	struct SGGolfClubManager_eventGetAvailableClubs_Parms
	{
		TArray<EGolfClubType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetAvailableClubs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetAvailableClubs", Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::SGGolfClubManager_eventGetAvailableClubs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::SGGolfClubManager_eventGetAvailableClubs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetAvailableClubs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EGolfClubType>*)Z_Param__Result=P_THIS->GetAvailableClubs();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetAvailableClubs ******************************

// ********** Begin Class USGGolfClubManager Function GetClubData **********************************
struct Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics
{
	struct SGGolfClubManager_eventGetClubData_Parms
	{
		EGolfClubType ClubType;
		USGGolfClubData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClubType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClubType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::NewProp_ClubType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::NewProp_ClubType = { "ClubType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetClubData_Parms, ClubType), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetClubData_Parms, ReturnValue), Z_Construct_UClass_USGGolfClubData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::NewProp_ClubType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::NewProp_ClubType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetClubData", Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::SGGolfClubManager_eventGetClubData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::SGGolfClubManager_eventGetClubData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetClubData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetClubData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetClubData)
{
	P_GET_ENUM(EGolfClubType,Z_Param_ClubType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGGolfClubData**)Z_Param__Result=P_THIS->GetClubData(EGolfClubType(Z_Param_ClubType));
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetClubData ************************************

// ********** Begin Class USGGolfClubManager Function GetCurrentClubData ***************************
struct Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics
{
	struct SGGolfClubManager_eventGetCurrentClubData_Parms
	{
		USGGolfClubData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetCurrentClubData_Parms, ReturnValue), Z_Construct_UClass_USGGolfClubData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetCurrentClubData", Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::SGGolfClubManager_eventGetCurrentClubData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::SGGolfClubManager_eventGetCurrentClubData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetCurrentClubData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGGolfClubData**)Z_Param__Result=P_THIS->GetCurrentClubData();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetCurrentClubData *****************************

// ********** Begin Class USGGolfClubManager Function GetCurrentClubType ***************************
struct Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics
{
	struct SGGolfClubManager_eventGetCurrentClubType_Parms
	{
		EGolfClubType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetCurrentClubType_Parms, ReturnValue), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetCurrentClubType", Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::SGGolfClubManager_eventGetCurrentClubType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::SGGolfClubManager_eventGetCurrentClubType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetCurrentClubType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGolfClubType*)Z_Param__Result=P_THIS->GetCurrentClubType();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetCurrentClubType *****************************

// ********** Begin Class USGGolfClubManager Function GetLaunchAngle *******************************
struct Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics
{
	struct SGGolfClubManager_eventGetLaunchAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetLaunchAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetLaunchAngle", Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::SGGolfClubManager_eventGetLaunchAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::SGGolfClubManager_eventGetLaunchAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetLaunchAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLaunchAngle();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetLaunchAngle *********************************

// ********** Begin Class USGGolfClubManager Function GetMaxDistance *******************************
struct Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics
{
	struct SGGolfClubManager_eventGetMaxDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetMaxDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetMaxDistance", Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::SGGolfClubManager_eventGetMaxDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::SGGolfClubManager_eventGetMaxDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetMaxDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxDistance();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetMaxDistance *********************************

// ********** Begin Class USGGolfClubManager Function GetPowerMultiplier ***************************
struct Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics
{
	struct SGGolfClubManager_eventGetPowerMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Club stats for ball hitting\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Club stats for ball hitting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetPowerMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetPowerMultiplier", Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::SGGolfClubManager_eventGetPowerMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::SGGolfClubManager_eventGetPowerMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetPowerMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPowerMultiplier();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetPowerMultiplier *****************************

// ********** Begin Class USGGolfClubManager Function GetSpinEffect ********************************
struct Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics
{
	struct SGGolfClubManager_eventGetSpinEffect_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventGetSpinEffect_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "GetSpinEffect", Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::SGGolfClubManager_eventGetSpinEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::SGGolfClubManager_eventGetSpinEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execGetSpinEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpinEffect();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function GetSpinEffect **********************************

// ********** Begin Class USGGolfClubManager Function NextClub *************************************
struct Z_Construct_UFunction_USGGolfClubManager_NextClub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_NextClub_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "NextClub", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_NextClub_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_NextClub_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGGolfClubManager_NextClub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_NextClub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execNextClub)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextClub();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function NextClub ***************************************

// ********** Begin Class USGGolfClubManager Function PreviousClub *********************************
struct Z_Construct_UFunction_USGGolfClubManager_PreviousClub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_PreviousClub_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "PreviousClub", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_PreviousClub_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_PreviousClub_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGGolfClubManager_PreviousClub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_PreviousClub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execPreviousClub)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviousClub();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function PreviousClub ***********************************

// ********** Begin Class USGGolfClubManager Function SelectClub ***********************************
struct Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics
{
	struct SGGolfClubManager_eventSelectClub_Parms
	{
		EGolfClubType ClubType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Club" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Club selection\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Club selection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClubType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClubType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::NewProp_ClubType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::NewProp_ClubType = { "ClubType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubManager_eventSelectClub_Parms, ClubType), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::NewProp_ClubType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::NewProp_ClubType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubManager, nullptr, "SelectClub", Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::SGGolfClubManager_eventSelectClub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::SGGolfClubManager_eventSelectClub_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubManager_SelectClub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubManager_SelectClub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubManager::execSelectClub)
{
	P_GET_ENUM(EGolfClubType,Z_Param_ClubType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectClub(EGolfClubType(Z_Param_ClubType));
	P_NATIVE_END;
}
// ********** End Class USGGolfClubManager Function SelectClub *************************************

// ********** Begin Class USGGolfClubManager *******************************************************
void USGGolfClubManager::StaticRegisterNativesUSGGolfClubManager()
{
	UClass* Class = USGGolfClubManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAccuracy", &USGGolfClubManager::execGetAccuracy },
		{ "GetAvailableClubs", &USGGolfClubManager::execGetAvailableClubs },
		{ "GetClubData", &USGGolfClubManager::execGetClubData },
		{ "GetCurrentClubData", &USGGolfClubManager::execGetCurrentClubData },
		{ "GetCurrentClubType", &USGGolfClubManager::execGetCurrentClubType },
		{ "GetLaunchAngle", &USGGolfClubManager::execGetLaunchAngle },
		{ "GetMaxDistance", &USGGolfClubManager::execGetMaxDistance },
		{ "GetPowerMultiplier", &USGGolfClubManager::execGetPowerMultiplier },
		{ "GetSpinEffect", &USGGolfClubManager::execGetSpinEffect },
		{ "NextClub", &USGGolfClubManager::execNextClub },
		{ "PreviousClub", &USGGolfClubManager::execPreviousClub },
		{ "SelectClub", &USGGolfClubManager::execSelectClub },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGGolfClubManager;
UClass* USGGolfClubManager::GetPrivateStaticClass()
{
	using TClass = USGGolfClubManager;
	if (!Z_Registration_Info_UClass_USGGolfClubManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGGolfClubManager"),
			Z_Registration_Info_UClass_USGGolfClubManager.InnerSingleton,
			StaticRegisterNativesUSGGolfClubManager,
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
	return Z_Registration_Info_UClass_USGGolfClubManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USGGolfClubManager_NoRegister()
{
	return USGGolfClubManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGGolfClubManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Golf/SGGolfClubManager.h" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClubChanged_MetaData[] = {
		{ "Category", "Golf Club" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubDatabase_MetaData[] = {
		{ "Category", "Golf Club Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Available clubs\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Available clubs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentClubType_MetaData[] = {
		{ "Category", "Golf Club State" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClub_MetaData[] = {
		{ "Category", "Golf Club Setup" },
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubOrder_MetaData[] = {
		{ "Category", "Golf Club Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Club order for cycling\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClubManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Club order for cycling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClubChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClubDatabase_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClubDatabase_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClubDatabase_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClubDatabase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentClubType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentClubType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultClub_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultClub;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClubOrder_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClubOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClubOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGGolfClubManager_GetAccuracy, "GetAccuracy" }, // 134333069
		{ &Z_Construct_UFunction_USGGolfClubManager_GetAvailableClubs, "GetAvailableClubs" }, // 3462952328
		{ &Z_Construct_UFunction_USGGolfClubManager_GetClubData, "GetClubData" }, // 1950609125
		{ &Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubData, "GetCurrentClubData" }, // 3221367919
		{ &Z_Construct_UFunction_USGGolfClubManager_GetCurrentClubType, "GetCurrentClubType" }, // 3311258030
		{ &Z_Construct_UFunction_USGGolfClubManager_GetLaunchAngle, "GetLaunchAngle" }, // 2154838497
		{ &Z_Construct_UFunction_USGGolfClubManager_GetMaxDistance, "GetMaxDistance" }, // 3904754733
		{ &Z_Construct_UFunction_USGGolfClubManager_GetPowerMultiplier, "GetPowerMultiplier" }, // 3571607716
		{ &Z_Construct_UFunction_USGGolfClubManager_GetSpinEffect, "GetSpinEffect" }, // 163432276
		{ &Z_Construct_UFunction_USGGolfClubManager_NextClub, "NextClub" }, // 3938985156
		{ &Z_Construct_UFunction_USGGolfClubManager_PreviousClub, "PreviousClub" }, // 3873546050
		{ &Z_Construct_UFunction_USGGolfClubManager_SelectClub, "SelectClub" }, // 1459814601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGGolfClubManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_OnClubChanged = { "OnClubChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubManager, OnClubChanged), Z_Construct_UDelegateFunction_SocialGolf_OnClubChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClubChanged_MetaData), NewProp_OnClubChanged_MetaData) }; // 2761504614
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase_ValueProp = { "ClubDatabase", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USGGolfClubData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase_Key_KeyProp = { "ClubDatabase_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase = { "ClubDatabase", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubManager, ClubDatabase), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubDatabase_MetaData), NewProp_ClubDatabase_MetaData) }; // 1407128361
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_CurrentClubType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_CurrentClubType = { "CurrentClubType", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubManager, CurrentClubType), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentClubType_MetaData), NewProp_CurrentClubType_MetaData) }; // 1407128361
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_DefaultClub_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_DefaultClub = { "DefaultClub", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubManager, DefaultClub), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultClub_MetaData), NewProp_DefaultClub_MetaData) }; // 1407128361
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubOrder_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubOrder_Inner = { "ClubOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(0, nullptr) }; // 1407128361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubOrder = { "ClubOrder", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubManager, ClubOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubOrder_MetaData), NewProp_ClubOrder_MetaData) }; // 1407128361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGGolfClubManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_OnClubChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_CurrentClubType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_CurrentClubType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_DefaultClub_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_DefaultClub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubOrder_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubManager_Statics::NewProp_ClubOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGGolfClubManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGGolfClubManager_Statics::ClassParams = {
	&USGGolfClubManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGGolfClubManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USGGolfClubManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGGolfClubManager()
{
	if (!Z_Registration_Info_UClass_USGGolfClubManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGGolfClubManager.OuterSingleton, Z_Construct_UClass_USGGolfClubManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGGolfClubManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGGolfClubManager);
USGGolfClubManager::~USGGolfClubManager() {}
// ********** End Class USGGolfClubManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClubManager_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGGolfClubManager, USGGolfClubManager::StaticClass, TEXT("USGGolfClubManager"), &Z_Registration_Info_UClass_USGGolfClubManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGGolfClubManager), 1702120072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClubManager_h__Script_SocialGolf_67278387(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClubManager_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClubManager_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
