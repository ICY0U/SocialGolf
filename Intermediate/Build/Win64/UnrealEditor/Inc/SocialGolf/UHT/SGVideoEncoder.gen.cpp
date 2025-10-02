// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGVideoEncoder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGVideoEncoder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFFmpegVideoEncoder();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFFmpegVideoEncoder_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGVideoEncoder();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGVideoEncoder_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGVideoEncoder Function CancelVideoEncoding *****************************
struct Z_Construct_UFunction_USGVideoEncoder_CancelVideoEncoding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Video Encoding" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGVideoEncoder_CancelVideoEncoding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGVideoEncoder, nullptr, "CancelVideoEncoding", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_CancelVideoEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGVideoEncoder_CancelVideoEncoding_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGVideoEncoder_CancelVideoEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGVideoEncoder_CancelVideoEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGVideoEncoder::execCancelVideoEncoding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelVideoEncoding();
	P_NATIVE_END;
}
// ********** End Class USGVideoEncoder Function CancelVideoEncoding *******************************

// ********** Begin Class USGVideoEncoder Function FinishVideoEncoding *****************************
struct Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics
{
	struct SGVideoEncoder_eventFinishVideoEncoding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Video Encoding" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGVideoEncoder_eventFinishVideoEncoding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGVideoEncoder_eventFinishVideoEncoding_Parms), &Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGVideoEncoder, nullptr, "FinishVideoEncoding", Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::SGVideoEncoder_eventFinishVideoEncoding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::SGVideoEncoder_eventFinishVideoEncoding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGVideoEncoder::execFinishVideoEncoding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FinishVideoEncoding();
	P_NATIVE_END;
}
// ********** End Class USGVideoEncoder Function FinishVideoEncoding *******************************

// ********** Begin Class USGVideoEncoder Function GetEncodingProgress *****************************
struct Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics
{
	struct SGVideoEncoder_eventGetEncodingProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Video Encoding" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGVideoEncoder_eventGetEncodingProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGVideoEncoder, nullptr, "GetEncodingProgress", Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::SGVideoEncoder_eventGetEncodingProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::SGVideoEncoder_eventGetEncodingProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGVideoEncoder::execGetEncodingProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEncodingProgress();
	P_NATIVE_END;
}
// ********** End Class USGVideoEncoder Function GetEncodingProgress *******************************

// ********** Begin Class USGVideoEncoder Function IsEncoding **************************************
struct Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics
{
	struct SGVideoEncoder_eventIsEncoding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Video Encoding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Status functions\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Status functions" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGVideoEncoder_eventIsEncoding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGVideoEncoder_eventIsEncoding_Parms), &Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGVideoEncoder, nullptr, "IsEncoding", Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::SGVideoEncoder_eventIsEncoding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::SGVideoEncoder_eventIsEncoding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGVideoEncoder_IsEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGVideoEncoder_IsEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGVideoEncoder::execIsEncoding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEncoding();
	P_NATIVE_END;
}
// ********** End Class USGVideoEncoder Function IsEncoding ****************************************

// ********** Begin Class USGVideoEncoder Function StartVideoEncoding ******************************
struct Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics
{
	struct SGVideoEncoder_eventStartVideoEncoding_Parms
	{
		FString OutputPath;
		int32 Width;
		int32 Height;
		float FPS;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Video Encoding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Encoding functions\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encoding functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGVideoEncoder_eventStartVideoEncoding_Parms, OutputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPath_MetaData), NewProp_OutputPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGVideoEncoder_eventStartVideoEncoding_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGVideoEncoder_eventStartVideoEncoding_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGVideoEncoder_eventStartVideoEncoding_Parms, FPS), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGVideoEncoder_eventStartVideoEncoding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGVideoEncoder_eventStartVideoEncoding_Parms), &Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_OutputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_FPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGVideoEncoder, nullptr, "StartVideoEncoding", Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::SGVideoEncoder_eventStartVideoEncoding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::SGVideoEncoder_eventStartVideoEncoding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGVideoEncoder::execStartVideoEncoding)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputPath);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartVideoEncoding(Z_Param_OutputPath,Z_Param_Width,Z_Param_Height,Z_Param_FPS);
	P_NATIVE_END;
}
// ********** End Class USGVideoEncoder Function StartVideoEncoding ********************************

