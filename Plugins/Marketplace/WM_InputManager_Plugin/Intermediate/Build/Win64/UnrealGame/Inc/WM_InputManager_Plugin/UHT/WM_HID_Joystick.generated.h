// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Devices/WM_HID_Joystick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FWM_HID_AxisConfiguration;
#ifdef WM_INPUTMANAGER_PLUGIN_WM_HID_Joystick_generated_h
#error "WM_HID_Joystick.generated.h already included, missing '#pragma once' in WM_HID_Joystick.h"
#endif
#define WM_INPUTMANAGER_PLUGIN_WM_HID_Joystick_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_14_DELEGATE \
struct _Script_WM_InputManager_Plugin_eventOnModeSwitched_Parms \
{ \
	int32 Mode; \
}; \
static inline void FOnModeSwitched_DelegateWrapper(const FMulticastScriptDelegate& OnModeSwitched, int32 Mode) \
{ \
	_Script_WM_InputManager_Plugin_eventOnModeSwitched_Parms Parms; \
	Parms.Mode=Mode; \
	OnModeSwitched.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_15_DELEGATE \
struct _Script_WM_InputManager_Plugin_eventOnConfigChanged_Parms \
{ \
	int32 Mode; \
}; \
static inline void FOnConfigChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConfigChanged, int32 Mode) \
{ \
	_Script_WM_InputManager_Plugin_eventOnConfigChanged_Parms Parms; \
	Parms.Mode=Mode; \
	OnConfigChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_RPC_WRAPPERS \
	virtual void PressButton_Implementation(int32 Button); \
 \
	DECLARE_FUNCTION(execUpdateAxisValue); \
	DECLARE_FUNCTION(execResetAxisConfig); \
	DECLARE_FUNCTION(execAutodetectAxisConfig); \
	DECLARE_FUNCTION(execGetAxisConfig); \
	DECLARE_FUNCTION(execSetAxisConfig); \
	DECLARE_FUNCTION(execResetConfigurationMode); \
	DECLARE_FUNCTION(execSetConfigurationMode); \
	DECLARE_FUNCTION(execGetConfigurationMode); \
	DECLARE_FUNCTION(execGetBindingOptions); \
	DECLARE_FUNCTION(execGetBinding); \
	DECLARE_FUNCTION(execBind_InputKey); \
	DECLARE_FUNCTION(execListenForKeyInput); \
	DECLARE_FUNCTION(execRebindKeyInput); \
	DECLARE_FUNCTION(execPressButton); \
	DECLARE_FUNCTION(execSaveConfig);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PressButton_Implementation(int32 Button); \
 \
	DECLARE_FUNCTION(execUpdateAxisValue); \
	DECLARE_FUNCTION(execResetAxisConfig); \
	DECLARE_FUNCTION(execAutodetectAxisConfig); \
	DECLARE_FUNCTION(execGetAxisConfig); \
	DECLARE_FUNCTION(execSetAxisConfig); \
	DECLARE_FUNCTION(execResetConfigurationMode); \
	DECLARE_FUNCTION(execSetConfigurationMode); \
	DECLARE_FUNCTION(execGetConfigurationMode); \
	DECLARE_FUNCTION(execGetBindingOptions); \
	DECLARE_FUNCTION(execGetBinding); \
	DECLARE_FUNCTION(execBind_InputKey); \
	DECLARE_FUNCTION(execListenForKeyInput); \
	DECLARE_FUNCTION(execRebindKeyInput); \
	DECLARE_FUNCTION(execPressButton); \
	DECLARE_FUNCTION(execSaveConfig);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWM_HID_Joystick(); \
	friend struct Z_Construct_UClass_UWM_HID_Joystick_Statics; \
public: \
	DECLARE_CLASS(UWM_HID_Joystick, UWM_Device_HID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_HID_Joystick)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUWM_HID_Joystick(); \
	friend struct Z_Construct_UClass_UWM_HID_Joystick_Statics; \
public: \
	DECLARE_CLASS(UWM_HID_Joystick, UWM_Device_HID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_HID_Joystick)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWM_HID_Joystick(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_HID_Joystick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_HID_Joystick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_HID_Joystick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_HID_Joystick(UWM_HID_Joystick&&); \
	NO_API UWM_HID_Joystick(const UWM_HID_Joystick&); \
public: \
	NO_API virtual ~UWM_HID_Joystick();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_HID_Joystick(UWM_HID_Joystick&&); \
	NO_API UWM_HID_Joystick(const UWM_HID_Joystick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_HID_Joystick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_HID_Joystick); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_HID_Joystick) \
	NO_API virtual ~UWM_HID_Joystick();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_32_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<class UWM_HID_Joystick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_HID_Joystick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
