// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"
#include "WM_Device.h"
#include "WM_Device_HID.h"
#include "WM_HID_Joystick.h"

#include "WM_ControllerFunctionLib.h"
#include "WM_InputManager.h"
#include "WM_Input_DevicesRAW.h"

DEFINE_LOG_CATEGORY_STATIC(LogWM_HID_Joystick, Log, All);

UWM_HID_Joystick::UWM_HID_Joystick(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	///RAWDATA
	ButtonsData.AddDefaulted(128);
	AxisData.AddDefaulted(128);
	DPADData.AddDefaulted(12);

	for (auto&Each : InputManager->HIDJoystick_KeysByType) {
		if (Each.Value == EWM_GamepadKeyType::Axis) {
			AxisKeyValues.Add(Each.Key, 0.0f);
		}
		else {
			ButtonKeyValues.Add(Each.Key, false);
		}
	}
}

void UWM_HID_Joystick::BeginDevice() {
	Super::BeginDevice();

	getJoystickConfig();
	InputManager->numGamepads++;
	if (WM_SettingsRW->logConnectDisconnect) {
		UE_LOG(LogWM_HID_Joystick, Warning, TEXT("starting gaming controller  "));
	}
}

void UWM_HID_Joystick::DestroyDevice() {
	Super::DestroyDevice();
	InputManager->numGamepads--;
	if (WM_SettingsRW->logConnectDisconnect) {
		UE_LOG(LogWM_HID_Joystick, Warning, TEXT("removing gaming controller  "));
	}
}

void UWM_HID_Joystick::OnDeviceSelected(bool selected) {
	Super::OnDeviceSelected(selected);
	StopListeningForKeyInput();
}


void UWM_HID_Joystick::OnDataInitialized() {
	Super::OnDataInitialized();
	//AutodetectAllAxisConfig();
	SetConfigurationMode(ConfigMode); //to first time init and reconfigure and reset all axis to autodetect; --> override
}
void UWM_HID_Joystick::OnBeginParseData() {
	Super::OnBeginParseData();
}
void UWM_HID_Joystick::OnEndParseData() {
	Super::OnEndParseData();

	if (bIsListeningForInput) {
		EWM_GamepadKeyType type = InputManager->HIDJoystick_KeysByType[ListeningKey];
		if (type == EWM_GamepadKeyType::Axis) {
			for (auto&Each : Axis_DHP) {
				FWM_HID_AxisData data = AxisData[Each.Value];
				if (fabs(data.LSTN_Value - data.axisValue) > 0.8f) {
					Bind_InputKey(ListeningKey, data.AxisBindingCode);
					bIsListeningForInput = false;
					InputManager->OnListenForKeyInput.Broadcast(ListeningKey, false);
					break;
				}
			}
		}
		if (type == EWM_GamepadKeyType::Button) {
			for (auto&Each : Button_DHP) {
				FWM_HID_ButtonData data = ButtonsData[Each.Value];
				if (data.LSTN_Value != data.bIsPressed) {
					Bind_InputKey(ListeningKey, data.ButtonBindingCode);
					bIsListeningForInput = false;
					InputManager->OnListenForKeyInput.Broadcast(ListeningKey, false);
					break;
				}
			}
		}
		if (type == EWM_GamepadKeyType::DPAD) {
			for (auto&Each : DPAD_DHP) {
				FWM_HID_DPADData data = DPADData[Each.Value];
				if (data.LSTN_Value != data.bWasAnyPressed) {
					Bind_InputKey(ListeningKey, data.AxisData.AxisBindingCode);
					bIsListeningForInput = false;
					InputManager->OnListenForKeyInput.Broadcast(ListeningKey, false);
					break;
				}
			}
		}
	}
}


