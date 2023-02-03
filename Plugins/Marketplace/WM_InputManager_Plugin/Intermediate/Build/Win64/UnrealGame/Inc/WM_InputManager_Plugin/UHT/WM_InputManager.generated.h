// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WM_InputManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWM_Device;
class UWM_HID_Joystick;
struct FKey;
#ifdef WM_INPUTMANAGER_PLUGIN_WM_InputManager_generated_h
#error "WM_InputManager.generated.h already included, missing '#pragma once' in WM_InputManager.h"
#endif
#define WM_INPUTMANAGER_PLUGIN_WM_InputManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHidKeysByClass_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct FHidKeysByClass>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupportMe); \
	DECLARE_FUNCTION(execGetCurrentProfileName); \
	DECLARE_FUNCTION(execLoadProfile); \
	DECLARE_FUNCTION(execGet_HidJoystickKeyType); \
	DECLARE_FUNCTION(execBeginUMG); \
	DECLARE_FUNCTION(execSelectDevice); \
	DECLARE_FUNCTION(execGetSelectedGamepad); \
	DECLARE_FUNCTION(execGetSelectedDevice);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupportMe); \
	DECLARE_FUNCTION(execGetCurrentProfileName); \
	DECLARE_FUNCTION(execLoadProfile); \
	DECLARE_FUNCTION(execGet_HidJoystickKeyType); \
	DECLARE_FUNCTION(execBeginUMG); \
	DECLARE_FUNCTION(execSelectDevice); \
	DECLARE_FUNCTION(execGetSelectedGamepad); \
	DECLARE_FUNCTION(execGetSelectedDevice);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWM_InputManager(); \
	friend struct Z_Construct_UClass_UWM_InputManager_Statics; \
public: \
	DECLARE_CLASS(UWM_InputManager, UWM_InputManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_InputManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUWM_InputManager(); \
	friend struct Z_Construct_UClass_UWM_InputManager_Statics; \
public: \
	DECLARE_CLASS(UWM_InputManager, UWM_InputManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_InputManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWM_InputManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_InputManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_InputManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_InputManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_InputManager(UWM_InputManager&&); \
	NO_API UWM_InputManager(const UWM_InputManager&); \
public: \
	NO_API virtual ~UWM_InputManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_InputManager(UWM_InputManager&&); \
	NO_API UWM_InputManager(const UWM_InputManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_InputManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_InputManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_InputManager) \
	NO_API virtual ~UWM_InputManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_38_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<class UWM_InputManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
