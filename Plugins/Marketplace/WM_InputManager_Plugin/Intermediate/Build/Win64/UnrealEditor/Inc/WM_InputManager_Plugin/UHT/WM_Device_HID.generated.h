// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Devices/WM_Device_HID.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWM_AxisCodeTable : uint8;
struct FKey;
struct FWM_HID_AxisData;
#ifdef WM_INPUTMANAGER_PLUGIN_WM_Device_HID_generated_h
#error "WM_Device_HID.generated.h already included, missing '#pragma once' in WM_Device_HID.h"
#endif
#define WM_INPUTMANAGER_PLUGIN_WM_Device_HID_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWM_HID_XInputWrap_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct FWM_HID_XInputWrap>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWM_HID_DeviceInfo_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct FWM_HID_DeviceInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWM_HID_ButtonData_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct FWM_HID_ButtonData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWM_HID_AxisData_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct FWM_HID_AxisData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_262_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWM_HID_DPADData_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct FWM_HID_DPADData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetButtonKeyValue); \
	DECLARE_FUNCTION(execGetAxisKeyValue); \
	DECLARE_FUNCTION(execGetRaw_AxisValue); \
	DECLARE_FUNCTION(execGetRaw_ButtonValue); \
	DECLARE_FUNCTION(execGetRaw_DPADData); \
	DECLARE_FUNCTION(execGetRaw_AxisData); \
	DECLARE_FUNCTION(execGetRaw_Available_DPADs); \
	DECLARE_FUNCTION(execGetRaw_Available_Axes); \
	DECLARE_FUNCTION(execGetRaw_Available_Buttons);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetButtonKeyValue); \
	DECLARE_FUNCTION(execGetAxisKeyValue); \
	DECLARE_FUNCTION(execGetRaw_AxisValue); \
	DECLARE_FUNCTION(execGetRaw_ButtonValue); \
	DECLARE_FUNCTION(execGetRaw_DPADData); \
	DECLARE_FUNCTION(execGetRaw_AxisData); \
	DECLARE_FUNCTION(execGetRaw_Available_DPADs); \
	DECLARE_FUNCTION(execGetRaw_Available_Axes); \
	DECLARE_FUNCTION(execGetRaw_Available_Buttons);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWM_Device_HID(); \
	friend struct Z_Construct_UClass_UWM_Device_HID_Statics; \
public: \
	DECLARE_CLASS(UWM_Device_HID, UWM_Device, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_Device_HID)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_INCLASS \
private: \
	static void StaticRegisterNativesUWM_Device_HID(); \
	friend struct Z_Construct_UClass_UWM_Device_HID_Statics; \
public: \
	DECLARE_CLASS(UWM_Device_HID, UWM_Device, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_Device_HID)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWM_Device_HID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_Device_HID) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_Device_HID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_Device_HID); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_Device_HID(UWM_Device_HID&&); \
	NO_API UWM_Device_HID(const UWM_Device_HID&); \
public: \
	NO_API virtual ~UWM_Device_HID();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_Device_HID(UWM_Device_HID&&); \
	NO_API UWM_Device_HID(const UWM_Device_HID&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_Device_HID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_Device_HID); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_Device_HID) \
	NO_API virtual ~UWM_Device_HID();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_320_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h_323_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<class UWM_Device_HID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_HID_h


#define FOREACH_ENUM_EWM_AXISCODETABLE(op) \
	op(EWM_AxisCodeTable::NoFlags) \
	op(EWM_AxisCodeTable::X_Axis) \
	op(EWM_AxisCodeTable::Y_Axis) \
	op(EWM_AxisCodeTable::Z_Axis) \
	op(EWM_AxisCodeTable::X_Rot) \
	op(EWM_AxisCodeTable::Y_Rot) \
	op(EWM_AxisCodeTable::Z_Rot) \
	op(EWM_AxisCodeTable::Slider) \
	op(EWM_AxisCodeTable::Dial) \
	op(EWM_AxisCodeTable::Wheel) \
	op(EWM_AxisCodeTable::Hat) \
	op(EWM_AxisCodeTable::Vx) \
	op(EWM_AxisCodeTable::Vy) \
	op(EWM_AxisCodeTable::Vz) \
	op(EWM_AxisCodeTable::Vrx) \
	op(EWM_AxisCodeTable::Vry) \
	op(EWM_AxisCodeTable::Vrz) \
	op(EWM_AxisCodeTable::Rudder) \
	op(EWM_AxisCodeTable::Throttle) 

enum class EWM_AxisCodeTable : uint8;
template<> struct TIsUEnumClass<EWM_AxisCodeTable> { enum { Value = true }; };
template<> WM_INPUTMANAGER_PLUGIN_API UEnum* StaticEnum<EWM_AxisCodeTable>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