void UWM_HID_Joystick::ListenForKeyInput(FKey Key, bool&sucess) {
	if (!InputManager->HIDJoystick_KeysByType.Contains(Key)) { sucess = false;  return; }

	if (bIsListeningForInput) {
		StopListeningForKeyInput();
		if (ListeningKey != Key) {
			ListeningKey = Key;
			StartListeningForKeyInput();
		}
	}
	else {
		ListeningKey = Key;
		StartListeningForKeyInput();

	}
}
void UWM_HID_Joystick::StartListeningForKeyInput() {
	for (auto&Each : Axis_DHP) {
		AxisData[Each.Value].SetLSTN_Value();
	}
	for (auto&Each : Button_DHP) {
		ButtonsData[Each.Value].SetLSTN_Value();
	}
	for (auto&Each : DPAD_DHP) {
		DPADData[Each.Value].SetLSTN_Value();
	}
	bIsListeningForInput = true;
	InputManager->OnListenForKeyInput.Broadcast(ListeningKey, true);
}
void UWM_HID_Joystick::StopListeningForKeyInput() {
	if (bIsListeningForInput) {
		bIsListeningForInput = false;
		InputManager->OnListenForKeyInput.Broadcast(ListeningKey, false);
	}
}


void UWM_HID_Joystick::getJoystickConfig() {

	///add load profile.
	/////////////////////////////////////////////////////////////////////////////////////////////
	//later will be added files to read as microHIDDefault.hidd files if it will be needed
	configTarget = "GENERIC";
	if (is_XInput) {
		configTarget = "XINPUT";
	}
	HID_CONFIG_DEFAULT = FHID_Joystick_CONFIG(configTarget);
	////////////////////////////////////////////////////////////////////////////////////////////

	//EBuildConfigurations::Shipping;
	//FString Path = FPaths::GameDir();
	//FString Path = FPaths::RootDir();
	//FString saveSlot = Path  + "/HID/GamingControllers/" + SAVESTRING + InputManager->version;
	//FString saveSlot = Path + "/HID/GamingControllers/" + SAVESTRING + InputManager->version;
	
	if (InputManager->CurrentProfileName == "") {
		 saveSlot = "../WM_DevicesConfigurations/HID/GamingControllers/" + SAVESTRING + InputManager->version;
	}
	else {
		 saveSlot = "../WM_DevicesConfigurations/HID/GamingControllers/" + InputManager->CurrentProfileName + "/" + SAVESTRING + InputManager->version;
	}
	//FString saveSlot = "../WM_DevicesConfigurations/HID/GamingControllers/" + SAVESTRING + InputManager->version + InputManager->CurrentProfileName;
	bool needCreateSaveData = true;
	if (InputManager->JoystickSaveObjects.Contains(DeviceInfo.VPID_HEX)) {
		UWM_HID_Joystick_SAV* sav = InputManager->JoystickSaveObjects.Find(DeviceInfo.VPID_HEX);
	}
	//destroy previous save object
	if (savedata && savedata->IsValidLowLevel()) {
		savedata->RemoveFromRoot();
		savedata->ConditionalBeginDestroy();
	}
	if (UGameplayStatics::DoesSaveGameExist(saveSlot, 0)) {
		savedata = Cast<UWM_HID_Joystick_SAV>(UGameplayStatics::LoadGameFromSlot(saveSlot, 0));
		if (savedata->IsValidLowLevel()) {
			needCreateSaveData = false;
			savedata->Init(saveSlot); ///reinit for DEVELOPERCHECK
		}
		//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("LOADING known DEVICE -->gamepadobject"));
	}
	if (needCreateSaveData) {
		savedata = Cast<UWM_HID_Joystick_SAV>(UGameplayStatics::CreateSaveGameObject(UWM_HID_Joystick_SAV::StaticClass()));
		savedata->Init(saveSlot);
		UGameplayStatics::SaveGameToSlot(savedata, saveSlot, 0);
		//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("SAVING new DEVICE -->gamepadobject"));
	}
	if (savedata && savedata->IsValidLowLevel()) {
		savedata->AddToRoot();
		SetConfigurationMode(1); ///initDefaultConfigMode
	}

}
//not used yet
void UWM_HID_Joystick::PressButton_Implementation(int32 Button) {

}
void UWM_HID_Joystick::RebindKeyInput(FKey Key, bool&sucess) {
	if (!InputManager->HIDJoystick_KeysByType.Contains(Key)) { return; }
	EWM_GamepadKeyType type = InputManager->HIDJoystick_KeysByType[Key];

	if (type == EWM_GamepadKeyType::Axis) {
		TMap<FKey, FString> KeyBindings;
		KeyBindings = HID_CONFIG.AXIS_BINDINGS;
		if (KeyBindings.Contains(Key)) {
		}
	}

	if (type == EWM_GamepadKeyType::Button) {
		/*if (LastPressedRawKeyss.Num() > 0) {
		const FString HexPointer  = *Button_DHP.FindKey(LastPressedRawKeyss[0]);
		Bind_InputKey(Key, HexPointer);
		}*/
		if (FirstPressedRawKey != -1) {
			const FString HexPointer = Button_DHP.FindKey(FirstPressedRawKey) ? *Button_DHP.FindKey(FirstPressedRawKey) : "null";
			HexPointer != "null" ? Bind_InputKey(Key, HexPointer) : NULL;
		}
	}
	//bindings for Dpad buttons collections
	if (type == EWM_GamepadKeyType::DPAD) {
		FString KeyCollection = InputManager->HIDJoystick_DPADButtons[Key];
		TMap<FString, FString> KeyBindings;
		KeyBindings = HID_CONFIG.DPADS_BINDINGS;
		if (KeyBindings.Contains(KeyCollection)) {
		}
	}
	UpdateSaveData();
}


