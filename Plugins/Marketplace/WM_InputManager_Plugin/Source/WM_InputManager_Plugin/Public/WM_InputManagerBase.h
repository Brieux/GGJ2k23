// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/InputSettings.h"

#include "WM_ControllerFunctionLib.h"
#if PLATFORM_WINDOWS
#include "WM_Input_DevicesRAW.h"
#endif
#include "WM_Settings.h"


#include "EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "EnhancedInput/Public/InputMappingContext.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInput/Public/EnhancedPlayerInput.h"

#include "WM_InputManagerBase.generated.h"

USTRUCT(BlueprintType)
struct F_PCS_Device {
	GENERATED_BODY()
	F_PCS_Device(){}
	
	TArray<UWM_Device*> Devices;

};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnDeviceConnected, UWM_Device*, Device);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnDeviceDisconnected, UWM_Device*, Device);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnNumJoysticksChanged, int32, OnNumDevicesChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnJoystickButtonTrigger, FKey, OnJoystickButtonTrigger);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnSelectedDeviceChanged, int32, selectedDevice);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnDeviceDataInitialized, UWM_Device*,Device);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnDeviceSelected, UWM_Device*, Device);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(F_OnButtonKeyPressed, FKey, WM_Key, UWM_Device*, Device);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(F_OnButtonKeyReleased, FKey, WM_Key, UWM_Device*, Device);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnManagerModeChanged, FString, ManagerMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnSwitchManagerModeEnum, EWM_InputManagerMode, ManagerMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(F_OnSetNumberOfPlayers, int32, NumberOfPlayers);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOn_WM_InputManagerBegin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOn_WM_InputManagerEnd);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListenForKeyInput, FKey, Key, bool, Start);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(F_DEBUG, FString, Where, FString, What);

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(F_OnDeviceAssigmentChange, FString, Where, FString, What);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(F_OnDeviceAssigmentChange, UWM_Device*, Device, int32, previousAssigment, int32, newAssigment);


//UCLASS(Blueprintable,nonTransient)
UCLASS( nonTransient)
class WM_INPUTMANAGER_PLUGIN_API UWM_InputManagerBase : public UObject
{
	GENERATED_BODY()
public:
	UWM_InputManagerBase(const FObjectInitializer& ObjectInitializer);
	
	bool IsPlaying = false;
	virtual void BeginWorldPlay();
	virtual void EndWorldPlay();
	virtual void Tick();
	UWorld* gameWorld = NULL;



	/* get enhanced action key mappings */
	TArray<FEnhancedActionKeyMapping> getEnhancedMappings();
	/*
	   - set enhanced input context that you are currently using for listing actions bound for HID_Joystick keys
	   - to show enhanced input action name you can also use player mappable options to override display name of action. 
	*/
	UFUNCTION(BlueprintCallable, Category = "WM_InputManager")
	    virtual void setEnchancedInputContext(UInputMappingContext* inputMappingContext);
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
	    UInputMappingContext* currentEnchancedInputMapping = nullptr;




	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
	FString version = "_v1";
	FString PluginPath = "";
	FString DriversContentPath = "";
	

	//DEBUGGING
	UPROPERTY(BlueprintReadWrite, Category = "WM_InputManager")
		bool bEnableErrorLogs = true;
	UPROPERTY(BlueprintReadWrite, Category = "WM_InputManager")
		bool bEnableSucessLogs = true;
	UPROPERTY(BlueprintReadWrite, Category = "WM_InputManager")
	    bool bEnable_LOG_DEBUG_HIDP_PARSING = false;

	//RUNTIME DEBUGGING
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		bool  bCollectRuntimeLogs = true;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TArray<FString> Runtime_PluginErrors;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TArray<FString> Runtime_PluginSucess;


	//STEAMFIX
	UFUNCTION(BlueprintCallable, Category = "WM_InputManager")
		virtual void InitializeAPI();


	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		bool  bDevicesRegistered = false;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 NumMessageAttempts = 0;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 NumFoundJoysticks_Debug = 0;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 NumPoolingDevices = 0;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 NumWindows = 0;
	
	//UPROPERTY(BlueprintReadWrite, Category = "WM_InputManager")
		
	

	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_DEBUG DEBUG;

