// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Framework/SGGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGameMode();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGameMode_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGGameMode Function GetSaveManager **************************************
struct Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics
{
	struct SGGameMode_eventGetSaveManager_Parms
	{
		USGSaveManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save System Access\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save System Access" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGameMode_eventGetSaveManager_Parms, ReturnValue), Z_Construct_UClass_USGSaveManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGameMode, nullptr, "GetSaveManager", Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::SGGameMode_eventGetSaveManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::SGGameMode_eventGetSaveManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGameMode_GetSaveManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGameMode_GetSaveManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGameMode::execGetSaveManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGSaveManager**)Z_Param__Result=P_THIS->GetSaveManager();
	P_NATIVE_END;
}
// ********** End Class ASGGameMode Function GetSaveManager ****************************************

// ********** Begin Class ASGGameMode Function OnLoadCompleted *************************************
struct Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics
{
	struct SGGameMode_eventOnLoadCompleted_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Framework/SGGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SGGameMode_eventOnLoadCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGGameMode_eventOnLoadCompleted_Parms), &Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGameMode_eventOnLoadCompleted_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGameMode, nullptr, "OnLoadCompleted", Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::SGGameMode_eventOnLoadCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::SGGameMode_eventOnLoadCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGameMode_OnLoadCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGameMode_OnLoadCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGameMode::execOnLoadCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadCompleted(Z_Param_bSuccess,Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// ********** End Class ASGGameMode Function OnLoadCompleted ***************************************

// ********** Begin Class ASGGameMode Function OnSaveCompleted *************************************
struct Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics
{
	struct SGGameMode_eventOnSaveCompleted_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save/Load event handlers\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save/Load event handlers" },
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SGGameMode_eventOnSaveCompleted_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGGameMode_eventOnSaveCompleted_Parms), &Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGameMode_eventOnSaveCompleted_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGameMode, nullptr, "OnSaveCompleted", Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::SGGameMode_eventOnSaveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::SGGameMode_eventOnSaveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGameMode_OnSaveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGameMode_OnSaveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGameMode::execOnSaveCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveCompleted(Z_Param_bSuccess,Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// ********** End Class ASGGameMode Function OnSaveCompleted ***************************************

// ********** Begin Class ASGGameMode **************************************************************
void ASGGameMode::StaticRegisterNativesASGGameMode()
{
	UClass* Class = ASGGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSaveManager", &ASGGameMode::execGetSaveManager },
		{ "OnLoadCompleted", &ASGGameMode::execOnLoadCompleted },
		{ "OnSaveCompleted", &ASGGameMode::execOnSaveCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGGameMode;
UClass* ASGGameMode::GetPrivateStaticClass()
{
	using TClass = ASGGameMode;
	if (!Z_Registration_Info_UClass_ASGGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGGameMode"),
			Z_Registration_Info_UClass_ASGGameMode.InnerSingleton,
			StaticRegisterNativesASGGameMode,
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
	return Z_Registration_Info_UClass_ASGGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGGameMode_NoRegister()
{
	return ASGGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Framework/SGGameMode.h" },
		{ "ModuleRelativePath", "Framework/SGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveManager_MetaData[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save Manager Component\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save Manager Component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGGameMode_GetSaveManager, "GetSaveManager" }, // 2241754279
		{ &Z_Construct_UFunction_ASGGameMode_OnLoadCompleted, "OnLoadCompleted" }, // 2331855954
		{ &Z_Construct_UFunction_ASGGameMode_OnSaveCompleted, "OnSaveCompleted" }, // 3041920700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGGameMode_Statics::NewProp_SaveManager = { "SaveManager", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGameMode, SaveManager), Z_Construct_UClass_USGSaveManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveManager_MetaData), NewProp_SaveManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGameMode_Statics::NewProp_SaveManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGGameMode_Statics::ClassParams = {
	&ASGGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGGameMode()
{
	if (!Z_Registration_Info_UClass_ASGGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGGameMode.OuterSingleton, Z_Construct_UClass_ASGGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGGameMode);
ASGGameMode::~ASGGameMode() {}
// ********** End Class ASGGameMode ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGGameMode_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGGameMode, ASGGameMode::StaticClass, TEXT("ASGGameMode"), &Z_Registration_Info_UClass_ASGGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGGameMode), 3312378939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGGameMode_h__Script_SocialGolf_1043880459(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGGameMode_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGGameMode_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
