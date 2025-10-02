// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGReplayTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGReplayTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_ECameraReplayMode();
SOCIALGOLF_API UEnum* Z_Construct_UEnum_SocialGolf_EReplayEventType();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGReplayData();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGReplayEvent();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGReplayFrameData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EReplayEventType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReplayEventType;
static UEnum* EReplayEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReplayEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReplayEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_EReplayEventType, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("EReplayEventType"));
	}
	return Z_Registration_Info_UEnum_EReplayEventType.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<EReplayEventType>()
{
	return EReplayEventType_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_EReplayEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BallMovement.DisplayName", "Ball Movement" },
		{ "BallMovement.Name", "EReplayEventType::BallMovement" },
		{ "BlueprintType", "true" },
		{ "CameraChange.DisplayName", "Camera Change" },
		{ "CameraChange.Name", "EReplayEventType::CameraChange" },
		{ "ClubChange.DisplayName", "Club Change" },
		{ "ClubChange.Name", "EReplayEventType::ClubChange" },
		{ "GolfShot.DisplayName", "Golf Shot" },
		{ "GolfShot.Name", "EReplayEventType::GolfShot" },
		{ "HoleComplete.DisplayName", "Hole Complete" },
		{ "HoleComplete.Name", "EReplayEventType::HoleComplete" },
		{ "Interaction.DisplayName", "Interaction" },
		{ "Interaction.Name", "EReplayEventType::Interaction" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
		{ "PlayerMovement.DisplayName", "Player Movement" },
		{ "PlayerMovement.Name", "EReplayEventType::PlayerMovement" },
		{ "ScoreEvent.DisplayName", "Score Event" },
		{ "ScoreEvent.Name", "EReplayEventType::ScoreEvent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReplayEventType::GolfShot", (int64)EReplayEventType::GolfShot },
		{ "EReplayEventType::PlayerMovement", (int64)EReplayEventType::PlayerMovement },
		{ "EReplayEventType::BallMovement", (int64)EReplayEventType::BallMovement },
		{ "EReplayEventType::CameraChange", (int64)EReplayEventType::CameraChange },
		{ "EReplayEventType::ClubChange", (int64)EReplayEventType::ClubChange },
		{ "EReplayEventType::Interaction", (int64)EReplayEventType::Interaction },
		{ "EReplayEventType::ScoreEvent", (int64)EReplayEventType::ScoreEvent },
		{ "EReplayEventType::HoleComplete", (int64)EReplayEventType::HoleComplete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_EReplayEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"EReplayEventType",
	"EReplayEventType",
	Z_Construct_UEnum_SocialGolf_EReplayEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EReplayEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_EReplayEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_EReplayEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_EReplayEventType()
{
	if (!Z_Registration_Info_UEnum_EReplayEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReplayEventType.InnerSingleton, Z_Construct_UEnum_SocialGolf_EReplayEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReplayEventType.InnerSingleton;
}
// ********** End Enum EReplayEventType ************************************************************

// ********** Begin Enum ECameraReplayMode *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraReplayMode;
static UEnum* ECameraReplayMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraReplayMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraReplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SocialGolf_ECameraReplayMode, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("ECameraReplayMode"));
	}
	return Z_Registration_Info_UEnum_ECameraReplayMode.OuterSingleton;
}
template<> SOCIALGOLF_API UEnum* StaticEnum<ECameraReplayMode>()
{
	return ECameraReplayMode_StaticEnum();
}
struct Z_Construct_UEnum_SocialGolf_ECameraReplayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BallFollow.DisplayName", "Ball Follow" },
		{ "BallFollow.Name", "ECameraReplayMode::BallFollow" },
		{ "BehindShot.DisplayName", "Behind Shot" },
		{ "BehindShot.Name", "ECameraReplayMode::BehindShot" },
		{ "BlueprintType", "true" },
		{ "Cinematic.DisplayName", "Cinematic" },
		{ "Cinematic.Name", "ECameraReplayMode::Cinematic" },
		{ "FirstPerson.DisplayName", "First Person" },
		{ "FirstPerson.Name", "ECameraReplayMode::FirstPerson" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
		{ "SideView.DisplayName", "Side View" },
		{ "SideView.Name", "ECameraReplayMode::SideView" },
		{ "StaticOverview.DisplayName", "Static Overview" },
		{ "StaticOverview.Name", "ECameraReplayMode::StaticOverview" },
		{ "ThirdPerson.DisplayName", "Third Person" },
		{ "ThirdPerson.Name", "ECameraReplayMode::ThirdPerson" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraReplayMode::FirstPerson", (int64)ECameraReplayMode::FirstPerson },
		{ "ECameraReplayMode::ThirdPerson", (int64)ECameraReplayMode::ThirdPerson },
		{ "ECameraReplayMode::Cinematic", (int64)ECameraReplayMode::Cinematic },
		{ "ECameraReplayMode::BallFollow", (int64)ECameraReplayMode::BallFollow },
		{ "ECameraReplayMode::StaticOverview", (int64)ECameraReplayMode::StaticOverview },
		{ "ECameraReplayMode::SideView", (int64)ECameraReplayMode::SideView },
		{ "ECameraReplayMode::BehindShot", (int64)ECameraReplayMode::BehindShot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SocialGolf_ECameraReplayMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	"ECameraReplayMode",
	"ECameraReplayMode",
	Z_Construct_UEnum_SocialGolf_ECameraReplayMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECameraReplayMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SocialGolf_ECameraReplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SocialGolf_ECameraReplayMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SocialGolf_ECameraReplayMode()
{
	if (!Z_Registration_Info_UEnum_ECameraReplayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraReplayMode.InnerSingleton, Z_Construct_UEnum_SocialGolf_ECameraReplayMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraReplayMode.InnerSingleton;
}
// ********** End Enum ECameraReplayMode ***********************************************************

// ********** Begin ScriptStruct FSGReplayFrameData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGReplayFrameData;
class UScriptStruct* FSGReplayFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGReplayFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGReplayFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGReplayFrameData, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGReplayFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_FSGReplayFrameData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGReplayFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallLocation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallVelocity_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BallLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BallVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGReplayFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLocation_MetaData), NewProp_PlayerLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRotation_MetaData), NewProp_PlayerRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_BallLocation = { "BallLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, BallLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallLocation_MetaData), NewProp_BallLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_BallVelocity = { "BallVelocity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, BallVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallVelocity_MetaData), NewProp_BallVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLocation_MetaData), NewProp_CameraLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotation_MetaData), NewProp_CameraRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayFrameData, CameraFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFOV_MetaData), NewProp_CameraFOV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_PlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_PlayerRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_BallLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_BallVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_CameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_CameraRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewProp_CameraFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGReplayFrameData",
	Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::PropPointers),
	sizeof(FSGReplayFrameData),
	alignof(FSGReplayFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGReplayFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_FSGReplayFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGReplayFrameData.InnerSingleton, Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGReplayFrameData.InnerSingleton;
}
// ********** End ScriptStruct FSGReplayFrameData **************************************************

