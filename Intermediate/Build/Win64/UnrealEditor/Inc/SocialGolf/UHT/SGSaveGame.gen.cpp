// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSaveGame.h"
#include "SGSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGSaveGame() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveGame();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveGame_NoRegister();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGSaveGameData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGSaveGame Function GetFormattedTimestamp *******************************
struct Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics
{
	struct SGSaveGame_eventGetFormattedTimestamp_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveGame_eventGetFormattedTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveGame, nullptr, "GetFormattedTimestamp", Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::SGSaveGame_eventGetFormattedTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::SGSaveGame_eventGetFormattedTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveGame::execGetFormattedTimestamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFormattedTimestamp();
	P_NATIVE_END;
}
// ********** End Class USGSaveGame Function GetFormattedTimestamp *********************************

// ********** Begin Class USGSaveGame Function InitializeDefaults **********************************
struct Z_Construct_UFunction_USGSaveGame_InitializeDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveGame_InitializeDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveGame, nullptr, "InitializeDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_InitializeDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveGame_InitializeDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGSaveGame_InitializeDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveGame_InitializeDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveGame::execInitializeDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDefaults();
	P_NATIVE_END;
}
// ********** End Class USGSaveGame Function InitializeDefaults ************************************

// ********** Begin Class USGSaveGame Function IsValid *********************************************
struct Z_Construct_UFunction_USGSaveGame_IsValid_Statics
{
	struct SGSaveGame_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGSaveGame_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSaveGame_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGSaveGame_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSaveGame_eventIsValid_Parms), &Z_Construct_UFunction_USGSaveGame_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveGame_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveGame_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveGame_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveGame, nullptr, "IsValid", Z_Construct_UFunction_USGSaveGame_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveGame_IsValid_Statics::SGSaveGame_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveGame_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveGame_IsValid_Statics::SGSaveGame_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveGame_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveGame_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveGame::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// ********** End Class USGSaveGame Function IsValid ***********************************************

// ********** Begin Class USGSaveGame Function SetSlotInfo *****************************************
struct Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics
{
	struct SGSaveGame_eventSetSlotInfo_Parms
	{
		FString InSlotName;
		int32 InUserIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quick access functions\n" },
#endif
		{ "CPP_Default_InUserIndex", "0" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quick access functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InUserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::NewProp_InSlotName = { "InSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveGame_eventSetSlotInfo_Parms, InSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSlotName_MetaData), NewProp_InSlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::NewProp_InUserIndex = { "InUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveGame_eventSetSlotInfo_Parms, InUserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::NewProp_InSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::NewProp_InUserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveGame, nullptr, "SetSlotInfo", Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::SGSaveGame_eventSetSlotInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::SGSaveGame_eventSetSlotInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveGame_SetSlotInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveGame_SetSlotInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSaveGame::execSetSlotInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InUserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSlotInfo(Z_Param_InSlotName,Z_Param_InUserIndex);
	P_NATIVE_END;
}
// ********** End Class USGSaveGame Function SetSlotInfo *******************************************

// ********** Begin Class USGSaveGame **************************************************************
void USGSaveGame::StaticRegisterNativesUSGSaveGame()
{
	UClass* Class = USGSaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFormattedTimestamp", &USGSaveGame::execGetFormattedTimestamp },
		{ "InitializeDefaults", &USGSaveGame::execInitializeDefaults },
		{ "IsValid", &USGSaveGame::execIsValid },
		{ "SetSlotInfo", &USGSaveGame::execSetSlotInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGSaveGame;
UClass* USGSaveGame::GetPrivateStaticClass()
{
	using TClass = USGSaveGame;
	if (!Z_Registration_Info_UClass_USGSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGSaveGame"),
			Z_Registration_Info_UClass_USGSaveGame.InnerSingleton,
			StaticRegisterNativesUSGSaveGame,
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
	return Z_Registration_Info_UClass_USGSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSaveGame_NoRegister()
{
	return USGSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main save game object that UE5 serializes to disk\n * This wraps our custom save data structures in UE's save game system\n */" },
#endif
		{ "IncludePath", "SaveSystem/SGSaveGame.h" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main save game object that UE5 serializes to disk\nThis wraps our custom save data structures in UE's save game system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The main save data\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main save data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save slot information\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save slot information" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGSaveGame_GetFormattedTimestamp, "GetFormattedTimestamp" }, // 4144079051
		{ &Z_Construct_UFunction_USGSaveGame_InitializeDefaults, "InitializeDefaults" }, // 1907500413
		{ &Z_Construct_UFunction_USGSaveGame_IsValid, "IsValid" }, // 2786836471
		{ &Z_Construct_UFunction_USGSaveGame_SetSlotInfo, "SetSlotInfo" }, // 2070225463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSaveGame_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSaveGame, SaveData), Z_Construct_UScriptStruct_FSGSaveGameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveData_MetaData), NewProp_SaveData_MetaData) }; // 3799058428
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USGSaveGame_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSaveGame, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSaveGame, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveGame_Statics::NewProp_SaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveGame_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSaveGame_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSaveGame_Statics::ClassParams = {
	&USGSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGSaveGame()
{
	if (!Z_Registration_Info_UClass_USGSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSaveGame.OuterSingleton, Z_Construct_UClass_USGSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSaveGame.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGSaveGame);
USGSaveGame::~USGSaveGame() {}
// ********** End Class USGSaveGame ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSaveGame, USGSaveGame::StaticClass, TEXT("USGSaveGame"), &Z_Registration_Info_UClass_USGSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSaveGame), 3634520328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h__Script_SocialGolf_1824521797(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
