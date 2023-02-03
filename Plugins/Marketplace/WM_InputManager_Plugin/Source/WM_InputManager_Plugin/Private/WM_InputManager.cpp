// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"
#include "WM_InputManager.h"

#include "WM_ControllerFunctionLib.h"
#include "WM_Input_DevicesRAW.h"
#include "WM_Settings.h"

#include "WM_Device.h"
#include "WM_HID_Joystick.h"

#include "Blueprint/UserWidget.h"

//#include "EnhancedInputComponent.h"
//#include "EnhancedInputSubsystems.h"


/*#include "Json/Public/Json.h"
#include "JsonGlobals.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JSonReader.h"
#include "Serialization/JsonSerializer.h"
#include "JsonObjectConverter.h"
#include "HAL/FileManager.h"*/


//#include "Serialization/JsonReader.h"
//#include "Serialization/JsonSerializer.h"
//#include "JsonObjectConverter.h"
/////
//#include "Editor/UnrealEd/Classes/Settings/ProjectPackagingSettings.h"


UWM_InputManager::UWM_InputManager(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
/*#if WITH_EDITOR
	const UProjectPackagingSettings* PackSettings = GetDefault<UProjectPackagingSettings>();
	UProjectPackagingSettings* PackSettingsRW = const_cast<UProjectPackagingSettings*>(PackSettings);
	FDirectoryPath apath; apath.Path = "HIDDrivers";

	bool contains = false;
	for (int i = 0; i < PackSettingsRW->DirectoriesToAlwaysStageAsNonUFS.Num(); i++) {
		if (PackSettingsRW->DirectoriesToAlwaysStageAsNonUFS[i].Path == apath.Path) {
			contains = true;
		}
	}
	if (!contains) {
		PackSettingsRW->DirectoriesToAlwaysStageAsNonUFS.Add(apath);
	}
#endif*/	
}

void UWM_InputManager::Restart() {

}
void UWM_InputManager::BeginWorldPlay() {
     Super::BeginWorldPlay();
}
void UWM_InputManager::EndWorldPlay() {
    Super::EndWorldPlay();
}

void UWM_InputManager::Tick() {
     Super::Tick();
}


UWM_HID_Joystick*  UWM_InputManager::GetSelectedGamepad() {
	if (SelectedGamepad && SelectedGamepad->IsValidLowLevel()){// && Joystick_DeviceList.FindKey(SelectedGamepad)) {
		return SelectedGamepad;
	}
	SelectedGamepad = nullptr;
	return nullptr;
}

UWM_Device*  UWM_InputManager::GetSelectedDevice() {
	if (SelectedDevice && SelectedDevice->IsValidLowLevel()) {
		return SelectedDevice;
	}
	SelectedDevice = nullptr;
	SelectedGamepad = nullptr;
	return nullptr;
}


void UWM_InputManager::SelectDevice(UWM_Device* deviceToSelect) {
	bool canSelect =false;
	if (deviceToSelect->IsValidLowLevel()) {	
		if (deviceToSelect->DeviceType == EWM_DeviceType::JoystickOrGamepad) {
			UWM_HID_Joystick * Gamepad = Cast<UWM_HID_Joystick>(deviceToSelect);
			if (Gamepad->IsValidLowLevel() && Joystick_DeviceList.FindKey(Gamepad)) {
				SelectedGamepad= Gamepad;
				canSelect = true;
			}		
	    }
	}
	if (canSelect) {
		if (SelectedDevice->IsValidLowLevel()) {
			SelectedDevice->OnDeviceSelected(false);
		}
		SelectedDevice = deviceToSelect;
		SelectedDevice->OnDeviceSelected(true);
		OnDeviceSelected.Broadcast(deviceToSelect);
	}
	//deselect if not valid or cant select
	else {
		SelectedDevice = nullptr;
		SelectedGamepad = nullptr;
	}
}

void UWM_InputManager::BeginUMG() {
	//On_WM_InputManagerBegin.Broadcast();
	if (SelectedDevice && SelectedDevice->IsValidLowLevel()) {
		SelectDevice(SelectedDevice);
	}
	//OnButtonKeyPressed.Clear();
	//OnButtonKeyReleased.Clear();
	///send on disconnect & oninit
	for (int32 i = 0; i < All_DevicesList.Num(); i++) {
		OnDeviceDisconnected.Broadcast(All_DevicesList[i]);
		
		//OnDeviceConnected.Broadcast(All_DevicesList[i]);
	}

	for (int32 i = 0; i < All_DevicesList.Num(); i++) {
		//OnDeviceDisconnected.Broadcast(All_DevicesList[i]);
		OnDeviceConnected.Broadcast(All_DevicesList[i]);
		if (All_DevicesList[i]->RawDataWasInitialized) {
			All_DevicesList[i]->OnRawDataInitialized.Broadcast();
		}
	}
	SetNumberOfPlayers(NumberOfPlayers);
}