void UWM_HID_Joystick::Bind_InputKey(FKey Key, FString TargetBinding) {

	if (!InputManager->HIDJoystick_KeysByType.Contains(Key)) { return; }
	EWM_GamepadKeyType type = InputManager->HIDJoystick_KeysByType[Key];
	if (type == EWM_GamepadKeyType::Axis) {
		TMap<FKey, FString>& KeyBindings = HID_CONFIG.AXIS_BINDINGS; 																														//TMap<FKey, FString>& KeyBindings = savedata->HID_JoystickConfig.Find(ConfigMode) ? bindings.AXIS_BINDINGS : AXIS_BINDINGS; 	
		if (KeyBindings.Contains(Key)) {
			if (Axis_DHP.Contains(TargetBinding)) {
				KeyBindings[Key] = TargetBinding;
			}
			else {
				if (TargetBinding == "DEFAULT") {
					KeyBindings[Key] = HID_CONFIG_DEFAULT.AXIS_BINDINGS.Find(Key) ? HID_CONFIG_DEFAULT.AXIS_BINDINGS[Key] : "NONE";
				}
				else {
					KeyBindings[Key] = "NONE";
				}
			}
			UpdateSaveData();
		}
	}

	if (type == EWM_GamepadKeyType::Button) {
		TMap<FKey, FString>& KeyBindings = HID_CONFIG.BUTTONS_BINDINGS;

		if (KeyBindings.Contains(Key)) {
			if (Button_DHP.Contains(TargetBinding)) {
				HID_CONFIG.BUTTONS_BINDINGS[Key] = TargetBinding;
			}
			else {
				if (TargetBinding == "DEFAULT") {
					HID_CONFIG.BUTTONS_BINDINGS[Key] = HID_CONFIG_DEFAULT.BUTTONS_BINDINGS.Find(Key) ? HID_CONFIG_DEFAULT.BUTTONS_BINDINGS[Key] : "NONE";
				}
				else {
					HID_CONFIG.BUTTONS_BINDINGS[Key] = "NONE";
				}
			}

			//UE_LOG(LogWM_HID_Joystick, Warning, TEXT("REBINDING KEY  SAVE DATA - > %s"), *Key.GetFName().ToString());
			UpdateSaveData();
		}
	}

	if (type == EWM_GamepadKeyType::DPAD) {

		TMap<FString, FString>& KeyBindings = HID_CONFIG.DPADS_BINDINGS;
		FString KeyCollection = *InputManager->HIDJoystick_DPADButtons.Find(Key);

		if (KeyBindings.Contains(KeyCollection)) {
			if (DPAD_DHP.Contains(TargetBinding)) {
				KeyBindings[KeyCollection] = TargetBinding;
			}
			else {
				if (TargetBinding == "DEFAULT") {
					KeyBindings[KeyCollection] = HID_CONFIG_DEFAULT.DPADS_BINDINGS.Find(KeyCollection) ? HID_CONFIG_DEFAULT.DPADS_BINDINGS[KeyCollection] : "NONE";
				}
				else {
					KeyBindings[KeyCollection] = "NONE";
				}
			}
			UpdateSaveData();
		}
	}
}

