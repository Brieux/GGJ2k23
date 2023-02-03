// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Devices/WM_Device.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WM_INPUTMANAGER_PLUGIN_WM_Device_generated_h
#error "WM_Device.generated.h already included, missing '#pragma once' in WM_Device.h"
#endif
#define WM_INPUTMANAGER_PLUGIN_WM_Device_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWM_BasicDeviceInfo_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct FWM_BasicDeviceInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_45_DELEGATE \
static inline void FOnRawDataInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnRawDataInitialized) \
{ \
	OnRawDataInitialized.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisValidPlayerIndex); \
	DECLARE_FUNCTION(execClearDeviceInput); \
	DECLARE_FUNCTION(execAssignDeviceToPlayerIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisValidPlayerIndex); \
	DECLARE_FUNCTION(execClearDeviceInput); \
	DECLARE_FUNCTION(execAssignDeviceToPlayerIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWM_Device(); \
	friend struct Z_Construct_UClass_UWM_Device_Statics; \
public: \
	DECLARE_CLASS(UWM_Device, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_Device)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUWM_Device(); \
	friend struct Z_Construct_UClass_UWM_Device_Statics; \
public: \
	DECLARE_CLASS(UWM_Device, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_Device)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWM_Device(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_Device) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_Device); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_Device); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_Device(UWM_Device&&); \
	NO_API UWM_Device(const UWM_Device&); \
public: \
	NO_API virtual ~UWM_Device();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_Device(UWM_Device&&); \
	NO_API UWM_Device(const UWM_Device&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_Device); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_Device); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_Device) \
	NO_API virtual ~UWM_Device();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_47_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<class UWM_Device>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
