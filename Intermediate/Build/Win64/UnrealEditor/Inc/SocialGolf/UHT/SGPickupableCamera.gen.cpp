// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGPickupableCamera.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGPickupableCamera() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupableCamera();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupableCamera_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGPickupableCamera Function Drop ****************************************
struct Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics
{
	struct SGPickupableCamera_eventDrop_Parms
	{
		FVector DropLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DropLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::NewProp_DropLocation = { "DropLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPickupableCamera_eventDrop_Parms, DropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropLocation_MetaData), NewProp_DropLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::NewProp_DropLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupableCamera, nullptr, "Drop", Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::SGPickupableCamera_eventDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::SGPickupableCamera_eventDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupableCamera_Drop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupableCamera_Drop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupableCamera::execDrop)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DropLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Drop(Z_Param_Out_DropLocation);
	P_NATIVE_END;
}
// ********** End Class ASGPickupableCamera Function Drop ******************************************

// ********** Begin Class ASGPickupableCamera Function GetCameraRecorder ***************************
struct Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics
{
	struct SGPickupableCamera_eventGetCameraRecorder_Parms
	{
		USGCameraRecorder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera access\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera access" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPickupableCamera_eventGetCameraRecorder_Parms, ReturnValue), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupableCamera, nullptr, "GetCameraRecorder", Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::SGPickupableCamera_eventGetCameraRecorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::SGPickupableCamera_eventGetCameraRecorder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupableCamera::execGetCameraRecorder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGCameraRecorder**)Z_Param__Result=P_THIS->GetCameraRecorder();
	P_NATIVE_END;
}
// ********** End Class ASGPickupableCamera Function GetCameraRecorder *****************************

// ********** Begin Class ASGPickupableCamera Function GetCurrentOwner *****************************
struct Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics
{
	struct SGPickupableCamera_eventGetCurrentOwner_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPickupableCamera_eventGetCurrentOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupableCamera, nullptr, "GetCurrentOwner", Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::SGPickupableCamera_eventGetCurrentOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::SGPickupableCamera_eventGetCurrentOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupableCamera::execGetCurrentOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetCurrentOwner();
	P_NATIVE_END;
}
// ********** End Class ASGPickupableCamera Function GetCurrentOwner *******************************

// ********** Begin Class ASGPickupableCamera Function IsPickedUp **********************************
struct Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics
{
	struct SGPickupableCamera_eventIsPickedUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGPickupableCamera_eventIsPickedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGPickupableCamera_eventIsPickedUp_Parms), &Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupableCamera, nullptr, "IsPickedUp", Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::SGPickupableCamera_eventIsPickedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::SGPickupableCamera_eventIsPickedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupableCamera::execIsPickedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPickedUp();
	P_NATIVE_END;
}
// ********** End Class ASGPickupableCamera Function IsPickedUp ************************************

// ********** Begin Class ASGPickupableCamera Function PickUp **************************************
struct Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics
{
	struct SGPickupableCamera_eventPickUp_Parms
	{
		APawn* Picker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pickup functionality\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pickup functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Picker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPickupableCamera_eventPickUp_Parms, Picker), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::NewProp_Picker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPickupableCamera, nullptr, "PickUp", Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::SGPickupableCamera_eventPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::SGPickupableCamera_eventPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPickupableCamera_PickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPickupableCamera_PickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPickupableCamera::execPickUp)
{
	P_GET_OBJECT(APawn,Z_Param_Picker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUp(Z_Param_Picker);
	P_NATIVE_END;
}
// ********** End Class ASGPickupableCamera Function PickUp ****************************************

// ********** Begin Class ASGPickupableCamera ******************************************************
void ASGPickupableCamera::StaticRegisterNativesASGPickupableCamera()
{
	UClass* Class = ASGPickupableCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Drop", &ASGPickupableCamera::execDrop },
		{ "GetCameraRecorder", &ASGPickupableCamera::execGetCameraRecorder },
		{ "GetCurrentOwner", &ASGPickupableCamera::execGetCurrentOwner },
		{ "IsPickedUp", &ASGPickupableCamera::execIsPickedUp },
		{ "PickUp", &ASGPickupableCamera::execPickUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGPickupableCamera;
UClass* ASGPickupableCamera::GetPrivateStaticClass()
{
	using TClass = ASGPickupableCamera;
	if (!Z_Registration_Info_UClass_ASGPickupableCamera.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGPickupableCamera"),
			Z_Registration_Info_UClass_ASGPickupableCamera.InnerSingleton,
			StaticRegisterNativesASGPickupableCamera,
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
	return Z_Registration_Info_UClass_ASGPickupableCamera.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGPickupableCamera_NoRegister()
{
	return ASGPickupableCamera::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGPickupableCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/SGPickupableCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRecorderComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBePickedUp_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPickedUp_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State\n" },
#endif
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOwner_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Camera/SGPickupableCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRecorderComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static void NewProp_bCanBePickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBePickedUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
	static void NewProp_bIsPickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPickedUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGPickupableCamera_Drop, "Drop" }, // 952637778
		{ &Z_Construct_UFunction_ASGPickupableCamera_GetCameraRecorder, "GetCameraRecorder" }, // 2240741859
		{ &Z_Construct_UFunction_ASGPickupableCamera_GetCurrentOwner, "GetCurrentOwner" }, // 1017205641
		{ &Z_Construct_UFunction_ASGPickupableCamera_IsPickedUp, "IsPickedUp" }, // 2598585649
		{ &Z_Construct_UFunction_ASGPickupableCamera_PickUp, "PickUp" }, // 2433072568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGPickupableCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupableCamera, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CameraMeshComponent = { "CameraMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupableCamera, CameraMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMeshComponent_MetaData), NewProp_CameraMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupableCamera, InteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CameraRecorderComponent = { "CameraRecorderComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupableCamera, CameraRecorderComponent), Z_Construct_UClass_USGCameraRecorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRecorderComponent_MetaData), NewProp_CameraRecorderComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupableCamera, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRadius_MetaData), NewProp_InteractionRadius_MetaData) };
void Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bCanBePickedUp_SetBit(void* Obj)
{
	((ASGPickupableCamera*)Obj)->bCanBePickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bCanBePickedUp = { "bCanBePickedUp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPickupableCamera), &Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bCanBePickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBePickedUp_MetaData), NewProp_bCanBePickedUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupableCamera, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMesh_MetaData), NewProp_CameraMesh_MetaData) };
void Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bIsPickedUp_SetBit(void* Obj)
{
	((ASGPickupableCamera*)Obj)->bIsPickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bIsPickedUp = { "bIsPickedUp", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPickupableCamera), &Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bIsPickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPickedUp_MetaData), NewProp_bIsPickedUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CurrentOwner = { "CurrentOwner", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGPickupableCamera, CurrentOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOwner_MetaData), NewProp_CurrentOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGPickupableCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CameraMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CameraRecorderComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bCanBePickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CameraMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_bIsPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPickupableCamera_Statics::NewProp_CurrentOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupableCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGPickupableCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupableCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGPickupableCamera_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGPickupableCamera, ISGInteractable), false },  // 3465886030
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGPickupableCamera_Statics::ClassParams = {
	&ASGPickupableCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGPickupableCamera_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupableCamera_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPickupableCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGPickupableCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGPickupableCamera()
{
	if (!Z_Registration_Info_UClass_ASGPickupableCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGPickupableCamera.OuterSingleton, Z_Construct_UClass_ASGPickupableCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGPickupableCamera.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGPickupableCamera);
ASGPickupableCamera::~ASGPickupableCamera() {}
// ********** End Class ASGPickupableCamera ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGPickupableCamera, ASGPickupableCamera::StaticClass, TEXT("ASGPickupableCamera"), &Z_Registration_Info_UClass_ASGPickupableCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGPickupableCamera), 154991504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h__Script_SocialGolf_3311256457(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
