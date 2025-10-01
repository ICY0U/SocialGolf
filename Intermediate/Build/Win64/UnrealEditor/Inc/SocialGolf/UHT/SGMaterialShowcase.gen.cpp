// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGMaterialShowcase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGMaterialShowcase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGMaterialShowcase();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGMaterialShowcase_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGMaterialShowcase Function CycleMaterial *******************************
struct Z_Construct_UFunction_ASGMaterialShowcase_CycleMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Showcase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material showcase functionality\n" },
#endif
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material showcase functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGMaterialShowcase_CycleMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGMaterialShowcase, nullptr, "CycleMaterial", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_CycleMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGMaterialShowcase_CycleMaterial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGMaterialShowcase_CycleMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGMaterialShowcase_CycleMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGMaterialShowcase::execCycleMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleMaterial();
	P_NATIVE_END;
}
// ********** End Class ASGMaterialShowcase Function CycleMaterial *********************************

// ********** Begin Class ASGMaterialShowcase Function GetCurrentMaterialInfo **********************
struct Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics
{
	struct SGMaterialShowcase_eventGetCurrentMaterialInfo_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Showcase" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialShowcase_eventGetCurrentMaterialInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGMaterialShowcase, nullptr, "GetCurrentMaterialInfo", Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::SGMaterialShowcase_eventGetCurrentMaterialInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::SGMaterialShowcase_eventGetCurrentMaterialInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGMaterialShowcase::execGetCurrentMaterialInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentMaterialInfo();
	P_NATIVE_END;
}
// ********** End Class ASGMaterialShowcase Function GetCurrentMaterialInfo ************************

// ********** Begin Class ASGMaterialShowcase Function OnMaterialChanged ***************************
struct Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics
{
	struct SGMaterialShowcase_eventOnMaterialChanged_Parms
	{
		int32 MaterialIndex;
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialShowcase_eventOnMaterialChanged_Parms, MaterialIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGMaterialShowcase_eventOnMaterialChanged_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGMaterialShowcase, nullptr, "OnMaterialChanged", Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::SGMaterialShowcase_eventOnMaterialChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::SGMaterialShowcase_eventOnMaterialChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGMaterialShowcase::execOnMaterialChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMaterialChanged(Z_Param_MaterialIndex,Z_Param_NewMaterial);
	P_NATIVE_END;
}
// ********** End Class ASGMaterialShowcase Function OnMaterialChanged *****************************

// ********** Begin Class ASGMaterialShowcase Function ToggleMaterialType **************************
struct Z_Construct_UFunction_ASGMaterialShowcase_ToggleMaterialType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material Showcase" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGMaterialShowcase_ToggleMaterialType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGMaterialShowcase, nullptr, "ToggleMaterialType", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGMaterialShowcase_ToggleMaterialType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGMaterialShowcase_ToggleMaterialType_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGMaterialShowcase_ToggleMaterialType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGMaterialShowcase_ToggleMaterialType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGMaterialShowcase::execToggleMaterialType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleMaterialType();
	P_NATIVE_END;
}
// ********** End Class ASGMaterialShowcase Function ToggleMaterialType ****************************