EWM_GamepadKeyType UWM_InputManager::Get_HidJoystickKeyType(FKey key) {
	if (HIDJoystick_KeysByType.Contains(key)) {
		return HIDJoystick_KeysByType[key];
	}
	else {
		return EWM_GamepadKeyType::NoGamepadKey;
	}	
}


void UWM_InputManager::SetForceFeedbackForJoysticks(int32 PlayerControlledID, float AllMotorsStrength , float LeftMotorStrength, float RightMotorStrength) {
	PluginCORE->SetForceFeedbackForPlayerID(PlayerControlledID, AllMotorsStrength, LeftMotorStrength, RightMotorStrength);
}


void UWM_InputManager::LoadProfile(FString ProfileName) {
	CurrentProfileName = ProfileName;
	for (auto&Each : Joystick_DeviceList) {
		if (Each.Value->IsValidLowLevel()) {
			Each.Value->getJoystickConfig();
		}		
	}
}
/*void UWM_InputManager::DeleteProfile(FString ProfileName) {
	if (ProfileName != "") {
		
	}	
}*/
FString UWM_InputManager::GetCurrentProfileName() {
	return CurrentProfileName;
}

void UWM_InputManager::SupportMe() {
	FPlatformProcess::LaunchURL(TEXT("https://www.paypal.com/donate/?business=MM3NKM4BXVEK8&no_recurring=0&item_name=Donate+creator+of+WM+Input+Manager+plugin+to+get+better+support+%26+features&currency_code=EUR"), NULL, NULL);
}



/*void UWM_InputManager::GetDefault_AxisMappingForDevice(TMap<FKey, FString>& Axes, int32 VID, int32 PID) {
	//if (struct contains VID :PID) {

	//}
	//else {
	//	HIDJoystick_Axes = HIDJoystick_Axes;
	//}
}


void UWM_InputManager::SaveFile(FString abcd) {
	//TArray<FString> Parsed;
	//abc.ParseIntoArray(Parsed, TEXT(","), false);
	//filemanager.Copy(*(DriversContentPath), *(PluginPath + "*." + Extension), false, true, false, nullptr, FILEREAD_AllowWrite, FILEWRITE_AllowRead);
	TSharedPtr<FJsonObject> jsonobject = MakeShareable(new FJsonObject());
	jsonobject->SetStringField("A1", "36(0)");
	jsonobject->SetStringField("A2", "36(1)");
	jsonobject->SetStringField("A3", "36(2)");

	jsonobject->GetStringField("A1");///returns mapping for HID_Joystick_Axis1;
	
	FString outputstring;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&outputstring);
	FJsonSerializer::Serialize(jsonobject.ToSharedRef(), Writer);


	FFileHelper::SaveStringToFile(outputstring, *(PluginPath + "myfile.hidd"), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEREAD_AllowWrite);
	//FFileHelper::SaveStringToFile(abcd, *(DriversContentPath + "myfile.hidd"), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEREAD_AllowWrite);
	//return Parsed;
}

TArray<FString> UWM_InputManager::GetFile() {
	FString loadedstring;
	FFileHelper::LoadFileToString(loadedstring, *(DriversContentPath + "myfile.hidd"), FILEWRITE_AllowRead);
	TArray<FString> parsed;
	loadedstring.ParseIntoArray(parsed, TEXT(","), false);
	return parsed;
}

TArray<FString> UWM_InputManager::CopyDriversToCook() {
	TArray<FString> FoundFiles;
	FString Extension = "hidd";
	
	IFileManager& filemanager = IFileManager::Get();
	filemanager.FindFiles(FoundFiles, *(PluginPath + "*." + Extension), true, false);
	for (int i = 0; i < FoundFiles.Num(); i++) {
		filemanager.Copy(*(DriversContentPath + FoundFiles[i]), *(PluginPath + FoundFiles[i]), true, true, false, nullptr, FILEREAD_AllowWrite, FILEWRITE_AllowRead);
		
	}
	return FoundFiles;
}*/