// ********** Begin Class USGVideoEncoder **********************************************************
void USGVideoEncoder::StaticRegisterNativesUSGVideoEncoder()
{
	UClass* Class = USGVideoEncoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelVideoEncoding", &USGVideoEncoder::execCancelVideoEncoding },
		{ "FinishVideoEncoding", &USGVideoEncoder::execFinishVideoEncoding },
		{ "GetEncodingProgress", &USGVideoEncoder::execGetEncodingProgress },
		{ "IsEncoding", &USGVideoEncoder::execIsEncoding },
		{ "StartVideoEncoding", &USGVideoEncoder::execStartVideoEncoding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGVideoEncoder;
UClass* USGVideoEncoder::GetPrivateStaticClass()
{
	using TClass = USGVideoEncoder;
	if (!Z_Registration_Info_UClass_USGVideoEncoder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGVideoEncoder"),
			Z_Registration_Info_UClass_USGVideoEncoder.InnerSingleton,
			StaticRegisterNativesUSGVideoEncoder,
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
	return Z_Registration_Info_UClass_USGVideoEncoder.InnerSingleton;
}
UClass* Z_Construct_UClass_USGVideoEncoder_NoRegister()
{
	return USGVideoEncoder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGVideoEncoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Video encoder for creating MP4 files from frame sequences\n * Uses external FFmpeg for reliable video encoding\n */" },
#endif
		{ "IncludePath", "Camera/SGVideoEncoder.h" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Video encoder for creating MP4 files from frame sequences\nUses external FFmpeg for reliable video encoding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoWidth_MetaData[] = {
		{ "Category", "Video Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings for video encoding\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for video encoding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoHeight_MetaData[] = {
		{ "Category", "Video Settings" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Video Settings" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoBitrate_MetaData[] = {
		{ "Category", "Video Settings" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoQuality_MetaData[] = {
		{ "Category", "Video Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 5 Mbps\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "5 Mbps" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VideoWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VideoHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VideoBitrate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VideoQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGVideoEncoder_CancelVideoEncoding, "CancelVideoEncoding" }, // 3413492957
		{ &Z_Construct_UFunction_USGVideoEncoder_FinishVideoEncoding, "FinishVideoEncoding" }, // 1974273282
		{ &Z_Construct_UFunction_USGVideoEncoder_GetEncodingProgress, "GetEncodingProgress" }, // 668323139
		{ &Z_Construct_UFunction_USGVideoEncoder_IsEncoding, "IsEncoding" }, // 1896940166
		{ &Z_Construct_UFunction_USGVideoEncoder_StartVideoEncoding, "StartVideoEncoding" }, // 1321227667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGVideoEncoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoWidth = { "VideoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGVideoEncoder, VideoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoWidth_MetaData), NewProp_VideoWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoHeight = { "VideoHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGVideoEncoder, VideoHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoHeight_MetaData), NewProp_VideoHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGVideoEncoder, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoBitrate = { "VideoBitrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGVideoEncoder, VideoBitrate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoBitrate_MetaData), NewProp_VideoBitrate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoQuality = { "VideoQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGVideoEncoder, VideoQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoQuality_MetaData), NewProp_VideoQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGVideoEncoder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoBitrate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGVideoEncoder_Statics::NewProp_VideoQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGVideoEncoder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGVideoEncoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGVideoEncoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGVideoEncoder_Statics::ClassParams = {
	&USGVideoEncoder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGVideoEncoder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGVideoEncoder_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGVideoEncoder_Statics::Class_MetaDataParams), Z_Construct_UClass_USGVideoEncoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGVideoEncoder()
{
	if (!Z_Registration_Info_UClass_USGVideoEncoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGVideoEncoder.OuterSingleton, Z_Construct_UClass_USGVideoEncoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGVideoEncoder.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGVideoEncoder);
USGVideoEncoder::~USGVideoEncoder() {}
// ********** End Class USGVideoEncoder ************************************************************

// ********** Begin Class USGFFmpegVideoEncoder Function CreateFFmpegCommand ***********************
struct Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics
{
	struct SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms
	{
		FString InputPattern;
		FString OutputPath;
		float FPS;
		int32 Quality;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Video Encoding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create FFmpeg command for frame sequence\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create FFmpeg command for frame sequence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputPattern;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_InputPattern = { "InputPattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms, InputPattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPattern_MetaData), NewProp_InputPattern_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms, OutputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPath_MetaData), NewProp_OutputPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms, FPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_InputPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_OutputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_FPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFFmpegVideoEncoder, nullptr, "CreateFFmpegCommand", Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::SGFFmpegVideoEncoder_eventCreateFFmpegCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGFFmpegVideoEncoder::execCreateFFmpegCommand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputPattern);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputPath);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FPS);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USGFFmpegVideoEncoder::CreateFFmpegCommand(Z_Param_InputPattern,Z_Param_OutputPath,Z_Param_FPS,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class USGFFmpegVideoEncoder Function CreateFFmpegCommand *************************

// ********** Begin Class USGFFmpegVideoEncoder Function IsFFmpegAvailable *************************
struct Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics
{
	struct SGFFmpegVideoEncoder_eventIsFFmpegAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Video Encoding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if FFmpeg is available\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if FFmpeg is available" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGFFmpegVideoEncoder_eventIsFFmpegAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGFFmpegVideoEncoder_eventIsFFmpegAvailable_Parms), &Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGFFmpegVideoEncoder, nullptr, "IsFFmpegAvailable", Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::SGFFmpegVideoEncoder_eventIsFFmpegAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::SGFFmpegVideoEncoder_eventIsFFmpegAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGFFmpegVideoEncoder::execIsFFmpegAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USGFFmpegVideoEncoder::IsFFmpegAvailable();
	P_NATIVE_END;
}
// ********** End Class USGFFmpegVideoEncoder Function IsFFmpegAvailable ***************************

// ********** Begin Class USGFFmpegVideoEncoder ****************************************************
void USGFFmpegVideoEncoder::StaticRegisterNativesUSGFFmpegVideoEncoder()
{
	UClass* Class = USGFFmpegVideoEncoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateFFmpegCommand", &USGFFmpegVideoEncoder::execCreateFFmpegCommand },
		{ "IsFFmpegAvailable", &USGFFmpegVideoEncoder::execIsFFmpegAvailable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGFFmpegVideoEncoder;
UClass* USGFFmpegVideoEncoder::GetPrivateStaticClass()
{
	using TClass = USGFFmpegVideoEncoder;
	if (!Z_Registration_Info_UClass_USGFFmpegVideoEncoder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGFFmpegVideoEncoder"),
			Z_Registration_Info_UClass_USGFFmpegVideoEncoder.InnerSingleton,
			StaticRegisterNativesUSGFFmpegVideoEncoder,
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
	return Z_Registration_Info_UClass_USGFFmpegVideoEncoder.InnerSingleton;
}
UClass* Z_Construct_UClass_USGFFmpegVideoEncoder_NoRegister()
{
	return USGFFmpegVideoEncoder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGFFmpegVideoEncoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FFmpeg video encoder using external FFmpeg process\n * Primary video encoding solution for reliable MP4 creation\n */" },
#endif
		{ "IncludePath", "Camera/SGVideoEncoder.h" },
		{ "ModuleRelativePath", "Camera/SGVideoEncoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FFmpeg video encoder using external FFmpeg process\nPrimary video encoding solution for reliable MP4 creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGFFmpegVideoEncoder_CreateFFmpegCommand, "CreateFFmpegCommand" }, // 267601267
		{ &Z_Construct_UFunction_USGFFmpegVideoEncoder_IsFFmpegAvailable, "IsFFmpegAvailable" }, // 1464652762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGFFmpegVideoEncoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGFFmpegVideoEncoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGFFmpegVideoEncoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGFFmpegVideoEncoder_Statics::ClassParams = {
	&USGFFmpegVideoEncoder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGFFmpegVideoEncoder_Statics::Class_MetaDataParams), Z_Construct_UClass_USGFFmpegVideoEncoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGFFmpegVideoEncoder()
{
	if (!Z_Registration_Info_UClass_USGFFmpegVideoEncoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGFFmpegVideoEncoder.OuterSingleton, Z_Construct_UClass_USGFFmpegVideoEncoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGFFmpegVideoEncoder.OuterSingleton;
}
USGFFmpegVideoEncoder::USGFFmpegVideoEncoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGFFmpegVideoEncoder);
USGFFmpegVideoEncoder::~USGFFmpegVideoEncoder() {}
// ********** End Class USGFFmpegVideoEncoder ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGVideoEncoder, USGVideoEncoder::StaticClass, TEXT("USGVideoEncoder"), &Z_Registration_Info_UClass_USGVideoEncoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGVideoEncoder), 42176417U) },
		{ Z_Construct_UClass_USGFFmpegVideoEncoder, USGFFmpegVideoEncoder::StaticClass, TEXT("USGFFmpegVideoEncoder"), &Z_Registration_Info_UClass_USGFFmpegVideoEncoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGFFmpegVideoEncoder), 1933336709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h__Script_SocialGolf_1050476066(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