void UWM_HID_Joystick::GetBinding(FKey Key, FString& Binding) {
	//thats why i need DirectPointers
	if (!InputManager->HIDJoystick_KeysByType.Contains(Key)) { Binding = "NONE"; return; }
	EWM_GamepadKeyType type = InputManager->HIDJoystick_KeysByType[Key];
	if (type == EWM_GamepadKeyType::Axis) {
		//Binding = Axis_DHP.Contains(*AXIS_BINDINGS.Find(Key)) ? AXIS_BINDINGS[Key] : "NONE";    
		TMap<FKey, FString> KeyBindings;
		KeyBindings = HID_CONFIG.AXIS_BINDINGS;
		if (KeyBindings.Contains(Key)) {
			Binding = Axis_DHP.Contains(*KeyBindings.Find(Key)) ? *KeyBindings.Find(Key) : "NONE";
		}
	}

	if (type == EWM_GamepadKeyType::Button) {
		//Binding = Button_DHP.Contains(*BUTTONS_BINDINGS.Find(Key)) ? BUTTONS_BINDINGS[Key] : "NONE";
		TMap<FKey, FString> KeyBindings;
		KeyBindings = HID_CONFIG.BUTTONS_BINDINGS;
		if (KeyBindings.Contains(Key)) {
			Binding = Button_DHP.Contains(*KeyBindings.Find(Key)) ? *KeyBindings.Find(Key) : "NONE";
		}
	}

	if (type == EWM_GamepadKeyType::DPAD) {
		FString KeyCollection = InputManager->HIDJoystick_DPADButtons[Key];
		//Binding = DPAD_DHP.Contains(*DPADS_BINDINGS.Find(KeyCollection)) ? DPADS_BINDINGS[KeyCollection] : "NONE";
		TMap<FString, FString> KeyBindings;
		KeyBindings = HID_CONFIG.DPADS_BINDINGS;
		if (KeyBindings.Contains(KeyCollection)) {
			Binding = DPAD_DHP.Contains(*KeyBindings.Find(KeyCollection)) ? *KeyBindings.Find(KeyCollection) : "NONE";
		}
	}
}

void UWM_HID_Joystick::GetBindingOptions(FKey Key, TArray<FString>& Options) {
	TArray<FString> bindingsOptions;
	if (!InputManager->HIDJoystick_KeysByType.Contains(Key)) { Options = bindingsOptions; return; }
	EWM_GamepadKeyType type = InputManager->HIDJoystick_KeysByType[Key];

	Options.Add("NONE");
	Options.Add("DEFAULT");

	if (type == EWM_GamepadKeyType::Axis) {
		for (auto&Each : Axis_DHP) {
			Options.Add(Each.Key);
		}
	}
	if (type == EWM_GamepadKeyType::Button) {
		for (auto&Each : Button_DHP) {
			Options.Add(Each.Key);
		}
	}
	if (type == EWM_GamepadKeyType::DPAD) {
		for (auto&Each : DPAD_DHP) {
			Options.Add(Each.Key);
		}
	}
}

bool UWM_HID_Joystick::GetConfig(FHID_Joystick_CONFIG& config) {
	config = HID_CONFIG;
	return true;
}

void UWM_HID_Joystick::GetConfigurationMode(int32& ConfigurationMode) {
	ConfigurationMode = ConfigMode;
}


