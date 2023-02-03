// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/WM_Settings.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_Settings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Settings();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Settings_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultDeviceMappings();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDriver_AxisDefaults();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDriver_ButtonDefaults();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERawControllerType;
	static UEnum* ERawControllerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERawControllerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERawControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("ERawControllerType"));
		}
		return Z_Registration_Info_UEnum_ERawControllerType.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<ERawControllerType>()
	{
		return ERawControllerType_StaticEnum();
	}
	struct Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::Enumerators[] = {
		{ "ERawControllerType::JoystickORGamepad", (int64)ERawControllerType::JoystickORGamepad },
		{ "ERawControllerType::Keyboard", (int64)ERawControllerType::Keyboard },
		{ "ERawControllerType::Mouse", (int64)ERawControllerType::Mouse },
		{ "ERawControllerType::Other", (int64)ERawControllerType::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::Enum_MetaDataParams[] = {
		{ "JoystickORGamepad.Name", "ERawControllerType::JoystickORGamepad" },
		{ "Keyboard.Name", "ERawControllerType::Keyboard" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
		{ "Mouse.Name", "ERawControllerType::Mouse" },
		{ "Other.Name", "ERawControllerType::Other" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		"ERawControllerType",
		"ERawControllerType",
		Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType()
	{
		if (!Z_Registration_Info_UEnum_ERawControllerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERawControllerType.InnerSingleton, Z_Construct_UEnum_WM_InputManager_Plugin_ERawControllerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERawControllerType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultDeviceMappings;
class UScriptStruct* FDefaultDeviceMappings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultDeviceMappings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultDeviceMappings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultDeviceMappings, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("DefaultDeviceMappings"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultDeviceMappings.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FDefaultDeviceMappings>()
{
	return FDefaultDeviceMappings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultAxisMappings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultAxisMappings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAxisMappings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultAxisMappings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultButtonMappings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultButtonMappings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultButtonMappings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultButtonMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultDeviceMappings>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings_ValueProp = { "DefaultAxisMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings_Key_KeyProp = { "DefaultAxisMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings_MetaData[] = {
		{ "Category", "HidDevicePreset" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings = { "DefaultAxisMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDefaultDeviceMappings, DefaultAxisMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings_ValueProp = { "DefaultButtonMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings_Key_KeyProp = { "DefaultButtonMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings_MetaData[] = {
		{ "Category", "HidDevicePreset" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings = { "DefaultButtonMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDefaultDeviceMappings, DefaultButtonMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultAxisMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewProp_DefaultButtonMappings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"DefaultDeviceMappings",
		sizeof(FDefaultDeviceMappings),
		alignof(FDefaultDeviceMappings),
		Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDefaultDeviceMappings()
	{
		if (!Z_Registration_Info_UScriptStruct_DefaultDeviceMappings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultDeviceMappings.InnerSingleton, Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DefaultDeviceMappings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Driver_AxisDefaults;
class UScriptStruct* FDriver_AxisDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Driver_AxisDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Driver_AxisDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDriver_AxisDefaults, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("Driver_AxisDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_Driver_AxisDefaults.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FDriver_AxisDefaults>()
{
	return FDriver_AxisDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_defaultMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inverted_MetaData[];
#endif
		static void NewProp_inverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pedal_MetaData[];
#endif
		static void NewProp_pedal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_pedal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDriver_AxisDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_defaultMapping_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_defaultMapping = { "defaultMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDriver_AxisDefaults, defaultMapping), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_defaultMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_defaultMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_instance_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDriver_AxisDefaults, instance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_inverted_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_inverted_SetBit(void* Obj)
	{
		((FDriver_AxisDefaults*)Obj)->inverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_inverted = { "inverted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDriver_AxisDefaults), &Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_inverted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_inverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_inverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_pedal_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_pedal_SetBit(void* Obj)
	{
		((FDriver_AxisDefaults*)Obj)->pedal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_pedal = { "pedal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDriver_AxisDefaults), &Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_pedal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_pedal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_pedal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_defaultMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_inverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewProp_pedal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"Driver_AxisDefaults",
		sizeof(FDriver_AxisDefaults),
		alignof(FDriver_AxisDefaults),
		Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDriver_AxisDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_Driver_AxisDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Driver_AxisDefaults.InnerSingleton, Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Driver_AxisDefaults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults;
class UScriptStruct* FDriver_ButtonDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDriver_ButtonDefaults, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("Driver_ButtonDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FDriver_ButtonDefaults>()
{
	return FDriver_ButtonDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_defaultIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDriver_ButtonDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::NewProp_defaultIndex_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::NewProp_defaultIndex = { "defaultIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDriver_ButtonDefaults, defaultIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::NewProp_defaultIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::NewProp_defaultIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::NewProp_defaultIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"Driver_ButtonDefaults",
		sizeof(FDriver_ButtonDefaults),
		alignof(FDriver_ButtonDefaults),
		Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDriver_ButtonDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults.InnerSingleton, Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver;
class UScriptStruct* FDeveloper_HIDDeviceDriver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("Developer_HIDDeviceDriver"));
	}
	return Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FDeveloper_HIDDeviceDriver>()
{
	return FDeveloper_HIDDeviceDriver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisDefaults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AxisDefaultsString_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisDefaultsString_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisDefaultsString_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AxisDefaultsString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonsDefaults_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonsDefaults_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonsDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ButtonsDefaults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeveloper_HIDDeviceDriver>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaults_Inner = { "AxisDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDriver_AxisDefaults, METADATA_PARAMS(nullptr, 0) }; // 154214685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaults_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaults = { "AxisDefaults", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDDeviceDriver, AxisDefaults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaults_MetaData)) }; // 154214685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDDeviceDriver, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_DeviceName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString_ValueProp = { "AxisDefaultsString", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString_Key_KeyProp = { "AxisDefaultsString_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString = { "AxisDefaultsString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDDeviceDriver, AxisDefaultsString), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString_MetaData)) }; // 2101135134
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults_ValueProp = { "ButtonsDefaults", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults_Key_KeyProp = { "ButtonsDefaults_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults = { "ButtonsDefaults", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDDeviceDriver, ButtonsDefaults), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_AxisDefaultsString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewProp_ButtonsDefaults,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"Developer_HIDDeviceDriver",
		sizeof(FDeveloper_HIDDeviceDriver),
		alignof(FDeveloper_HIDDeviceDriver),
		Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver()
	{
		if (!Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver.InnerSingleton, Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset;
class UScriptStruct* FDeveloper_HIDJoystick_Preset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("Developer_HIDJoystick_Preset"));
	}
	return Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FDeveloper_HIDJoystick_Preset>()
{
	return FDeveloper_HIDJoystick_Preset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VendorID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VendorID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AxisPreset_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AxisPreset_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisPreset_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AxisPreset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonsPreset_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonsPreset_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonsPreset_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ButtonsPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeveloper_HIDJoystick_Preset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_VendorID_MetaData[] = {
		{ "Category", "HidDevicePreset" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_VendorID = { "VendorID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDJoystick_Preset, VendorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_VendorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_VendorID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "HidDevicePreset" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDJoystick_Preset, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ProductID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset_ValueProp = { "AxisPreset", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset_Key_KeyProp = { "AxisPreset_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset_MetaData[] = {
		{ "Category", "HidDevicePreset" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset = { "AxisPreset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDJoystick_Preset, AxisPreset), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset_ValueProp = { "ButtonsPreset", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset_Key_KeyProp = { "ButtonsPreset_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset_MetaData[] = {
		{ "Category", "HidDevicePreset" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset = { "ButtonsPreset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeveloper_HIDJoystick_Preset, ButtonsPreset), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_VendorID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ProductID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_AxisPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewProp_ButtonsPreset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"Developer_HIDJoystick_Preset",
		sizeof(FDeveloper_HIDJoystick_Preset),
		alignof(FDeveloper_HIDJoystick_Preset),
		Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset()
	{
		if (!Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset.InnerSingleton, Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset.InnerSingleton;
	}
	void UWM_Settings::StaticRegisterNativesUWM_Settings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_Settings);
	UClass* Z_Construct_UClass_UWM_Settings_NoRegister()
	{
		return UWM_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UWM_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerIndex_DeviceAssigment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultPlayerIndex_DeviceAssigment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDeadzone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDeadzone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bENABLE_AUTO_BUTTON_RELEASE_MetaData[];
#endif
		static void NewProp_bENABLE_AUTO_BUTTON_RELEASE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bENABLE_AUTO_BUTTON_RELEASE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_logConnectDisconnect_MetaData[];
#endif
		static void NewProp_logConnectDisconnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_logConnectDisconnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitAPI_Manually_MetaData[];
#endif
		static void NewProp_InitAPI_Manually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InitAPI_Manually;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportMe_MetaData[];
#endif
		static void NewProp_SupportMe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportMe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WM_Settings.h" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultPlayerIndex_DeviceAssigment_MetaData[] = {
		{ "Category", "Device Configurations" },
		{ "Comment", "//SET -1 to be NOTASSIGNED on device connected\n" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
		{ "ToolTip", "SET -1 to be NOTASSIGNED on device connected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultPlayerIndex_DeviceAssigment = { "DefaultPlayerIndex_DeviceAssigment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Settings, DefaultPlayerIndex_DeviceAssigment), METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultPlayerIndex_DeviceAssigment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultPlayerIndex_DeviceAssigment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultSensitivity_MetaData[] = {
		{ "Category", "HID Joystick" },
		{ "Comment", "//Default sensitivity for all devices\n" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
		{ "ToolTip", "Default sensitivity for all devices" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultSensitivity = { "DefaultSensitivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Settings, DefaultSensitivity), METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultDeadzone_MetaData[] = {
		{ "Category", "HID Joystick" },
		{ "Comment", "//Default deadzone for all devices\n" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
		{ "ToolTip", "Default deadzone for all devices" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultDeadzone = { "DefaultDeadzone", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_Settings, DefaultDeadzone), METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultDeadzone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultDeadzone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::NewProp_bENABLE_AUTO_BUTTON_RELEASE_MetaData[] = {
		{ "Category", "HID Joystick" },
		{ "Comment", "// if enabled ,,, all changes to device (connect, disconnect,settings change, mode change, mapping change, assigment change) will trigger RELEASE event for all buttons. \n// this should be set to FALSE to prevent triggering ONButtonRelease events when you configure or make changes to device config\n" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
		{ "ToolTip", "if enabled ,,, all changes to device (connect, disconnect,settings change, mode change, mapping change, assigment change) will trigger RELEASE event for all buttons.\nthis should be set to FALSE to prevent triggering ONButtonRelease events when you configure or make changes to device config" },
	};
#endif
	void Z_Construct_UClass_UWM_Settings_Statics::NewProp_bENABLE_AUTO_BUTTON_RELEASE_SetBit(void* Obj)
	{
		((UWM_Settings*)Obj)->bENABLE_AUTO_BUTTON_RELEASE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Settings_Statics::NewProp_bENABLE_AUTO_BUTTON_RELEASE = { "bENABLE_AUTO_BUTTON_RELEASE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Settings), &Z_Construct_UClass_UWM_Settings_Statics::NewProp_bENABLE_AUTO_BUTTON_RELEASE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::NewProp_bENABLE_AUTO_BUTTON_RELEASE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::NewProp_bENABLE_AUTO_BUTTON_RELEASE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::NewProp_logConnectDisconnect_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "//enable device connection console logs\n" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
		{ "ToolTip", "enable device connection console logs" },
	};
#endif
	void Z_Construct_UClass_UWM_Settings_Statics::NewProp_logConnectDisconnect_SetBit(void* Obj)
	{
		((UWM_Settings*)Obj)->logConnectDisconnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Settings_Statics::NewProp_logConnectDisconnect = { "logConnectDisconnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Settings), &Z_Construct_UClass_UWM_Settings_Statics::NewProp_logConnectDisconnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::NewProp_logConnectDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::NewProp_logConnectDisconnect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::NewProp_InitAPI_Manually_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Settings_Statics::NewProp_InitAPI_Manually_SetBit(void* Obj)
	{
		((UWM_Settings*)Obj)->InitAPI_Manually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Settings_Statics::NewProp_InitAPI_Manually = { "InitAPI_Manually", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Settings), &Z_Construct_UClass_UWM_Settings_Statics::NewProp_InitAPI_Manually_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::NewProp_InitAPI_Manually_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::NewProp_InitAPI_Manually_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Settings_Statics::NewProp_SupportMe_MetaData[] = {
		{ "Category", "Support Creator of Plugin" },
		{ "ModuleRelativePath", "Public/WM_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UWM_Settings_Statics::NewProp_SupportMe_SetBit(void* Obj)
	{
		((UWM_Settings*)Obj)->SupportMe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_Settings_Statics::NewProp_SupportMe = { "SupportMe", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_Settings), &Z_Construct_UClass_UWM_Settings_Statics::NewProp_SupportMe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::NewProp_SupportMe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::NewProp_SupportMe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWM_Settings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultPlayerIndex_DeviceAssigment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Settings_Statics::NewProp_DefaultDeadzone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Settings_Statics::NewProp_bENABLE_AUTO_BUTTON_RELEASE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Settings_Statics::NewProp_logConnectDisconnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Settings_Statics::NewProp_InitAPI_Manually,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_Settings_Statics::NewProp_SupportMe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_Settings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_Settings_Statics::ClassParams = {
		&UWM_Settings::StaticClass,
		"WMInputSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWM_Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_Settings()
	{
		if (!Z_Registration_Info_UClass_UWM_Settings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_Settings.OuterSingleton, Z_Construct_UClass_UWM_Settings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_Settings.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_Settings>()
	{
		return UWM_Settings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_Settings);
	UWM_Settings::~UWM_Settings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::EnumInfo[] = {
		{ ERawControllerType_StaticEnum, TEXT("ERawControllerType"), &Z_Registration_Info_UEnum_ERawControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1035791298U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::ScriptStructInfo[] = {
		{ FDefaultDeviceMappings::StaticStruct, Z_Construct_UScriptStruct_FDefaultDeviceMappings_Statics::NewStructOps, TEXT("DefaultDeviceMappings"), &Z_Registration_Info_UScriptStruct_DefaultDeviceMappings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultDeviceMappings), 1026771239U) },
		{ FDriver_AxisDefaults::StaticStruct, Z_Construct_UScriptStruct_FDriver_AxisDefaults_Statics::NewStructOps, TEXT("Driver_AxisDefaults"), &Z_Registration_Info_UScriptStruct_Driver_AxisDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDriver_AxisDefaults), 154214685U) },
		{ FDriver_ButtonDefaults::StaticStruct, Z_Construct_UScriptStruct_FDriver_ButtonDefaults_Statics::NewStructOps, TEXT("Driver_ButtonDefaults"), &Z_Registration_Info_UScriptStruct_Driver_ButtonDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDriver_ButtonDefaults), 4011597793U) },
		{ FDeveloper_HIDDeviceDriver::StaticStruct, Z_Construct_UScriptStruct_FDeveloper_HIDDeviceDriver_Statics::NewStructOps, TEXT("Developer_HIDDeviceDriver"), &Z_Registration_Info_UScriptStruct_Developer_HIDDeviceDriver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeveloper_HIDDeviceDriver), 626596437U) },
		{ FDeveloper_HIDJoystick_Preset::StaticStruct, Z_Construct_UScriptStruct_FDeveloper_HIDJoystick_Preset_Statics::NewStructOps, TEXT("Developer_HIDJoystick_Preset"), &Z_Registration_Info_UScriptStruct_Developer_HIDJoystick_Preset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeveloper_HIDJoystick_Preset), 3211997368U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_Settings, UWM_Settings::StaticClass, TEXT("UWM_Settings"), &Z_Registration_Info_UClass_UWM_Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_Settings), 381676169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_1523489025(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_Settings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
