// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/WM_ControllerFunctionLib.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_ControllerFunctionLib() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_ControllerFunctionLib();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_ControllerFunctionLib_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_InputManager_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDPADCollection();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWM_InputManagerMode;
	static UEnum* EWM_InputManagerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWM_InputManagerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWM_InputManagerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("EWM_InputManagerMode"));
		}
		return Z_Registration_Info_UEnum_EWM_InputManagerMode.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<EWM_InputManagerMode>()
	{
		return EWM_InputManagerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::Enumerators[] = {
		{ "off", (int64)off },
		{ "Config", (int64)Config },
		{ "Assign", (int64)Assign },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::Enum_MetaDataParams[] = {
		{ "Assign.Name", "Assign" },
		{ "BlueprintType", "true" },
		{ "Config.Name", "Config" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
		{ "off.Name", "off" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		"EWM_InputManagerMode",
		"EWM_InputManagerMode",
		Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode()
	{
		if (!Z_Registration_Info_UEnum_EWM_InputManagerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWM_InputManagerMode.InnerSingleton, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWM_InputManagerMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWM_GamepadKeyType;
	static UEnum* EWM_GamepadKeyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWM_GamepadKeyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWM_GamepadKeyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("EWM_GamepadKeyType"));
		}
		return Z_Registration_Info_UEnum_EWM_GamepadKeyType.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<EWM_GamepadKeyType>()
	{
		return EWM_GamepadKeyType_StaticEnum();
	}
	struct Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::Enumerators[] = {
		{ "NoGamepadKey", (int64)NoGamepadKey },
		{ "Axis", (int64)Axis },
		{ "Button", (int64)Button },
		{ "DPAD", (int64)DPAD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::Enum_MetaDataParams[] = {
		{ "Axis.Name", "Axis" },
		{ "BlueprintType", "true" },
		{ "Button.Name", "Button" },
		{ "DPAD.Name", "DPAD" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
		{ "NoGamepadKey.Name", "NoGamepadKey" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		"EWM_GamepadKeyType",
		"EWM_GamepadKeyType",
		Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType()
	{
		if (!Z_Registration_Info_UEnum_EWM_GamepadKeyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWM_GamepadKeyType.InnerSingleton, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWM_GamepadKeyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWM_KeyTriggerState;
	static UEnum* EWM_KeyTriggerState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWM_KeyTriggerState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWM_KeyTriggerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("EWM_KeyTriggerState"));
		}
		return Z_Registration_Info_UEnum_EWM_KeyTriggerState.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<EWM_KeyTriggerState>()
	{
		return EWM_KeyTriggerState_StaticEnum();
	}
	struct Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::Enumerators[] = {
		{ "NoTrigger", (int64)NoTrigger },
		{ "WasJustPressed", (int64)WasJustPressed },
		{ "WasJustReleased", (int64)WasJustReleased },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
		{ "NoTrigger.Name", "NoTrigger" },
		{ "WasJustPressed.Name", "WasJustPressed" },
		{ "WasJustReleased.Name", "WasJustReleased" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		"EWM_KeyTriggerState",
		"EWM_KeyTriggerState",
		Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState()
	{
		if (!Z_Registration_Info_UEnum_EWM_KeyTriggerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWM_KeyTriggerState.InnerSingleton, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWM_KeyTriggerState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWM_DeviceType;
	static UEnum* EWM_DeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWM_DeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWM_DeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("EWM_DeviceType"));
		}
		return Z_Registration_Info_UEnum_EWM_DeviceType.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<EWM_DeviceType>()
	{
		return EWM_DeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::Enumerators[] = {
		{ "No_Device", (int64)No_Device },
		{ "JoystickOrGamepad", (int64)JoystickOrGamepad },
		{ "Keyboard", (int64)Keyboard },
		{ "Mouse", (int64)Mouse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "JoystickOrGamepad.Name", "JoystickOrGamepad" },
		{ "Keyboard.Name", "Keyboard" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
		{ "Mouse.Name", "Mouse" },
		{ "No_Device.Name", "No_Device" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		"EWM_DeviceType",
		"EWM_DeviceType",
		Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType()
	{
		if (!Z_Registration_Info_UEnum_EWM_DeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWM_DeviceType.InnerSingleton, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_DeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWM_DeviceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPADCollection;
class UScriptStruct* FDPADCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPADCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPADCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPADCollection, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("DPADCollection"));
	}
	return Z_Registration_Info_UScriptStruct_DPADCollection.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FDPADCollection>()
{
	return FDPADCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPADCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DOWN_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DOWN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LEFT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LEFT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RIGHT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RIGHT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BINDING_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BINDING;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPADCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPADCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPADCollection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_UP_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_UP = { "UP", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPADCollection, UP), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_UP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_UP_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_DOWN_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_DOWN = { "DOWN", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPADCollection, DOWN), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_DOWN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_DOWN_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_LEFT_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_LEFT = { "LEFT", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPADCollection, LEFT), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_LEFT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_LEFT_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_RIGHT_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_RIGHT = { "RIGHT", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPADCollection, RIGHT), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_RIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_RIGHT_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_BINDING_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_BINDING = { "BINDING", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPADCollection, BINDING), METADATA_PARAMS(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_BINDING_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_BINDING_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPADCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_UP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_DOWN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_LEFT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_RIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPADCollection_Statics::NewProp_BINDING,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPADCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"DPADCollection",
		sizeof(FDPADCollection),
		alignof(FDPADCollection),
		Z_Construct_UScriptStruct_FDPADCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPADCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPADCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPADCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPADCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_DPADCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPADCollection.InnerSingleton, Z_Construct_UScriptStruct_FDPADCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPADCollection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWM_InputManagerStatus;
	static UEnum* EWM_InputManagerStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWM_InputManagerStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWM_InputManagerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("EWM_InputManagerStatus"));
		}
		return Z_Registration_Info_UEnum_EWM_InputManagerStatus.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<EWM_InputManagerStatus>()
	{
		return EWM_InputManagerStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::Enumerators[] = {
		{ "EWM_InputManagerStatus::WM_NoStatus", (int64)EWM_InputManagerStatus::WM_NoStatus },
		{ "EWM_InputManagerStatus::WaitingForButtonPress", (int64)EWM_InputManagerStatus::WaitingForButtonPress },
		{ "EWM_InputManagerStatus::WaitingForAxisResponse", (int64)EWM_InputManagerStatus::WaitingForAxisResponse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
		{ "WaitingForAxisResponse.DisplaName", "WaitingForAxleResponse" },
		{ "WaitingForAxisResponse.Name", "EWM_InputManagerStatus::WaitingForAxisResponse" },
		{ "WaitingForButtonPress.DisplaName", "WaitingForButtonPress" },
		{ "WaitingForButtonPress.Name", "EWM_InputManagerStatus::WaitingForButtonPress" },
		{ "WM_NoStatus.DisplaName", "None" },
		{ "WM_NoStatus.Name", "EWM_InputManagerStatus::WM_NoStatus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		"EWM_InputManagerStatus",
		"EWM_InputManagerStatus",
		Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus()
	{
		if (!Z_Registration_Info_UEnum_EWM_InputManagerStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWM_InputManagerStatus.InnerSingleton, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWM_InputManagerStatus.InnerSingleton;
	}
	DEFINE_FUNCTION(UWM_ControllerFunctionLib::execGet_WM_InputManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWM_InputManager**)Z_Param__Result=UWM_ControllerFunctionLib::Get_WM_InputManager();
		P_NATIVE_END;
	}
	void UWM_ControllerFunctionLib::StaticRegisterNativesUWM_ControllerFunctionLib()
	{
		UClass* Class = UWM_ControllerFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get_WM_InputManager", &UWM_ControllerFunctionLib::execGet_WM_InputManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics
	{
		struct WM_ControllerFunctionLib_eventGet_WM_InputManager_Parms
		{
			UWM_InputManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_ControllerFunctionLib_eventGet_WM_InputManager_Parms, ReturnValue), Z_Construct_UClass_UWM_InputManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM" },
		{ "Comment", "/*WM Input Manager - All Rights Reserved by RalpEl (C) 2017 \" */" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
		{ "ToolTip", "WM Input Manager - All Rights Reserved by RalpEl (C) 2017 \"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_ControllerFunctionLib, nullptr, "Get_WM_InputManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::WM_ControllerFunctionLib_eventGet_WM_InputManager_Parms), Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_ControllerFunctionLib);
	UClass* Z_Construct_UClass_UWM_ControllerFunctionLib_NoRegister()
	{
		return UWM_ControllerFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UWM_ControllerFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWM_ControllerFunctionLib_Get_WM_InputManager, "Get_WM_InputManager" }, // 3339821497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WM_ControllerFunctionLib.h" },
		{ "ModuleRelativePath", "Public/WM_ControllerFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_ControllerFunctionLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::ClassParams = {
		&UWM_ControllerFunctionLib::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_ControllerFunctionLib()
	{
		if (!Z_Registration_Info_UClass_UWM_ControllerFunctionLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_ControllerFunctionLib.OuterSingleton, Z_Construct_UClass_UWM_ControllerFunctionLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_ControllerFunctionLib.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_ControllerFunctionLib>()
	{
		return UWM_ControllerFunctionLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_ControllerFunctionLib);
	UWM_ControllerFunctionLib::~UWM_ControllerFunctionLib() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::EnumInfo[] = {
		{ EWM_InputManagerMode_StaticEnum, TEXT("EWM_InputManagerMode"), &Z_Registration_Info_UEnum_EWM_InputManagerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 34752344U) },
		{ EWM_GamepadKeyType_StaticEnum, TEXT("EWM_GamepadKeyType"), &Z_Registration_Info_UEnum_EWM_GamepadKeyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2369441614U) },
		{ EWM_KeyTriggerState_StaticEnum, TEXT("EWM_KeyTriggerState"), &Z_Registration_Info_UEnum_EWM_KeyTriggerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1873072561U) },
		{ EWM_DeviceType_StaticEnum, TEXT("EWM_DeviceType"), &Z_Registration_Info_UEnum_EWM_DeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3753428317U) },
		{ EWM_InputManagerStatus_StaticEnum, TEXT("EWM_InputManagerStatus"), &Z_Registration_Info_UEnum_EWM_InputManagerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 238671090U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::ScriptStructInfo[] = {
		{ FDPADCollection::StaticStruct, Z_Construct_UScriptStruct_FDPADCollection_Statics::NewStructOps, TEXT("DPADCollection"), &Z_Registration_Info_UScriptStruct_DPADCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPADCollection), 1542156487U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_ControllerFunctionLib, UWM_ControllerFunctionLib::StaticClass, TEXT("UWM_ControllerFunctionLib"), &Z_Registration_Info_UClass_UWM_ControllerFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_ControllerFunctionLib), 415258024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_3402362969(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_ControllerFunctionLib_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
