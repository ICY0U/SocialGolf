// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSaveableInterface.h"
#include "SGSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGSaveableInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveableInterface();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveableInterface_NoRegister();
SOCIALGOLF_API UScriptStruct* Z_Construct_UScriptStruct_FSGSaveData();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface USGSaveableInterface Function GetSaveID ******************************
struct SGSaveableInterface_eventGetSaveID_Parms
{
	FString ReturnValue;
};
FString ISGSaveableInterface::GetSaveID() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSaveID instead.");
	SGSaveableInterface_eventGetSaveID_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGSaveableInterface_GetSaveID = FName(TEXT("GetSaveID"));
FString ISGSaveableInterface::Execute_GetSaveID(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGSaveableInterface::StaticClass()));
	SGSaveableInterface_eventGetSaveID_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGSaveableInterface_GetSaveID);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISGSaveableInterface*)(O->GetNativeInterfaceAddress(USGSaveableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSaveID_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Get a unique identifier for this saveable object\n     * This should be consistent across game sessions\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGSaveableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a unique identifier for this saveable object\nThis should be consistent across game sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveableInterface_eventGetSaveID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveableInterface, nullptr, "GetSaveID", Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::PropPointers), sizeof(SGSaveableInterface_eventGetSaveID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSaveableInterface_eventGetSaveID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveableInterface_GetSaveID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveableInterface_GetSaveID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGSaveableInterface::execGetSaveID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSaveID_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGSaveableInterface Function GetSaveID ********************************

// ********** Begin Interface USGSaveableInterface Function GetSavePriority ************************
struct SGSaveableInterface_eventGetSavePriority_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	SGSaveableInterface_eventGetSavePriority_Parms()
		: ReturnValue(0)
	{
	}
};
int32 ISGSaveableInterface::GetSavePriority() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSavePriority instead.");
	SGSaveableInterface_eventGetSavePriority_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGSaveableInterface_GetSavePriority = FName(TEXT("GetSavePriority"));
int32 ISGSaveableInterface::Execute_GetSavePriority(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGSaveableInterface::StaticClass()));
	SGSaveableInterface_eventGetSavePriority_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGSaveableInterface_GetSavePriority);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISGSaveableInterface*)(O->GetNativeInterfaceAddress(USGSaveableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSavePriority_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Get the priority for save/load operations (higher = saved/loaded first)\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGSaveableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the priority for save/load operations (higher = saved/loaded first)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveableInterface_eventGetSavePriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveableInterface, nullptr, "GetSavePriority", Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::PropPointers), sizeof(SGSaveableInterface_eventGetSavePriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSaveableInterface_eventGetSavePriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveableInterface_GetSavePriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveableInterface_GetSavePriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGSaveableInterface::execGetSavePriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSavePriority_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USGSaveableInterface Function GetSavePriority **************************

// ********** Begin Interface USGSaveableInterface Function LoadData *******************************
struct SGSaveableInterface_eventLoadData_Parms
{
	FSGSaveData SaveData;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SGSaveableInterface_eventLoadData_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISGSaveableInterface::LoadData(FSGSaveData const& SaveData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LoadData instead.");
	SGSaveableInterface_eventLoadData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGSaveableInterface_LoadData = FName(TEXT("LoadData"));
bool ISGSaveableInterface::Execute_LoadData(UObject* O, FSGSaveData const& SaveData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGSaveableInterface::StaticClass()));
	SGSaveableInterface_eventLoadData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGSaveableInterface_LoadData);
	if (Func)
	{
		Parms.SaveData=SaveData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISGSaveableInterface*)(O->GetNativeInterfaceAddress(USGSaveableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->LoadData_Implementation(SaveData);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Called when the object should load its data\n     * @param SaveData The save data container to read from\n     * @return true if load was successful\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGSaveableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the object should load its data\n@param SaveData The save data container to read from\n@return true if load was successful" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveableInterface_eventLoadData_Parms, SaveData), Z_Construct_UScriptStruct_FSGSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveData_MetaData), NewProp_SaveData_MetaData) }; // 1211084737
void Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSaveableInterface_eventLoadData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSaveableInterface_eventLoadData_Parms), &Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::NewProp_SaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveableInterface, nullptr, "LoadData", Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::PropPointers), sizeof(SGSaveableInterface_eventLoadData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSaveableInterface_eventLoadData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveableInterface_LoadData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveableInterface_LoadData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGSaveableInterface::execLoadData)
{
	P_GET_STRUCT_REF(FSGSaveData,Z_Param_Out_SaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadData_Implementation(Z_Param_Out_SaveData);
	P_NATIVE_END;
}
// ********** End Interface USGSaveableInterface Function LoadData *********************************

// ********** Begin Interface USGSaveableInterface Function SaveData *******************************
struct SGSaveableInterface_eventSaveData_Parms
{
	FSGSaveData SaveData;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SGSaveableInterface_eventSaveData_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISGSaveableInterface::SaveData(FSGSaveData& SaveData) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveData instead.");
	SGSaveableInterface_eventSaveData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USGSaveableInterface_SaveData = FName(TEXT("SaveData"));
bool ISGSaveableInterface::Execute_SaveData(const UObject* O, FSGSaveData& SaveData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGSaveableInterface::StaticClass()));
	SGSaveableInterface_eventSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGSaveableInterface_SaveData);
	if (Func)
	{
		Parms.SaveData=SaveData;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		SaveData=Parms.SaveData;
	}
	else if (auto I = (const ISGSaveableInterface*)(O->GetNativeInterfaceAddress(USGSaveableInterface::StaticClass())))
	{
		Parms.ReturnValue = I->SaveData_Implementation(SaveData);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Called when the object should save its data\n     * @param SaveData The save data container to write to\n     * @return true if save was successful\n     */" },
#endif
		{ "ModuleRelativePath", "Core/SGSaveableInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the object should save its data\n@param SaveData The save data container to write to\n@return true if save was successful" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSaveableInterface_eventSaveData_Parms, SaveData), Z_Construct_UScriptStruct_FSGSaveData, METADATA_PARAMS(0, nullptr) }; // 1211084737
void Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSaveableInterface_eventSaveData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSaveableInterface_eventSaveData_Parms), &Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::NewProp_SaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSaveableInterface, nullptr, "SaveData", Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::PropPointers), sizeof(SGSaveableInterface_eventSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSaveableInterface_eventSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSaveableInterface_SaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSaveableInterface_SaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGSaveableInterface::execSaveData)
{
	P_GET_STRUCT_REF(FSGSaveData,Z_Param_Out_SaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveData_Implementation(Z_Param_Out_SaveData);
	P_NATIVE_END;
}
// ********** End Interface USGSaveableInterface Function SaveData *********************************

// ********** Begin Interface USGSaveableInterface *************************************************
void USGSaveableInterface::StaticRegisterNativesUSGSaveableInterface()
{
	UClass* Class = USGSaveableInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSaveID", &ISGSaveableInterface::execGetSaveID },
		{ "GetSavePriority", &ISGSaveableInterface::execGetSavePriority },
		{ "LoadData", &ISGSaveableInterface::execLoadData },
		{ "SaveData", &ISGSaveableInterface::execSaveData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGSaveableInterface;
UClass* USGSaveableInterface::GetPrivateStaticClass()
{
	using TClass = USGSaveableInterface;
	if (!Z_Registration_Info_UClass_USGSaveableInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGSaveableInterface"),
			Z_Registration_Info_UClass_USGSaveableInterface.InnerSingleton,
			StaticRegisterNativesUSGSaveableInterface,
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
	return Z_Registration_Info_UClass_USGSaveableInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSaveableInterface_NoRegister()
{
	return USGSaveableInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSaveableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/SGSaveableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGSaveableInterface_GetSaveID, "GetSaveID" }, // 3423472669
		{ &Z_Construct_UFunction_USGSaveableInterface_GetSavePriority, "GetSavePriority" }, // 3399142508
		{ &Z_Construct_UFunction_USGSaveableInterface_LoadData, "LoadData" }, // 4200257643
		{ &Z_Construct_UFunction_USGSaveableInterface_SaveData, "SaveData" }, // 3867119719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISGSaveableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGSaveableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSaveableInterface_Statics::ClassParams = {
	&USGSaveableInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSaveableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSaveableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGSaveableInterface()
{
	if (!Z_Registration_Info_UClass_USGSaveableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSaveableInterface.OuterSingleton, Z_Construct_UClass_USGSaveableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSaveableInterface.OuterSingleton;
}
USGSaveableInterface::USGSaveableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGSaveableInterface);
// ********** End Interface USGSaveableInterface ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSaveableInterface, USGSaveableInterface::StaticClass, TEXT("USGSaveableInterface"), &Z_Registration_Info_UClass_USGSaveableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSaveableInterface), 3905017460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h__Script_SocialGolf_3599793201(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
