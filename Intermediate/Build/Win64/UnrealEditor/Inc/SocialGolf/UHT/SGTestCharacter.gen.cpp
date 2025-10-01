// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Characters/SGTestCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGTestCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGTestCharacter();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGTestCharacter_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraManager_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGTestCharacter Function GetCameraManager *******************************
struct Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics
{
	struct SGTestCharacter_eventGetCameraManager_Parms
	{
		USGCameraManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter for camera manager\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGTestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for camera manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGTestCharacter_eventGetCameraManager_Parms, ReturnValue), Z_Construct_UClass_USGCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGTestCharacter, nullptr, "GetCameraManager", Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::SGTestCharacter_eventGetCameraManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::SGTestCharacter_eventGetCameraManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGTestCharacter_GetCameraManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGTestCharacter_GetCameraManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGTestCharacter::execGetCameraManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGCameraManager**)Z_Param__Result=P_THIS->GetCameraManager();
	P_NATIVE_END;
}
// ********** End Class ASGTestCharacter Function GetCameraManager *********************************

// ********** Begin Class ASGTestCharacter Function OnDropCameraPressed ****************************
struct Z_Construct_UFunction_ASGTestCharacter_OnDropCameraPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SGTestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGTestCharacter_OnDropCameraPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGTestCharacter, nullptr, "OnDropCameraPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGTestCharacter_OnDropCameraPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGTestCharacter_OnDropCameraPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGTestCharacter_OnDropCameraPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGTestCharacter_OnDropCameraPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGTestCharacter::execOnDropCameraPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropCameraPressed();
	P_NATIVE_END;
}
// ********** End Class ASGTestCharacter Function OnDropCameraPressed ******************************

// ********** Begin Class ASGTestCharacter Function OnInteractPressed ******************************
struct Z_Construct_UFunction_ASGTestCharacter_OnInteractPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input actions\n" },
#endif
		{ "ModuleRelativePath", "Characters/SGTestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input actions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGTestCharacter_OnInteractPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGTestCharacter, nullptr, "OnInteractPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGTestCharacter_OnInteractPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGTestCharacter_OnInteractPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGTestCharacter_OnInteractPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGTestCharacter_OnInteractPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGTestCharacter::execOnInteractPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractPressed();
	P_NATIVE_END;
}
// ********** End Class ASGTestCharacter Function OnInteractPressed ********************************

// ********** Begin Class ASGTestCharacter Function OnToggleCameraPressed **************************
struct Z_Construct_UFunction_ASGTestCharacter_OnToggleCameraPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SGTestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGTestCharacter_OnToggleCameraPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGTestCharacter, nullptr, "OnToggleCameraPressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGTestCharacter_OnToggleCameraPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGTestCharacter_OnToggleCameraPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGTestCharacter_OnToggleCameraPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGTestCharacter_OnToggleCameraPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGTestCharacter::execOnToggleCameraPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnToggleCameraPressed();
	P_NATIVE_END;
}
// ********** End Class ASGTestCharacter Function OnToggleCameraPressed ****************************

// ********** Begin Class ASGTestCharacter *********************************************************
void ASGTestCharacter::StaticRegisterNativesASGTestCharacter()
{
	UClass* Class = ASGTestCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraManager", &ASGTestCharacter::execGetCameraManager },
		{ "OnDropCameraPressed", &ASGTestCharacter::execOnDropCameraPressed },
		{ "OnInteractPressed", &ASGTestCharacter::execOnInteractPressed },
		{ "OnToggleCameraPressed", &ASGTestCharacter::execOnToggleCameraPressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGTestCharacter;
UClass* ASGTestCharacter::GetPrivateStaticClass()
{
	using TClass = ASGTestCharacter;
	if (!Z_Registration_Info_UClass_ASGTestCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGTestCharacter"),
			Z_Registration_Info_UClass_ASGTestCharacter.InnerSingleton,
			StaticRegisterNativesASGTestCharacter,
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
	return Z_Registration_Info_UClass_ASGTestCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGTestCharacter_NoRegister()
{
	return ASGTestCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGTestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/SGTestCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Characters/SGTestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera system\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGTestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction component  \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SGTestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGTestCharacter_GetCameraManager, "GetCameraManager" }, // 3814917376
		{ &Z_Construct_UFunction_ASGTestCharacter_OnDropCameraPressed, "OnDropCameraPressed" }, // 1183669140
		{ &Z_Construct_UFunction_ASGTestCharacter_OnInteractPressed, "OnInteractPressed" }, // 3434542213
		{ &Z_Construct_UFunction_ASGTestCharacter_OnToggleCameraPressed, "OnToggleCameraPressed" }, // 485952293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGTestCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGTestCharacter_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGTestCharacter, CameraManager), Z_Construct_UClass_USGCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraManager_MetaData), NewProp_CameraManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGTestCharacter_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGTestCharacter, InteractionComponent), Z_Construct_UClass_USGInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGTestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGTestCharacter_Statics::NewProp_CameraManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGTestCharacter_Statics::NewProp_InteractionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGTestCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGTestCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGTestCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGTestCharacter_Statics::ClassParams = {
	&ASGTestCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGTestCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGTestCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGTestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGTestCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGTestCharacter()
{
	if (!Z_Registration_Info_UClass_ASGTestCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGTestCharacter.OuterSingleton, Z_Construct_UClass_ASGTestCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGTestCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGTestCharacter);
ASGTestCharacter::~ASGTestCharacter() {}
// ********** End Class ASGTestCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGTestCharacter, ASGTestCharacter::StaticClass, TEXT("ASGTestCharacter"), &Z_Registration_Info_UClass_ASGTestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGTestCharacter), 3153361783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h__Script_SocialGolf_4158325320(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