void UWM_HID_Joystick::SetConfigurationMode(int32 ConfigurationMode) {
	bool sucess = false;
	if (savedata->IsValidLowLevel()) {

		bool hasconfigurationmode = savedata->HID_JoystickConfig.Contains(ConfigurationMode);// && !override;
		if (!hasconfigurationmode && ConfigurationMode > 0 && ConfigurationMode <= NumOfConfigModes) {
			HID_CONFIG = HID_CONFIG_DEFAULT;
			//ResetAllAxisConfig(); //it dont know which config mode to reset
			sucess = true;
			//UE_LOG(LogWM_HID_Joystick, Warning, TEXT("CREATED NEW CONFIGURATION MODE"));
		}
		else if (savedata->HID_JoystickConfig.Find(ConfigurationMode)) {
			HID_CONFIG = savedata->HID_JoystickConfig[ConfigurationMode];
			//autodetect settings when data exist
			for (int32 i = 0; i < AxisData.Num(); i++) {
				UpdateAxisValue(i);
			}
			sucess = true;
		}

		if (sucess) {
			ConfigMode = ConfigurationMode;
			OnModeSwitched.Broadcast(ConfigurationMode);
			OnConfigChanged.Broadcast(ConfigMode);
	        ///REAUTODETECT AXIS on DATACollected
			if (!HID_CONFIG.RAWDataRecieved && RawDataWasInitialized) {
				HID_CONFIG.RAWDataRecieved = true;
				ResetAllAxisConfig();
			}
			UpdateSaveData();
		}
	}
}


void UWM_HID_Joystick::GetAxisConfig(int32 AxisNumber, FWM_HID_AxisConfiguration& axisConfig) {
	if (AxisNumber < HID_CONFIG.AxisConfigurations.Num() - 1) {
		axisConfig = HID_CONFIG.AxisConfigurations[AxisNumber];
	}
}
void UWM_HID_Joystick::SetAxisConfig(int32 AxisNumber, FWM_HID_AxisConfiguration config) {
	if (AxisNumber > -1 && AxisNumber < HID_CONFIG.AxisConfigurations.Num() - 1) {
		HID_CONFIG.AxisConfigurations[AxisNumber] = config;

		UpdateAxisValue(AxisNumber);
		UpdateSaveData();
		OnConfigChanged.Broadcast(ConfigMode);
	}
}

void UWM_HID_Joystick::UpdateAxisValue(int32 AxisNumber) {
	if (AxisNumber < HID_CONFIG.AxisConfigurations.Num() - 1) {
		FWM_HID_AxisData& analData = AxisData[AxisNumber];
		AxisData[AxisNumber].GetValueWithConfig(HID_CONFIG.AxisConfigurations[AxisNumber], true);
	}
}

void UWM_HID_Joystick::ResetConfigurationMode() {
	HID_CONFIG_DEFAULT = FHID_Joystick_CONFIG(configTarget);
	HID_CONFIG = HID_CONFIG_DEFAULT;
	for (int32 i = 0; i < AxisData.Num(); i++) {
		UpdateAxisValue(i);
	}
	ResetAllAxisConfig();
	UpdateSaveData();
	OnConfigChanged.Broadcast(ConfigMode);
}



void UWM_HID_Joystick::AutodetectAllAxisConfig() {
	TArray<int32> Axes = GetRaw_Available_Axes();
	for (int32 i = 0; i < Axes.Num(); i++) {
		AutodetectAxisConfig(Axes[i]);
	}
	UpdateSaveData();
}

void UWM_HID_Joystick::ResetAxisConfig(int32 Axis) {
	if (Axis < AxisData.Num() - 1) {
		HID_CONFIG.AxisConfigurations[Axis] = FWM_HID_AxisConfiguration(InputManager->WM_SettingsRW->DefaultSensitivity, InputManager->WM_SettingsRW->DefaultDeadzone);
		UpdateAxisValue(Axis);
		AutodetectAxisConfig(Axis);
		UpdateSaveData();
		OnConfigChanged.Broadcast(ConfigMode);
	}
}

void UWM_HID_Joystick::ResetAllAxisConfig() {
	TArray<int32> Axes = GetRaw_Available_Axes();
	for (int32 i = 0; i < Axes.Num(); i++) {
		ResetAxisConfig(Axes[i]);
	}
}


