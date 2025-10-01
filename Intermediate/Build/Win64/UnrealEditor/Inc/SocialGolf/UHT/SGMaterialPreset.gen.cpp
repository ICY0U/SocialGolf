// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGMaterialPreset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGMaterialPreset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialPreset();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialPreset_NoRegister();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGMaterialPresetInfo();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSGMaterialPresetInfo *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo;
class UScriptStruct* FSGMaterialPresetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGMaterialPresetInfo, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGMaterialPresetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Material Preset" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Material Preset" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Material Preset" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUVPreset_MetaData[] = {
		{ "Category", "Material Preset" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_bIsUVPreset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUVPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGMaterialPresetInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGMaterialPresetInfo, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGMaterialPresetInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGMaterialPresetInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_bIsUVPreset_SetBit(void* Obj)
{
	((FSGMaterialPresetInfo*)Obj)->bIsUVPreset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_bIsUVPreset = { "bIsUVPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSGMaterialPresetInfo), &Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_bIsUVPreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUVPreset_MetaData), NewProp_bIsUVPreset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewProp_bIsUVPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGMaterialPresetInfo",
	Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::PropPointers),
	sizeof(FSGMaterialPresetInfo),
	alignof(FSGMaterialPresetInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGMaterialPresetInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo.InnerSingleton, Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo.InnerSingleton;
}
// ********** End ScriptStruct FSGMaterialPresetInfo ***********************************************

// ********** Begin Class USGMaterialPreset Function GetStandardPresetCount ************************
struct Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics
{
	struct SGMaterialPreset_eventGetStandardPresetCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetStandardPresetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialPreset, nullptr, "GetStandardPresetCount", Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::SGMaterialPreset_eventGetStandardPresetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::SGMaterialPreset_eventGetStandardPresetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialPreset::execGetStandardPresetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStandardPresetCount();
	P_NATIVE_END;
}
// ********** End Class USGMaterialPreset Function GetStandardPresetCount **************************

// ********** Begin Class USGMaterialPreset Function GetStandardPresetMaterial *********************
struct Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics
{
	struct SGMaterialPreset_eventGetStandardPresetMaterial_Parms
	{
		int32 PresetIndex;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetStandardPresetMaterial_Parms, PresetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetStandardPresetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::NewProp_PresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialPreset, nullptr, "GetStandardPresetMaterial", Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::SGMaterialPreset_eventGetStandardPresetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::SGMaterialPreset_eventGetStandardPresetMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialPreset::execGetStandardPresetMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PresetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetStandardPresetMaterial(Z_Param_PresetIndex);
	P_NATIVE_END;
}
// ********** End Class USGMaterialPreset Function GetStandardPresetMaterial ***********************

// ********** Begin Class USGMaterialPreset Function GetStandardPresetName *************************
struct Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics
{
	struct SGMaterialPreset_eventGetStandardPresetName_Parms
	{
		int32 PresetIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetStandardPresetName_Parms, PresetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetStandardPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::NewProp_PresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialPreset, nullptr, "GetStandardPresetName", Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::SGMaterialPreset_eventGetStandardPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::SGMaterialPreset_eventGetStandardPresetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialPreset::execGetStandardPresetName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PresetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStandardPresetName(Z_Param_PresetIndex);
	P_NATIVE_END;
}
// ********** End Class USGMaterialPreset Function GetStandardPresetName ***************************

// ********** Begin Class USGMaterialPreset Function GetUVPresetCount ******************************
struct Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics
{
	struct SGMaterialPreset_eventGetUVPresetCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetUVPresetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialPreset, nullptr, "GetUVPresetCount", Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::SGMaterialPreset_eventGetUVPresetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::SGMaterialPreset_eventGetUVPresetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialPreset::execGetUVPresetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetUVPresetCount();
	P_NATIVE_END;
}
// ********** End Class USGMaterialPreset Function GetUVPresetCount ********************************

// ********** Begin Class USGMaterialPreset Function GetUVPresetMaterial ***************************
struct Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics
{
	struct SGMaterialPreset_eventGetUVPresetMaterial_Parms
	{
		int32 PresetIndex;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetUVPresetMaterial_Parms, PresetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetUVPresetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::NewProp_PresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialPreset, nullptr, "GetUVPresetMaterial", Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::SGMaterialPreset_eventGetUVPresetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::SGMaterialPreset_eventGetUVPresetMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialPreset::execGetUVPresetMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PresetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetUVPresetMaterial(Z_Param_PresetIndex);
	P_NATIVE_END;
}
// ********** End Class USGMaterialPreset Function GetUVPresetMaterial *****************************

// ********** Begin Class USGMaterialPreset Function GetUVPresetName *******************************
struct Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics
{
	struct SGMaterialPreset_eventGetUVPresetName_Parms
	{
		int32 PresetIndex;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetUVPresetName_Parms, PresetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialPreset_eventGetUVPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::NewProp_PresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGMaterialPreset, nullptr, "GetUVPresetName", Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::SGMaterialPreset_eventGetUVPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::SGMaterialPreset_eventGetUVPresetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGMaterialPreset::execGetUVPresetName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PresetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUVPresetName(Z_Param_PresetIndex);
	P_NATIVE_END;
}
// ********** End Class USGMaterialPreset Function GetUVPresetName *********************************

// ********** Begin Class USGMaterialPreset ********************************************************
void USGMaterialPreset::StaticRegisterNativesUSGMaterialPreset()
{
	UClass* Class = USGMaterialPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStandardPresetCount", &USGMaterialPreset::execGetStandardPresetCount },
		{ "GetStandardPresetMaterial", &USGMaterialPreset::execGetStandardPresetMaterial },
		{ "GetStandardPresetName", &USGMaterialPreset::execGetStandardPresetName },
		{ "GetUVPresetCount", &USGMaterialPreset::execGetUVPresetCount },
		{ "GetUVPresetMaterial", &USGMaterialPreset::execGetUVPresetMaterial },
		{ "GetUVPresetName", &USGMaterialPreset::execGetUVPresetName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGMaterialPreset;
UClass* USGMaterialPreset::GetPrivateStaticClass()
{
	using TClass = USGMaterialPreset;
	if (!Z_Registration_Info_UClass_USGMaterialPreset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGMaterialPreset"),
			Z_Registration_Info_UClass_USGMaterialPreset.InnerSingleton,
			StaticRegisterNativesUSGMaterialPreset,
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
	return Z_Registration_Info_UClass_USGMaterialPreset.InnerSingleton;
}
UClass* Z_Construct_UClass_USGMaterialPreset_NoRegister()
{
	return USGMaterialPreset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGMaterialPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Materials/SGMaterialPreset.h" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVPresets_MetaData[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardPresets_MetaData[] = {
		{ "Category", "Material Presets" },
		{ "ModuleRelativePath", "Materials/SGMaterialPreset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UVPresets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StandardPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StandardPresets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetCount, "GetStandardPresetCount" }, // 2613640704
		{ &Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetMaterial, "GetStandardPresetMaterial" }, // 1408578430
		{ &Z_Construct_UFunction_USGMaterialPreset_GetStandardPresetName, "GetStandardPresetName" }, // 2225309912
		{ &Z_Construct_UFunction_USGMaterialPreset_GetUVPresetCount, "GetUVPresetCount" }, // 1353832604
		{ &Z_Construct_UFunction_USGMaterialPreset_GetUVPresetMaterial, "GetUVPresetMaterial" }, // 2798656133
		{ &Z_Construct_UFunction_USGMaterialPreset_GetUVPresetName, "GetUVPresetName" }, // 1136465914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGMaterialPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_UVPresets_Inner = { "UVPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSGMaterialPresetInfo, METADATA_PARAMS(0, nullptr) }; // 1522618627
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_UVPresets = { "UVPresets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGMaterialPreset, UVPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVPresets_MetaData), NewProp_UVPresets_MetaData) }; // 1522618627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_StandardPresets_Inner = { "StandardPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSGMaterialPresetInfo, METADATA_PARAMS(0, nullptr) }; // 1522618627
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_StandardPresets = { "StandardPresets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGMaterialPreset, StandardPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardPresets_MetaData), NewProp_StandardPresets_MetaData) }; // 1522618627
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGMaterialPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_UVPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_UVPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_StandardPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGMaterialPreset_Statics::NewProp_StandardPresets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGMaterialPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGMaterialPreset_Statics::ClassParams = {
	&USGMaterialPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGMaterialPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialPreset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGMaterialPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USGMaterialPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGMaterialPreset()
{
	if (!Z_Registration_Info_UClass_USGMaterialPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGMaterialPreset.OuterSingleton, Z_Construct_UClass_USGMaterialPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGMaterialPreset.OuterSingleton;
}
USGMaterialPreset::USGMaterialPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGMaterialPreset);
USGMaterialPreset::~USGMaterialPreset() {}
// ********** End Class USGMaterialPreset **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h__Script_SocialGolf_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSGMaterialPresetInfo::StaticStruct, Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics::NewStructOps, TEXT("SGMaterialPresetInfo"), &Z_Registration_Info_UScriptStruct_FSGMaterialPresetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGMaterialPresetInfo), 1522618627U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGMaterialPreset, USGMaterialPreset::StaticClass, TEXT("USGMaterialPreset"), &Z_Registration_Info_UClass_USGMaterialPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGMaterialPreset), 1130846889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h__Script_SocialGolf_695181798(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h__Script_SocialGolf_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h__Script_SocialGolf_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
