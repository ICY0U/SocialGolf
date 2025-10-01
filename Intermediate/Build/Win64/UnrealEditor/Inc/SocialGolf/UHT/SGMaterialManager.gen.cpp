// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGMaterialManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGMaterialManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialManager();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialManager_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialPreset_NoRegister();
SOCIALGOLF_API UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMaterialChanged ****************************************************
struct Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics
{
	struct _Script_SocialGolf_eventOnMaterialChanged_Parms
	{
		int32 MaterialIndex;
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnMaterialChanged_Parms, MaterialIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SocialGolf_eventOnMaterialChanged_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SocialGolf, nullptr, "OnMaterialChanged__DelegateSignature", Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnMaterialChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::_Script_SocialGolf_eventOnMaterialChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMaterialChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaterialChanged, int32 MaterialIndex, UMaterialInterface* NewMaterial)
{
	struct _Script_SocialGolf_eventOnMaterialChanged_Parms
	{
		int32 MaterialIndex;
		UMaterialInterface* NewMaterial;
	};
	_Script_SocialGolf_eventOnMaterialChanged_Parms Parms;
	Parms.MaterialIndex=MaterialIndex;
	Parms.NewMaterial=NewMaterial;
	OnMaterialChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMaterialChanged ******************************************************

// ********** Begin Class USGMaterialManager Function ApplyCurrentMaterial *************************
struct Z_Construct_UFunction_USGMaterialManager_ApplyCurrentMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_ApplyCurrentMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "ApplyCurrentMaterial", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_ApplyCurrentMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_ApplyCurrentMaterial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_ApplyCurrentMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_ApplyCurrentMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execApplyCurrentMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyCurrentMaterial();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function ApplyCurrentMaterial ***************************

// ********** Begin Class USGMaterialManager Function GetCurrentPresetName *************************
struct Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics
{
	struct SGMaterialManager_eventGetCurrentPresetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialManager_eventGetCurrentPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "GetCurrentPresetName", Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::SGMaterialManager_eventGetCurrentPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::SGMaterialManager_eventGetCurrentPresetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execGetCurrentPresetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentPresetName();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function GetCurrentPresetName ***************************

// ********** Begin Class USGMaterialManager Function InitializeMaterialManager ********************
struct Z_Construct_UFunction_USGMaterialManager_InitializeMaterialManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_InitializeMaterialManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "InitializeMaterialManager", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_InitializeMaterialManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_InitializeMaterialManager_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_InitializeMaterialManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_InitializeMaterialManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execInitializeMaterialManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeMaterialManager();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function InitializeMaterialManager **********************

// ********** Begin Class USGMaterialManager Function NextStandardPreset ***************************
struct Z_Construct_UFunction_USGMaterialManager_NextStandardPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_NextStandardPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "NextStandardPreset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_NextStandardPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_NextStandardPreset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_NextStandardPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_NextStandardPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execNextStandardPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextStandardPreset();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function NextStandardPreset *****************************

// ********** Begin Class USGMaterialManager Function NextUVPreset *********************************
struct Z_Construct_UFunction_USGMaterialManager_NextUVPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_NextUVPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "NextUVPreset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_NextUVPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_NextUVPreset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_NextUVPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_NextUVPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execNextUVPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextUVPreset();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function NextUVPreset ***********************************

// ********** Begin Class USGMaterialManager Function OnRep_bUseUVPresets **************************
struct Z_Construct_UFunction_USGMaterialManager_OnRep_bUseUVPresets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_OnRep_bUseUVPresets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "OnRep_bUseUVPresets", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_OnRep_bUseUVPresets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_OnRep_bUseUVPresets_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_OnRep_bUseUVPresets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_OnRep_bUseUVPresets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execOnRep_bUseUVPresets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bUseUVPresets();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function OnRep_bUseUVPresets ****************************

// ********** Begin Class USGMaterialManager Function OnRep_CurrentStandardPresetIndex *************
struct Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentStandardPresetIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentStandardPresetIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "OnRep_CurrentStandardPresetIndex", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentStandardPresetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentStandardPresetIndex_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentStandardPresetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentStandardPresetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execOnRep_CurrentStandardPresetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentStandardPresetIndex();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function OnRep_CurrentStandardPresetIndex ***************

// ********** Begin Class USGMaterialManager Function OnRep_CurrentUVPresetIndex *******************
struct Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentUVPresetIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentUVPresetIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "OnRep_CurrentUVPresetIndex", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentUVPresetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentUVPresetIndex_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentUVPresetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentUVPresetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execOnRep_CurrentUVPresetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentUVPresetIndex();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function OnRep_CurrentUVPresetIndex *********************

// ********** Begin Class USGMaterialManager Function PreviousStandardPreset ***********************
struct Z_Construct_UFunction_USGMaterialManager_PreviousStandardPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_PreviousStandardPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "PreviousStandardPreset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_PreviousStandardPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_PreviousStandardPreset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_PreviousStandardPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_PreviousStandardPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execPreviousStandardPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviousStandardPreset();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function PreviousStandardPreset *************************

// ********** Begin Class USGMaterialManager Function PreviousUVPreset *****************************
struct Z_Construct_UFunction_USGMaterialManager_PreviousUVPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_PreviousUVPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "PreviousUVPreset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_PreviousUVPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_PreviousUVPreset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_PreviousUVPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_PreviousUVPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execPreviousUVPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviousUVPreset();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function PreviousUVPreset *******************************

// ********** Begin Class USGMaterialManager Function SetStandardPreset ****************************
struct Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics
{
	struct SGMaterialManager_eventSetStandardPreset_Parms
	{
		int32 PresetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialManager_eventSetStandardPreset_Parms, PresetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::NewProp_PresetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "SetStandardPreset", Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::SGMaterialManager_eventSetStandardPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::SGMaterialManager_eventSetStandardPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialManager_SetStandardPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_SetStandardPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execSetStandardPreset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PresetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStandardPreset(Z_Param_PresetIndex);
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function SetStandardPreset ******************************

// ********** Begin Class USGMaterialManager Function SetUVPreset **********************************
struct Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics
{
	struct SGMaterialManager_eventSetUVPreset_Parms
	{
		int32 PresetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions\n" },
#endif
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialManager_eventSetUVPreset_Parms, PresetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::NewProp_PresetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "SetUVPreset", Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::SGMaterialManager_eventSetUVPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::SGMaterialManager_eventSetUVPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialManager_SetUVPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_SetUVPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execSetUVPreset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PresetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUVPreset(Z_Param_PresetIndex);
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function SetUVPreset ************************************

// ********** Begin Class USGMaterialManager Function TogglePresetType *****************************
struct Z_Construct_UFunction_USGMaterialManager_TogglePresetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialManager_TogglePresetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialManager, nullptr, "TogglePresetType", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialManager_TogglePresetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialManager_TogglePresetType_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGMaterialManager_TogglePresetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialManager_TogglePresetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialManager::execTogglePresetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePresetType();
	P_NATIVE_END;
}
// ********** End Class USGMaterialManager Function TogglePresetType *******************************

// ********** Begin Class USGMaterialManager *******************************************************
void USGMaterialManager::StaticRegisterNativesUSGMaterialManager()
{
	UClass* Class = USGMaterialManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyCurrentMaterial", &USGMaterialManager::execApplyCurrentMaterial },
		{ "GetCurrentPresetName", &USGMaterialManager::execGetCurrentPresetName },
		{ "InitializeMaterialManager", &USGMaterialManager::execInitializeMaterialManager },
		{ "NextStandardPreset", &USGMaterialManager::execNextStandardPreset },
		{ "NextUVPreset", &USGMaterialManager::execNextUVPreset },
		{ "OnRep_bUseUVPresets", &USGMaterialManager::execOnRep_bUseUVPresets },
		{ "OnRep_CurrentStandardPresetIndex", &USGMaterialManager::execOnRep_CurrentStandardPresetIndex },
		{ "OnRep_CurrentUVPresetIndex", &USGMaterialManager::execOnRep_CurrentUVPresetIndex },
		{ "PreviousStandardPreset", &USGMaterialManager::execPreviousStandardPreset },
		{ "PreviousUVPreset", &USGMaterialManager::execPreviousUVPreset },
		{ "SetStandardPreset", &USGMaterialManager::execSetStandardPreset },
		{ "SetUVPreset", &USGMaterialManager::execSetUVPreset },
		{ "TogglePresetType", &USGMaterialManager::execTogglePresetType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGMaterialManager;
UClass* USGMaterialManager::GetPrivateStaticClass()
{
	using TClass = USGMaterialManager;
	if (!Z_Registration_Info_UClass_USGMaterialManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGMaterialManager"),
			Z_Registration_Info_UClass_USGMaterialManager.InnerSingleton,
			StaticRegisterNativesUSGMaterialManager,
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
	return Z_Registration_Info_UClass_USGMaterialManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USGMaterialManager_NoRegister()
{
	return USGMaterialManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGMaterialManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SocialGolf" },
		{ "IncludePath", "Materials/SGMaterialManager.h" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPresetAsset_MetaData[] = {
		{ "Category", "Material Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material preset reference\n" },
#endif
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material preset reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponent_MetaData[] = {
		{ "Category", "Material Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target mesh component to apply materials to\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target mesh component to apply materials to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUVPresetIndex_MetaData[] = {
		{ "Category", "Material Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current material indices\n" },
#endif
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current material indices" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStandardPresetIndex_MetaData[] = {
		{ "Category", "Material Manager" },
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUVPresets_MetaData[] = {
		{ "Category", "Material Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to use UV presets or standard presets\n" },
#endif
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use UV presets or standard presets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaterialChanged_MetaData[] = {
		{ "Category", "Material Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Materials/SGMaterialManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialPresetAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentUVPresetIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStandardPresetIndex;
	static void NewProp_bUseUVPresets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUVPresets;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaterialChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGMaterialManager_ApplyCurrentMaterial, "ApplyCurrentMaterial" }, // 1299811612
		{ &Z_Construct_UFunction_USGMaterialManager_GetCurrentPresetName, "GetCurrentPresetName" }, // 187490753
		{ &Z_Construct_UFunction_USGMaterialManager_InitializeMaterialManager, "InitializeMaterialManager" }, // 1487422166
		{ &Z_Construct_UFunction_USGMaterialManager_NextStandardPreset, "NextStandardPreset" }, // 2148603936
		{ &Z_Construct_UFunction_USGMaterialManager_NextUVPreset, "NextUVPreset" }, // 1591606486
		{ &Z_Construct_UFunction_USGMaterialManager_OnRep_bUseUVPresets, "OnRep_bUseUVPresets" }, // 70490367
		{ &Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentStandardPresetIndex, "OnRep_CurrentStandardPresetIndex" }, // 4187241389
		{ &Z_Construct_UFunction_USGMaterialManager_OnRep_CurrentUVPresetIndex, "OnRep_CurrentUVPresetIndex" }, // 1564799462
		{ &Z_Construct_UFunction_USGMaterialManager_PreviousStandardPreset, "PreviousStandardPreset" }, // 3360229206
		{ &Z_Construct_UFunction_USGMaterialManager_PreviousUVPreset, "PreviousUVPreset" }, // 2813389353
		{ &Z_Construct_UFunction_USGMaterialManager_SetStandardPreset, "SetStandardPreset" }, // 2875347606
		{ &Z_Construct_UFunction_USGMaterialManager_SetUVPreset, "SetUVPreset" }, // 1559806320
		{ &Z_Construct_UFunction_USGMaterialManager_TogglePresetType, "TogglePresetType" }, // 4285590659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGMaterialManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGMaterialManager_Statics::NewProp_MaterialPresetAsset = { "MaterialPresetAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGMaterialManager, MaterialPresetAsset), Z_Construct_UClass_USGMaterialPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPresetAsset_MetaData), NewProp_MaterialPresetAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGMaterialManager_Statics::NewProp_TargetMeshComponent = { "TargetMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGMaterialManager, TargetMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponent_MetaData), NewProp_TargetMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGMaterialManager_Statics::NewProp_CurrentUVPresetIndex = { "CurrentUVPresetIndex", "OnRep_CurrentUVPresetIndex", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGMaterialManager, CurrentUVPresetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUVPresetIndex_MetaData), NewProp_CurrentUVPresetIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGMaterialManager_Statics::NewProp_CurrentStandardPresetIndex = { "CurrentStandardPresetIndex", "OnRep_CurrentStandardPresetIndex", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGMaterialManager, CurrentStandardPresetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStandardPresetIndex_MetaData), NewProp_CurrentStandardPresetIndex_MetaData) };
void Z_Construct_UClass_USGMaterialManager_Statics::NewProp_bUseUVPresets_SetBit(void* Obj)
{
	((USGMaterialManager*)Obj)->bUseUVPresets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGMaterialManager_Statics::NewProp_bUseUVPresets = { "bUseUVPresets", "OnRep_bUseUVPresets", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGMaterialManager), &Z_Construct_UClass_USGMaterialManager_Statics::NewProp_bUseUVPresets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUVPresets_MetaData), NewProp_bUseUVPresets_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGMaterialManager_Statics::NewProp_OnMaterialChanged = { "OnMaterialChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGMaterialManager, OnMaterialChanged), Z_Construct_UDelegateFunction_SocialGolf_OnMaterialChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaterialChanged_MetaData), NewProp_OnMaterialChanged_MetaData) }; // 1578417770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGMaterialManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialManager_Statics::NewProp_MaterialPresetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialManager_Statics::NewProp_TargetMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialManager_Statics::NewProp_CurrentUVPresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialManager_Statics::NewProp_CurrentStandardPresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialManager_Statics::NewProp_bUseUVPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialManager_Statics::NewProp_OnMaterialChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGMaterialManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGMaterialManager_Statics::ClassParams = {
	&USGMaterialManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGMaterialManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USGMaterialManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGMaterialManager()
{
	if (!Z_Registration_Info_UClass_USGMaterialManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGMaterialManager.OuterSingleton, Z_Construct_UClass_USGMaterialManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGMaterialManager.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void USGMaterialManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentUVPresetIndex(TEXT("CurrentUVPresetIndex"));
	static FName Name_CurrentStandardPresetIndex(TEXT("CurrentStandardPresetIndex"));
	static FName Name_bUseUVPresets(TEXT("bUseUVPresets"));
	const bool bIsValid = true
		&& Name_CurrentUVPresetIndex == ClassReps[(int32)ENetFields_Private::CurrentUVPresetIndex].Property->GetFName()
		&& Name_CurrentStandardPresetIndex == ClassReps[(int32)ENetFields_Private::CurrentStandardPresetIndex].Property->GetFName()
		&& Name_bUseUVPresets == ClassReps[(int32)ENetFields_Private::bUseUVPresets].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USGMaterialManager"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(USGMaterialManager);
USGMaterialManager::~USGMaterialManager() {}
// ********** End Class USGMaterialManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGMaterialManager, USGMaterialManager::StaticClass, TEXT("USGMaterialManager"), &Z_Registration_Info_UClass_USGMaterialManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGMaterialManager), 4240765589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h__Script_SocialGolf_2961165699(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