// ********** Begin ScriptStruct FSGReplayEvent ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGReplayEvent;
class UScriptStruct* FSGReplayEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGReplayEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGReplayEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGReplayEvent, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGReplayEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FSGReplayEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGReplayEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventDescription_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventLocation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotPower_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClubUsed_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotPower;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClubUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGReplayEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayEvent, EventType), Z_Construct_UEnum_SocialGolf_EReplayEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventType_MetaData), NewProp_EventType_MetaData) }; // 1092210602
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayEvent, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventDescription = { "EventDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayEvent, EventDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventDescription_MetaData), NewProp_EventDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventLocation = { "EventLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayEvent, EventLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventLocation_MetaData), NewProp_EventLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_ShotPower = { "ShotPower", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayEvent, ShotPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotPower_MetaData), NewProp_ShotPower_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_ClubUsed = { "ClubUsed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayEvent, ClubUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClubUsed_MetaData), NewProp_ClubUsed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGReplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_EventLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_ShotPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewProp_ClubUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGReplayEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGReplayEvent",
	Z_Construct_UScriptStruct_FSGReplayEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayEvent_Statics::PropPointers),
	sizeof(FSGReplayEvent),
	alignof(FSGReplayEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGReplayEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGReplayEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FSGReplayEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGReplayEvent.InnerSingleton, Z_Construct_UScriptStruct_FSGReplayEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGReplayEvent.InnerSingleton;
}
// ********** End ScriptStruct FSGReplayEvent ******************************************************

