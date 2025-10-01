// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/UI/SGHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGHUD();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGHUD Function ToggleFPSDisplay *****************************************
struct Z_Construct_UFunction_ASGHUD_ToggleFPSDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "UI/SGHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGHUD_ToggleFPSDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGHUD, nullptr, "ToggleFPSDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGHUD_ToggleFPSDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGHUD_ToggleFPSDisplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGHUD_ToggleFPSDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGHUD_ToggleFPSDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGHUD::execToggleFPSDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleFPSDisplay();
	P_NATIVE_END;
}
// ********** End Class ASGHUD Function ToggleFPSDisplay *******************************************

// ********** Begin Class ASGHUD Function ToggleNetworkStats ***************************************
struct Z_Construct_UFunction_ASGHUD_ToggleNetworkStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "UI/SGHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGHUD_ToggleNetworkStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGHUD, nullptr, "ToggleNetworkStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGHUD_ToggleNetworkStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGHUD_ToggleNetworkStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGHUD_ToggleNetworkStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGHUD_ToggleNetworkStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGHUD::execToggleNetworkStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleNetworkStats();
	P_NATIVE_END;
}
// ********** End Class ASGHUD Function ToggleNetworkStats *****************************************

// ********** Begin Class ASGHUD *******************************************************************
void ASGHUD::StaticRegisterNativesASGHUD()
{
	UClass* Class = ASGHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleFPSDisplay", &ASGHUD::execToggleFPSDisplay },
		{ "ToggleNetworkStats", &ASGHUD::execToggleNetworkStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGHUD;
UClass* ASGHUD::GetPrivateStaticClass()
{
	using TClass = ASGHUD;
	if (!Z_Registration_Info_UClass_ASGHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGHUD"),
			Z_Registration_Info_UClass_ASGHUD.InnerSingleton,
			StaticRegisterNativesASGHUD,
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
	return Z_Registration_Info_UClass_ASGHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGHUD_NoRegister()
{
	return ASGHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/SGHUD.h" },
		{ "ModuleRelativePath", "UI/SGHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFPS_MetaData[] = {
		{ "Category", "HUD|FPS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FPS Display settings\n" },
#endif
		{ "ModuleRelativePath", "UI/SGHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FPS Display settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNetworkStats_MetaData[] = {
		{ "Category", "HUD|FPS" },
		{ "ModuleRelativePath", "UI/SGHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSTextColor_MetaData[] = {
		{ "Category", "HUD|FPS" },
		{ "ModuleRelativePath", "UI/SGHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSTextScale_MetaData[] = {
		{ "Category", "HUD|FPS" },
		{ "ModuleRelativePath", "UI/SGHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSPosition_MetaData[] = {
		{ "Category", "HUD|FPS" },
		{ "ModuleRelativePath", "UI/SGHUD.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowFPS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFPS;
	static void NewProp_bShowNetworkStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNetworkStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FPSTextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPSTextScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FPSPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGHUD_ToggleFPSDisplay, "ToggleFPSDisplay" }, // 990311123
		{ &Z_Construct_UFunction_ASGHUD_ToggleNetworkStats, "ToggleNetworkStats" }, // 209489317
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowFPS_SetBit(void* Obj)
{
	((ASGHUD*)Obj)->bShowFPS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowFPS = { "bShowFPS", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGHUD), &Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowFPS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFPS_MetaData), NewProp_bShowFPS_MetaData) };
void Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowNetworkStats_SetBit(void* Obj)
{
	((ASGHUD*)Obj)->bShowNetworkStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowNetworkStats = { "bShowNetworkStats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGHUD), &Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowNetworkStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNetworkStats_MetaData), NewProp_bShowNetworkStats_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGHUD_Statics::NewProp_FPSTextColor = { "FPSTextColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGHUD, FPSTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSTextColor_MetaData), NewProp_FPSTextColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGHUD_Statics::NewProp_FPSTextScale = { "FPSTextScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGHUD, FPSTextScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSTextScale_MetaData), NewProp_FPSTextScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGHUD_Statics::NewProp_FPSPosition = { "FPSPosition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGHUD, FPSPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSPosition_MetaData), NewProp_FPSPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGHUD_Statics::NewProp_bShowNetworkStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGHUD_Statics::NewProp_FPSTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGHUD_Statics::NewProp_FPSTextScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGHUD_Statics::NewProp_FPSPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGHUD_Statics::ClassParams = {
	&ASGHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGHUD()
{
	if (!Z_Registration_Info_UClass_ASGHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGHUD.OuterSingleton, Z_Construct_UClass_ASGHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGHUD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGHUD);
ASGHUD::~ASGHUD() {}
// ********** End Class ASGHUD *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGHUD, ASGHUD::StaticClass, TEXT("ASGHUD"), &Z_Registration_Info_UClass_ASGHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGHUD), 3332651857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h__Script_SocialGolf_480201062(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
