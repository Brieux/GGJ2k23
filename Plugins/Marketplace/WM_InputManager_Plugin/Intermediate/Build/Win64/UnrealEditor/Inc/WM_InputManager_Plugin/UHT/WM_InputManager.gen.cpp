// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/WM_InputManager.h"
#include "InputCore/Classes/InputCoreTypes.h"
#include "WM_InputManager_Plugin/Public/WM_ControllerFunctionLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_InputManager() {}
// Cross Module References
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_HID_Joystick_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_InputManager();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_InputManager_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_InputManagerBase();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType();
	WM_INPUTMANAGER_PLUGIN_API UEnum* Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDPADCollection();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHidKeysByClass();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HidKeysByClass;
class UScriptStruct* FHidKeysByClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HidKeysByClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HidKeysByClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHidKeysByClass, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("HidKeysByClass"));
	}
	return Z_Registration_Info_UScriptStruct_HidKeysByClass.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FHidKeysByClass>()
{
	return FHidKeysByClass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHidKeysByClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeysByType_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysByType_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysByType_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KeysByType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Axes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Axes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Buttons_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buttons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Buttons;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DPADs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DPADs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DPADs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DPADs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHidKeysByClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHidKeysByClass>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType_ValueProp = { "KeysByType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType, METADATA_PARAMS(nullptr, 0) }; // 2369441614
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType_Key_KeyProp = { "KeysByType_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType_MetaData[] = {
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType = { "KeysByType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHidKeysByClass, KeysByType), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType_MetaData)) }; // 2101135134 2369441614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes_MetaData[] = {
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHidKeysByClass, Axes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes_MetaData)) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons_ValueProp = { "Buttons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons_Key_KeyProp = { "Buttons_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons_MetaData[] = {
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHidKeysByClass, Buttons), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons_MetaData)) }; // 2101135134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs_ValueProp = { "DPADs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDPADCollection, METADATA_PARAMS(nullptr, 0) }; // 1542156487
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs_Key_KeyProp = { "DPADs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs_MetaData[] = {
		{ "Comment", "//collection\n" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "collection" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs = { "DPADs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHidKeysByClass, DPADs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs_MetaData)) }; // 1542156487
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHidKeysByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_KeysByType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Axes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_Buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewProp_DPADs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHidKeysByClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"HidKeysByClass",
		sizeof(FHidKeysByClass),
		alignof(FHidKeysByClass),
		Z_Construct_UScriptStruct_FHidKeysByClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHidKeysByClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHidKeysByClass()
	{
		if (!Z_Registration_Info_UScriptStruct_HidKeysByClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HidKeysByClass.InnerSingleton, Z_Construct_UScriptStruct_FHidKeysByClass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HidKeysByClass.InnerSingleton;
	}
	DEFINE_FUNCTION(UWM_InputManager::execSupportMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SupportMe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManager::execGetCurrentProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManager::execLoadProfile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadProfile(Z_Param_ProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManager::execGet_HidJoystickKeyType)
	{
		P_GET_STRUCT(FKey,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EWM_GamepadKeyType>*)Z_Param__Result=P_THIS->Get_HidJoystickKeyType(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManager::execBeginUMG)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginUMG();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManager::execSelectDevice)
	{
		P_GET_OBJECT(UWM_Device,Z_Param_deviceToSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectDevice(Z_Param_deviceToSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManager::execGetSelectedGamepad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWM_HID_Joystick**)Z_Param__Result=P_THIS->GetSelectedGamepad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWM_InputManager::execGetSelectedDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWM_Device**)Z_Param__Result=P_THIS->GetSelectedDevice();
		P_NATIVE_END;
	}
	void UWM_InputManager::StaticRegisterNativesUWM_InputManager()
	{
		UClass* Class = UWM_InputManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginUMG", &UWM_InputManager::execBeginUMG },
			{ "Get_HidJoystickKeyType", &UWM_InputManager::execGet_HidJoystickKeyType },
			{ "GetCurrentProfileName", &UWM_InputManager::execGetCurrentProfileName },
			{ "GetSelectedDevice", &UWM_InputManager::execGetSelectedDevice },
			{ "GetSelectedGamepad", &UWM_InputManager::execGetSelectedGamepad },
			{ "LoadProfile", &UWM_InputManager::execLoadProfile },
			{ "SelectDevice", &UWM_InputManager::execSelectDevice },
			{ "SupportMe", &UWM_InputManager::execSupportMe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWM_InputManager_BeginUMG_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_BeginUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Begin UMG" },
		{ "Keywords", "Begin UMG" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_BeginUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "BeginUMG", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_BeginUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_BeginUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_BeginUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_BeginUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics
	{
		struct WM_InputManager_eventGet_HidJoystickKeyType_Parms
		{
			FKey key;
			TEnumAsByte<EWM_GamepadKeyType> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManager_eventGet_HidJoystickKeyType_Parms, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManager_eventGet_HidJoystickKeyType_Parms, ReturnValue), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType, METADATA_PARAMS(nullptr, 0) }; // 2369441614
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Get_HidJoystickKeyType" },
		{ "Keywords", "Get_HidJoystickKeyType" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "Get_HidJoystickKeyType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::WM_InputManager_eventGet_HidJoystickKeyType_Parms), Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics
	{
		struct WM_InputManager_eventGetCurrentProfileName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManager_eventGetCurrentProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Get Current Profile Name" },
		{ "Keywords", "Get Current Profile Name" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "GetCurrentProfileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::WM_InputManager_eventGetCurrentProfileName_Parms), Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics
	{
		struct WM_InputManager_eventGetSelectedDevice_Parms
		{
			UWM_Device* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManager_eventGetSelectedDevice_Parms, ReturnValue), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "/*UPROPERTY(BlueprintReadOnly)\n\x09\x09""FString GamepadCalibrationProcess;*/" },
		{ "DisplayName", "Get Selected Device" },
		{ "Keywords", "Get Selected Device" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly)\n               FString GamepadCalibrationProcess;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "GetSelectedDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::WM_InputManager_eventGetSelectedDevice_Parms), Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics
	{
		struct WM_InputManager_eventGetSelectedGamepad_Parms
		{
			UWM_HID_Joystick* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManager_eventGetSelectedGamepad_Parms, ReturnValue), Z_Construct_UClass_UWM_HID_Joystick_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Get Selected Joystick" },
		{ "Keywords", "Get Selected Joystick" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "GetSelectedGamepad", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::WM_InputManager_eventGetSelectedGamepad_Parms), Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics
	{
		struct WM_InputManager_eventLoadProfile_Parms
		{
			FString ProfileName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManager_eventLoadProfile_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::NewProp_ProfileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Load Profile" },
		{ "Keywords", "Load Profile" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "LoadProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::WM_InputManager_eventLoadProfile_Parms), Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_LoadProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_LoadProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics
	{
		struct WM_InputManager_eventSelectDevice_Parms
		{
			UWM_Device* deviceToSelect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deviceToSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::NewProp_deviceToSelect = { "deviceToSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WM_InputManager_eventSelectDevice_Parms, deviceToSelect), Z_Construct_UClass_UWM_Device_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::NewProp_deviceToSelect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "DisplayName", "Select Device" },
		{ "Keywords", "Select Device" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "SelectDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::WM_InputManager_eventSelectDevice_Parms), Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_SelectDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_SelectDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWM_InputManager_SupportMe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWM_InputManager_SupportMe_Statics::Function_MetaDataParams[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "///Run if you wish to support creator of WM Input Manager\n" },
		{ "DisplayName", "Support creator of Plugin" },
		{ "Keywords", "get set Support Me" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "Run if you wish to support creator of WM Input Manager" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWM_InputManager_SupportMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWM_InputManager, nullptr, "SupportMe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWM_InputManager_SupportMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWM_InputManager_SupportMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWM_InputManager_SupportMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWM_InputManager_SupportMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_InputManager);
	UClass* Z_Construct_UClass_UWM_InputManager_NoRegister()
	{
		return UWM_InputManager::StaticClass();
	}
	struct Z_Construct_UClass_UWM_InputManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HIDJoystick_KeysByType_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HIDJoystick_KeysByType_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HIDJoystick_KeysByType_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HIDJoystick_KeysByType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HIDJoystick_Axes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HIDJoystick_Axes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HIDJoystick_Axes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HIDJoystick_Axes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HIDJoystick_Buttons_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HIDJoystick_Buttons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HIDJoystick_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HIDJoystick_Buttons;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HIDJoystick_DPADs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HIDJoystick_DPADs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HIDJoystick_DPADs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HIDJoystick_DPADs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableHIDInternalButtonEvents_MetaData[];
#endif
		static void NewProp_EnableHIDInternalButtonEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableHIDInternalButtonEvents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numGamepads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numGamepads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numKeyboards_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numKeyboards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numMouses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numMouses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAssignDevicesByDeviceSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoAssignDevicesByDeviceSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyUsedInputs_MetaData[];
#endif
		static void NewProp_ShowOnlyUsedInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowOnlyUsedInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_InputManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWM_InputManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWM_InputManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWM_InputManager_BeginUMG, "BeginUMG" }, // 294143355
		{ &Z_Construct_UFunction_UWM_InputManager_Get_HidJoystickKeyType, "Get_HidJoystickKeyType" }, // 19286496
		{ &Z_Construct_UFunction_UWM_InputManager_GetCurrentProfileName, "GetCurrentProfileName" }, // 2371515019
		{ &Z_Construct_UFunction_UWM_InputManager_GetSelectedDevice, "GetSelectedDevice" }, // 1551069230
		{ &Z_Construct_UFunction_UWM_InputManager_GetSelectedGamepad, "GetSelectedGamepad" }, // 3747769039
		{ &Z_Construct_UFunction_UWM_InputManager_LoadProfile, "LoadProfile" }, // 696254156
		{ &Z_Construct_UFunction_UWM_InputManager_SelectDevice, "SelectDevice" }, // 2081166376
		{ &Z_Construct_UFunction_UWM_InputManager_SupportMe, "SupportMe" }, // 3319929144
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UCLASS(Blueprintable,nonTransient)\n" },
		{ "IncludePath", "WM_InputManager.h" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UCLASS(Blueprintable,nonTransient)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType_ValueProp = { "HIDJoystick_KeysByType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_WM_InputManager_Plugin_EWM_GamepadKeyType, METADATA_PARAMS(nullptr, 0) }; // 2369441614
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType_Key_KeyProp = { "HIDJoystick_KeysByType_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "///GAMEPAD KEYS\n" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "GAMEPAD KEYS" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType = { "HIDJoystick_KeysByType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, HIDJoystick_KeysByType), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType_MetaData)) }; // 2101135134 2369441614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes_ValueProp = { "HIDJoystick_Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes_Key_KeyProp = { "HIDJoystick_Axes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes = { "HIDJoystick_Axes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, HIDJoystick_Axes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes_MetaData)) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons_ValueProp = { "HIDJoystick_Buttons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons_Key_KeyProp = { "HIDJoystick_Buttons_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons = { "HIDJoystick_Buttons", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, HIDJoystick_Buttons), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons_MetaData)) }; // 2101135134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs_ValueProp = { "HIDJoystick_DPADs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDPADCollection, METADATA_PARAMS(nullptr, 0) }; // 1542156487
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs_Key_KeyProp = { "HIDJoystick_DPADs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "//collection\n" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "collection" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs = { "HIDJoystick_DPADs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, HIDJoystick_DPADs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs_MetaData)) }; // 1542156487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_EnableHIDInternalButtonEvents_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "/*\x09UPROPERTY(BlueprintReadOnly, Category = \"WM_InputManager\")\n        bool TurnOff_Devices_Inputs;*/" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, Category = \"WM_InputManager\")\nbool TurnOff_Devices_Inputs;" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManager_Statics::NewProp_EnableHIDInternalButtonEvents_SetBit(void* Obj)
	{
		((UWM_InputManager*)Obj)->EnableHIDInternalButtonEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_EnableHIDInternalButtonEvents = { "EnableHIDInternalButtonEvents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManager), &Z_Construct_UClass_UWM_InputManager_Statics::NewProp_EnableHIDInternalButtonEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_EnableHIDInternalButtonEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_EnableHIDInternalButtonEvents_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_status_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "/*UPROPERTY(BlueprintReadOnly)\n\x09\x09TMap<FKey, FString> HIDJoystick_DPADButtons; ?*////FString to DpadCollection as not not default binding but pointer to DpadCollection in which button is\n" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly)\n               TMap<FKey, FString> HIDJoystick_DPADButtons; ?///FString to DpadCollection as not not default binding but pointer to DpadCollection in which button is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, status), Z_Construct_UEnum_WM_InputManager_Plugin_EWM_InputManagerStatus, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_status_MetaData)) }; // 238671090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numGamepads_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "Comment", "/*UPROPERTY(BlueprintReadOnly)\n\x09\x09""bool isManagerWidgetVisible = false;*/" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly)\n               bool isManagerWidgetVisible = false;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numGamepads = { "numGamepads", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, numGamepads), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numGamepads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numGamepads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numKeyboards_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numKeyboards = { "numKeyboards", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, numKeyboards), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numKeyboards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numKeyboards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numMouses_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numMouses = { "numMouses", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, numMouses), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numMouses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numMouses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_AutoAssignDevicesByDeviceSlot_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_AutoAssignDevicesByDeviceSlot = { "AutoAssignDevicesByDeviceSlot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWM_InputManager, AutoAssignDevicesByDeviceSlot), METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_AutoAssignDevicesByDeviceSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_AutoAssignDevicesByDeviceSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_InputManager_Statics::NewProp_ShowOnlyUsedInputs_MetaData[] = {
		{ "Category", "WM_InputManager" },
		{ "ModuleRelativePath", "Public/WM_InputManager.h" },
	};
#endif
	void Z_Construct_UClass_UWM_InputManager_Statics::NewProp_ShowOnlyUsedInputs_SetBit(void* Obj)
	{
		((UWM_InputManager*)Obj)->ShowOnlyUsedInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWM_InputManager_Statics::NewProp_ShowOnlyUsedInputs = { "ShowOnlyUsedInputs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWM_InputManager), &Z_Construct_UClass_UWM_InputManager_Statics::NewProp_ShowOnlyUsedInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_ShowOnlyUsedInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::NewProp_ShowOnlyUsedInputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWM_InputManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_KeysByType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Axes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_Buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_HIDJoystick_DPADs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_EnableHIDInternalButtonEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numGamepads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numKeyboards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_numMouses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_AutoAssignDevicesByDeviceSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWM_InputManager_Statics::NewProp_ShowOnlyUsedInputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_InputManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_InputManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_InputManager_Statics::ClassParams = {
		&UWM_InputManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWM_InputManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_InputManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_InputManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_InputManager()
	{
		if (!Z_Registration_Info_UClass_UWM_InputManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_InputManager.OuterSingleton, Z_Construct_UClass_UWM_InputManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_InputManager.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_InputManager>()
	{
		return UWM_InputManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_InputManager);
	UWM_InputManager::~UWM_InputManager() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_Statics::ScriptStructInfo[] = {
		{ FHidKeysByClass::StaticStruct, Z_Construct_UScriptStruct_FHidKeysByClass_Statics::NewStructOps, TEXT("HidKeysByClass"), &Z_Registration_Info_UScriptStruct_HidKeysByClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHidKeysByClass), 1339963977U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_InputManager, UWM_InputManager::StaticClass, TEXT("UWM_InputManager"), &Z_Registration_Info_UClass_UWM_InputManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_InputManager), 2902862436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_450826838(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