	WM_Input_DevicesRAW* PluginCORE;
	UWM_Settings* WM_SettingsRW;
	UPROPERTY(BlueprintReadOnly, Category = "InputManager")
	    TEnumAsByte<EWM_InputManagerMode> ManagerModeEnum = EWM_InputManagerMode::off;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		bool hasSViewport = false;
	//E V E N T S
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnDeviceConnected OnDeviceConnected;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnDeviceDisconnected OnDeviceDisconnected;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnJoystickButtonTrigger OnJoystickButtonTrigger;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnNumJoysticksChanged OnNumDevicesChanged;
	UPROPERTY(BlueprintAssignable, BlueprintCallable,  Category = "WM_InputManager")
		F_OnDeviceSelected OnDeviceSelected;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnButtonKeyPressed  OnButtonKeyPressed;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnButtonKeyReleased  OnButtonKeyReleased;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnManagerModeChanged OnSwitchManagerMode;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnSwitchManagerModeEnum OnSwitchManagerModeEnum;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnSetNumberOfPlayers OnSetNumberOfPlayers;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		FOn_WM_InputManagerBegin On_WM_InputManagerBegin;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		FOn_WM_InputManagerEnd On_WM_InputManagerEnd;
	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		FOnListenForKeyInput OnListenForKeyInput;

	UPROPERTY(BlueprintAssignable, Category = "WM_InputManager")
		F_OnDeviceAssigmentChange OnDeviceAssigmentChange;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SwitchManagerMode-CustomSupport", Keywords = "Switch Manager Mode"), Category = "WM_InputManager")
		void SwitchManagerMode(FString Mode);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SwitchManagerModeEnum", Keywords = "SwitchManagerMode Enum"), Category = "WM_InputManager")
		void SwitchManagerModeEnum(EWM_InputManagerMode Mode);
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		FString ManagerMode;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 NumberOfPlayers = 1;
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetNumberOfPlayers", Keywords = "Set Number Of Players"), Category = "WM_InputManager")
		void SetNumberOfPlayers(int32 NumPlayers);

	    UWM_Device* SelectedDevice;
	//UPROPERTY(BlueprintReadOnly)
		UInputSettings *InputSettings;
	//UPROPERTY(BlueprintReadOnly)
    	UPlayerInput *PlayerInput_Ref;
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetActionInputs", Keywords = "Get Action Inputs"), Category = "WM_InputManager")
		void GetActionInputs(TArray<FName> & ButtonInputs);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetAxisInputs", Keywords = "Get Axis Inputs"), Category = "WM_InputManager")
		void GetAxisInputs(TArray<FName> & InputAxisActions);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetAllKeysForAction", Keywords = "Get All Keys ForAction"), Category = "WM_InputManager")
		void GetAllKeysForAction(FName ActionName, TArray<FKey> & Bindings);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetAllKeysForAxis", Keywords = "Get All Keys ForAxis"), Category = "WM_InputManager")
		void GetAllKeysForAxis(FName ActionName, TArray<FKey> & Bindings);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get AllInputBindingsForKey", Keywords = "Get All Input BindingsForKey"), Category = "WM_InputManager")
		void GetAllInputBindingsForKey(FKey Key, TArray<FName> & ActionsForKey);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get ActionsListStringForKey", Keywords = "Get Actions List String for key"), Category = "WM_InputManager")
		void GetActionsListStringForKey(FKey Key, FString& ActionsListString);

	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TArray<UWM_Device*> All_DevicesList;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TMap<int32, UWM_Device_HID*> HID_DeviceList;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TMap<int32, UWM_HID_Joystick*> Joystick_DeviceList;	
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TMap<int32, UWM_Device_Keyboard*> Keyboard_DevicesList;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TMap<int32, UWM_Device*> Mouse_DeviceList;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TMap<int32, UWM_HID_Joystick*> Joystick_UniqueDeviceTypeList;
	//UPROPERTY(BlueprintReadOnly)	
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		TMap<int32, UWM_Device_HID*>XInputDevices;

	TMap<int32, F_PCS_Device> PC_Devices;
	
	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "OnDeviceButtonKeyEvent", Keywords = "OnDeviceButtonKeyEvent"), Category = "WM_InputManager")
		void OnDeviceButtonKeyEvent(FKey WM_Key, UWM_Device* Device, TEnumAsByte<EWM_KeyTriggerState>&TriggerState);
	
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "SaveDevicesConfig", Keywords = "save ConfigFile"), Category = "InputManagment")
	//DONE AUTOMATICALLY
	//void SaveDevicesConfig();
};
