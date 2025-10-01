// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGGolfTee.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGGolfTee() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfBall_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfTee();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfTee_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGGolfTee Function GetBall **********************************************
struct Z_Construct_UFunction_ASGGolfTee_GetBall_Statics
{
	struct SGGolfTee_eventGetBall_Parms
	{
		ASGGolfBall* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Tee" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfTee_eventGetBall_Parms, ReturnValue), Z_Construct_UClass_ASGGolfBall_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfTee, nullptr, "GetBall", Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::SGGolfTee_eventGetBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::SGGolfTee_eventGetBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfTee_GetBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfTee_GetBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfTee::execGetBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASGGolfBall**)Z_Param__Result=P_THIS->GetBall();
	P_NATIVE_END;
}
// ********** End Class ASGGolfTee Function GetBall ************************************************

// ********** Begin Class ASGGolfTee Function HasBall **********************************************
struct Z_Construct_UFunction_ASGGolfTee_HasBall_Statics
{
	struct SGGolfTee_eventHasBall_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Tee" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGGolfTee_eventHasBall_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGGolfTee_eventHasBall_Parms), &Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfTee, nullptr, "HasBall", Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::SGGolfTee_eventHasBall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::SGGolfTee_eventHasBall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGGolfTee_HasBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfTee_HasBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfTee::execHasBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBall();
	P_NATIVE_END;
}
// ********** End Class ASGGolfTee Function HasBall ************************************************

// ********** Begin Class ASGGolfTee Function RemoveBall *******************************************
struct Z_Construct_UFunction_ASGGolfTee_RemoveBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Tee" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfTee_RemoveBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfTee, nullptr, "RemoveBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_RemoveBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfTee_RemoveBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGGolfTee_RemoveBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfTee_RemoveBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfTee::execRemoveBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBall();
	P_NATIVE_END;
}
// ********** End Class ASGGolfTee Function RemoveBall *********************************************

// ********** Begin Class ASGGolfTee Function SpawnGolfBall ****************************************
struct Z_Construct_UFunction_ASGGolfTee_SpawnGolfBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Golf Tee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Golf Tee Functions\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Golf Tee Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGGolfTee_SpawnGolfBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGGolfTee, nullptr, "SpawnGolfBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGGolfTee_SpawnGolfBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGGolfTee_SpawnGolfBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGGolfTee_SpawnGolfBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGGolfTee_SpawnGolfBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGGolfTee::execSpawnGolfBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnGolfBall();
	P_NATIVE_END;
}
// ********** End Class ASGGolfTee Function SpawnGolfBall ******************************************

// ********** Begin Class ASGGolfTee ***************************************************************
void ASGGolfTee::StaticRegisterNativesASGGolfTee()
{
	UClass* Class = ASGGolfTee::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBall", &ASGGolfTee::execGetBall },
		{ "HasBall", &ASGGolfTee::execHasBall },
		{ "RemoveBall", &ASGGolfTee::execRemoveBall },
		{ "SpawnGolfBall", &ASGGolfTee::execSpawnGolfBall },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGGolfTee;
UClass* ASGGolfTee::GetPrivateStaticClass()
{
	using TClass = ASGGolfTee;
	if (!Z_Registration_Info_UClass_ASGGolfTee.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGGolfTee"),
			Z_Registration_Info_UClass_ASGGolfTee.InnerSingleton,
			StaticRegisterNativesASGGolfTee,
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
	return Z_Registration_Info_UClass_ASGGolfTee.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGGolfTee_NoRegister()
{
	return ASGGolfTee::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGGolfTee_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Golf/SGGolfTee.h" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeeMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusableComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Golf Tee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Golf Tee Properties\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Golf Tee Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBall_MetaData[] = {
		{ "Category", "Golf Tee" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBall_MetaData[] = {
		{ "Category", "Golf Tee" },
		{ "ModuleRelativePath", "Golf/SGGolfTee.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusableComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static void NewProp_bHasBall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBall;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentBall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGGolfTee_GetBall, "GetBall" }, // 4019128022
		{ &Z_Construct_UFunction_ASGGolfTee_HasBall, "HasBall" }, // 648195952
		{ &Z_Construct_UFunction_ASGGolfTee_RemoveBall, "RemoveBall" }, // 757668893
		{ &Z_Construct_UFunction_ASGGolfTee_SpawnGolfBall, "SpawnGolfBall" }, // 2433518840
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGGolfTee>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGGolfTee_Statics::NewProp_TeeMesh = { "TeeMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfTee, TeeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeeMesh_MetaData), NewProp_TeeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGGolfTee_Statics::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfTee, InteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGGolfTee_Statics::NewProp_FocusableComponent = { "FocusableComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfTee, FocusableComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusableComponent_MetaData), NewProp_FocusableComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGGolfTee_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfTee, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
void Z_Construct_UClass_ASGGolfTee_Statics::NewProp_bHasBall_SetBit(void* Obj)
{
	((ASGGolfTee*)Obj)->bHasBall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGGolfTee_Statics::NewProp_bHasBall = { "bHasBall", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGGolfTee), &Z_Construct_UClass_ASGGolfTee_Statics::NewProp_bHasBall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBall_MetaData), NewProp_bHasBall_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGGolfTee_Statics::NewProp_CurrentBall = { "CurrentBall", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGGolfTee, CurrentBall), Z_Construct_UClass_ASGGolfBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBall_MetaData), NewProp_CurrentBall_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGGolfTee_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfTee_Statics::NewProp_TeeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfTee_Statics::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfTee_Statics::NewProp_FocusableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfTee_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfTee_Statics::NewProp_bHasBall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGGolfTee_Statics::NewProp_CurrentBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfTee_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGGolfTee_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfTee_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGGolfTee_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGInteractable_NoRegister, (int32)VTABLE_OFFSET(ASGGolfTee, ISGInteractable), false },  // 3465886030
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGGolfTee_Statics::ClassParams = {
	&ASGGolfTee::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGGolfTee_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfTee_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGGolfTee_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGGolfTee_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGGolfTee()
{
	if (!Z_Registration_Info_UClass_ASGGolfTee.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGGolfTee.OuterSingleton, Z_Construct_UClass_ASGGolfTee_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGGolfTee.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGGolfTee);
ASGGolfTee::~ASGGolfTee() {}
// ********** End Class ASGGolfTee *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGGolfTee, ASGGolfTee::StaticClass, TEXT("ASGGolfTee"), &Z_Registration_Info_UClass_ASGGolfTee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGGolfTee), 3553962899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h__Script_SocialGolf_3218531901(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