void UWM_HID_Joystick::AutodetectAxisConfig(int32 Axis) {
	bool isPedal = false;
	bool isInvert = false;
	float autodetectTolerance = 0.33f;
	if (Axis < AxisData.Num() - 1) {
		UpdateAxisValue(Axis);
		if (AxisData[Axis].NormalizedRawValue > 0.5 + autodetectTolerance) {
			isPedal = true;	
			isInvert = true;
		}
		else if (AxisData[Axis].NormalizedRawValue < 0.5 - autodetectTolerance) {
			isPedal = true;
			
		}
		HID_CONFIG.AxisConfigurations[Axis].bInverted = isInvert;
		HID_CONFIG.AxisConfigurations[Axis].bIsPedal = isPedal;

		UpdateAxisValue(Axis);
		UpdateSaveData();
		OnConfigChanged.Broadcast(ConfigMode);
	}
}


void UWM_HID_Joystick::OnDeviceAssigmentChange(int32 PreviousAssigment, int32 NewAssigment) {
	Super::OnDeviceAssigmentChange(PreviousAssigment, NewAssigment);
	//InputManager->PluginCORE->ResetJoystickEventsForPlayerController(PreviousAssigment);
};


void UWM_HID_Joystick::UpdateSaveData() {
	StopListeningForKeyInput();
	if (savedata->IsValidLowLevel()) {
		savedata->UpdateData(HID_CONFIG, ConfigMode);
		if (AutosaveConfig) { SaveConfig(); }
		ClearDeviceInput();
	}

}
void UWM_HID_Joystick::SaveConfig() {
	if (savedata->IsValidLowLevel() && savedata->wasInitialized) {
		savedata->SAVEDATA();
	}
}


/*void UWM_HID_Joystick::Store_DeveloperDevicePreset(int32 mode) {
	//InputManager->WM_SettingsRW->Dev_DefaultMappings_Joysticks.Add(DeviceInfo.VPID_HEX, InputManager->DefaultMappings["GENERIC"]);
	FDefaultDeviceMappings defaultMapping = InputManager->DefaultMappings["GENERIC"];
	for (auto&Axis : defaultMapping.DefaultAxisMappings) {
		//key from uniqueidentifier
		const FKey keytofind = *InputManager->HIDJoystick_Axes.FindKey(Axis.Key);
		 FString mapping = *HID_CONFIG.AXIS_BINDINGS.Find(keytofind);
		     bool success = mapping.RemoveFromStart("Axis-");
			 if (success) {
				 Axis.Value = mapping;
			 }
			 else {
				 Axis.Value = "";
			 }
				 
	}
	InputManager->WM_SettingsRW->Dev_DefaultMappings_Joysticks.Add(DeviceInfo.VPID_HEX, defaultMapping);
}*/

/*void UWM_HID_Joystick::Delete_DeveloperDevicePreset(int32 mode) {

}*/

/*
void UWM_HID_Joystick::GetAxisDataForInput(FKey Key, FWM_HID_AxisData& axisData) {

if (InputManager->HIDJoystick_Axes.Contains(Key)) {
FString hexBinding = AXIS_BINDINGS[Key]; // = AnalogInputs.getBinding();
if (Axis_DHP.Contains(hexBinding)) {
int32 axisnum = *Axis_DHP.Find(hexBinding);
axisData = AxisData[axisnum];
}
}
}

void UWM_HID_Joystick::GetButtonDataForInput(FKey Key, bool& buttonValue) {
buttonValue = ButtonKeyValues.Contains(Key) ? buttonValue = ButtonKeyValues[Key] : false;

/*
if (InputManager->HIDJoystick_Buttons.Contains(Key)) {
const FString hexBinding = BUTTONS_BINDINGS[Key]; // = AnalogInputs.getBinding();
if (Button_DHP.Contains(hexBinding)) {
int32 buttonnum = *Button_DHP.Find(hexBinding);
buttonValue = ButtonsData[buttonnum].bIsPressed;
}
}*/
/*if (InputManager->HIDJoystick_DPADButtons.Contains(Key)) {
const FString hexBinding = BUTTONS_BINDINGS[Key]; // = AnalogInputs.getBinding();
FString KeyCollection = *InputManager->HIDJoystick_DPADButtons.Find(Key);
if (Button_DHP.Contains(hexBinding)) {
int32 buttonnum = *Button_DHP.Find(hexBinding);
buttonValue = DPADData[buttonnum].bIsPressed;
}
}*/

/*
}
*/