// ********** Begin Class ASGMaterialShowcase ******************************************************
void ASGMaterialShowcase::StaticRegisterNativesASGMaterialShowcase()
{
	UClass* Class = ASGMaterialShowcase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CycleMaterial", &ASGMaterialShowcase::execCycleMaterial },
		{ "GetCurrentMaterialInfo", &ASGMaterialShowcase::execGetCurrentMaterialInfo },
		{ "OnMaterialChanged", &ASGMaterialShowcase::execOnMaterialChanged },
		{ "ToggleMaterialType", &ASGMaterialShowcase::execToggleMaterialType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGMaterialShowcase;
UClass* ASGMaterialShowcase::GetPrivateStaticClass()
{
	using TClass = ASGMaterialShowcase;
	if (!Z_Registration_Info_UClass_ASGMaterialShowcase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGMaterialShowcase"),
			Z_Registration_Info_UClass_ASGMaterialShowcase.InnerSingleton,
			StaticRegisterNativesASGMaterialShowcase,
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
	return Z_Registration_Info_UClass_ASGMaterialShowcase.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGMaterialShowcase_NoRegister()
{
	return ASGMaterialShowcase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGMaterialShowcase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Materials/SGMaterialShowcase.h" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowcaseMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialManager_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusableComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCycleUVPresetsOnly_MetaData[] = {
		{ "Category", "Material Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings\n" },
#endif
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMaterialNameInWorld_MetaData[] = {
		{ "Category", "Material Settings" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
		{ "Category", "Material Settings" },
		{ "ModuleRelativePath", "Materials/SGMaterialShowcase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowcaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusableComponent;
	static void NewProp_bCycleUVPresetsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCycleUVPresetsOnly;
	static void NewProp_bShowMaterialNameInWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMaterialNameInWorld;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGMaterialShowcase_CycleMaterial, "CycleMaterial" }, // 3305793088
		{ &Z_Construct_UFunction_ASGMaterialShowcase_GetCurrentMaterialInfo, "GetCurrentMaterialInfo" }, // 3166414525
		{ &Z_Construct_UFunction_ASGMaterialShowcase_OnMaterialChanged, "OnMaterialChanged" }, // 3624723584
		{ &Z_Construct_UFunction_ASGMaterialShowcase_ToggleMaterialType, "ToggleMaterialType" }, // 1599564381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGMaterialShowcase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGMaterialShowcase, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_ShowcaseMesh = { "ShowcaseMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGMaterialShowcase, ShowcaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowcaseMesh_MetaData), NewProp_ShowcaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_MaterialManager = { "MaterialManager", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGMaterialShowcase, MaterialManager), Z_Construct_UClass_USGMaterialManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialManager_MetaData), NewProp_MaterialManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_FocusableComponent = { "FocusableComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGMaterialShowcase, FocusableComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusableComponent_MetaData), NewProp_FocusableComponent_MetaData) };
void Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bCycleUVPresetsOnly_SetBit(void* Obj)
{
	((ASGMaterialShowcase*)Obj)->bCycleUVPresetsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bCycleUVPresetsOnly = { "bCycleUVPresetsOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGMaterialShowcase), &Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bCycleUVPresetsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCycleUVPresetsOnly_MetaData), NewProp_bCycleUVPresetsOnly_MetaData) };
void Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bShowMaterialNameInWorld_SetBit(void* Obj)
{
	((ASGMaterialShowcase*)Obj)->bShowMaterialNameInWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bShowMaterialNameInWorld = { "bShowMaterialNameInWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGMaterialShowcase), &Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bShowMaterialNameInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMaterialNameInWorld_MetaData), NewProp_bShowMaterialNameInWorld_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGMaterialShowcase, InteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionText_MetaData), NewProp_InteractionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGMaterialShowcase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_ShowcaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_MaterialManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_FocusableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bCycleUVPresetsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_bShowMaterialNameInWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGMaterialShowcase_Statics::NewProp_InteractionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGMaterialShowcase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGMaterialShowcase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGMaterialShowcase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGMaterialShowcase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGMaterialShowcase, ISGInteractable), false },  // 3465886030
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGMaterialShowcase_Statics::ClassParams = {
	&ASGMaterialShowcase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGMaterialShowcase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGMaterialShowcase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGMaterialShowcase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGMaterialShowcase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGMaterialShowcase()
{
	if (!Z_Registration_Info_UClass_ASGMaterialShowcase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGMaterialShowcase.OuterSingleton, Z_Construct_UClass_ASGMaterialShowcase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGMaterialShowcase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGMaterialShowcase);
ASGMaterialShowcase::~ASGMaterialShowcase() {}
// ********** End Class ASGMaterialShowcase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGMaterialShowcase, ASGMaterialShowcase::StaticClass, TEXT("ASGMaterialShowcase"), &Z_Registration_Info_UClass_ASGMaterialShowcase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGMaterialShowcase), 3808805549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h__Script_SocialGolf_4257213440(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
