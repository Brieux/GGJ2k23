// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

#include "WM_Settings.generated.h"

UENUM()
enum class ERawControllerType:uint8
{
	JoystickORGamepad,
	Keyboard,
	Mouse,
	Other
};

USTRUCT()
struct FDefaultDeviceMappings {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "HidDevicePreset")
    TMap<FString, FString> DefaultAxisMappings;
	UPROPERTY(EditAnywhere, Category = "HidDevicePreset")
	TMap<FString, int32> DefaultButtonMappings;

	void ButtonMappingsAdd(TArray<int32> inArrayOfButtons) {
		for (int i = 0; i < inArrayOfButtons.Num(); i++) {
			DefaultButtonMappings.Add("B" + FString::FromInt(i + 1), inArrayOfButtons[i]);
		}
	}
};



USTRUCT()
struct FDriver_AxisDefaults {
	GENERATED_USTRUCT_BODY()
public:
	FDriver_AxisDefaults() {}
	UPROPERTY(EditAnywhere, Category = "Device Config")
	  FString defaultMapping = "";
	UPROPERTY(EditAnywhere, Category = "Device Config")
	  int32 instance = 0;
	UPROPERTY(EditAnywhere, Category = "Device Config")
	  bool inverted = false;
	UPROPERTY(EditAnywhere, Category = "Device Config")
	  bool pedal = false;
};

USTRUCT()
struct FDriver_ButtonDefaults {
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere, Category = "Device Config")
		int32 defaultIndex = 0;
};




USTRUCT()
struct FDeveloper_HIDDeviceDriver {
	GENERATED_USTRUCT_BODY()

public:
	FDeveloper_HIDDeviceDriver() {
	}
	UPROPERTY(EditAnywhere, Category = "Device Config")
	TArray<FDriver_AxisDefaults> AxisDefaults;
	
	UPROPERTY(EditAnywhere, Category = "Device Config")
		FString DeviceName = "";
	UPROPERTY(EditAnywhere, Category = "Device Config")
		TMap<FKey, FString> AxisDefaultsString;
	UPROPERTY(EditAnywhere, Category = "Device Config")
		TMap<FKey, int32> ButtonsDefaults;
};



USTRUCT()
struct FDeveloper_HIDJoystick_Preset {
	GENERATED_USTRUCT_BODY()

public:
	FDeveloper_HIDJoystick_Preset() {
	}
	UPROPERTY(EditAnywhere, Category = "HidDevicePreset")
		FString VendorID;
	UPROPERTY(EditAnywhere, Category = "HidDevicePreset")
		FString ProductID;
	UPROPERTY(EditAnywhere, Category = "HidDevicePreset")
		TMap<FString, FString> AxisPreset;
	UPROPERTY(EditAnywhere, Category = "HidDevicePreset")
		TMap<int32, int32> ButtonsPreset;
};





UCLASS(config=WMInputSettings, defaultconfig)
class WM_INPUTMANAGER_PLUGIN_API UWM_Settings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UWM_Settings(const FObjectInitializer& ObjectInitializer);
#if WITH_EDITOR
	// Begin UObject Interface
	virtual void PostEditChangeChainProperty( struct FPropertyChangedChainEvent& PropertyChangedEvent ) override;
	// End UObject Interface
#endif

	// Begin UDeveloperSettings Interface
	virtual FName GetCategoryName() const override;
#if WITH_EDITOR
	virtual FText GetSectionText() const override;
	

#endif
	
	FString Hid_GamepadNaming =     "HID Joystick";
	FString Hid_KeyboardNaming =    "HID Keyboard";
	//SET -1 to be NOTASSIGNED on device connected
	UPROPERTY(config, EditAnywhere, Category = "Device Configurations")
		int32 DefaultPlayerIndex_DeviceAssigment = 0;		
	//Default sensitivity for all devices
	UPROPERTY(config, EditAnywhere, Category = "HID Joystick")
		float DefaultSensitivity = 1.0f;
	//Default deadzone for all devices
	UPROPERTY(config, EditAnywhere, Category = "HID Joystick")
		float DefaultDeadzone = 0.2f;

	// if enabled ,,, all changes to device (connect, disconnect,settings change, mode change, mapping change, assigment change) will trigger RELEASE event for all buttons. 
	// this should be set to FALSE to prevent triggering ONButtonRelease events when you configure or make changes to device config
	UPROPERTY(config, EditAnywhere, Category = "HID Joystick")
		bool bENABLE_AUTO_BUTTON_RELEASE = false; 

	//enable device connection console logs
	UPROPERTY(config, EditAnywhere, Category = "Debugging")
		bool logConnectDisconnect = false;
	
	UPROPERTY(config, EditAnywhere, Category = "Debugging")
		bool InitAPI_Manually = false;


	UPROPERTY(config, EditAnywhere, Category = "Support Creator of Plugin")
		bool SupportMe = false;

	//UPROPERTY(config, EditAnywhere, Category = "V2Parser")
	TSet<FString> V2ParserDevices;
	//STEAM FIX



	/*UPROPERTY(config, EditAnywhere, Category = "Input Manager Settings")
		bool bEnableDebugging = false;*/
  /*  UPROPERTY(config, EditAnywhere, Category = "HID_JoysticksPresets")
		TMap<FString, FDefaultDeviceMappings> Dev_DefaultMappings_Joysticks;*/

	//developer predefined saveable device configuration/mapping
	//TMap<FString"vidpid" , AxisMappings, ButtonsMappings>);
	//TArray<TMap<FString,FString>> AxisMappings;
	//TArray<int32> ButtonsMappings;

	/*UPROPERTY(config, EditAnywhere, Category = "Device Configurations")
		TArray<FDeveloper_HIDDeviceDriver> Dev_HIDDeviceDriver;*/
	/*TMap<FString, TArray<FString>> devicebinding;
	TMap.Add("GeneriController", )
	*/
	
	//virtual void LoadCustomKeysList();
};

