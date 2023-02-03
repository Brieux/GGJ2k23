// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WM_HID_Joystick_SAV.h"

#include "WM_Device.h"
#include "WM_Device_HID.h"
#include "WM_HID_Joystick.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModeSwitched, int32, Mode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConfigChanged, int32, Mode);

/*USTRUCT(BlueprintType)
struct FWM_ForceFeedback
{
	GENERATED_USTRUCT_BODY()

	//setting will set value for left and rith motor to maximum of AllMotorStrength
	UPROPERTY(BlueprintReadOnly, Category = "ForceFeedback")
		float AllMotorsStrength = 0.0f;
	UPROPERTY(BlueprintReadOnly, Category = "ForceFeedback")
		 float LeftMotorStrength = 0.0f;
	UPROPERTY(BlueprintReadOnly, Category = "ForceFeedback")
		 float RightMotorStrength = 0.0f;
};*/


UCLASS(Blueprintable)//nonTransient
class WM_INPUTMANAGER_PLUGIN_API UWM_HID_Joystick : public UWM_Device_HID
{
	GENERATED_BODY()
public:
	UWM_HID_Joystick(const FObjectInitializer& ObjectInitializer);

	virtual void BeginDevice() override;
	virtual void DestroyDevice() override;
	virtual void OnBeginParseData() override;
	virtual void OnEndParseData() override;
	virtual void OnDataInitialized() override;
	virtual void OnDeviceSelected(bool selected) override;
	///memmory
	void getJoystickConfig();
	FString configTarget = "";

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SaveConfig", Keywords = "SaveConfig"), Category = "HIDJoystick")
		void SaveConfig();
	bool AutosaveConfig = true;

	int32 NumOfConfigModes = 2;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HIDJoystick")
		int32 ConfigMode = 1; //DefaultMode

	bool GetConfig(FHID_Joystick_CONFIG& config);
	UPROPERTY(BlueprintAssignable, Category = "HIDJoystick")
		FOnModeSwitched OnModeSwitched;
	UPROPERTY(BlueprintAssignable, Category = "HIDJoystick")
		FOnConfigChanged OnConfigChanged;

	//DATA
	///CONFIG DYNAMIC
	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "PressButton", Keywords = "PressButton"), Category = "HIDJoystick")
		void PressButton(int32 Button);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RebindKeyInput", Keywords = "RebindKeyInput"), Category = "Binding")
		void RebindKeyInput(FKey Key, bool&sucess);
	///////LISTENING
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ListenForKeyInput", Keywords = "ListenForKeyInput"), Category = "Binding")
		void ListenForKeyInput(FKey Key, bool&sucess);
	void StopListeningForKeyInput();
	void StartListeningForKeyInput();
	UPROPERTY(BlueprintReadOnly, Category = "Binding")
		bool bIsListeningForInput = false;
	UPROPERTY(BlueprintReadOnly, Category = "Binding")
		FKey ListeningKey;

	/**Use Only WM_Gamepad Keys !  */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Bind_InputKey", Keywords = "Bind Input Key"), Category = "Binding")
		void Bind_InputKey(FKey Key, FString TargetBinding);
	/**Use Only WM_Gamepad Keys !  */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetBinding", Keywords = "Get Binding"), Category = "Binding")
		void GetBinding(FKey Key, FString& Binding);
	/**Use Only WM_Gamepad Keys !  */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetBindingOptions", Keywords = "Get Binding Options"), Category = "Binding")
		void GetBindingOptions(FKey Key, TArray<FString>& Options);

	///get current config
	///CONFIG MODE
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetConfigurationMode", Keywords = "Get Configuration Mode"), Category = "Controller Config Mode")
		void GetConfigurationMode(int32& ConfigurationMode);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Configuration Mode", Keywords = "Set Configuration Mode"), Category = "Controller Config Mode")
		void SetConfigurationMode(int32 ConfigurationMode);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Reset Configuration Mode", Keywords = "Reset Configuratio nMode"), Category = "Controller Config Mode")
		void ResetConfigurationMode();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetAxisConfig", Keywords = "Set Axis Config"), Category = "Axis Configuration")
		void SetAxisConfig(int32 AxisNumber, FWM_HID_AxisConfiguration config);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetAxisConfig", Keywords = "Get Axis Config"), Category = "Axis Configuration")
		void GetAxisConfig(int32 AxisNumber, FWM_HID_AxisConfiguration& config);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "AutodetectAxisConfig", Keywords = "AutodetectAxisConfig"), Category = "Axis Configuration")
		void AutodetectAxisConfig(int32 Axis);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ResetAxisConfig", Keywords = "ResetAxisConfig"), Category = "Axis Configuration")
		void ResetAxisConfig(int32 Axis);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UpdateAxisValue", Keywords = "UpdateAxisValue"), Category = "Axis Configuration")
		void UpdateAxisValue(int32 Axis);

	virtual void OnDeviceAssigmentChange(int32 PreviousAssigment, int32 NewAssigment) override;


	/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "StoreJoystickPreset", Keywords = "Store Joystick Preset"), Category = "Developer Preset")
		void Store_DeveloperDevicePreset(int32 mode);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "StoreJoystickPreset", Keywords = "Store Joystick Preset"), Category = "Developer Preset")
		void Delete_DeveloperDevicePreset(int32 mode);*/


private:
	virtual void UpdateSaveData();
	virtual void AutodetectAllAxisConfig();
	virtual void ResetAllAxisConfig();
	UWM_HID_Joystick_SAV* savedata;



};
