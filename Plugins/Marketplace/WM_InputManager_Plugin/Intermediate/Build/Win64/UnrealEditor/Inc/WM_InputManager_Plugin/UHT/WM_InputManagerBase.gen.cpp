// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/WM_InputManagerBase.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_InputManagerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_HID_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_Keyboard_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_HID_Joystick_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_InputManagerBase();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_InputManagerBase_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_PCS_Device();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct__PCS_Device;
class UScriptStruct* F_PCS_Device::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct__PCS_Device.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct__PCS_Device.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_PCS_Device, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("_PCS_Device"));
	}
	return Z_Registration_Info_UScriptStruct__PCS_Device.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<F_PCS_Device>()
{
	return F_PCS_Device::StaticStruct();
}
	struct Z_Construct_UScriptStruct_F_PCS_Device_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_F_PCS_Device_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_F_PCS_Device_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_PCS_Device>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_PCS_Device_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"_PCS_Device",
		sizeof(F_PCS_Device),
		alignof(F_PCS_Device),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_F_PCS_Device_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_PCS_Device_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_F_PCS_Device()
	{
		if (!Z_Registration_Info_UScriptStruct__PCS_Device.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct__PCS_Device.InnerSingleton, Z_Construct_UScriptStruct_F_PCS_Device_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct__PCS_Device.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnDeviceConnected_Parms
		{
			UWM_Device* Device;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnDeviceConnected_Parms, Device), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::NewProp_Device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnDeviceConnected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnDeviceConnected_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnDeviceDisconnected_Parms
		{
			UWM_Device* Device;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnDeviceDisconnected_Parms, Device), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::NewProp_Device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnDeviceDisconnected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnDeviceDisconnected_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnNumJoysticksChanged_Parms
		{
			int32 OnNumDevicesChanged;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OnNumDevicesChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::NewProp_OnNumDevicesChanged = { "OnNumDevicesChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnNumJoysticksChanged_Parms, OnNumDevicesChanged), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::NewProp_OnNumDevicesChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnNumJoysticksChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnNumJoysticksChanged_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnJoystickButtonTrigger_Parms
		{
			FKey OnJoystickButtonTrigger;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnJoystickButtonTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::NewProp_OnJoystickButtonTrigger = { "OnJoystickButtonTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnJoystickButtonTrigger_Parms, OnJoystickButtonTrigger), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::NewProp_OnJoystickButtonTrigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnJoystickButtonTrigger__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnJoystickButtonTrigger_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnDeviceSelected_Parms
		{
			UWM_Device* Device;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnDeviceSelected_Parms, Device), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::NewProp_Device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnSelectedDeviceChanged, int32, selectedDevice);\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnDeviceDataInitialized, UWM_Device*,Device);\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnSelectedDeviceChanged, int32, selectedDevice);\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnDeviceDataInitialized, UWM_Device*,Device);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnDeviceSelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnDeviceSelected_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnButtonKeyPressed_Parms
		{
			FKey WM_Key;
			UWM_Device* Device;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WM_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::NewProp_WM_Key = { "WM_Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnButtonKeyPressed_Parms, WM_Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnButtonKeyPressed_Parms, Device), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::NewProp_WM_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::NewProp_Device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnButtonKeyPressed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnButtonKeyPressed_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnButtonKeyReleased_Parms
		{
			FKey WM_Key;
			UWM_Device* Device;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WM_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::NewProp_WM_Key = { "WM_Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnButtonKeyReleased_Parms, WM_Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnButtonKeyReleased_Parms, Device), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::NewProp_WM_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::NewProp_Device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnButtonKeyReleased__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnButtonKeyReleased_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnManagerModeChanged_Parms
		{
			FString ManagerMode;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ManagerMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::NewProp_ManagerMode = { "ManagerMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnManagerModeChanged_Parms, ManagerMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::NewProp_ManagerMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnManagerModeChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnManagerModeChanged_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnSwitchManagerModeEnum_Parms
		{
			TEnumAsByte<EWM_InputManagerMode> ManagerMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ManagerMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::NewProp_ManagerMode = { "ManagerMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnSwitchManagerModeEnum_Parms, ManagerMode), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode, METADATA_PARAMS(nullptr, 0) }; // 34752344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::NewProp_ManagerMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnSwitchManagerModeEnum__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnSwitchManagerModeEnum_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnSetNumberOfPlayers_Parms
		{
			int32 NumberOfPlayers;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::NewProp_NumberOfPlayers = { "NumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnSetNumberOfPlayers_Parms, NumberOfPlayers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::NewProp_NumberOfPlayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnSetNumberOfPlayers__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnSetNumberOfPlayers_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "On_WM_InputManagerBegin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "On_WM_InputManagerEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_eventOnListenForKeyInput_Parms
		{
			FKey Key;
			bool Start;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_Start_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_eventOnListenForKeyInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::NewProp_Start_SetBit(void* Obj)
	{
		((_Script_WM_InputManager_Plugin_eventOnListenForKeyInput_Parms*)Obj)->Start = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_WM_InputManager_Plugin_eventOnListenForKeyInput_Parms), &Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::NewProp_Start_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "OnListenForKeyInput__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_eventOnListenForKeyInput_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_DEBUG_Parms
		{
			FString Where;
			FString What;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Where;
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::NewProp_Where = { "Where", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_DEBUG_Parms, Where), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_DEBUG_Parms, What), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::NewProp_Where,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::NewProp_What,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_DEBUG__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_DEBUG_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_event_OnDeviceAssigmentChange_Parms
		{
			UWM_Device* Device;
			int32 previousAssigment;
			int32 newAssigment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_previousAssigment;
		static const UECodeGen_Private::FIntPropertyParams NewProp_newAssigment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnDeviceAssigmentChange_Parms, Device), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::NewProp_previousAssigment = { "previousAssigment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnDeviceAssigmentChange_Parms, previousAssigment), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::NewProp_newAssigment = { "newAssigment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_event_OnDeviceAssigmentChange_Parms, newAssigment), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::NewProp_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::NewProp_previousAssigment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::NewProp_newAssigment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(F_OnDeviceAssigmentChange, FString, Where, FString, What);\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(F_OnDeviceAssigmentChange, FString, Where, FString, What);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "_OnDeviceAssigmentChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_event_OnDeviceAssigmentChange_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execOnDeviceButtonKeyEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_WM_Key);
		P_GET_OBJECT(UWM_Device,Z_Param_Device);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_TriggerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeviceButtonKeyEvent_Implementation(Z_Param_WM_Key,Z_Param_Device,(TEnumAsByte<EWM_KeyTriggerState>&)(Z_Param_Out_TriggerState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execGetActionsListStringForKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ActionsListString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionsListStringForKey(Z_Param_Key,Z_Param_Out_ActionsListString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execGetAllInputBindingsForKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FName,Z_Param_Out_ActionsForKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllInputBindingsForKey(Z_Param_Key,Z_Param_Out_ActionsForKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execGetAllKeysForAxis)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_TARRAY_REF(FKey,Z_Param_Out_Bindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllKeysForAxis(Z_Param_ActionName,Z_Param_Out_Bindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execGetAllKeysForAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_TARRAY_REF(FKey,Z_Param_Out_Bindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllKeysForAction(Z_Param_ActionName,Z_Param_Out_Bindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execGetAxisInputs)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_InputAxisActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisInputs(Z_Param_Out_InputAxisActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execGetActionInputs)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_ButtonInputs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionInputs(Z_Param_Out_ButtonInputs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execSetNumberOfPlayers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberOfPlayers(Z_Param_NumPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execSwitchManagerModeEnum)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchManagerModeEnum(EWM_InputManagerMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execSwitchManagerMode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchManagerMode(Z_Param_Mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execInitializeAPI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAPI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManagerBase::execsetEnchancedInputContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_inputMappingContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setEnchancedInputContext(Z_Param_inputMappingContext);
		P_NATIVE_END;
	}
	struct WM_InputManagerBase_eventOnDeviceButtonKeyEvent_Parms
	{
		FKey WM_Key;
		UWM_Device* Device;
		TEnumAsByte<EWM_KeyTriggerState> TriggerState;
	};
	static FName NAME_UWM_InputManagerBase_OnDeviceButtonKeyEvent = FName(TEXT("OnDeviceButtonKeyEvent"));
	void UWM_InputManagerBase::OnDeviceButtonKeyEvent(FKey WM_Key, UWM_Device* Device, TEnumAsByte<EWM_KeyTriggerState>& TriggerState)
	{
		WM_InputManagerBase_eventOnDeviceButtonKeyEvent_Parms Parms;
		Parms.WM_Key=WM_Key;
		Parms.Device=Device;
		Parms.TriggerState=TriggerState;
		ProcessEvent(FindFunctionChecked(NAME_UWM_InputManagerBase_OnDeviceButtonKeyEvent),&Parms);
		TriggerState=Parms.TriggerState;
	}
	void UWM_InputManagerBase::StaticRegisterNativesUWM_InputManagerBase()
	{
		UClass* Class = UWM_InputManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionInputs", &UWM_InputManagerBase::execGetActionInputs },
			{ "GetActionsListStringForKey", &UWM_InputManagerBase::execGetActionsListStringForKey },
			{ "GetAllInputBindingsForKey", &UWM_InputManagerBase::execGetAllInputBindingsForKey },
			{ "GetAllKeysForAction", &UWM_InputManagerBase::execGetAllKeysForAction },
			{ "GetAllKeysForAxis", &UWM_InputManagerBase::execGetAllKeysForAxis },
			{ "GetAxisInputs", &UWM_InputManagerBase::execGetAxisInputs },
			{ "InitializeAPI", &UWM_InputManagerBase::execInitializeAPI },
			{ "OnDeviceButtonKeyEvent", &UWM_InputManagerBase::execOnDeviceButtonKeyEvent },
			{ "setEnchancedInputContext", &UWM_InputManagerBase::execsetEnchancedInputContext },
			{ "SetNumberOfPlayers", &UWM_InputManagerBase::execSetNumberOfPlayers },
			{ "SwitchManagerMode", &UWM_InputManagerBase::execSwitchManagerMode },
			{ "SwitchManagerModeEnum", &UWM_InputManagerBase::execSwitchManagerModeEnum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics
	{
		struct WM_InputManagerBase_eventGetActionInputs_Parms
		{
			TArray<FName> ButtonInputs;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ButtonInputs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ButtonInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::NewProp_ButtonInputs_Inner = { "ButtonInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::NewProp_ButtonInputs = { "ButtonInputs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetActionInputs_Parms, ButtonInputs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::NewProp_ButtonInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::NewProp_ButtonInputs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "GetActionInputs" },
		{ "Keywords", "Get Action Inputs" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "GetActionInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::WM_InputManagerBase_eventGetActionInputs_Parms), Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics
	{
		struct WM_InputManagerBase_eventGetActionsListStringForKey_Parms
		{
			FKey Key;
			FString ActionsListString;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionsListString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetActionsListStringForKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::NewProp_ActionsListString = { "ActionsListString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetActionsListStringForKey_Parms, ActionsListString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::NewProp_ActionsListString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Get ActionsListStringForKey" },
		{ "Keywords", "Get Actions List String for key" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "GetActionsListStringForKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::WM_InputManagerBase_eventGetActionsListStringForKey_Parms), Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics
	{
		struct WM_InputManagerBase_eventGetAllInputBindingsForKey_Parms
		{
			FKey Key;
			TArray<FName> ActionsForKey;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionsForKey_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionsForKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetAllInputBindingsForKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::NewProp_ActionsForKey_Inner = { "ActionsForKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::NewProp_ActionsForKey = { "ActionsForKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetAllInputBindingsForKey_Parms, ActionsForKey), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::NewProp_ActionsForKey_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::NewProp_ActionsForKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Get AllInputBindingsForKey" },
		{ "Keywords", "Get All Input BindingsForKey" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "GetAllInputBindingsForKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::WM_InputManagerBase_eventGetAllInputBindingsForKey_Parms), Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics
	{
		struct WM_InputManagerBase_eventGetAllKeysForAction_Parms
		{
			FName ActionName;
			TArray<FKey> Bindings;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetAllKeysForAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetAllKeysForAction_Parms, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::NewProp_Bindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "GetAllKeysForAction" },
		{ "Keywords", "Get All Keys ForAction" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "GetAllKeysForAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::WM_InputManagerBase_eventGetAllKeysForAction_Parms), Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics
	{
		struct WM_InputManagerBase_eventGetAllKeysForAxis_Parms
		{
			FName ActionName;
			TArray<FKey> Bindings;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetAllKeysForAxis_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetAllKeysForAxis_Parms, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::NewProp_Bindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "GetAllKeysForAxis" },
		{ "Keywords", "Get All Keys ForAxis" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "GetAllKeysForAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::WM_InputManagerBase_eventGetAllKeysForAxis_Parms), Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics
	{
		struct WM_InputManagerBase_eventGetAxisInputs_Parms
		{
			TArray<FName> InputAxisActions;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputAxisActions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputAxisActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::NewProp_InputAxisActions_Inner = { "InputAxisActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::NewProp_InputAxisActions = { "InputAxisActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventGetAxisInputs_Parms, InputAxisActions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::NewProp_InputAxisActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::NewProp_InputAxisActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "GetAxisInputs" },
		{ "Keywords", "Get Axis Inputs" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "GetAxisInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::WM_InputManagerBase_eventGetAxisInputs_Parms), Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "//STEAMFIX\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "STEAMFIX" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "InitializeAPI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_WM_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::NewProp_WM_Key = { "WM_Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventOnDeviceButtonKeyEvent_Parms, WM_Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventOnDeviceButtonKeyEvent_Parms, Device), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::NewProp_TriggerState = { "TriggerState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventOnDeviceButtonKeyEvent_Parms, TriggerState), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_KeyTriggerState, METADATA_PARAMS(nullptr, 0) }; // 1873072561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::NewProp_WM_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::NewProp_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::NewProp_TriggerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "OnDeviceButtonKeyEvent" },
		{ "Keywords", "OnDeviceButtonKeyEvent" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "OnDeviceButtonKeyEvent", nullptr, nullptr, sizeof(WM_InputManagerBase_eventOnDeviceButtonKeyEvent_Parms), Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics
	{
		struct WM_InputManagerBase_eventsetEnchancedInputContext_Parms
		{
			UInputMappingContext* inputMappingContext;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::NewProp_inputMappingContext = { "inputMappingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventsetEnchancedInputContext_Parms, inputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::NewProp_inputMappingContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "/*\n\x09   - set enhanced input context that you are currently using for listing actions bound for HID_Joystick keys\n\x09   - to show enhanced input action name you can also use player mappable options to override display name of action. \n\x09*/" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "- set enhanced input context that you are currently using for listing actions bound for HID_Joystick keys\n- to show enhanced input action name you can also use player mappable options to override display name of action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "setEnchancedInputContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::WM_InputManagerBase_eventsetEnchancedInputContext_Parms), Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics
	{
		struct WM_InputManagerBase_eventSetNumberOfPlayers_Parms
		{
			int32 NumPlayers;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::NewProp_NumPlayers = { "NumPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventSetNumberOfPlayers_Parms, NumPlayers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::NewProp_NumPlayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "SetNumberOfPlayers" },
		{ "Keywords", "Set Number Of Players" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "SetNumberOfPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::WM_InputManagerBase_eventSetNumberOfPlayers_Parms), Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics
	{
		struct WM_InputManagerBase_eventSwitchManagerMode_Parms
		{
			FString Mode;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventSwitchManagerMode_Parms, Mode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "SwitchManagerMode-CustomSupport" },
		{ "Keywords", "Switch Manager Mode" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "SwitchManagerMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::WM_InputManagerBase_eventSwitchManagerMode_Parms), Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics
	{
		struct WM_InputManagerBase_eventSwitchManagerModeEnum_Parms
		{
			TEnumAsByte<EWM_InputManagerMode> Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManagerBase_eventSwitchManagerModeEnum_Parms, Mode), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode, METADATA_PARAMS(nullptr, 0) }; // 34752344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "SwitchManagerModeEnum" },
		{ "Keywords", "SwitchManagerMode Enum" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManagerBase, nullptr, "SwitchManagerModeEnum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::WM_InputManagerBase_eventSwitchManagerModeEnum_Parms), Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_InputManagerBase);
	UClass* Z_Construct_UClass_UWM_InputManagerBase_NoRegister()
	{
		return UWM_InputManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UWM_InputManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentEnchancedInputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentEnchancedInputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableErrorLogs_MetaData[];
#endif
		static void NewProp_bEnableErrorLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableErrorLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSucessLogs_MetaData[];
#endif
		static void NewProp_bEnableSucessLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSucessLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_LOG_DEBUG_HIDP_PARSING_MetaData[];
#endif
		static void NewProp_bEnable_LOG_DEBUG_HIDP_PARSING_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable_LOG_DEBUG_HIDP_PARSING;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollectRuntimeLogs_MetaData[];
#endif
		static void NewProp_bCollectRuntimeLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollectRuntimeLogs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Runtime_PluginErrors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Runtime_PluginErrors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Runtime_PluginErrors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Runtime_PluginSucess_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Runtime_PluginSucess_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Runtime_PluginSucess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDevicesRegistered_MetaData[];
#endif
		static void NewProp_bDevicesRegistered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDevicesRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMessageAttempts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMessageAttempts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFoundJoysticks_Debug_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFoundJoysticks_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoolingDevices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoolingDevices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWindows_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWindows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DEBUG_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DEBUG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerModeEnum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ManagerModeEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasSViewport_MetaData[];
#endif
		static void NewProp_hasSViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasSViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJoystickButtonTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoystickButtonTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNumDevicesChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNumDevicesChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonKeyPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonKeyPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonKeyReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonKeyReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSwitchManagerMode_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSwitchManagerMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSwitchManagerModeEnum_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSwitchManagerModeEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSetNumberOfPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetNumberOfPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_On_WM_InputManagerBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_On_WM_InputManagerBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_On_WM_InputManagerEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_On_WM_InputManagerEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnListenForKeyInput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnListenForKeyInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceAssigmentChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceAssigmentChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerMode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ManagerMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPlayers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_All_DevicesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_All_DevicesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_All_DevicesList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HID_DeviceList_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HID_DeviceList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HID_DeviceList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HID_DeviceList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Joystick_DeviceList_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Joystick_DeviceList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Joystick_DeviceList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Joystick_DeviceList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Keyboard_DevicesList_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Keyboard_DevicesList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keyboard_DevicesList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Keyboard_DevicesList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mouse_DeviceList_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mouse_DeviceList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mouse_DeviceList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Mouse_DeviceList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Joystick_UniqueDeviceTypeList_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Joystick_UniqueDeviceTypeList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Joystick_UniqueDeviceTypeList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Joystick_UniqueDeviceTypeList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_XInputDevices_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_XInputDevices_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XInputDevices_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_XInputDevices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_InputManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWM_InputManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWM_InputManagerBase_GetActionInputs, "GetActionInputs" }, // 945823386
		{ &Z_Construct_UFunction_UWM_InputManagerBase_GetActionsListStringForKey, "GetActionsListStringForKey" }, // 3044608125
		{ &Z_Construct_UFunction_UWM_InputManagerBase_GetAllInputBindingsForKey, "GetAllInputBindingsForKey" }, // 1460072270
		{ &Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAction, "GetAllKeysForAction" }, // 3867507994
		{ &Z_Construct_UFunction_UWM_InputManagerBase_GetAllKeysForAxis, "GetAllKeysForAxis" }, // 817372603
		{ &Z_Construct_UFunction_UWM_InputManagerBase_GetAxisInputs, "GetAxisInputs" }, // 2097543941
		{ &Z_Construct_UFunction_UWM_InputManagerBase_InitializeAPI, "InitializeAPI" }, // 650666250
		{ &Z_Construct_UFunction_UWM_InputManagerBase_OnDeviceButtonKeyEvent, "OnDeviceButtonKeyEvent" }, // 2807910778
		{ &Z_Construct_UFunction_UWM_InputManagerBase_setEnchancedInputContext, "setEnchancedInputContext" }, // 2564185690
		{ &Z_Construct_UFunction_UWM_InputManagerBase_SetNumberOfPlayers, "SetNumberOfPlayers" }, // 1227035824
		{ &Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerMode, "SwitchManagerMode" }, // 2460098285
		{ &Z_Construct_UFunction_UWM_InputManagerBase_SwitchManagerModeEnum, "SwitchManagerModeEnum" }, // 4108509241
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UCLASS(Blueprintable,nonTransient)\n" },
		{ "IncludePath", "WM_InputManagerBase.h" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UCLASS(Blueprintable,nonTransient)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_currentEnchancedInputMapping_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_currentEnchancedInputMapping = { "currentEnchancedInputMapping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, currentEnchancedInputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_currentEnchancedInputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_currentEnchancedInputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_version_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, version), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableErrorLogs_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "//DEBUGGING\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "DEBUGGING" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableErrorLogs_SetBit(void* Obj)
	{
		((UWM_InputManagerBase*)Obj)->bEnableErrorLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableErrorLogs = { "bEnableErrorLogs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManagerBase), &Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableErrorLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableErrorLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableErrorLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableSucessLogs_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableSucessLogs_SetBit(void* Obj)
	{
		((UWM_InputManagerBase*)Obj)->bEnableSucessLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableSucessLogs = { "bEnableSucessLogs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManagerBase), &Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableSucessLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableSucessLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableSucessLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnable_LOG_DEBUG_HIDP_PARSING_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnable_LOG_DEBUG_HIDP_PARSING_SetBit(void* Obj)
	{
		((UWM_InputManagerBase*)Obj)->bEnable_LOG_DEBUG_HIDP_PARSING = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnable_LOG_DEBUG_HIDP_PARSING = { "bEnable_LOG_DEBUG_HIDP_PARSING", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManagerBase), &Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnable_LOG_DEBUG_HIDP_PARSING_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnable_LOG_DEBUG_HIDP_PARSING_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnable_LOG_DEBUG_HIDP_PARSING_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bCollectRuntimeLogs_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "//RUNTIME DEBUGGING\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "RUNTIME DEBUGGING" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bCollectRuntimeLogs_SetBit(void* Obj)
	{
		((UWM_InputManagerBase*)Obj)->bCollectRuntimeLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bCollectRuntimeLogs = { "bCollectRuntimeLogs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManagerBase), &Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bCollectRuntimeLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bCollectRuntimeLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bCollectRuntimeLogs_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginErrors_Inner = { "Runtime_PluginErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginErrors_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginErrors = { "Runtime_PluginErrors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, Runtime_PluginErrors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginErrors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginSucess_Inner = { "Runtime_PluginSucess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginSucess_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginSucess = { "Runtime_PluginSucess", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, Runtime_PluginSucess), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginSucess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginSucess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bDevicesRegistered_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bDevicesRegistered_SetBit(void* Obj)
	{
		((UWM_InputManagerBase*)Obj)->bDevicesRegistered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bDevicesRegistered = { "bDevicesRegistered", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManagerBase), &Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bDevicesRegistered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bDevicesRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bDevicesRegistered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumMessageAttempts_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumMessageAttempts = { "NumMessageAttempts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, NumMessageAttempts), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumMessageAttempts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumMessageAttempts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumFoundJoysticks_Debug_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumFoundJoysticks_Debug = { "NumFoundJoysticks_Debug", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, NumFoundJoysticks_Debug), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumFoundJoysticks_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumFoundJoysticks_Debug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumPoolingDevices_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumPoolingDevices = { "NumPoolingDevices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, NumPoolingDevices), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumPoolingDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumPoolingDevices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumWindows_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumWindows = { "NumWindows", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, NumWindows), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumWindows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumWindows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_DEBUG_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, Category = \"WM_InputManager\")\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, Category = \"WM_InputManager\")" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_DEBUG = { "DEBUG", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, DEBUG), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__DEBUG__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_DEBUG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_DEBUG_MetaData)) }; // 4194739620
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerModeEnum_MetaData[] = {
		{ "Category", "InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerModeEnum = { "ManagerModeEnum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, ManagerModeEnum), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerMode, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerModeEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerModeEnum_MetaData)) }; // 34752344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_hasSViewport_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_hasSViewport_SetBit(void* Obj)
	{
		((UWM_InputManagerBase*)Obj)->hasSViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_hasSViewport = { "hasSViewport", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManagerBase), &Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_hasSViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_hasSViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_hasSViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceConnected_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "//E V E N T S\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "E V E N T S" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceConnected = { "OnDeviceConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnDeviceConnected), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceConnected_MetaData)) }; // 499710495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceDisconnected_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceDisconnected = { "OnDeviceDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnDeviceDisconnected), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceDisconnected_MetaData)) }; // 700161568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnJoystickButtonTrigger_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnJoystickButtonTrigger = { "OnJoystickButtonTrigger", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnJoystickButtonTrigger), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnJoystickButtonTrigger__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnJoystickButtonTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnJoystickButtonTrigger_MetaData)) }; // 3336933067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnNumDevicesChanged_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnNumDevicesChanged = { "OnNumDevicesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnNumDevicesChanged), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnNumJoysticksChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnNumDevicesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnNumDevicesChanged_MetaData)) }; // 657076249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceSelected_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceSelected = { "OnDeviceSelected", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnDeviceSelected), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceSelected_MetaData)) }; // 848455008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyPressed_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyPressed = { "OnButtonKeyPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnButtonKeyPressed), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyPressed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyPressed_MetaData)) }; // 1135646483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyReleased_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyReleased = { "OnButtonKeyReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnButtonKeyReleased), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnButtonKeyReleased__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyReleased_MetaData)) }; // 2946208345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerMode_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerMode = { "OnSwitchManagerMode", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnSwitchManagerMode), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnManagerModeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerMode_MetaData)) }; // 3928247148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerModeEnum_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerModeEnum = { "OnSwitchManagerModeEnum", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnSwitchManagerModeEnum), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSwitchManagerModeEnum__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerModeEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerModeEnum_MetaData)) }; // 2609734709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSetNumberOfPlayers_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSetNumberOfPlayers = { "OnSetNumberOfPlayers", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnSetNumberOfPlayers), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnSetNumberOfPlayers__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSetNumberOfPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSetNumberOfPlayers_MetaData)) }; // 1376300665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerBegin_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerBegin = { "On_WM_InputManagerBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, On_WM_InputManagerBegin), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerBegin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerBegin_MetaData)) }; // 3144647158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerEnd_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerEnd = { "On_WM_InputManagerEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, On_WM_InputManagerEnd), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_On_WM_InputManagerEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerEnd_MetaData)) }; // 49007236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnListenForKeyInput_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnListenForKeyInput = { "OnListenForKeyInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnListenForKeyInput), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnListenForKeyInput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnListenForKeyInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnListenForKeyInput_MetaData)) }; // 3175464041
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceAssigmentChange_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceAssigmentChange = { "OnDeviceAssigmentChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, OnDeviceAssigmentChange), Z_Construct_UDelegateFunction_WM_InputManager_Plugin__OnDeviceAssigmentChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceAssigmentChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceAssigmentChange_MetaData)) }; // 1839559545
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerMode_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerMode = { "ManagerMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, ManagerMode), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumberOfPlayers_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumberOfPlayers = { "NumberOfPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, NumberOfPlayers), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumberOfPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumberOfPlayers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_All_DevicesList_Inner = { "All_DevicesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_All_DevicesList_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_All_DevicesList = { "All_DevicesList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, All_DevicesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_All_DevicesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_All_DevicesList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList_ValueProp = { "HID_DeviceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UWM_Device_HID_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList_Key_KeyProp = { "HID_DeviceList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList = { "HID_DeviceList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, HID_DeviceList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList_ValueProp = { "Joystick_DeviceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UWM_HID_Joystick_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList_Key_KeyProp = { "Joystick_DeviceList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList = { "Joystick_DeviceList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, Joystick_DeviceList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList_ValueProp = { "Keyboard_DevicesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UWM_Device_Keyboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList_Key_KeyProp = { "Keyboard_DevicesList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList = { "Keyboard_DevicesList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, Keyboard_DevicesList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList_ValueProp = { "Mouse_DeviceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList_Key_KeyProp = { "Mouse_DeviceList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList = { "Mouse_DeviceList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, Mouse_DeviceList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList_ValueProp = { "Joystick_UniqueDeviceTypeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UWM_HID_Joystick_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList_Key_KeyProp = { "Joystick_UniqueDeviceTypeList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList = { "Joystick_UniqueDeviceTypeList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, Joystick_UniqueDeviceTypeList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices_ValueProp = { "XInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UWM_Device_HID_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices_Key_KeyProp = { "XInputDevices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "//UPROPERTY(BlueprintReadOnly)\x09\n" },
		{ "ModuleRelativePath", "Public/WM_InputManagerBase.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices = { "XInputDevices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManagerBase, XInputDevices), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWM_InputManagerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_currentEnchancedInputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableErrorLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnableSucessLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bEnable_LOG_DEBUG_HIDP_PARSING,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bCollectRuntimeLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginErrors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginSucess_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Runtime_PluginSucess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_bDevicesRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumMessageAttempts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumFoundJoysticks_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumPoolingDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumWindows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_DEBUG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerModeEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_hasSViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnJoystickButtonTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnNumDevicesChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnButtonKeyReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSwitchManagerModeEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnSetNumberOfPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_On_WM_InputManagerEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnListenForKeyInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_OnDeviceAssigmentChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_ManagerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_NumberOfPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_All_DevicesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_All_DevicesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_HID_DeviceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_DeviceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Keyboard_DevicesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Mouse_DeviceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_Joystick_UniqueDeviceTypeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManagerBase_Statics::NewProp_XInputDevices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_InputManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_InputManagerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_InputManagerBase_Statics::ClassParams = {
		&UWM_InputManagerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWM_InputManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_InputManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_InputManagerBase()
	{
		if (!Z_Registration_Info_UClass_UWM_InputManagerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_InputManagerBase.OuterSingleton, Z_Construct_UClass_UWM_InputManagerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_InputManagerBase.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_InputManagerBase>()
	{
		return UWM_InputManagerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_InputManagerBase);
	UWM_InputManagerBase::~UWM_InputManagerBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_Statics::ScriptStructInfo[] = {
		{ F_PCS_Device::StaticStruct, Z_Construct_UScriptStruct_F_PCS_Device_Statics::NewStructOps, TEXT("_PCS_Device"), &Z_Registration_Info_UScriptStruct__PCS_Device, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_PCS_Device), 1909162559U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_InputManagerBase, UWM_InputManagerBase::StaticClass, TEXT("UWM_InputManagerBase"), &Z_Registration_Info_UClass_UWM_InputManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_InputManagerBase), 3636119014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_3882432711(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
