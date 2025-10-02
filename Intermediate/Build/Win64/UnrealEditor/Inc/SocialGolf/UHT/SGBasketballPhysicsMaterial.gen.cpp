// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Basketball/SGBasketballPhysicsMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGBasketballPhysicsMaterial() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballPhysicsMaterial();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBasketballSurfaceType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBasketballSurfaceType;
static UEnum* EBasketballSurfaceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBasketballSurfaceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBasketballSurfaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("EBasketballSurfaceType"));
	}
	return Z_Registration_Info_UEnum_EBasketballSurfaceType.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<EBasketballSurfaceType>()
{
	return EBasketballSurfaceType_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Court_Concrete.DisplayName", "Concrete Court" },
		{ "Court_Concrete.Name", "EBasketballSurfaceType::Court_Concrete" },
		{ "Court_Wood.DisplayName", "Basketball Court (Wood)" },
		{ "Court_Wood.Name", "EBasketballSurfaceType::Court_Wood" },
		{ "Generic.DisplayName", "Generic Surface" },
		{ "Generic.Name", "EBasketballSurfaceType::Generic" },
		{ "Grass.DisplayName", "Grass" },
		{ "Grass.Name", "EBasketballSurfaceType::Grass" },
		{ "Metal.DisplayName", "Metal" },
		{ "Metal.Name", "EBasketballSurfaceType::Metal" },
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
		{ "Sand.DisplayName", "Sand" },
		{ "Sand.Name", "EBasketballSurfaceType::Sand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBasketballSurfaceType::Court_Wood", (int64)EBasketballSurfaceType::Court_Wood },
		{ "EBasketballSurfaceType::Court_Concrete", (int64)EBasketballSurfaceType::Court_Concrete },
		{ "EBasketballSurfaceType::Grass", (int64)EBasketballSurfaceType::Grass },
		{ "EBasketballSurfaceType::Sand", (int64)EBasketballSurfaceType::Sand },
		{ "EBasketballSurfaceType::Metal", (int64)EBasketballSurfaceType::Metal },
		{ "EBasketballSurfaceType::Generic", (int64)EBasketballSurfaceType::Generic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"EBasketballSurfaceType",
	"EBasketballSurfaceType",
	Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType()
{
	if (!Z_Registration_Info_UEnum_EBasketballSurfaceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBasketballSurfaceType.InnerSingleton, Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBasketballSurfaceType.InnerSingleton;
}
// ********** End Enum EBasketballSurfaceType ******************************************************

// ********** Begin Class USGBasketballPhysicsMaterial Function CalculateSpinInfluencedBounce ******
struct Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics
{
	struct SGBasketballPhysicsMaterial_eventCalculateSpinInfluencedBounce_Parms
	{
		FVector IncomingVelocity;
		FVector SurfaceNormal;
		FVector AngularVelocity;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_IncomingVelocity = { "IncomingVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventCalculateSpinInfluencedBounce_Parms, IncomingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingVelocity_MetaData), NewProp_IncomingVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_SurfaceNormal = { "SurfaceNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventCalculateSpinInfluencedBounce_Parms, SurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceNormal_MetaData), NewProp_SurfaceNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventCalculateSpinInfluencedBounce_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventCalculateSpinInfluencedBounce_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_IncomingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_SurfaceNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballPhysicsMaterial, nullptr, "CalculateSpinInfluencedBounce", Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::SGBasketballPhysicsMaterial_eventCalculateSpinInfluencedBounce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::SGBasketballPhysicsMaterial_eventCalculateSpinInfluencedBounce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballPhysicsMaterial::execCalculateSpinInfluencedBounce)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_IncomingVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceNormal);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CalculateSpinInfluencedBounce(Z_Param_Out_IncomingVelocity,Z_Param_Out_SurfaceNormal,Z_Param_Out_AngularVelocity);
	P_NATIVE_END;
}
// ********** End Class USGBasketballPhysicsMaterial Function CalculateSpinInfluencedBounce ********

// ********** Begin Class USGBasketballPhysicsMaterial Function CreateForSurface *******************
struct Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics
{
	struct SGBasketballPhysicsMaterial_eventCreateForSurface_Parms
	{
		EBasketballSurfaceType BasketballSurface;
		USGBasketballPhysicsMaterial* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static helper to create surface-specific materials\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static helper to create surface-specific materials" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BasketballSurface_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BasketballSurface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::NewProp_BasketballSurface_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::NewProp_BasketballSurface = { "BasketballSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventCreateForSurface_Parms, BasketballSurface), Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType, METADATA_PARAMS(0, nullptr) }; // 601233308
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventCreateForSurface_Parms, ReturnValue), Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::NewProp_BasketballSurface_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::NewProp_BasketballSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballPhysicsMaterial, nullptr, "CreateForSurface", Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::SGBasketballPhysicsMaterial_eventCreateForSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::SGBasketballPhysicsMaterial_eventCreateForSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballPhysicsMaterial::execCreateForSurface)
{
	P_GET_ENUM(EBasketballSurfaceType,Z_Param_BasketballSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGBasketballPhysicsMaterial**)Z_Param__Result=USGBasketballPhysicsMaterial::CreateForSurface(EBasketballSurfaceType(Z_Param_BasketballSurface));
	P_NATIVE_END;
}
// ********** End Class USGBasketballPhysicsMaterial Function CreateForSurface *********************

