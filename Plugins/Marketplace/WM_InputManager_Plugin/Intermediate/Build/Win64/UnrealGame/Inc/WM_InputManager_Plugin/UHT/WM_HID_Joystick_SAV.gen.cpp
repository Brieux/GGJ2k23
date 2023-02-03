// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/Devices/MEM/WM_HID_Joystick_SAV.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_HID_Joystick_SAV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_HID_Joystick_SAV();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_HID_Joystick_SAV_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHID_Joystick_CONFIG();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration;
class UScriptStruct* FWM_HID_AxisConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_HID_AxisConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_HID_AxisConfiguration>()
{
	return FWM_HID_AxisConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInverted_MetaData[];
#endif
		static void NewProp_bInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPedal_MetaData[];
#endif
		static void NewProp_bIsPedal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPedal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_HID_AxisConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bInverted_MetaData[] = {
		{ "Category", "Axis Property" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bInverted_SetBit(void* Obj)
	{
		((FWM_HID_AxisConfiguration*)Obj)->bInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bInverted = { "bInverted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWM_HID_AxisConfiguration), &Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bInverted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bInverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bIsPedal_MetaData[] = {
		{ "Category", "Axis Property" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bIsPedal_SetBit(void* Obj)
	{
		((FWM_HID_AxisConfiguration*)Obj)->bIsPedal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bIsPedal = { "bIsPedal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWM_HID_AxisConfiguration), &Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bIsPedal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bIsPedal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bIsPedal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "Category", "Axis Property" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisConfiguration, Sensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_Sensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_Sensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_DeadZone_MetaData[] = {
		{ "Category", "Axis Property" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWM_HID_AxisConfiguration, DeadZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_DeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_DeadZone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_bIsPedal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_Sensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewProp_DeadZone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_HID_AxisConfiguration",
		sizeof(FWM_HID_AxisConfiguration),
		alignof(FWM_HID_AxisConfiguration),
		Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG;
class UScriptStruct* FHID_Joystick_CONFIG::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("HID_Joystick_CONFIG"));
	}
	return Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FHID_Joystick_CONFIG>()
{
	return FHID_Joystick_CONFIG::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_KEY_TYPES_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KEY_TYPES_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KEY_TYPES_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KEY_TYPES;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AXIS_BINDINGS_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AXIS_BINDINGS_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AXIS_BINDINGS_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AXIS_BINDINGS;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BUTTONS_BINDINGS_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BUTTONS_BINDINGS_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BUTTONS_BINDINGS_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BUTTONS_BINDINGS;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DPADS_BINDINGS_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DPADS_BINDINGS_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DPADS_BINDINGS_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DPADS_BINDINGS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisConfigurations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisConfigurations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisConfigurations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RAWDataRecieved_MetaData[];
#endif
		static void NewProp_RAWDataRecieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RAWDataRecieved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHID_Joystick_CONFIG>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES_ValueProp = { "KEY_TYPES", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType, METADATA_PARAMS(nullptr, 0) }; // 2369441614
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES_Key_KeyProp = { "KEY_TYPES_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES = { "KEY_TYPES", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHID_Joystick_CONFIG, KEY_TYPES), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES_MetaData)) }; // 2101135134 2369441614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS_ValueProp = { "AXIS_BINDINGS", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS_Key_KeyProp = { "AXIS_BINDINGS_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "Comment", "//All StringBindings;\n//bindings for Axis\n" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
		{ "ToolTip", "All StringBindings;\nbindings for Axis" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS = { "AXIS_BINDINGS", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHID_Joystick_CONFIG, AXIS_BINDINGS), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS_MetaData)) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS_ValueProp = { "BUTTONS_BINDINGS", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS_Key_KeyProp = { "BUTTONS_BINDINGS_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "Comment", "//bindings for Buttons\n" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
		{ "ToolTip", "bindings for Buttons" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS = { "BUTTONS_BINDINGS", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHID_Joystick_CONFIG, BUTTONS_BINDINGS), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS_MetaData)) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS_ValueProp = { "DPADS_BINDINGS", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS_Key_KeyProp = { "DPADS_BINDINGS_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS = { "DPADS_BINDINGS", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHID_Joystick_CONFIG, DPADS_BINDINGS), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AxisConfigurations_Inner = { "AxisConfigurations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration, METADATA_PARAMS(nullptr, 0) }; // 208124677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AxisConfigurations_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AxisConfigurations = { "AxisConfigurations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHID_Joystick_CONFIG, AxisConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AxisConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AxisConfigurations_MetaData)) }; // 208124677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_RAWDataRecieved_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Button Properties\") //bindings for Dpad\n\x09TMap<FKey, FString> DPADSBindings; //NOT NEEDED*/" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Button Properties\") //bindings for Dpad\n       TMap<FKey, FString> DPADSBindings; //NOT NEEDED" },
	};
#endif
	void Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_RAWDataRecieved_SetBit(void* Obj)
	{
		((FHID_Joystick_CONFIG*)Obj)->RAWDataRecieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_RAWDataRecieved = { "RAWDataRecieved", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHID_Joystick_CONFIG), &Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_RAWDataRecieved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_RAWDataRecieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_RAWDataRecieved_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_KEY_TYPES,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AXIS_BINDINGS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_BUTTONS_BINDINGS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_DPADS_BINDINGS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AxisConfigurations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_AxisConfigurations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewProp_RAWDataRecieved,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"HID_Joystick_CONFIG",
		sizeof(FHID_Joystick_CONFIG),
		alignof(FHID_Joystick_CONFIG),
		Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHID_Joystick_CONFIG()
	{
		if (!Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG.InnerSingleton, Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG.InnerSingleton;
	}
	void UWM_HID_Joystick_SAV::StaticRegisterNativesUWM_HID_Joystick_SAV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_HID_Joystick_SAV);
	UClass* Z_Construct_UClass_UWM_HID_Joystick_SAV_NoRegister()
	{
		return UWM_HID_Joystick_SAV::StaticClass();
	}
	struct Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wasInitialized_MetaData[];
#endif
		static void NewProp_wasInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wasInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_saveSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HID_JoystickConfig_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HID_JoystickConfig_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HID_JoystickConfig_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HID_JoystickConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UCLASS(Blueprintable, nonTransient)\n" },
		{ "IncludePath", "Devices/MEM/WM_HID_Joystick_SAV.h" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
		{ "ToolTip", "UCLASS(Blueprintable, nonTransient)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_wasInitialized_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	void Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_wasInitialized_SetBit(void* Obj)
	{
		((UWM_HID_Joystick_SAV*)Obj)->wasInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_wasInitialized = { "wasInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_HID_Joystick_SAV), &Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_wasInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_wasInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_wasInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_saveSlot_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_saveSlot = { "saveSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_HID_Joystick_SAV, saveSlot), METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_saveSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_saveSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_CurrentMode_MetaData[] = {
		{ "Category", "HID_JoystickConfig" },
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_CurrentMode = { "CurrentMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_HID_Joystick_SAV, CurrentMode), METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_CurrentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_CurrentMode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig_ValueProp = { "HID_JoystickConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHID_Joystick_CONFIG, METADATA_PARAMS(nullptr, 0) }; // 2709518903
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig_Key_KeyProp = { "HID_JoystickConfig_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Devices/MEM/WM_HID_Joystick_SAV.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig = { "HID_JoystickConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_HID_Joystick_SAV, HID_JoystickConfig), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig_MetaData)) }; // 2709518903
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_wasInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_saveSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_CurrentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::NewProp_HID_JoystickConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_HID_Joystick_SAV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::ClassParams = {
		&UWM_HID_Joystick_SAV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_HID_Joystick_SAV()
	{
		if (!Z_Registration_Info_UClass_UWM_HID_Joystick_SAV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_HID_Joystick_SAV.OuterSingleton, Z_Construct_UClass_UWM_HID_Joystick_SAV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_HID_Joystick_SAV.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_HID_Joystick_SAV>()
	{
		return UWM_HID_Joystick_SAV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_HID_Joystick_SAV);
	UWM_HID_Joystick_SAV::~UWM_HID_Joystick_SAV() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_Statics::ScriptStructInfo[] = {
		{ FWM_HID_AxisConfiguration::StaticStruct, Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration_Statics::NewStructOps, TEXT("WM_HID_AxisConfiguration"), &Z_Registration_Info_UScriptStruct_WM_HID_AxisConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_HID_AxisConfiguration), 208124677U) },
		{ FHID_Joystick_CONFIG::StaticStruct, Z_Construct_UScriptStruct_FHID_Joystick_CONFIG_Statics::NewStructOps, TEXT("HID_Joystick_CONFIG"), &Z_Registration_Info_UScriptStruct_HID_Joystick_CONFIG, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHID_Joystick_CONFIG), 2709518903U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_HID_Joystick_SAV, UWM_HID_Joystick_SAV::StaticClass, TEXT("UWM_HID_Joystick_SAV"), &Z_Registration_Info_UClass_UWM_HID_Joystick_SAV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_HID_Joystick_SAV), 2177712116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_2034032466(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_MEM_WM_HID_Joystick_SAV_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
