// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "WM_InputManagerBase.h"
#include "WM_ControllerFunctionLib.h"
#if PLATFORM_WINDOWS
#include "WM_Input_DevicesRAW.h"
#endif
#include "WM_Settings.h"
#include "WM_InputManager.generated.h"



USTRUCT()
struct FHidKeysByClass {

	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	TMap<FKey, TEnumAsByte<EWM_GamepadKeyType> > KeysByType;
	UPROPERTY()
	TMap<FKey, FString> Axes;
	UPROPERTY()
	TMap<FKey, FString> Buttons;
	//collection
	UPROPERTY()
	    TMap<FString, FDPADCollection>DPADs;
		TMap<FString, FString> DPADDefaults;
		TMap<FKey, FString>    DPADButtons; //in w

};

//UCLASS(Blueprintable,nonTransient)
UCLASS( nonTransient)
class WM_INPUTMANAGER_PLUGIN_API UWM_InputManager : public UWM_InputManagerBase
{
	GENERATED_BODY()
public:
	UWM_InputManager(const FObjectInitializer& ObjectInitializer);
	
	FDelegateHandle OnBegin;
	
	virtual void BeginWorldPlay() override;
	virtual void EndWorldPlay() override;
	virtual void Tick() override;
	TMap <TSubclassOf<class UClass>, FHidKeysByClass> HidInputKeys_ByClass;

	TMap<FString, UWM_HID_Joystick_SAV> JoystickSaveObjects;

	TMap<FString, FDefaultDeviceMappings> DefaultMappings;
	///GAMEPAD KEYS
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
	TMap<FKey, TEnumAsByte<EWM_GamepadKeyType> > HIDJoystick_KeysByType;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
	TMap<FKey, FString> HIDJoystick_Axes;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
	TMap<FKey, FString> HIDJoystick_Buttons;
	
	//collection
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
	TMap<FString, FDPADCollection>HIDJoystick_DPADs;
		TMap<FString, FString> HIDJoystick_DPADDefaults;
		TMap<FKey, FString> HIDJoystick_DPADButtons; //-- try point this into WM_Inputs_DPAD where FDPADCollection = bindings


	/*	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
        bool TurnOff_Devices_Inputs;*/
	UPROPERTY(BlueprintReadWrite, Category = "WM_InputManager")
			bool EnableHIDInternalButtonEvents = true;
	//fkey get collection --- get BINDING
	/*UPROPERTY(BlueprintReadOnly)
		TMap<FKey, FString> HIDJoystick_DPADButtons; ?*/ ///FString to DpadCollection as not not default binding but pointer to DpadCollection in which button is

	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		EWM_InputManagerStatus status = EWM_InputManagerStatus::WM_NoStatus;

	/*UPROPERTY(BlueprintReadOnly)
		bool isManagerWidgetVisible = false;*/
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 numGamepads;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 numKeyboards;
	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 numMouses;

	UPROPERTY(BlueprintReadOnly, Category = "WM_InputManager")
		int32 AutoAssignDevicesByDeviceSlot = false;

		UWM_Device* SelectedDevice;
		UWM_HID_Joystick* SelectedGamepad;

		void Restart();
		
	/*UPROPERTY(BlueprintReadOnly)
		FString GamepadCalibrationProcess;*/
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Selected Device", Keywords = "Get Selected Device"), Category = "WM_InputManager")
	     UWM_Device* GetSelectedDevice();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Selected Joystick", Keywords = "Get Selected Joystick"), Category = "WM_InputManager")
		 UWM_HID_Joystick* GetSelectedGamepad();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Select Device", Keywords = "Select Device"), Category = "WM_InputManager")
		void SelectDevice(UWM_Device* deviceToSelect);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Begin UMG", Keywords = "Begin UMG"), Category = "WM_InputManager")
		void BeginUMG();
	
	UPROPERTY(BlueprintReadWrite, Category = "WM_InputManager")
		bool ShowOnlyUsedInputs = true;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get_HidJoystickKeyType", Keywords = "Get_HidJoystickKeyType"), Category = "WM_InputManager")
		EWM_GamepadKeyType Get_HidJoystickKeyType(FKey key);
	
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetForceFeedbackForJoystick", Keywords = "ForceFeedback"), Category = "WM_InputManager")
		void SetForceFeedbackForJoysticks(int32 PlayerControlledID, float AllMotorsStrength, float LeftMotorStrength, float RightMotorStrength);

	///PROFILE
		FString CurrentProfileName = "";
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Profile", Keywords = "Load Profile"), Category = "WM_InputManager")
			void LoadProfile(FString ProfileName);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Current Profile Name", Keywords = "Get Current Profile Name"), Category = "WM_InputManager")
		FString GetCurrentProfileName();

	///Run if you wish to support creator of WM Input Manager
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Support creator of Plugin", Keywords = "get set Support Me"), Category = "WM_InputManager")
		void SupportMe();

	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Donate WM_Input_Manger creator with Paypal", Keywords = "get set Donate"), Category = "WM_InputManager")
		void DonateMe();*/

	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Selected Device", Keywords = "Get Selected Device"), Category = "InputManagment")
		UWM_Device* GetAxisDefaultsForDevice();*/
	/*virtual void GetDefault_AxisMappingForDevice(TMap<FKey, FString>& Axes, int32 VID, int32 PID) ;
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "CopyDriversToCook", Keywords = "Get Selected Device"), Category = "InputManagment")
		TArray<FString>  CopyDriversToCook();
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "SaveFile", Keywords = "Get Selected Device"), Category = "InputManagment")
		void SaveFile(FString abcd);
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetFile", Keywords = "Get Selected Device"), Category = "InputManagment")
		TArray<FString>  GetFile();*/


	
};
