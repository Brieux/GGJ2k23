// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/Devices/WM_Device_HID.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_Device_HID() {}
// Cross Module References
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_HID();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_HID_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_AxisData();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_ButtonData();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_DeviceInfo();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_DPADData();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_XInputWrap();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap;
class UScriptStruct* FWM_HID_XInputWrap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_HID_XInputWrap, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_HID_XInputWrap"));
	}
	return Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_HID_XInputWrap>()
{
	return FWM_HID_XInputWrap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_HID_XInputWrap>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_HID_XInputWrap",
		sizeof(FWM_HID_XInputWrap),
		alignof(FWM_HID_XInputWrap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_XInputWrap()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap.InnerSingleton, Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo;
class UScriptStruct* FWM_HID_DeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_HID_DeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_HID_DeviceInfo>()
{
	return FWM_HID_DeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManufacturerString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ManufacturerString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerialNumberString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SerialNumberString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VID_HEX_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VID_HEX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PID_HEX_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PID_HEX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_HEX_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version_HEX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VPID_HEX_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VPID_HEX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VID_PID__MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VID_PID_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParserVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParserVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_HID_DeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ProductString_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ProductString = { "ProductString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, ProductString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ProductString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ProductString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ManufacturerString_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ManufacturerString = { "ManufacturerString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, ManufacturerString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ManufacturerString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ManufacturerString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_SerialNumberString_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_SerialNumberString = { "SerialNumberString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, SerialNumberString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_SerialNumberString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_SerialNumberString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID = { "VID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, VID), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID = { "PID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, PID), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_HEX_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_HEX = { "VID_HEX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, VID_HEX), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_HEX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_HEX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_HEX_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_HEX = { "PID_HEX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, PID_HEX), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_HEX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_HEX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_HEX_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_HEX = { "Version_HEX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, Version_HEX), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_HEX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_HEX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VPID_HEX_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VPID_HEX = { "VPID_HEX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, VPID_HEX), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VPID_HEX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VPID_HEX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_PID__MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_PID_ = { "VID_PID_", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, VID_PID_), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_PID__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_PID__MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ParserVersion_MetaData[] = {
		{ "Category", "HID_Info" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ParserVersion = { "ParserVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_DeviceInfo, ParserVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ParserVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ParserVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ProductString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ManufacturerString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_SerialNumberString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_HEX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_PID_HEX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_Version_HEX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VPID_HEX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_VID_PID_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewProp_ParserVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_HID_DeviceInfo",
		sizeof(FWM_HID_DeviceInfo),
		alignof(FWM_HID_DeviceInfo),
		Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_DeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWM_AxisCodeTable;
	static UEnum* EWM_AxisCodeTable_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWM_AxisCodeTable.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWM_AxisCodeTable.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("EWM_AxisCodeTable"));
		}
		return Z_Registration_Info_UEnum_EWM_AxisCodeTable.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<EWM_AxisCodeTable>()
	{
		return EWM_AxisCodeTable_StaticEnum();
	}
	struct Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::Enumerators[] = {
		{ "EWM_AxisCodeTable::NoFlags", (int64)EWM_AxisCodeTable::NoFlags },
		{ "EWM_AxisCodeTable::X_Axis", (int64)EWM_AxisCodeTable::X_Axis },
		{ "EWM_AxisCodeTable::Y_Axis", (int64)EWM_AxisCodeTable::Y_Axis },
		{ "EWM_AxisCodeTable::Z_Axis", (int64)EWM_AxisCodeTable::Z_Axis },
		{ "EWM_AxisCodeTable::X_Rot", (int64)EWM_AxisCodeTable::X_Rot },
		{ "EWM_AxisCodeTable::Y_Rot", (int64)EWM_AxisCodeTable::Y_Rot },
		{ "EWM_AxisCodeTable::Z_Rot", (int64)EWM_AxisCodeTable::Z_Rot },
		{ "EWM_AxisCodeTable::Slider", (int64)EWM_AxisCodeTable::Slider },
		{ "EWM_AxisCodeTable::Dial", (int64)EWM_AxisCodeTable::Dial },
		{ "EWM_AxisCodeTable::Wheel", (int64)EWM_AxisCodeTable::Wheel },
		{ "EWM_AxisCodeTable::Hat", (int64)EWM_AxisCodeTable::Hat },
		{ "EWM_AxisCodeTable::Vx", (int64)EWM_AxisCodeTable::Vx },
		{ "EWM_AxisCodeTable::Vy", (int64)EWM_AxisCodeTable::Vy },
		{ "EWM_AxisCodeTable::Vz", (int64)EWM_AxisCodeTable::Vz },
		{ "EWM_AxisCodeTable::Vrx", (int64)EWM_AxisCodeTable::Vrx },
		{ "EWM_AxisCodeTable::Vry", (int64)EWM_AxisCodeTable::Vry },
		{ "EWM_AxisCodeTable::Vrz", (int64)EWM_AxisCodeTable::Vrz },
		{ "EWM_AxisCodeTable::Rudder", (int64)EWM_AxisCodeTable::Rudder },
		{ "EWM_AxisCodeTable::Throttle", (int64)EWM_AxisCodeTable::Throttle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///for getting all types of axis\n" },
		{ "Dial.Name", "EWM_AxisCodeTable::Dial" },
		{ "Hat.Name", "EWM_AxisCodeTable::Hat" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "NoFlags.Name", "EWM_AxisCodeTable::NoFlags" },
		{ "Rudder.Name", "EWM_AxisCodeTable::Rudder" },
		{ "Slider.Name", "EWM_AxisCodeTable::Slider" },
		{ "Throttle.Name", "EWM_AxisCodeTable::Throttle" },
		{ "ToolTip", "for getting all types of axis" },
		{ "Vrx.Name", "EWM_AxisCodeTable::Vrx" },
		{ "Vry.Name", "EWM_AxisCodeTable::Vry" },
		{ "Vrz.Name", "EWM_AxisCodeTable::Vrz" },
		{ "Vx.Name", "EWM_AxisCodeTable::Vx" },
		{ "Vy.Name", "EWM_AxisCodeTable::Vy" },
		{ "Vz.Name", "EWM_AxisCodeTable::Vz" },
		{ "Wheel.Name", "EWM_AxisCodeTable::Wheel" },
		{ "X_Axis.Name", "EWM_AxisCodeTable::X_Axis" },
		{ "X_Rot.Name", "EWM_AxisCodeTable::X_Rot" },
		{ "Y_Axis.Name", "EWM_AxisCodeTable::Y_Axis" },
		{ "Y_Rot.Name", "EWM_AxisCodeTable::Y_Rot" },
		{ "Z_Axis.Name", "EWM_AxisCodeTable::Z_Axis" },
		{ "Z_Rot.Name", "EWM_AxisCodeTable::Z_Rot" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		"EWM_AxisCodeTable",
		"EWM_AxisCodeTable",
		Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable()
	{
		if (!Z_Registration_Info_UEnum_EWM_AxisCodeTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWM_AxisCodeTable.InnerSingleton, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWM_AxisCodeTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_HID_ButtonData;
class UScriptStruct* FWM_HID_ButtonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_HID_ButtonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_HID_ButtonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_HID_ButtonData, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_HID_ButtonData"));
	}
	return Z_Registration_Info_UScriptStruct_WM_HID_ButtonData.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_HID_ButtonData>()
{
	return FWM_HID_ButtonData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPressed_MetaData[];
#endif
		static void NewProp_bIsPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTriggerState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyTriggerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonBindingCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ButtonBindingCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_HID_ButtonData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_bIsPressed_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_bIsPressed_SetBit(void* Obj)
	{
		((FWM_HID_ButtonData*)Obj)->bIsPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWM_HID_ButtonData), &Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_bIsPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_bIsPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonNumber_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonNumber = { "ButtonNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_ButtonData, ButtonNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_KeyTriggerState_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_KeyTriggerState = { "KeyTriggerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_ButtonData, KeyTriggerState), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState, METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_KeyTriggerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_KeyTriggerState_MetaData)) }; // 1873072561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonBindingCode_MetaData[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonBindingCode = { "ButtonBindingCode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_ButtonData, ButtonBindingCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonBindingCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonBindingCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_bIsPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_KeyTriggerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewProp_ButtonBindingCode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_HID_ButtonData",
		sizeof(FWM_HID_ButtonData),
		alignof(FWM_HID_ButtonData),
		Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_ButtonData()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_HID_ButtonData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_HID_ButtonData.InnerSingleton, Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_HID_ButtonData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_HID_AxisData;
class UScriptStruct* FWM_HID_AxisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_HID_AxisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_HID_AxisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_HID_AxisData, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_HID_AxisData"));
	}
	return Z_Registration_Info_UScriptStruct_WM_HID_AxisData.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_HID_AxisData>()
{
	return FWM_HID_AxisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicalMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogicalMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicalMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogicalMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicalCenter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LogicalCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicalRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LogicalRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedRawValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedRawValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenteredValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenteredValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_axisEnum_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisEnum_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_axisEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisBindingCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AxisBindingCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_HID_AxisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMin_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMin = { "LogicalMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, LogicalMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMax_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMax = { "LogicalMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, LogicalMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalCenter_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalCenter = { "LogicalCenter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, LogicalCenter), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalRange_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalRange = { "LogicalRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, LogicalRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_RawValue_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, RawValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_RawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_RawValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_NormalizedRawValue_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_NormalizedRawValue = { "NormalizedRawValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, NormalizedRawValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_NormalizedRawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_NormalizedRawValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_CenteredValue_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_CenteredValue = { "CenteredValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, CenteredValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_CenteredValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_CenteredValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisValue_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, axisValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisEnum_MetaData[] = {
		{ "Category", "Axis" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Axis\")\n\x09\x09""float BitFloatValue = 0.0f;*/" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Axis\")\n               float BitFloatValue = 0.0f;" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisEnum = { "axisEnum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, axisEnum), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisEnum_MetaData)) }; // 22998792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_AxisBindingCode_MetaData[] = {
		{ "Category", "Axis" },
		{ "Comment", "//bool bInverted = false;\n" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ToolTip", "bool bInverted = false;" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_AxisBindingCode = { "AxisBindingCode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, AxisBindingCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_AxisBindingCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_AxisBindingCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_instance_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisData, instance), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_instance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_LogicalRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_RawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_NormalizedRawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_CenteredValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisEnum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_axisEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_AxisBindingCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewProp_instance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_HID_AxisData",
		sizeof(FWM_HID_AxisData),
		alignof(FWM_HID_AxisData),
		Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_AxisData()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_HID_AxisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_HID_AxisData.InnerSingleton, Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_HID_AxisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_HID_DPADData;
class UScriptStruct* FWM_HID_DPADData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_HID_DPADData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_HID_DPADData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_HID_DPADData, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_HID_DPADData"));
	}
	return Z_Registration_Info_UScriptStruct_WM_HID_DPADData.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_HID_DPADData>()
{
	return FWM_HID_DPADData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_HID_DPADData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_HID_DPADData",
		sizeof(FWM_HID_DPADData),
		alignof(FWM_HID_DPADData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_DPADData()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_HID_DPADData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_HID_DPADData.InnerSingleton, Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_HID_DPADData.InnerSingleton;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetButtonKeyValue)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_ButtonValue);
		P_GET_UBOOL_REF(Z_Param_Out_isValid_WM_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetButtonKeyValue(Z_Param_Key,Z_Param_Out_ButtonValue,Z_Param_Out_isValid_WM_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetAxisKeyValue)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AxisValue);
		P_GET_UBOOL_REF(Z_Param_Out_isValid_WM_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisKeyValue(Z_Param_Key,Z_Param_Out_AxisValue,Z_Param_Out_isValid_WM_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetRaw_AxisValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRaw_AxisValue(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetRaw_ButtonValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_UBOOL_REF(Z_Param_Out_buttonValue);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_KeyTriggerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRaw_ButtonValue(Z_Param_index,Z_Param_Out_buttonValue,(TEnumAsByte<EWM_KeyTriggerState>&)(Z_Param_Out_KeyTriggerState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetRaw_DPADData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_UBOOL_REF(Z_Param_Out_UP);
		P_GET_UBOOL_REF(Z_Param_Out_DOWN);
		P_GET_UBOOL_REF(Z_Param_Out_LEFT);
		P_GET_UBOOL_REF(Z_Param_Out_RIGHT);
		P_GET_ENUM_REF(EWM_AxisCodeTable,Z_Param_Out_axisEnum);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AxisBindingCode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_axisHEX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_instance);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRaw_DPADData(Z_Param_index,Z_Param_Out_UP,Z_Param_Out_DOWN,Z_Param_Out_LEFT,Z_Param_Out_RIGHT,(EWM_AxisCodeTable&)(Z_Param_Out_axisEnum),Z_Param_Out_AxisBindingCode,Z_Param_Out_axisHEX,Z_Param_Out_instance,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetRaw_AxisData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWM_HID_AxisData*)Z_Param__Result=P_THIS->GetRaw_AxisData(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetRaw_Available_DPADs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetRaw_Available_DPADs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetRaw_Available_Axes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetRaw_Available_Axes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_Device_HID::execGetRaw_Available_Buttons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetRaw_Available_Buttons();
		P_NATIVE_END;
	}
	void UWM_Device_HID::StaticRegisterNativesUWM_Device_HID()
	{
		UClass* Class = UWM_Device_HID::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAxisKeyValue", &UWM_Device_HID::execGetAxisKeyValue },
			{ "GetButtonKeyValue", &UWM_Device_HID::execGetButtonKeyValue },
			{ "GetRaw_Available_Axes", &UWM_Device_HID::execGetRaw_Available_Axes },
			{ "GetRaw_Available_Buttons", &UWM_Device_HID::execGetRaw_Available_Buttons },
			{ "GetRaw_Available_DPADs", &UWM_Device_HID::execGetRaw_Available_DPADs },
			{ "GetRaw_AxisData", &UWM_Device_HID::execGetRaw_AxisData },
			{ "GetRaw_AxisValue", &UWM_Device_HID::execGetRaw_AxisValue },
			{ "GetRaw_ButtonValue", &UWM_Device_HID::execGetRaw_ButtonValue },
			{ "GetRaw_DPADData", &UWM_Device_HID::execGetRaw_DPADData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics
	{
		struct WM_Device_HID_eventGetAxisKeyValue_Parms
		{
			FKey Key;
			float AxisValue;
			bool isValid_WM_Key;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static void NewProp_isValid_WM_Key_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isValid_WM_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetAxisKeyValue_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetAxisKeyValue_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_isValid_WM_Key_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetAxisKeyValue_Parms*)Obj)->isValid_WM_Key = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_isValid_WM_Key = { "isValid_WM_Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetAxisKeyValue_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_isValid_WM_Key_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::NewProp_isValid_WM_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyValues" },
		{ "Comment", "/**Use Only WM_Gamepad Keys !  */" },
		{ "DisplayName", "GetAxisKeyValue" },
		{ "Keywords", "Get Axis Key Value" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ToolTip", "Use Only WM_Gamepad Keys !" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetAxisKeyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::WM_Device_HID_eventGetAxisKeyValue_Parms), Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics
	{
		struct WM_Device_HID_eventGetButtonKeyValue_Parms
		{
			FKey Key;
			bool ButtonValue;
			bool isValid_WM_Key;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ButtonValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ButtonValue;
		static void NewProp_isValid_WM_Key_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isValid_WM_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetButtonKeyValue_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_ButtonValue_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetButtonKeyValue_Parms*)Obj)->ButtonValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_ButtonValue = { "ButtonValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetButtonKeyValue_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_ButtonValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_isValid_WM_Key_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetButtonKeyValue_Parms*)Obj)->isValid_WM_Key = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_isValid_WM_Key = { "isValid_WM_Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetButtonKeyValue_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_isValid_WM_Key_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_ButtonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::NewProp_isValid_WM_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyValues" },
		{ "Comment", "/**Use Only WM_Gamepad Keys !  */" },
		{ "DisplayName", "GetButtonKeyValue" },
		{ "Keywords", "Get Button Key Value" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ToolTip", "Use Only WM_Gamepad Keys !" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetButtonKeyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::WM_Device_HID_eventGetButtonKeyValue_Parms), Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics
	{
		struct WM_Device_HID_eventGetRaw_Available_Axes_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_Available_Axes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawData" },
		{ "DisplayName", "GetRaw_Available Axes" },
		{ "Keywords", "Get Available Raw" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetRaw_Available_Axes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::WM_Device_HID_eventGetRaw_Available_Axes_Parms), Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics
	{
		struct WM_Device_HID_eventGetRaw_Available_Buttons_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_Available_Buttons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawData" },
		{ "DisplayName", "GetRaw_Available Buttons" },
		{ "Keywords", "Get Available Raw Buttons" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetRaw_Available_Buttons", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::WM_Device_HID_eventGetRaw_Available_Buttons_Parms), Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics
	{
		struct WM_Device_HID_eventGetRaw_Available_DPADs_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_Available_DPADs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawData" },
		{ "DisplayName", "GetRaw_Available DPADs" },
		{ "Keywords", "Get Available DPads" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetRaw_Available_DPADs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::WM_Device_HID_eventGetRaw_Available_DPADs_Parms), Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics
	{
		struct WM_Device_HID_eventGetRaw_AxisData_Parms
		{
			int32 index;
			FWM_HID_AxisData ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_AxisData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_AxisData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWM_HID_AxisData, METADATA_PARAMS(nullptr, 0) }; // 3573016684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawData" },
		{ "DisplayName", "GetRaw_Axis Data" },
		{ "Keywords", "Get Raw Axis Data" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetRaw_AxisData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::WM_Device_HID_eventGetRaw_AxisData_Parms), Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics
	{
		struct WM_Device_HID_eventGetRaw_AxisValue_Parms
		{
			int32 index;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_AxisValue_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_AxisValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawData" },
		{ "DisplayName", "GetRaw_Axis Value" },
		{ "Keywords", "Get Raw Axis Value" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetRaw_AxisValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::WM_Device_HID_eventGetRaw_AxisValue_Parms), Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics
	{
		struct WM_Device_HID_eventGetRaw_ButtonValue_Parms
		{
			int32 index;
			bool buttonValue;
			TEnumAsByte<EWM_KeyTriggerState> KeyTriggerState;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_buttonValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_buttonValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyTriggerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_ButtonValue_Parms, index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_buttonValue_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetRaw_ButtonValue_Parms*)Obj)->buttonValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_buttonValue = { "buttonValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetRaw_ButtonValue_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_buttonValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_KeyTriggerState = { "KeyTriggerState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_ButtonValue_Parms, KeyTriggerState), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState, METADATA_PARAMS(nullptr, 0) }; // 1873072561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_buttonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::NewProp_KeyTriggerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawData" },
		{ "DisplayName", "GetRaw_Button Value" },
		{ "Keywords", "Get Raw Button Value" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetRaw_ButtonValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::WM_Device_HID_eventGetRaw_ButtonValue_Parms), Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics
	{
		struct WM_Device_HID_eventGetRaw_DPADData_Parms
		{
			int32 index;
			bool UP;
			bool DOWN;
			bool LEFT;
			bool RIGHT;
			EWM_AxisCodeTable axisEnum;
			FString AxisBindingCode;
			FString axisHEX;
			int32 instance;
			float value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_UP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UP;
		static void NewProp_DOWN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DOWN;
		static void NewProp_LEFT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LEFT;
		static void NewProp_RIGHT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RIGHT;
		static const UECodeGen_Private::FBytePropertyParams NewProp_axisEnum_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_axisEnum;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AxisBindingCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_axisHEX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_DPADData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_UP_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetRaw_DPADData_Parms*)Obj)->UP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_UP = { "UP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetRaw_DPADData_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_UP_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_DOWN_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetRaw_DPADData_Parms*)Obj)->DOWN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_DOWN = { "DOWN", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetRaw_DPADData_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_DOWN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_LEFT_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetRaw_DPADData_Parms*)Obj)->LEFT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_LEFT = { "LEFT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetRaw_DPADData_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_LEFT_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_RIGHT_SetBit(void* Obj)
	{
		((WM_Device_HID_eventGetRaw_DPADData_Parms*)Obj)->RIGHT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_RIGHT = { "RIGHT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_Device_HID_eventGetRaw_DPADData_Parms), &Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_RIGHT_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_axisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_axisEnum = { "axisEnum", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_DPADData_Parms, axisEnum), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_AxisCodeTable, METADATA_PARAMS(nullptr, 0) }; // 22998792
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_AxisBindingCode = { "AxisBindingCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_DPADData_Parms, AxisBindingCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_axisHEX = { "axisHEX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_DPADData_Parms, axisHEX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_DPADData_Parms, instance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_Device_HID_eventGetRaw_DPADData_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_UP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_DOWN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_LEFT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_RIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_axisEnum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_axisEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_AxisBindingCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_axisHEX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawData" },
		{ "DisplayName", "GetRaw_DPAD Data" },
		{ "Keywords", "Get Raw DPAD Data" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_Device_HID, nullptr, "GetRaw_DPADData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::WM_Device_HID_eventGetRaw_DPADData_Parms), Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_Device_HID);
	UClass* Z_Construct_UClass_UWM_Device_HID_NoRegister()
	{
		return UWM_Device_HID::StaticClass();
	}
	struct Z_Construct_UClass_UWM_Device_HID_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_XInput_MetaData[];
#endif
		static void NewProp_is_XInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_XInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_XInputInitialized_MetaData[];
#endif
		static void NewProp_is_XInputInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_XInputInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_XInputSlotGuess_MetaData[];
#endif
		static void NewProp_is_XInputSlotGuess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_XInputSlotGuess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_I_D_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X_I_D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_Steam_MetaData[];
#endif
		static void NewProp_is_Steam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_Steam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPressedRawKey_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstPressedRawKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_Device_HID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWM_Device,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWM_Device_HID_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWM_Device_HID_GetAxisKeyValue, "GetAxisKeyValue" }, // 3335868560
		{ &Z_Construct_UFunction_UWM_Device_HID_GetButtonKeyValue, "GetButtonKeyValue" }, // 2291894629
		{ &Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Axes, "GetRaw_Available_Axes" }, // 1803554148
		{ &Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_Buttons, "GetRaw_Available_Buttons" }, // 3337072375
		{ &Z_Construct_UFunction_UWM_Device_HID_GetRaw_Available_DPADs, "GetRaw_Available_DPADs" }, // 1590659213
		{ &Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisData, "GetRaw_AxisData" }, // 3339206853
		{ &Z_Construct_UFunction_UWM_Device_HID_GetRaw_AxisValue, "GetRaw_AxisValue" }, // 1376163454
		{ &Z_Construct_UFunction_UWM_Device_HID_GetRaw_ButtonValue, "GetRaw_ButtonValue" }, // 89509068
		{ &Z_Construct_UFunction_UWM_Device_HID_GetRaw_DPADData, "GetRaw_DPADData" }, // 2698626238
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//UCLASS(Blueprintable,nonTransient)\n" },
		{ "IncludePath", "Devices/WM_Device_HID.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UCLASS(Blueprintable,nonTransient)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_DeviceInfo_MetaData[] = {
		{ "Category", "HID" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_DeviceInfo = { "DeviceInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device_HID, DeviceInfo), Z_Construct_UScriptStruct_FWM_HID_DeviceInfo, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_DeviceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_DeviceInfo_MetaData)) }; // 1295134500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInput_MetaData[] = {
		{ "Category", "HID" },
		{ "Comment", "//////////// XINPUT /////////////////\n" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ToolTip", "XINPUT" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInput_SetBit(void* Obj)
	{
		((UWM_Device_HID*)Obj)->is_XInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInput = { "is_XInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device_HID), &Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputInitialized_MetaData[] = {
		{ "Category", "HID" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputInitialized_SetBit(void* Obj)
	{
		((UWM_Device_HID*)Obj)->is_XInputInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputInitialized = { "is_XInputInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device_HID), &Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputSlotGuess_MetaData[] = {
		{ "Category", "HID" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputSlotGuess_SetBit(void* Obj)
	{
		((UWM_Device_HID*)Obj)->is_XInputSlotGuess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputSlotGuess = { "is_XInputSlotGuess", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device_HID), &Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputSlotGuess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputSlotGuess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputSlotGuess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_X_I_D_MetaData[] = {
		{ "Category", "HID" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_X_I_D = { "X_I_D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device_HID, X_I_D), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_X_I_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_X_I_D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_Steam_MetaData[] = {
		{ "Category", "HID" },
		{ "Comment", "//////////// STEAM /////////////////\n" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ToolTip", "STEAM" },
	};
#endif
	void Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_Steam_SetBit(void* Obj)
	{
		((UWM_Device_HID*)Obj)->is_Steam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_Steam = { "is_Steam", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Device_HID), &Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_Steam_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_Steam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_Steam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_FirstPressedRawKey_MetaData[] = {
		{ "Category", "WM_Device_HID" },
		{ "Comment", "//detect first hold key\n" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_HID.h" },
		{ "ToolTip", "detect first hold key" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_FirstPressedRawKey = { "FirstPressedRawKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Device_HID, FirstPressedRawKey), METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_FirstPressedRawKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_FirstPressedRawKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWM_Device_HID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_DeviceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_XInputSlotGuess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_X_I_D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_is_Steam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Device_HID_Statics::NewProp_FirstPressedRawKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_Device_HID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_Device_HID>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_Device_HID_Statics::ClassParams = {
		&UWM_Device_HID::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWM_Device_HID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_Device_HID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_HID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_Device_HID()
	{
		if (!Z_Registration_Info_UClass_UWM_Device_HID.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_Device_HID.OuterSingleton, Z_Construct_UClass_UWM_Device_HID_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_Device_HID.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_Device_HID>()
	{
		return UWM_Device_HID::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_Device_HID);
	UWM_Device_HID::~UWM_Device_HID() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::EnumInfo[] = {
		{ EWM_AxisCodeTable_StaticEnum, TEXT("EWM_AxisCodeTable"), &Z_Registration_Info_UEnum_EWM_AxisCodeTable, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 22998792U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::ScriptStructInfo[] = {
		{ FWM_HID_XInputWrap::StaticStruct, Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics::NewStructOps, TEXT("WM_HID_XInputWrap"), &Z_Registration_Info_UScriptStruct_WM_HID_XInputWrap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_HID_XInputWrap), 3815373415U) },
		{ FWM_HID_DeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics::NewStructOps, TEXT("WM_HID_DeviceInfo"), &Z_Registration_Info_UScriptStruct_WM_HID_DeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_HID_DeviceInfo), 1295134500U) },
		{ FWM_HID_ButtonData::StaticStruct, Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics::NewStructOps, TEXT("WM_HID_ButtonData"), &Z_Registration_Info_UScriptStruct_WM_HID_ButtonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_HID_ButtonData), 4072549116U) },
		{ FWM_HID_AxisData::StaticStruct, Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics::NewStructOps, TEXT("WM_HID_AxisData"), &Z_Registration_Info_UScriptStruct_WM_HID_AxisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_HID_AxisData), 3573016684U) },
		{ FWM_HID_DPADData::StaticStruct, Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics::NewStructOps, TEXT("WM_HID_DPADData"), &Z_Registration_Info_UScriptStruct_WM_HID_DPADData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_HID_DPADData), 3966869602U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_Device_HID, UWM_Device_HID::StaticClass, TEXT("UWM_Device_HID"), &Z_Registration_Info_UClass_UWM_Device_HID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_Device_HID), 3499170554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_1290002948(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
