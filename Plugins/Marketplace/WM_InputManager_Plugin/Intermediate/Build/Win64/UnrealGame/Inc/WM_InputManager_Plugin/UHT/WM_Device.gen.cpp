// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/Devices/WM_Device.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_Device() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_BasicDeviceInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo;
class UScriptStruct* FWM_BasicDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_BasicDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_BasicDeviceInfo>()
{
	return FWM_BasicDeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DN_A_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DN_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DN_B_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DN_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DN_C_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DN_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DN_D_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DN_D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceTypeString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceTypeString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_BasicDeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "BasicDeviceInfo" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_BasicDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_A_MetaData[] = {
		{ "Category", "BasicDeviceInfo" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_A = { "DN_A", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_BasicDeviceInfo, DN_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_B_MetaData[] = {
		{ "Category", "BasicDeviceInfo" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_B = { "DN_B", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_BasicDeviceInfo, DN_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_C_MetaData[] = {
		{ "Category", "BasicDeviceInfo" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_C = { "DN_C", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_BasicDeviceInfo, DN_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_C_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_D_MetaData[] = {
		{ "Category", "BasicDeviceInfo" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_D = { "DN_D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_BasicDeviceInfo, DN_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceTypeString_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceTypeString = { "DeviceTypeString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_BasicDeviceInfo, DeviceTypeString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceTypeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceTypeString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DN_D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewProp_DeviceTypeString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_BasicDeviceInfo",
		sizeof(FWM_BasicDeviceInfo),
		alignof(FWM_BasicDeviceInfo),
		Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_BasicDeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "OnRawDataInitialized__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWM_Device::execisValidPlayerIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isValidPlayerIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device::execClearDeviceInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDeviceInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device::execAssignDeviceToPlayerIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignDeviceToPlayerIndex(Z_Param_index);
		P_NATIVE_END;
	}
	void UWM_Device::StaticRegisterNativesUWM_Device()
	{
		UClass* Class = UWM_Device::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignDeviceToPlayerIndex", &UWM_Device::execAssignDeviceToPlayerIndex },
			{ "ClearDeviceInput", &UWM_Device::execClearDeviceInput },
			{ "isValidPlayerIndex", &UWM_Device::execisValidPlayerIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics
	{
		struct WM_Device_eventAssignDeviceToPlayerIndex_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_eventAssignDeviceToPlayerIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_Device" },
		{ "DisplayName", "Assign Device To PlayerIndex" },
		{ "Keywords", "Assign Device To PlayerIndex" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device, nullptr, "AssignDeviceToPlayerIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::WM_Device_eventAssignDeviceToPlayerIndex_Parms), Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_ClearDeviceInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_ClearDeviceInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_Device" },
		{ "DisplayName", "ClearDeviceInput" },
		{ "Keywords", "Clear Device Input" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_ClearDeviceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device, nullptr, "ClearDeviceInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_ClearDeviceInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_ClearDeviceInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_ClearDeviceInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_ClearDeviceInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics
	{
		struct WM_Device_eventisValidPlayerIndex_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WM_Device_eventisValidPlayerIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_eventisValidPlayerIndex_Parms), &Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device, nullptr, "isValidPlayerIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::WM_Device_eventisValidPlayerIndex_Parms), Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_isValidPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_isValidPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_Device);
	UClass* Z_Construct_UClass_UWM_Device_NoRegister()
	{
		return UWM_Device::StaticClass();
	}
	struct Z_Construct_UClass_UWM_Device_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicDeviceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasicDeviceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRawDataInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawDataInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawDataWasInitialized_MetaData[];
#endif
		static void NewProp_RawDataWasInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RawDataWasInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SAVESTRING_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SAVESTRING;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueDeviceSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniqueDeviceSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerAssigment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerAssigment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerAssigment_pending_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerAssigment_pending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceActivityDetected_MetaData[];
#endif
		static void NewProp_DeviceActivityDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DeviceActivityDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isSelected_MetaData[];
#endif
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueHandleString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueHandleString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_packetNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_packetNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_Device_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWM_Device_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWM_Device_AssignDeviceToPlayerIndex, "AssignDeviceToPlayerIndex" }, // 3894830191
		{ &Z_Construct_UFunction_UWM_Device_ClearDeviceInput, "ClearDeviceInput" }, // 3056387636
		{ &Z_Construct_UFunction_UWM_Device_isValidPlayerIndex, "isValidPlayerIndex" }, // 1385352924
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///onRaw data collected\n" },
		{ "IncludePath", "Devices/WM_Device.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "onRaw data collected" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_BasicDeviceInfo_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_BasicDeviceInfo = { "BasicDeviceInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, BasicDeviceInfo), Z_Construct_UScriptStruct_FWM_BasicDeviceInfo, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_BasicDeviceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_BasicDeviceInfo_MetaData)) }; // 3348988061
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_OnRawDataInitialized_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_OnRawDataInitialized = { "OnRawDataInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, OnRawDataInitialized), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnRawDataInitialized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_OnRawDataInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_OnRawDataInitialized_MetaData)) }; // 2833505483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((UWM_Device*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device), &Z_Construct_UClass_UWM_Device_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_RawDataWasInitialized_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_Statics::NewProp_RawDataWasInitialized_SetBit(void* Obj)
	{
		((UWM_Device*)Obj)->RawDataWasInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_RawDataWasInitialized = { "RawDataWasInitialized", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device), &Z_Construct_UClass_UWM_Device_Statics::NewProp_RawDataWasInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_RawDataWasInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_RawDataWasInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_SAVESTRING_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_SAVESTRING = { "SAVESTRING", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, SAVESTRING), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_SAVESTRING_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_SAVESTRING_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "Comment", "//globalProperty\n" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
		{ "ToolTip", "globalProperty" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, DeviceType), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceType_MetaData)) }; // 3753428317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceSlot_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceSlot = { "DeviceSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, DeviceSlot), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueDeviceSlot_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueDeviceSlot = { "UniqueDeviceSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, UniqueDeviceSlot), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueDeviceSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueDeviceSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment = { "ControllerAssigment", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, ControllerAssigment), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_pending_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_pending = { "ControllerAssigment_pending", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, ControllerAssigment_pending), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_pending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_pending_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceActivityDetected_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceActivityDetected_SetBit(void* Obj)
	{
		((UWM_Device*)Obj)->DeviceActivityDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceActivityDetected = { "DeviceActivityDetected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device), &Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceActivityDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceActivityDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceActivityDetected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_isSelected_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UWM_Device*)Obj)->isSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device), &Z_Construct_UClass_UWM_Device_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_isSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_isSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueHandleString_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "Comment", "//not needed anymore\n" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
		{ "ToolTip", "not needed anymore" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueHandleString = { "UniqueHandleString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, UniqueHandleString), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueHandleString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueHandleString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Statics::NewProp_packetNum_MetaData[] = {
		{ "Category", "WM_Device" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Device_Statics::NewProp_packetNum = { "packetNum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device, packetNum), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::NewProp_packetNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::NewProp_packetNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWM_Device_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_BasicDeviceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_OnRawDataInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_RawDataWasInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_SAVESTRING,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueDeviceSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_ControllerAssigment_pending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_DeviceActivityDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_isSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_UniqueHandleString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_Statics::NewProp_packetNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_Device_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_Device>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_Device_Statics::ClassParams = {
		&UWM_Device::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWM_Device_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_Device()
	{
		if (!Z_Registration_Info_UClass_UWM_Device.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_Device.OuterSingleton, Z_Construct_UClass_UWM_Device_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_Device.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_Device>()
	{
		return UWM_Device::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_Device);
	UWM_Device::~UWM_Device() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_Statics::ScriptStructInfo[] = {
		{ FWM_BasicDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics::NewStructOps, TEXT("WM_BasicDeviceInfo"), &Z_Registration_Info_UScriptStruct_WM_BasicDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_BasicDeviceInfo), 3348988061U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_Device, UWM_Device::StaticClass, TEXT("UWM_Device"), &Z_Registration_Info_UClass_UWM_Device, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_Device), 2049720949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_278606229(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
