// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"
#include "Devices/MEM/WM_HID_Joystick_SAV.h"
#include "WM_InputManager_Plugin.h"


#include "WM_ControllerFunctionLib.h"
#include "WM_InputManager.h"
#include "WM_Input_DevicesRAW.h"

/*FHID_Joystick_CONFIG::FHID_Joystick_CONFIG() {

//configTarget = in_configTarget;
InitializeDefaults();
}*/

void FHID_Joystick_CONFIG::InitializeDefaults() ///menas reset
{
	UWM_InputManager*InputManager = UWM_ControllerFunctionLib::Get_WM_InputManager();

	FDefaultDeviceMappings loadedmapping = InputManager->DefaultMappings["GENERIC"];
	if (InputManager->DefaultMappings.Find(configTarget)) {
		loadedmapping = InputManager->DefaultMappings[configTarget];
	}

	//mappings = InputManager->DefaultMappings[configTarget];
	AXIS_BINDINGS = InputManager->HIDJoystick_Axes; 
	for (auto&Each : AXIS_BINDINGS) {
		if (loadedmapping.DefaultAxisMappings.Find(Each.Value)) { 
			Each.Value = "Axis-" + loadedmapping.DefaultAxisMappings[Each.Value];
		}
		else {
			Each.Value = "NONE";
		}

	}
	BUTTONS_BINDINGS = InputManager->HIDJoystick_Buttons;
	for (auto&Each : BUTTONS_BINDINGS) {
		if (loadedmapping.DefaultButtonMappings.Find(Each.Value)) {
			Each.Value = "BTN-" + FString::FromInt(loadedmapping.DefaultButtonMappings[Each.Value]);
		}
		else {
			Each.Value = "NONE";
		}
	}
	DPADS_BINDINGS = InputManager->HIDJoystick_DPADDefaults;

	for (int32 iAxis = 0; iAxis < 128; iAxis++){
		const FWM_HID_AxisConfiguration aconfig = FWM_HID_AxisConfiguration(InputManager->WM_SettingsRW->DefaultSensitivity, InputManager->WM_SettingsRW->DefaultDeadzone);
		AxisConfigurations.Add(aconfig);
	}
	
	KEY_TYPES = InputManager->HIDJoystick_KeysByType;	
}



void UWM_HID_Joystick_SAV::Init(FString SaveSlotString) {

	Plugin = static_cast<FWM_InputManager_Plugin*>(&FWM_InputManager_Plugin::Get());
	saveSlot = SaveSlotString;
	////SKIPPED FOR LATER VERSION
	//if (wasInitialized &&  DoVersionDataComplianceCheck()) { return; }

	if (wasInitialized) { return; }

	UWM_InputManager*InputManager = UWM_ControllerFunctionLib::Get_WM_InputManager();
	wasInitialized = true;
	SAVEDATA();
}

bool UWM_HID_Joystick_SAV::DoVersionDataComplianceCheck() {
	UWM_InputManager*InputManager = UWM_ControllerFunctionLib::Get_WM_InputManager();
	for (auto&Each : InputManager->HIDJoystick_KeysByType) {
		if (!HID_JoystickConfig[1].KEY_TYPES.Contains(Each.Key)) {
			return false;
		}
	}
	for (auto&Each : HID_JoystickConfig[1].KEY_TYPES) {
		if (!InputManager->HIDJoystick_KeysByType.Contains(Each.Key)) {
			return false;
		}
	}
	return true;
}


void UWM_HID_Joystick_SAV::SAVEDATA() {
	UGameplayStatics::SaveGameToSlot(this, saveSlot, 0);
}

bool UWM_HID_Joystick_SAV::GetConfig(FHID_Joystick_CONFIG& config, int32 Mode) {
	if (HID_JoystickConfig.Contains(Mode)) {
		config = HID_JoystickConfig[Mode];
		return true;
	}
	else {
		return false;
	}
}

void UWM_HID_Joystick_SAV::UpdateData(FHID_Joystick_CONFIG data, int32 Mode) {
	if (HID_JoystickConfig.Contains(Mode)) {
		HID_JoystickConfig[Mode] = data;
	}
	else {
		HID_JoystickConfig.Add(Mode, data);
	}
}