// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"

#include "WM_ControllerFunctionLib.h"
#include "WM_HID_Joystick_SAV.generated.h"

USTRUCT(BlueprintType)
struct FWM_HID_AxisConfiguration
{
	GENERATED_USTRUCT_BODY()

		FWM_HID_AxisConfiguration()
		: Index(INDEX_NONE)
		, bInverted(false)
		, Sensitivity(1.0f)
		, DeadZone(0.2f)
	{

	}
	FWM_HID_AxisConfiguration(const float Sensitivity, const float DeadZone)
		: Sensitivity(Sensitivity)
		, DeadZone(DeadZone)
	{

	}

	int32 Index;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Axis Property")
		bool bInverted = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Axis Property")
		bool bIsPedal = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Axis Property")
		float Sensitivity = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Axis Property")
		float DeadZone = 0.2f;


};

USTRUCT()
struct WM_INPUTMANAGER_PLUGIN_API FHID_Joystick_CONFIG {
	GENERATED_USTRUCT_BODY()

		FHID_Joystick_CONFIG()
		:configTarget("")
	{}

	FHID_Joystick_CONFIG(const FString in_configTarget)
		:configTarget(in_configTarget)
	{
		InitializeDefaults();
	}

	FString configTarget = "";

	UPROPERTY(EditAnywhere, Category = "HID_JoystickConfig")
		TMap<FKey, TEnumAsByte<EWM_GamepadKeyType> > KEY_TYPES;
		TMap<FKey, FString> KEY_BINDINGS;   //All StringBindings;
	UPROPERTY(EditAnywhere, Category = "HID_JoystickConfig") //bindings for Axis
		TMap<FKey, FString> AXIS_BINDINGS;
	UPROPERTY(EditAnywhere, Category = "HID_JoystickConfig") //bindings for Buttons
		TMap<FKey, FString> BUTTONS_BINDINGS;
	UPROPERTY(EditAnywhere, Category = "HID_JoystickConfig")
		TMap<FString, FString> DPADS_BINDINGS;
	UPROPERTY(EditAnywhere, Category = "HID_JoystickConfig")
		TArray<FWM_HID_AxisConfiguration> AxisConfigurations;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button Properties") //bindings for Dpad
	TMap<FKey, FString> DPADSBindings; //NOT NEEDED*/
	UPROPERTY(EditAnywhere, Category = "HID_JoystickConfig")
		bool RAWDataRecieved = false;
	void InitializeDefaults();
};

//UCLASS(Blueprintable, nonTransient)
UCLASS(nonTransient)
class WM_INPUTMANAGER_PLUGIN_API UWM_HID_Joystick_SAV : public USaveGame
{
	GENERATED_BODY()
public:

	FWM_InputManager_Plugin* Plugin;

	UPROPERTY(BlueprintReadOnly, Category = "HID_JoystickConfig")
		bool wasInitialized = false;
	UPROPERTY(BlueprintReadOnly, Category = "HID_JoystickConfig")
		FString saveSlot = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_JoystickConfig")
		int32 CurrentMode = 0;
	UPROPERTY()
		TMap<int32, FHID_Joystick_CONFIG> HID_JoystickConfig;


	virtual void Init(FString SaveSlotString);
	virtual void SAVEDATA();
	bool GetConfig(FHID_Joystick_CONFIG& config, int32 Mode);
	void UpdateData(FHID_Joystick_CONFIG data, int32 Mode);
	bool DoVersionDataComplianceCheck();
};
