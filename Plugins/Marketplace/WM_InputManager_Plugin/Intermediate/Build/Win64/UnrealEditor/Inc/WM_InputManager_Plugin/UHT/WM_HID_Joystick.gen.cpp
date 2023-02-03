// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/Devices/WM_HID_Joystick.h"
#include "InputCore/Classes/InputCoreTypes.h"
#include "WM_InputManager_Plugin/Public/Devices/MEM/WM_HID_Joystick_SAV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_HID_Joystick() {}
// Cross Module References
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_HID();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_HID_Joystick();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_HID_Joystick_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_eventOnModeSwitched_Parms
		{
			int32 Mode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_eventOnModeSwitched_Parms, Mode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "OnModeSwitched__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_eventOnModeSwitched_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics
	{
		struct _Script_WM_InputManager_Plugin_eventOnConfigChanged_Parms
		{
			int32 Mode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WM_InputManager_Plugin_eventOnConfigChanged_Parms, Mode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin, nullptr, "OnConfigChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::_Script_WM_InputManager_Plugin_eventOnConfigChanged_Parms), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execUpdateAxisValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAxisValue(Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execResetAxisConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAxisConfig(Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execAutodetectAxisConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutodetectAxisConfig(Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execGetAxisConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AxisNumber);
		P_GET_STRUCT_REF(FWM_HID_AxisConfiguration,Z_Param_Out_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisConfig(Z_Param_AxisNumber,Z_Param_Out_config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execSetAxisConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AxisNumber);
		P_GET_STRUCT(FWM_HID_AxisConfiguration,Z_Param_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAxisConfig(Z_Param_AxisNumber,Z_Param_config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execResetConfigurationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetConfigurationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execSetConfigurationMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConfigurationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfigurationMode(Z_Param_ConfigurationMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execGetConfigurationMode)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConfigurationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConfigurationMode(Z_Param_Out_ConfigurationMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execGetBindingOptions)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBindingOptions(Z_Param_Key,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execGetBinding)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBinding(Z_Param_Key,Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execBind_InputKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bind_InputKey(Z_Param_Key,Z_Param_TargetBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execListenForKeyInput)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_sucess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenForKeyInput(Z_Param_Key,Z_Param_Out_sucess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execRebindKeyInput)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_sucess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebindKeyInput(Z_Param_Key,Z_Param_Out_sucess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execPressButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PressButton_Implementation(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_HID_Joystick::execSaveConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveConfig();
		P_NATIVE_END;
	}
	struct WM_HID_Joystick_eventPressButton_Parms
	{
		int32 Button;
	};
	static FName NAME_UWM_HID_Joystick_PressButton = FName(TEXT("PressButton"));
	void UWM_HID_Joystick::PressButton(int32 Button)
	{
		WM_HID_Joystick_eventPressButton_Parms Parms;
		Parms.Button=Button;
		ProcessEvent(FindFunctionChecked(NAME_UWM_HID_Joystick_PressButton),&Parms);
	}
	void UWM_HID_Joystick::StaticRegisterNativesUWM_HID_Joystick()
	{
		UClass* Class = UWM_HID_Joystick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutodetectAxisConfig", &UWM_HID_Joystick::execAutodetectAxisConfig },
			{ "Bind_InputKey", &UWM_HID_Joystick::execBind_InputKey },
			{ "GetAxisConfig", &UWM_HID_Joystick::execGetAxisConfig },
			{ "GetBinding", &UWM_HID_Joystick::execGetBinding },
			{ "GetBindingOptions", &UWM_HID_Joystick::execGetBindingOptions },
			{ "GetConfigurationMode", &UWM_HID_Joystick::execGetConfigurationMode },
			{ "ListenForKeyInput", &UWM_HID_Joystick::execListenForKeyInput },
			{ "PressButton", &UWM_HID_Joystick::execPressButton },
			{ "RebindKeyInput", &UWM_HID_Joystick::execRebindKeyInput },
			{ "ResetAxisConfig", &UWM_HID_Joystick::execResetAxisConfig },
			{ "ResetConfigurationMode", &UWM_HID_Joystick::execResetConfigurationMode },
			{ "SaveConfig", &UWM_HID_Joystick::execSaveConfig },
			{ "SetAxisConfig", &UWM_HID_Joystick::execSetAxisConfig },
			{ "SetConfigurationMode", &UWM_HID_Joystick::execSetConfigurationMode },
			{ "UpdateAxisValue", &UWM_HID_Joystick::execUpdateAxisValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics
	{
		struct WM_HID_Joystick_eventAutodetectAxisConfig_Parms
		{
			int32 Axis;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventAutodetectAxisConfig_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Axis Configuration" },
		{ "DisplayName", "AutodetectAxisConfig" },
		{ "Keywords", "AutodetectAxisConfig" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "AutodetectAxisConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::WM_HID_Joystick_eventAutodetectAxisConfig_Parms), Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics
	{
		struct WM_HID_Joystick_eventBind_InputKey_Parms
		{
			FKey Key;
			FString TargetBinding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventBind_InputKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::NewProp_TargetBinding = { "TargetBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventBind_InputKey_Parms, TargetBinding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::NewProp_TargetBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Binding" },
		{ "Comment", "/**Use Only WM_Gamepad Keys !  */" },
		{ "DisplayName", "Bind_InputKey" },
		{ "Keywords", "Bind Input Key" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
		{ "ToolTip", "Use Only WM_Gamepad Keys !" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "Bind_InputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::WM_HID_Joystick_eventBind_InputKey_Parms), Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics
	{
		struct WM_HID_Joystick_eventGetAxisConfig_Parms
		{
			int32 AxisNumber;
			FWM_HID_AxisConfiguration config;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AxisNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::NewProp_AxisNumber = { "AxisNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventGetAxisConfig_Parms, AxisNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventGetAxisConfig_Parms, config), Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration, METADATA_PARAMS(nullptr, 0) }; // 208124677
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::NewProp_AxisNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::NewProp_config,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Axis Configuration" },
		{ "DisplayName", "GetAxisConfig" },
		{ "Keywords", "Get Axis Config" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "GetAxisConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::WM_HID_Joystick_eventGetAxisConfig_Parms), Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics
	{
		struct WM_HID_Joystick_eventGetBinding_Parms
		{
			FKey Key;
			FString Binding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventGetBinding_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventGetBinding_Parms, Binding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Binding" },
		{ "Comment", "/**Use Only WM_Gamepad Keys !  */" },
		{ "DisplayName", "GetBinding" },
		{ "Keywords", "Get Binding" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
		{ "ToolTip", "Use Only WM_Gamepad Keys !" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "GetBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::WM_HID_Joystick_eventGetBinding_Parms), Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_GetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_GetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics
	{
		struct WM_HID_Joystick_eventGetBindingOptions_Parms
		{
			FKey Key;
			TArray<FString> Options;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Options_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventGetBindingOptions_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventGetBindingOptions_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Binding" },
		{ "Comment", "/**Use Only WM_Gamepad Keys !  */" },
		{ "DisplayName", "GetBindingOptions" },
		{ "Keywords", "Get Binding Options" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
		{ "ToolTip", "Use Only WM_Gamepad Keys !" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "GetBindingOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::WM_HID_Joystick_eventGetBindingOptions_Parms), Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics
	{
		struct WM_HID_Joystick_eventGetConfigurationMode_Parms
		{
			int32 ConfigurationMode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConfigurationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::NewProp_ConfigurationMode = { "ConfigurationMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventGetConfigurationMode_Parms, ConfigurationMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::NewProp_ConfigurationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controller Config Mode" },
		{ "Comment", "///get current config\n///CONFIG MODE\n" },
		{ "DisplayName", "GetConfigurationMode" },
		{ "Keywords", "Get Configuration Mode" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
		{ "ToolTip", "get current config\nCONFIG MODE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "GetConfigurationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::WM_HID_Joystick_eventGetConfigurationMode_Parms), Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics
	{
		struct WM_HID_Joystick_eventListenForKeyInput_Parms
		{
			FKey Key;
			bool sucess;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_sucess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sucess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventListenForKeyInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::NewProp_sucess_SetBit(void* Obj)
	{
		((WM_HID_Joystick_eventListenForKeyInput_Parms*)Obj)->sucess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::NewProp_sucess = { "sucess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_HID_Joystick_eventListenForKeyInput_Parms), &Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::NewProp_sucess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::NewProp_sucess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Binding" },
		{ "Comment", "///////LISTENING\n" },
		{ "DisplayName", "ListenForKeyInput" },
		{ "Keywords", "ListenForKeyInput" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
		{ "ToolTip", "/LISTENING" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "ListenForKeyInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::WM_HID_Joystick_eventListenForKeyInput_Parms), Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventPressButton_Parms, Button), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "HIDJoystick" },
		{ "Comment", "//DATA\n///CONFIG DYNAMIC\n" },
		{ "DisplayName", "PressButton" },
		{ "Keywords", "PressButton" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
		{ "ToolTip", "DATA\nCONFIG DYNAMIC" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "PressButton", nullptr, nullptr, sizeof(WM_HID_Joystick_eventPressButton_Parms), Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_PressButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_PressButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics
	{
		struct WM_HID_Joystick_eventRebindKeyInput_Parms
		{
			FKey Key;
			bool sucess;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_sucess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sucess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventRebindKeyInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::NewProp_sucess_SetBit(void* Obj)
	{
		((WM_HID_Joystick_eventRebindKeyInput_Parms*)Obj)->sucess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::NewProp_sucess = { "sucess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WM_HID_Joystick_eventRebindKeyInput_Parms), &Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::NewProp_sucess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::NewProp_sucess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Binding" },
		{ "DisplayName", "RebindKeyInput" },
		{ "Keywords", "RebindKeyInput" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "RebindKeyInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::WM_HID_Joystick_eventRebindKeyInput_Parms), Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics
	{
		struct WM_HID_Joystick_eventResetAxisConfig_Parms
		{
			int32 Axis;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventResetAxisConfig_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Axis Configuration" },
		{ "DisplayName", "ResetAxisConfig" },
		{ "Keywords", "ResetAxisConfig" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "ResetAxisConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::WM_HID_Joystick_eventResetAxisConfig_Parms), Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controller Config Mode" },
		{ "DisplayName", "Reset Configuration Mode" },
		{ "Keywords", "Reset Configuratio nMode" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "ResetConfigurationMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "HIDJoystick" },
		{ "DisplayName", "SaveConfig" },
		{ "Keywords", "SaveConfig" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "SaveConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics
	{
		struct WM_HID_Joystick_eventSetAxisConfig_Parms
		{
			int32 AxisNumber;
			FWM_HID_AxisConfiguration config;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AxisNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::NewProp_AxisNumber = { "AxisNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventSetAxisConfig_Parms, AxisNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventSetAxisConfig_Parms, config), Z_Construct_UScriptStruct_FWM_HID_AxisConfiguration, METADATA_PARAMS(nullptr, 0) }; // 208124677
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::NewProp_AxisNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::NewProp_config,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Axis Configuration" },
		{ "DisplayName", "SetAxisConfig" },
		{ "Keywords", "Set Axis Config" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "SetAxisConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::WM_HID_Joystick_eventSetAxisConfig_Parms), Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics
	{
		struct WM_HID_Joystick_eventSetConfigurationMode_Parms
		{
			int32 ConfigurationMode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConfigurationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::NewProp_ConfigurationMode = { "ConfigurationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventSetConfigurationMode_Parms, ConfigurationMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::NewProp_ConfigurationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controller Config Mode" },
		{ "DisplayName", "Set Configuration Mode" },
		{ "Keywords", "Set Configuration Mode" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "SetConfigurationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::WM_HID_Joystick_eventSetConfigurationMode_Parms), Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics
	{
		struct WM_HID_Joystick_eventUpdateAxisValue_Parms
		{
			int32 Axis;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_HID_Joystick_eventUpdateAxisValue_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Axis Configuration" },
		{ "DisplayName", "UpdateAxisValue" },
		{ "Keywords", "UpdateAxisValue" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_HID_Joystick, nullptr, "UpdateAxisValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::WM_HID_Joystick_eventUpdateAxisValue_Parms), Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_HID_Joystick);
	UClass* Z_Construct_UClass_UWM_HID_Joystick_NoRegister()
	{
		return UWM_HID_Joystick::StaticClass();
	}
	struct Z_Construct_UClass_UWM_HID_Joystick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConfigMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModeSwitched_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnModeSwitched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConfigChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfigChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsListeningForInput_MetaData[];
#endif
		static void NewProp_bIsListeningForInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsListeningForInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListeningKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListeningKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_HID_Joystick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWM_Device_HID,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWM_HID_Joystick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWM_HID_Joystick_AutodetectAxisConfig, "AutodetectAxisConfig" }, // 1176400178
		{ &Z_Construct_UFunction_UWM_HID_Joystick_Bind_InputKey, "Bind_InputKey" }, // 2703496397
		{ &Z_Construct_UFunction_UWM_HID_Joystick_GetAxisConfig, "GetAxisConfig" }, // 2684584270
		{ &Z_Construct_UFunction_UWM_HID_Joystick_GetBinding, "GetBinding" }, // 3363658484
		{ &Z_Construct_UFunction_UWM_HID_Joystick_GetBindingOptions, "GetBindingOptions" }, // 1441620626
		{ &Z_Construct_UFunction_UWM_HID_Joystick_GetConfigurationMode, "GetConfigurationMode" }, // 2630132002
		{ &Z_Construct_UFunction_UWM_HID_Joystick_ListenForKeyInput, "ListenForKeyInput" }, // 647281370
		{ &Z_Construct_UFunction_UWM_HID_Joystick_PressButton, "PressButton" }, // 1774303002
		{ &Z_Construct_UFunction_UWM_HID_Joystick_RebindKeyInput, "RebindKeyInput" }, // 2798479695
		{ &Z_Construct_UFunction_UWM_HID_Joystick_ResetAxisConfig, "ResetAxisConfig" }, // 3267706261
		{ &Z_Construct_UFunction_UWM_HID_Joystick_ResetConfigurationMode, "ResetConfigurationMode" }, // 2431668659
		{ &Z_Construct_UFunction_UWM_HID_Joystick_SaveConfig, "SaveConfig" }, // 3587997826
		{ &Z_Construct_UFunction_UWM_HID_Joystick_SetAxisConfig, "SetAxisConfig" }, // 90950832
		{ &Z_Construct_UFunction_UWM_HID_Joystick_SetConfigurationMode, "SetConfigurationMode" }, // 3630760309
		{ &Z_Construct_UFunction_UWM_HID_Joystick_UpdateAxisValue, "UpdateAxisValue" }, // 4064291210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*USTRUCT(BlueprintType)\nstruct FWM_ForceFeedback\n{\n\x09GENERATED_USTRUCT_BODY()\n\n\x09//setting will set value for left and rith motor to maximum of AllMotorStrength\n\x09UPROPERTY(BlueprintReadOnly, Category = \"ForceFeedback\")\n\x09\x09""float AllMotorsStrength = 0.0f;\n\x09UPROPERTY(BlueprintReadOnly, Category = \"ForceFeedback\")\n\x09\x09 float LeftMotorStrength = 0.0f;\n\x09UPROPERTY(BlueprintReadOnly, Category = \"ForceFeedback\")\n\x09\x09 float RightMotorStrength = 0.0f;\n};*/" },
		{ "IncludePath", "Devices/WM_HID_Joystick.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FWM_ForceFeedback\n{\n       GENERATED_USTRUCT_BODY()\n\n       //setting will set value for left and rith motor to maximum of AllMotorStrength\n       UPROPERTY(BlueprintReadOnly, Category = \"ForceFeedback\")\n               float AllMotorsStrength = 0.0f;\n       UPROPERTY(BlueprintReadOnly, Category = \"ForceFeedback\")\n                float LeftMotorStrength = 0.0f;\n       UPROPERTY(BlueprintReadOnly, Category = \"ForceFeedback\")\n                float RightMotorStrength = 0.0f;\n};" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ConfigMode_MetaData[] = {
		{ "Category", "HIDJoystick" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ConfigMode = { "ConfigMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_HID_Joystick, ConfigMode), METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ConfigMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ConfigMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnModeSwitched_MetaData[] = {
		{ "Category", "HIDJoystick" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnModeSwitched = { "OnModeSwitched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_HID_Joystick, OnModeSwitched), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnModeSwitched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnModeSwitched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnModeSwitched_MetaData)) }; // 4191199171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnConfigChanged_MetaData[] = {
		{ "Category", "HIDJoystick" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnConfigChanged = { "OnConfigChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_HID_Joystick, OnConfigChanged), Z_Construct_UDelegateFunction_WM_InputManager_Plugin_OnConfigChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnConfigChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnConfigChanged_MetaData)) }; // 3863813926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_bIsListeningForInput_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	void Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_bIsListeningForInput_SetBit(void* Obj)
	{
		((UWM_HID_Joystick*)Obj)->bIsListeningForInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_bIsListeningForInput = { "bIsListeningForInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_HID_Joystick), &Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_bIsListeningForInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_bIsListeningForInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_bIsListeningForInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ListeningKey_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/Devices/WM_HID_Joystick.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ListeningKey = { "ListeningKey", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_HID_Joystick, ListeningKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ListeningKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ListeningKey_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWM_HID_Joystick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ConfigMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnModeSwitched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_OnConfigChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_bIsListeningForInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_HID_Joystick_Statics::NewProp_ListeningKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_HID_Joystick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_HID_Joystick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_HID_Joystick_Statics::ClassParams = {
		&UWM_HID_Joystick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWM_HID_Joystick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_HID_Joystick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_HID_Joystick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_HID_Joystick()
	{
		if (!Z_Registration_Info_UClass_UWM_HID_Joystick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_HID_Joystick.OuterSingleton, Z_Construct_UClass_UWM_HID_Joystick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_HID_Joystick.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_HID_Joystick>()
	{
		return UWM_HID_Joystick::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_HID_Joystick);
	UWM_HID_Joystick::~UWM_HID_Joystick() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_HID_Joystick, UWM_HID_Joystick::StaticClass, TEXT("UWM_HID_Joystick"), &Z_Registration_Info_UClass_UWM_HID_Joystick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_HID_Joystick), 1133596601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_851758007(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