// ********** Begin Class USGBasketballPhysicsMaterial Function GetVelocityBasedRestitution ********
struct Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics
{
	struct SGBasketballPhysicsMaterial_eventGetVelocityBasedRestitution_Parms
	{
		float ImpactVelocity;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper functions\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventGetVelocityBasedRestitution_Parms, ImpactVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGBasketballPhysicsMaterial_eventGetVelocityBasedRestitution_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::NewProp_ImpactVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGBasketballPhysicsMaterial, nullptr, "GetVelocityBasedRestitution", Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::SGBasketballPhysicsMaterial_eventGetVelocityBasedRestitution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::SGBasketballPhysicsMaterial_eventGetVelocityBasedRestitution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGBasketballPhysicsMaterial::execGetVelocityBasedRestitution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ImpactVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVelocityBasedRestitution(Z_Param_ImpactVelocity);
	P_NATIVE_END;
}
// ********** End Class USGBasketballPhysicsMaterial Function GetVelocityBasedRestitution **********

// ********** Begin Class USGBasketballPhysicsMaterial *********************************************
void USGBasketballPhysicsMaterial::StaticRegisterNativesUSGBasketballPhysicsMaterial()
{
	UClass* Class = USGBasketballPhysicsMaterial::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateSpinInfluencedBounce", &USGBasketballPhysicsMaterial::execCalculateSpinInfluencedBounce },
		{ "CreateForSurface", &USGBasketballPhysicsMaterial::execCreateForSurface },
		{ "GetVelocityBasedRestitution", &USGBasketballPhysicsMaterial::execGetVelocityBasedRestitution },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGBasketballPhysicsMaterial;
UClass* USGBasketballPhysicsMaterial::GetPrivateStaticClass()
{
	using TClass = USGBasketballPhysicsMaterial;
	if (!Z_Registration_Info_UClass_USGBasketballPhysicsMaterial.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGBasketballPhysicsMaterial"),
			Z_Registration_Info_UClass_USGBasketballPhysicsMaterial.InnerSingleton,
			StaticRegisterNativesUSGBasketballPhysicsMaterial,
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
	return Z_Registration_Info_UClass_USGBasketballPhysicsMaterial.InnerSingleton;
}
UClass* Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister()
{
	return USGBasketballPhysicsMaterial::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Basketball/SGBasketballPhysicsMaterial.h" },
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasketballSurfaceType_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basketball-specific surface properties\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basketball-specific surface properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumBounceHeight_MetaData[] = {
		{ "Category", "Basketball Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Advanced bounce properties\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advanced bounce properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumBounceHeight_MetaData[] = {
		{ "Category", "Basketball Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum bounce percentage\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum bounce percentage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowVelocityRestitution_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Velocity-dependent restitution\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocity-dependent restitution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighVelocityRestitution_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bounce at low speeds\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounce at low speeds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityTransitionThreshold_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bounce at high speeds\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounce at high speeds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinInfluenceOnBounce_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spin effects\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spin effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinDecayRate_MetaData[] = {
		{ "Category", "Basketball Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much spin affects bounce direction\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much spin affects bounce direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolumeMultiplier_MetaData[] = {
		{ "Category", "Basketball Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Surface-specific sound and effects\n" },
#endif
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface-specific sound and effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundPitchVariation_MetaData[] = {
		{ "Category", "Basketball Audio" },
		{ "ModuleRelativePath", "Basketball/SGBasketballPhysicsMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BasketballSurfaceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BasketballSurfaceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumBounceHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumBounceHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowVelocityRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighVelocityRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityTransitionThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinInfluenceOnBounce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinDecayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundVolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundPitchVariation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGBasketballPhysicsMaterial_CalculateSpinInfluencedBounce, "CalculateSpinInfluencedBounce" }, // 2396901830
		{ &Z_Construct_UFunction_USGBasketballPhysicsMaterial_CreateForSurface, "CreateForSurface" }, // 3222602590
		{ &Z_Construct_UFunction_USGBasketballPhysicsMaterial_GetVelocityBasedRestitution, "GetVelocityBasedRestitution" }, // 1476081998
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGBasketballPhysicsMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_BasketballSurfaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_BasketballSurfaceType = { "BasketballSurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, BasketballSurfaceType), Z_Construct_UEnum_SocialGolf_EBasketballSurfaceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasketballSurfaceType_MetaData), NewProp_BasketballSurfaceType_MetaData) }; // 601233308
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_MinimumBounceHeight = { "MinimumBounceHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, MinimumBounceHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumBounceHeight_MetaData), NewProp_MinimumBounceHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_MaximumBounceHeight = { "MaximumBounceHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, MaximumBounceHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumBounceHeight_MetaData), NewProp_MaximumBounceHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_LowVelocityRestitution = { "LowVelocityRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, LowVelocityRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowVelocityRestitution_MetaData), NewProp_LowVelocityRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_HighVelocityRestitution = { "HighVelocityRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, HighVelocityRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighVelocityRestitution_MetaData), NewProp_HighVelocityRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_VelocityTransitionThreshold = { "VelocityTransitionThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, VelocityTransitionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityTransitionThreshold_MetaData), NewProp_VelocityTransitionThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SpinInfluenceOnBounce = { "SpinInfluenceOnBounce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, SpinInfluenceOnBounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinInfluenceOnBounce_MetaData), NewProp_SpinInfluenceOnBounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SpinDecayRate = { "SpinDecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, SpinDecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinDecayRate_MetaData), NewProp_SpinDecayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SoundVolumeMultiplier = { "SoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, SoundVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundVolumeMultiplier_MetaData), NewProp_SoundVolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SoundPitchVariation = { "SoundPitchVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGBasketballPhysicsMaterial, SoundPitchVariation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundPitchVariation_MetaData), NewProp_SoundPitchVariation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_BasketballSurfaceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_BasketballSurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_MinimumBounceHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_MaximumBounceHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_LowVelocityRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_HighVelocityRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_VelocityTransitionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SpinInfluenceOnBounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SpinDecayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SoundVolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::NewProp_SoundPitchVariation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::ClassParams = {
	&USGBasketballPhysicsMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::PropPointers),
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGBasketballPhysicsMaterial()
{
	if (!Z_Registration_Info_UClass_USGBasketballPhysicsMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGBasketballPhysicsMaterial.OuterSingleton, Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGBasketballPhysicsMaterial.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGBasketballPhysicsMaterial);
USGBasketballPhysicsMaterial::~USGBasketballPhysicsMaterial() {}
// ********** End Class USGBasketballPhysicsMaterial ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBasketballSurfaceType_StaticEnum, TEXT("EBasketballSurfaceType"), &Z_Registration_Info_UEnum_EBasketballSurfaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 601233308U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGBasketballPhysicsMaterial, USGBasketballPhysicsMaterial::StaticClass, TEXT("USGBasketballPhysicsMaterial"), &Z_Registration_Info_UClass_USGBasketballPhysicsMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGBasketballPhysicsMaterial), 2686143426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h__Script_SocialGolf_1660356178(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
