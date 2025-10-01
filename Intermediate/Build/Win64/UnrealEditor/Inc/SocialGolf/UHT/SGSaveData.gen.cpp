// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGBinaryData();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGSaveData();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGSaveGameData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSGBinaryData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGBinaryData;
class UScriptStruct* FSGBinaryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGBinaryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGBinaryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGBinaryData, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGBinaryData"));
	}
	return Z_Registration_Info_UScriptStruct_FSGBinaryData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGBinaryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Binary data wrapper for UE serialization\n */" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binary data wrapper for UE serialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Binary Data" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGBinaryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSGBinaryData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSGBinaryData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGBinaryData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGBinaryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGBinaryData_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGBinaryData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGBinaryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGBinaryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGBinaryData",
	Z_Construct_UScriptStruct_FSGBinaryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGBinaryData_Statics::PropPointers),
	sizeof(FSGBinaryData),
	alignof(FSGBinaryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGBinaryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGBinaryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGBinaryData()
{
	if (!Z_Registration_Info_UScriptStruct_FSGBinaryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGBinaryData.InnerSingleton, Z_Construct_UScriptStruct_FSGBinaryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGBinaryData.InnerSingleton;
}
// ********** End ScriptStruct FSGBinaryData *******************************************************

// ********** Begin ScriptStruct FSGSaveData *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGSaveData;
class UScriptStruct* FSGSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGSaveData, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FSGSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Generic save data container that can store various types of data\n * Use this to store any game state that needs persistence\n */" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic save data container that can store various types of data\nUse this to store any game state that needs persistence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringData_MetaData[] = {
		{ "Category", "Save Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// String data storage\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String data storage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntData_MetaData[] = {
		{ "Category", "Save Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Integer data storage  \n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Integer data storage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[] = {
		{ "Category", "Save Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Float data storage\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Float data storage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolData_MetaData[] = {
		{ "Category", "Save Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Boolean data storage\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boolean data storage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorData_MetaData[] = {
		{ "Category", "Save Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vector data storage (for positions, rotations, etc.)\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector data storage (for positions, rotations, etc.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[] = {
		{ "Category", "Save Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform data storage (for full actor transforms)\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform data storage (for full actor transforms)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinaryData_MetaData[] = {
		{ "Category", "Save Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Binary data storage (for custom serialized objects)\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binary data storage (for custom serialized objects)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StringData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IntData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_IntData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FloatData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FloatData;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BoolData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoolData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VectorData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VectorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransformData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TransformData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BinaryData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BinaryData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BinaryData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_StringData_ValueProp = { "StringData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_StringData_Key_KeyProp = { "StringData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_StringData = { "StringData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveData, StringData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringData_MetaData), NewProp_StringData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_IntData_ValueProp = { "IntData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_IntData_Key_KeyProp = { "IntData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_IntData = { "IntData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveData, IntData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntData_MetaData), NewProp_IntData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_FloatData_ValueProp = { "FloatData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_FloatData_Key_KeyProp = { "FloatData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveData, FloatData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatData_MetaData), NewProp_FloatData_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BoolData_ValueProp = { "BoolData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BoolData_Key_KeyProp = { "BoolData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BoolData = { "BoolData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveData, BoolData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolData_MetaData), NewProp_BoolData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_VectorData_ValueProp = { "VectorData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_VectorData_Key_KeyProp = { "VectorData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_VectorData = { "VectorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveData, VectorData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorData_MetaData), NewProp_VectorData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_TransformData_ValueProp = { "TransformData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_TransformData_Key_KeyProp = { "TransformData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveData, TransformData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformData_MetaData), NewProp_TransformData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BinaryData_ValueProp = { "BinaryData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSGBinaryData, METADATA_PARAMS(0, nullptr) }; // 215839715
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BinaryData_Key_KeyProp = { "BinaryData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BinaryData = { "BinaryData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveData, BinaryData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinaryData_MetaData), NewProp_BinaryData_MetaData) }; // 215839715
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_StringData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_StringData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_StringData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_IntData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_IntData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_IntData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_FloatData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_FloatData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_FloatData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BoolData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BoolData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BoolData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_VectorData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_VectorData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_VectorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_TransformData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_TransformData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_TransformData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BinaryData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BinaryData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveData_Statics::NewProp_BinaryData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGSaveData",
	Z_Construct_UScriptStruct_FSGSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSaveData_Statics::PropPointers),
	sizeof(FSGSaveData),
	alignof(FSGSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGSaveData.InnerSingleton, Z_Construct_UScriptStruct_FSGSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGSaveData.InnerSingleton;
}
// ********** End ScriptStruct FSGSaveData *********************************************************

// ********** Begin ScriptStruct FSGSaveGameData ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGSaveGameData;
class UScriptStruct* FSGSaveGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSaveGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGSaveGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGSaveGameData, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGSaveGameData"));
	}
	return Z_Registration_Info_UScriptStruct_FSGSaveGameData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGSaveGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main save game data structure\n * This represents the entire save file content\n */" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main save game data structure\nThis represents the entire save file content" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveVersion_MetaData[] = {
		{ "Category", "Save Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save file metadata\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save file metadata" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveTimestamp_MetaData[] = {
		{ "Category", "Save Metadata" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "Save Metadata" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "Save Metadata" },
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameProgressData_MetaData[] = {
		{ "Category", "Game Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game progress data\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game progress data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "Category", "Player Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player-specific data  \n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player-specific data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldData_MetaData[] = {
		{ "Category", "World Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World/Level-specific data\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World/Level-specific data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsData_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings and preferences\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings and preferences" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[] = {
		{ "Category", "Object Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Individual saveable objects data (keyed by SaveID)\n" },
#endif
		{ "ModuleRelativePath", "SaveSystem/SGSaveData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual saveable objects data (keyed by SaveID)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SaveVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveTimestamp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameProgressData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGSaveGameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_SaveVersion = { "SaveVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, SaveVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveVersion_MetaData), NewProp_SaveVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_SaveTimestamp = { "SaveTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, SaveTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveTimestamp_MetaData), NewProp_SaveTimestamp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_GameProgressData = { "GameProgressData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, GameProgressData), Z_Construct_UScriptStruct_FSGSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameProgressData_MetaData), NewProp_GameProgressData_MetaData) }; // 1211084737
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, PlayerData), Z_Construct_UScriptStruct_FSGSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 1211084737
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_WorldData = { "WorldData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, WorldData), Z_Construct_UScriptStruct_FSGSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldData_MetaData), NewProp_WorldData_MetaData) }; // 1211084737
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_SettingsData = { "SettingsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, SettingsData), Z_Construct_UScriptStruct_FSGSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsData_MetaData), NewProp_SettingsData_MetaData) }; // 1211084737
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_ObjectData_ValueProp = { "ObjectData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSGSaveData, METADATA_PARAMS(0, nullptr) }; // 1211084737
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_ObjectData_Key_KeyProp = { "ObjectData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSaveGameData, ObjectData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectData_MetaData), NewProp_ObjectData_MetaData) }; // 1211084737
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGSaveGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_SaveVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_SaveTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_GameProgressData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_WorldData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_SettingsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_ObjectData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_ObjectData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewProp_ObjectData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSaveGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGSaveGameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGSaveGameData",
	Z_Construct_UScriptStruct_FSGSaveGameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSaveGameData_Statics::PropPointers),
	sizeof(FSGSaveGameData),
	alignof(FSGSaveGameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSaveGameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGSaveGameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGSaveGameData()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSaveGameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGSaveGameData.InnerSingleton, Z_Construct_UScriptStruct_FSGSaveGameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGSaveGameData.InnerSingleton;
}
// ********** End ScriptStruct FSGSaveGameData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveData_h__Script_SocialGolf_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSGBinaryData::StaticStruct, Z_Construct_UScriptStruct_FSGBinaryData_Statics::NewStructOps, TEXT("SGBinaryData"), &Z_Registration_Info_UScriptStruct_FSGBinaryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGBinaryData), 215839715U) },
		{ FSGSaveData::StaticStruct, Z_Construct_UScriptStruct_FSGSaveData_Statics::NewStructOps, TEXT("SGSaveData"), &Z_Registration_Info_UScriptStruct_FSGSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGSaveData), 1211084737U) },
		{ FSGSaveGameData::StaticStruct, Z_Construct_UScriptStruct_FSGSaveGameData_Statics::NewStructOps, TEXT("SGSaveGameData"), &Z_Registration_Info_UScriptStruct_FSGSaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGSaveGameData), 3799058428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveData_h__Script_SocialGolf_4032720436(TEXT("/Script/SocialGolf"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveData_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveData_h__Script_SocialGolf_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