// ********** Begin ScriptStruct FSGReplayData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGReplayData;
class UScriptStruct* FSGReplayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGReplayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGReplayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGReplayData, (UObject*)Z_Construct_UPackage__Script_SocialGolf(), TEXT("SGReplayData"));
	}
	return Z_Registration_Info_UScriptStruct_FSGReplayData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSGReplayData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordingDate_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalDuration_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CourseName_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoleNumber_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalScore_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingBallPosition_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolePosition_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Replay/SGReplayTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordingDate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CourseName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HoleNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FinalScore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingBallPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HolePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGReplayData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_RecordingDate = { "RecordingDate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, RecordingDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordingDate_MetaData), NewProp_RecordingDate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, TotalDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalDuration_MetaData), NewProp_TotalDuration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_CourseName = { "CourseName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, CourseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CourseName_MetaData), NewProp_CourseName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_HoleNumber = { "HoleNumber", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, HoleNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoleNumber_MetaData), NewProp_HoleNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_FinalScore = { "FinalScore", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, FinalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalScore_MetaData), NewProp_FinalScore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_FrameData_Inner = { "FrameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSGReplayFrameData, METADATA_PARAMS(0, nullptr) }; // 1124500300
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, FrameData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 1124500300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSGReplayEvent, METADATA_PARAMS(0, nullptr) }; // 3503714457
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 3503714457
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_StartingBallPosition = { "StartingBallPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, StartingBallPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingBallPosition_MetaData), NewProp_StartingBallPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_HolePosition = { "HolePosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGReplayData, HolePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolePosition_MetaData), NewProp_HolePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGReplayData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_ReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_RecordingDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_TotalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_CourseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_HoleNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_FinalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_FrameData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_FrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_Events,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_StartingBallPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGReplayData_Statics::NewProp_HolePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGReplayData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
	nullptr,
	&NewStructOps,
	"SGReplayData",
	Z_Construct_UScriptStruct_FSGReplayData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayData_Statics::PropPointers),
	sizeof(FSGReplayData),
	alignof(FSGReplayData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGReplayData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGReplayData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGReplayData()
{
	if (!Z_Registration_Info_UScriptStruct_FSGReplayData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGReplayData.InnerSingleton, Z_Construct_UScriptStruct_FSGReplayData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSGReplayData.InnerSingleton;
}
// ********** End ScriptStruct FSGReplayData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h__Script_SocialGolf_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReplayEventType_StaticEnum, TEXT("EReplayEventType"), &Z_Registration_Info_UEnum_EReplayEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1092210602U) },
		{ ECameraReplayMode_StaticEnum, TEXT("ECameraReplayMode"), &Z_Registration_Info_UEnum_ECameraReplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 17504452U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSGReplayFrameData::StaticStruct, Z_Construct_UScriptStruct_FSGReplayFrameData_Statics::NewStructOps, TEXT("SGReplayFrameData"), &Z_Registration_Info_UScriptStruct_FSGReplayFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGReplayFrameData), 1124500300U) },
		{ FSGReplayEvent::StaticStruct, Z_Construct_UScriptStruct_FSGReplayEvent_Statics::NewStructOps, TEXT("SGReplayEvent"), &Z_Registration_Info_UScriptStruct_FSGReplayEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGReplayEvent), 3503714457U) },
		{ FSGReplayData::StaticStruct, Z_Construct_UScriptStruct_FSGReplayData_Statics::NewStructOps, TEXT("SGReplayData"), &Z_Registration_Info_UScriptStruct_FSGReplayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGReplayData), 2410206830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h__Script_SocialGolf_1455457686(TEXT("/Script/SocialGolf"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h__Script_SocialGolf_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h__Script_SocialGolf_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h__Script_SocialGolf_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h__Script_SocialGolf_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
