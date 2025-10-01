// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGGolfClub.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGGolfClub() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubData();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubData_NoRegister();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EGolfClubType();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGolfClubType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGolfClubType;
static UEnum* EGolfClubType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGolfClubType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGolfClubType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_EGolfClubType, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("EGolfClubType"));
	}
	return Z_Registration_Info_UEnum_EGolfClubType.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<EGolfClubType>()
{
	return EGolfClubType_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_EGolfClubType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Driver.DisplayName", "Driver" },
		{ "Driver.Name", "EGolfClubType::Driver" },
		{ "Iron3.DisplayName", "3 Iron" },
		{ "Iron3.Name", "EGolfClubType::Iron3" },
		{ "Iron5.DisplayName", "5 Iron" },
		{ "Iron5.Name", "EGolfClubType::Iron5" },
		{ "Iron7.DisplayName", "7 Iron" },
		{ "Iron7.Name", "EGolfClubType::Iron7" },
		{ "Iron9.DisplayName", "9 Iron" },
		{ "Iron9.Name", "EGolfClubType::Iron9" },
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
		{ "PitchingWedge.DisplayName", "Pitching Wedge" },
		{ "PitchingWedge.Name", "EGolfClubType::PitchingWedge" },
		{ "Putter.DisplayName", "Putter" },
		{ "Putter.Name", "EGolfClubType::Putter" },
		{ "SandWedge.DisplayName", "Sand Wedge" },
		{ "SandWedge.Name", "EGolfClubType::SandWedge" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGolfClubType::Driver", (int64)EGolfClubType::Driver },
		{ "EGolfClubType::Iron3", (int64)EGolfClubType::Iron3 },
		{ "EGolfClubType::Iron5", (int64)EGolfClubType::Iron5 },
		{ "EGolfClubType::Iron7", (int64)EGolfClubType::Iron7 },
		{ "EGolfClubType::Iron9", (int64)EGolfClubType::Iron9 },
		{ "EGolfClubType::PitchingWedge", (int64)EGolfClubType::PitchingWedge },
		{ "EGolfClubType::SandWedge", (int64)EGolfClubType::SandWedge },
		{ "EGolfClubType::Putter", (int64)EGolfClubType::Putter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_EGolfClubType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"EGolfClubType",
	"EGolfClubType",
	Z_Construct_UEnum_SocialGolf_EGolfClubType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EGolfClubType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EGolfClubType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_EGolfClubType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_EGolfClubType()
{
	if (!Z_Registration_Info_UEnum_EGolfClubType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGolfClubType.InnerSingleton, Z_Construct_UEnum_SocialGolf_EGolfClubType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGolfClubType.InnerSingleton;
}
// ********** End Enum EGolfClubType ***************************************************************

// ********** Begin Class USGGolfClubData Function GetClubColor ************************************
struct Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics
{
	struct SGGolfClubData_eventGetClubColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Club Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper function to get club color for UI\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to get club color for UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGGolfClubData_eventGetClubColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGGolfClubData, nullptr, "GetClubColor", Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::SGGolfClubData_eventGetClubColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::SGGolfClubData_eventGetClubColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGGolfClubData_GetClubColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGGolfClubData_GetClubColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGGolfClubData::execGetClubColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetClubColor();
	P_NATIVE_END;
}
// ********** End Class USGGolfClubData Function GetClubColor **************************************

// ********** Begin Class USGGolfClubData **********************************************************
void USGGolfClubData::StaticRegisterNativesUSGGolfClubData()
{
	UClass* Class = USGGolfClubData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetClubColor", &USGGolfClubData::execGetClubColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGGolfClubData;
UClass* USGGolfClubData::GetPrivateStaticClass()
{
	using TClass = USGGolfClubData;
	if (!Z_Registration_Info_UClass_USGGolfClubData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGGolfClubData"),
			Z_Registration_Info_UClass_USGGolfClubData.InnerSingleton,
			StaticRegisterNativesUSGGolfClubData,
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
	return Z_Registration_Info_UClass_USGGolfClubData.InnerSingleton;
}
UClass* Z_Construct_UClass_USGGolfClubData_NoRegister()
{
	return USGGolfClubData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGGolfClubData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Golf/SGGolfClub.h" },
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubType_MetaData[] = {
		{ "Category", "Club Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Club identification\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Club identification" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubName_MetaData[] = {
		{ "Category", "Club Info" },
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubDisplayName_MetaData[] = {
		{ "Category", "Club Info" },
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerMultiplier_MetaData[] = {
		{ "Category", "Club Stats" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Club characteristics\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Club characteristics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchAngle_MetaData[] = {
		{ "Category", "Club Stats" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much this club multiplies base power\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much this club multiplies base power" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Club Stats" },
		{ "ClampMax", "400.0" },
		{ "ClampMin", "50.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default launch angle in degrees\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default launch angle in degrees" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[] = {
		{ "Category", "Club Stats" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum effective distance in meters\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum effective distance in meters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinEffect_MetaData[] = {
		{ "Category", "Club Stats" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How accurate this club is (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How accurate this club is (0-1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubMesh_MetaData[] = {
		{ "Category", "Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visual representation\n" },
#endif
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual representation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubIcon_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Golf/SGGolfClub.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClubType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClubType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClubName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ClubDisplayName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClubMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClubIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGGolfClubData_GetClubColor, "GetClubColor" }, // 340370381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGGolfClubData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubType = { "ClubType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, ClubType), Z_Construct_UEnum_SocialGolf_EGolfClubType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubType_MetaData), NewProp_ClubType_MetaData) }; // 1407128361
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubName = { "ClubName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, ClubName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubName_MetaData), NewProp_ClubName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubDisplayName = { "ClubDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, ClubDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubDisplayName_MetaData), NewProp_ClubDisplayName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_PowerMultiplier = { "PowerMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, PowerMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerMultiplier_MetaData), NewProp_PowerMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_LaunchAngle = { "LaunchAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, LaunchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchAngle_MetaData), NewProp_LaunchAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, Accuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Accuracy_MetaData), NewProp_Accuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_SpinEffect = { "SpinEffect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, SpinEffect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinEffect_MetaData), NewProp_SpinEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubMesh = { "ClubMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, ClubMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubMesh_MetaData), NewProp_ClubMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubIcon = { "ClubIcon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGGolfClubData, ClubIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubIcon_MetaData), NewProp_ClubIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGGolfClubData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_PowerMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_LaunchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_SpinEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGGolfClubData_Statics::NewProp_ClubIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGGolfClubData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGGolfClubData_Statics::ClassParams = {
	&USGGolfClubData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGGolfClubData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGGolfClubData_Statics::Class_MetaDataParams), Z_Construct_UClass_USGGolfClubData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGGolfClubData()
{
	if (!Z_Registration_Info_UClass_USGGolfClubData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGGolfClubData.OuterSingleton, Z_Construct_UClass_USGGolfClubData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGGolfClubData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGGolfClubData);
USGGolfClubData::~USGGolfClubData() {}
// ********** End Class USGGolfClubData ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGolfClubType_StaticEnum, TEXT("EGolfClubType"), &Z_Registration_Info_UEnum_EGolfClubType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1407128361U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGGolfClubData, USGGolfClubData::StaticClass, TEXT("USGGolfClubData"), &Z_Registration_Info_UClass_USGGolfClubData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGGolfClubData), 2148949932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h__Script_SocialGolf_1155756820(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
