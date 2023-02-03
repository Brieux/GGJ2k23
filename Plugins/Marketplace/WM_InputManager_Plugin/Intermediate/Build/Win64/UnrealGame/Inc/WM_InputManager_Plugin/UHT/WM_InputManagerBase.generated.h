// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WM_InputManagerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputMappingContext;
class UWM_Device;
struct FKey;
#ifdef WM_INPUTMANAGER_PLUGIN_WM_InputManagerBase_generated_h
#error "WM_InputManagerBase.generated.h already included, missing '#pragma once' in WM_InputManagerBase.h"
#endif
#define WM_INPUTMANAGER_PLUGIN_WM_InputManagerBase_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_F_PCS_Device_Statics; \
	WM_INPUTMANAGER_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<struct F_PCS_Device>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_33_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnDeviceConnected_Parms \
{ \
	UWM_Device* Device; \
}; \
static inline void F_OnDeviceConnected_DelegateWrapper(const FMulticastScriptDelegate& _OnDeviceConnected, UWM_Device* Device) \
{ \
	_Script_WM_InputManager_Plugin_event_OnDeviceConnected_Parms Parms; \
	Parms.Device=Device; \
	_OnDeviceConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_34_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnDeviceDisconnected_Parms \
{ \
	UWM_Device* Device; \
}; \
static inline void F_OnDeviceDisconnected_DelegateWrapper(const FMulticastScriptDelegate& _OnDeviceDisconnected, UWM_Device* Device) \
{ \
	_Script_WM_InputManager_Plugin_event_OnDeviceDisconnected_Parms Parms; \
	Parms.Device=Device; \
	_OnDeviceDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_35_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnNumJoysticksChanged_Parms \
{ \
	int32 OnNumDevicesChanged; \
}; \
static inline void F_OnNumJoysticksChanged_DelegateWrapper(const FMulticastScriptDelegate& _OnNumJoysticksChanged, int32 OnNumDevicesChanged) \
{ \
	_Script_WM_InputManager_Plugin_event_OnNumJoysticksChanged_Parms Parms; \
	Parms.OnNumDevicesChanged=OnNumDevicesChanged; \
	_OnNumJoysticksChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_36_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnJoystickButtonTrigger_Parms \
{ \
	FKey OnJoystickButtonTrigger; \
}; \
static inline void F_OnJoystickButtonTrigger_DelegateWrapper(const FMulticastScriptDelegate& _OnJoystickButtonTrigger, FKey OnJoystickButtonTrigger) \
{ \
	_Script_WM_InputManager_Plugin_event_OnJoystickButtonTrigger_Parms Parms; \
	Parms.OnJoystickButtonTrigger=OnJoystickButtonTrigger; \
	_OnJoystickButtonTrigger.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_39_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnDeviceSelected_Parms \
{ \
	UWM_Device* Device; \
}; \
static inline void F_OnDeviceSelected_DelegateWrapper(const FMulticastScriptDelegate& _OnDeviceSelected, UWM_Device* Device) \
{ \
	_Script_WM_InputManager_Plugin_event_OnDeviceSelected_Parms Parms; \
	Parms.Device=Device; \
	_OnDeviceSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_40_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnButtonKeyPressed_Parms \
{ \
	FKey WM_Key; \
	UWM_Device* Device; \
}; \
static inline void F_OnButtonKeyPressed_DelegateWrapper(const FMulticastScriptDelegate& _OnButtonKeyPressed, FKey WM_Key, UWM_Device* Device) \
{ \
	_Script_WM_InputManager_Plugin_event_OnButtonKeyPressed_Parms Parms; \
	Parms.WM_Key=WM_Key; \
	Parms.Device=Device; \
	_OnButtonKeyPressed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_41_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnButtonKeyReleased_Parms \
{ \
	FKey WM_Key; \
	UWM_Device* Device; \
}; \
static inline void F_OnButtonKeyReleased_DelegateWrapper(const FMulticastScriptDelegate& _OnButtonKeyReleased, FKey WM_Key, UWM_Device* Device) \
{ \
	_Script_WM_InputManager_Plugin_event_OnButtonKeyReleased_Parms Parms; \
	Parms.WM_Key=WM_Key; \
	Parms.Device=Device; \
	_OnButtonKeyReleased.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_42_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnManagerModeChanged_Parms \
{ \
	FString ManagerMode; \
}; \
static inline void F_OnManagerModeChanged_DelegateWrapper(const FMulticastScriptDelegate& _OnManagerModeChanged, const FString& ManagerMode) \
{ \
	_Script_WM_InputManager_Plugin_event_OnManagerModeChanged_Parms Parms; \
	Parms.ManagerMode=ManagerMode; \
	_OnManagerModeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_43_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnSwitchManagerModeEnum_Parms \
{ \
	TEnumAsByte<EWM_InputManagerMode> ManagerMode; \
}; \
static inline void F_OnSwitchManagerModeEnum_DelegateWrapper(const FMulticastScriptDelegate& _OnSwitchManagerModeEnum, EWM_InputManagerMode ManagerMode) \
{ \
	_Script_WM_InputManager_Plugin_event_OnSwitchManagerModeEnum_Parms Parms; \
	Parms.ManagerMode=ManagerMode; \
	_OnSwitchManagerModeEnum.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_44_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnSetNumberOfPlayers_Parms \
{ \
	int32 NumberOfPlayers; \
}; \
static inline void F_OnSetNumberOfPlayers_DelegateWrapper(const FMulticastScriptDelegate& _OnSetNumberOfPlayers, int32 NumberOfPlayers) \
{ \
	_Script_WM_InputManager_Plugin_event_OnSetNumberOfPlayers_Parms Parms; \
	Parms.NumberOfPlayers=NumberOfPlayers; \
	_OnSetNumberOfPlayers.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_45_DELEGATE \
static inline void FOn_WM_InputManagerBegin_DelegateWrapper(const FMulticastScriptDelegate& On_WM_InputManagerBegin) \
{ \
	On_WM_InputManagerBegin.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_46_DELEGATE \
static inline void FOn_WM_InputManagerEnd_DelegateWrapper(const FMulticastScriptDelegate& On_WM_InputManagerEnd) \
{ \
	On_WM_InputManagerEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_48_DELEGATE \
struct _Script_WM_InputManager_Plugin_eventOnListenForKeyInput_Parms \
{ \
	FKey Key; \
	bool Start; \
}; \
static inline void FOnListenForKeyInput_DelegateWrapper(const FMulticastScriptDelegate& OnListenForKeyInput, FKey Key, bool Start) \
{ \
	_Script_WM_InputManager_Plugin_eventOnListenForKeyInput_Parms Parms; \
	Parms.Key=Key; \
	Parms.Start=Start ? true : false; \
	OnListenForKeyInput.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_49_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_DEBUG_Parms \
{ \
	FString Where; \
	FString What; \
}; \
static inline void F_DEBUG_DelegateWrapper(const FMulticastScriptDelegate& _DEBUG, const FString& Where, const FString& What) \
{ \
	_Script_WM_InputManager_Plugin_event_DEBUG_Parms Parms; \
	Parms.Where=Where; \
	Parms.What=What; \
	_DEBUG.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_52_DELEGATE \
struct _Script_WM_InputManager_Plugin_event_OnDeviceAssigmentChange_Parms \
{ \
	UWM_Device* Device; \
	int32 previousAssigment; \
	int32 newAssigment; \
}; \
static inline void F_OnDeviceAssigmentChange_DelegateWrapper(const FMulticastScriptDelegate& _OnDeviceAssigmentChange, UWM_Device* Device, int32 previousAssigment, int32 newAssigment) \
{ \
	_Script_WM_InputManager_Plugin_event_OnDeviceAssigmentChange_Parms Parms; \
	Parms.Device=Device; \
	Parms.previousAssigment=previousAssigment; \
	Parms.newAssigment=newAssigment; \
	_OnDeviceAssigmentChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_RPC_WRAPPERS \
	virtual void OnDeviceButtonKeyEvent_Implementation(FKey WM_Key, UWM_Device* Device, TEnumAsByte<EWM_KeyTriggerState>& TriggerState); \
 \
	DECLARE_FUNCTION(execOnDeviceButtonKeyEvent); \
	DECLARE_FUNCTION(execGetActionsListStringForKey); \
	DECLARE_FUNCTION(execGetAllInputBindingsForKey); \
	DECLARE_FUNCTION(execGetAllKeysForAxis); \
	DECLARE_FUNCTION(execGetAllKeysForAction); \
	DECLARE_FUNCTION(execGetAxisInputs); \
	DECLARE_FUNCTION(execGetActionInputs); \
	DECLARE_FUNCTION(execSetNumberOfPlayers); \
	DECLARE_FUNCTION(execSwitchManagerModeEnum); \
	DECLARE_FUNCTION(execSwitchManagerMode); \
	DECLARE_FUNCTION(execInitializeAPI); \
	DECLARE_FUNCTION(execsetEnchancedInputContext);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDeviceButtonKeyEvent_Implementation(FKey WM_Key, UWM_Device* Device, TEnumAsByte<EWM_KeyTriggerState>& TriggerState); \
 \
	DECLARE_FUNCTION(execOnDeviceButtonKeyEvent); \
	DECLARE_FUNCTION(execGetActionsListStringForKey); \
	DECLARE_FUNCTION(execGetAllInputBindingsForKey); \
	DECLARE_FUNCTION(execGetAllKeysForAxis); \
	DECLARE_FUNCTION(execGetAllKeysForAction); \
	DECLARE_FUNCTION(execGetAxisInputs); \
	DECLARE_FUNCTION(execGetActionInputs); \
	DECLARE_FUNCTION(execSetNumberOfPlayers); \
	DECLARE_FUNCTION(execSwitchManagerModeEnum); \
	DECLARE_FUNCTION(execSwitchManagerMode); \
	DECLARE_FUNCTION(execInitializeAPI); \
	DECLARE_FUNCTION(execsetEnchancedInputContext);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWM_InputManagerBase(); \
	friend struct Z_Construct_UClass_UWM_InputManagerBase_Statics; \
public: \
	DECLARE_CLASS(UWM_InputManagerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_InputManagerBase)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUWM_InputManagerBase(); \
	friend struct Z_Construct_UClass_UWM_InputManagerBase_Statics; \
public: \
	DECLARE_CLASS(UWM_InputManagerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WM_InputManager_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UWM_InputManagerBase)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWM_InputManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_InputManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_InputManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_InputManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_InputManagerBase(UWM_InputManagerBase&&); \
	NO_API UWM_InputManagerBase(const UWM_InputManagerBase&); \
public: \
	NO_API virtual ~UWM_InputManagerBase();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWM_InputManagerBase(UWM_InputManagerBase&&); \
	NO_API UWM_InputManagerBase(const UWM_InputManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWM_InputManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWM_InputManagerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWM_InputManagerBase) \
	NO_API virtual ~UWM_InputManagerBase();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_56_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<class UWM_InputManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_InputManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
