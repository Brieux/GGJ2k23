// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"

#include "WM_Device_HID.h"

#include "WM_InputManager.h"
#include "WM_ControllerFunctionLib.h"


UWM_Device_HID::UWM_Device_HID(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{	
	
}

void UWM_Device_HID::BeginDevice() {
	Super::BeginDevice();

}

void UWM_Device_HID::DestroyDevice() {
	Super::DestroyDevice();
}

void UWM_Device_HID::OnDeviceSelected(bool selected) {
	Super::OnDeviceSelected(selected);

}

void UWM_Device_HID::OnDataInitialized() {
	Super::OnDataInitialized();
}

void UWM_Device_HID::setLastButtonsData() {
	if (FirstPressedRawKey != -1 && !ButtonsData[FirstPressedRawKey].bIsPressed) {
		FirstPressedRawKey = -1;
	}
	//quicker method because we reset only avaliable 
	for (auto&Each : Button_DHP) {
		FWM_HID_ButtonData& buttondata = ButtonsData[Each.Value];
		buttondata.SetPreviousButtonState();
	}
	for (auto&Each : DPAD_DHP) {
		FWM_HID_DPADData& dpadData = DPADData[Each.Value];
		dpadData.SetPreviousButtonStates();
	}
}

void UWM_Device_HID::SetButtonDataTriggerStates() {
	DeviceActivityDetected = false;

	for (auto&Each : Button_DHP) {
		FWM_HID_ButtonData& buttondata = ButtonsData[Each.Value];
		buttondata.SetButtonTriggerState();
		if (buttondata.bIsPressed) {
			DeviceActivityDetected = true;		
		}
	}
	for (auto&Each : DPAD_DHP) {
		FWM_HID_DPADData& dpadData = DPADData[Each.Value];
		dpadData.SetButtonsTriggerState();
		if (dpadData.bWasAnyPressed) {
		   DeviceActivityDetected = true;	
		}
		
	}
};

////////////////////////////////////////////////////////////////////////////////
TArray<int32> UWM_Device_HID::GetRaw_Available_Buttons() {
	TArray<int32>Buttons;
	Button_DHP.GenerateValueArray(Buttons);
	return Buttons;
}

TArray<int32> UWM_Device_HID::GetRaw_Available_Axes() {
	TArray<int32>Axes;
	Axis_DHP.GenerateValueArray(Axes);
	return Axes;
}

TArray<int32> UWM_Device_HID::GetRaw_Available_DPADs() {
	TArray<int32> DPADs;
	DPAD_DHP.GenerateValueArray(DPADs);
	return DPADs;
}

void UWM_Device_HID::GetRaw_ButtonValue(int32 index, bool&buttonValue, TEnumAsByte<EWM_KeyTriggerState>& KeyTriggerState) {
	//index--;// = index - 1;
	if (Button_DHP.FindKey(index)) {
		FWM_HID_ButtonData buttondata = ButtonsData[index];
		buttonValue = buttondata.bIsPressed;
		KeyTriggerState = buttondata.KeyTriggerState;
	}

	else {
		buttonValue = false;
		KeyTriggerState = EWM_KeyTriggerState::NoTrigger;
	}
}

float UWM_Device_HID::GetRaw_AxisValue(int32 index) const {
	//index--;
	if (Axis_DHP.FindKey(index)) {
		const float value = AxisData[index].axisValue;
		//if (value) {
		return value;
		//}
	}
	else {
		return 0.0f;
		/*else {
		return 0.0f;
		}*/
	}
}

FWM_HID_AxisData UWM_Device_HID::GetRaw_AxisData(int32 index) const {
	//index--;
	FWM_HID_AxisData data;
	if (Axis_DHP.FindKey(index)) {
		data = AxisData[index];
	}
	return data;
}

void UWM_Device_HID::GetRaw_DPADData(int32 index, bool& UP, bool& DOWN, bool& LEFT, bool& RIGHT, EWM_AxisCodeTable& axisEnum, FString& AxisBindingCode, FString& axisHEX, int32& instance, float& value) const {
	//index--;
	FWM_HID_DPADData data;
	if (DPAD_DHP.FindKey(index)) {
		data = DPADData[index];
		UP = data.UP.bIsPressed;
		DOWN = data.DOWN.bIsPressed;
		LEFT = data.LEFT.bIsPressed;
		RIGHT = data.RIGHT.bIsPressed;
		axisEnum = data.AxisData.axisEnum;
		AxisBindingCode = data.AxisData.AxisBindingCode;
		axisHEX = data.AxisData.axisHEX;
		instance = data.AxisData.instance;
		value = data.AxisData.axisValue;
	}
}
//works
void UWM_Device_HID::GetAxisKeyValue(FKey Key, float& AxisValue, bool& isValid_WM_Key) const {
	if (AxisKeyValues.Contains(Key)) {
		AxisValue = AxisKeyValues[Key];
		isValid_WM_Key = true;
	}

}
void UWM_Device_HID::GetButtonKeyValue(FKey Key, bool& ButtonValue, bool& isValid_WM_Key) const {
	if (ButtonKeyValues.Contains(Key)) {
		ButtonValue = ButtonKeyValues[Key];
		isValid_WM_Key = true;
	}
}

/*
void UWM_Device_HID::BeginHID_CalibrationProcess() {

}

void UWM_Device_HID::WriteDriver() {
	
}*/

