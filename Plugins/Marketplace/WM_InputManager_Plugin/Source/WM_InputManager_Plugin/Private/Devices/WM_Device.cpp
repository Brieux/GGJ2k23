// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"
#include "WM_Device.h"

#include "WM_InputManager.h"
#include "WM_ControllerFunctionLib.h"

DEFINE_LOG_CATEGORY_STATIC(LogWM_Device, Log, All);
UWM_Device::UWM_Device(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//FWM_InputManager_Plugin* Plugin = static_cast<FWM_InputManager_Plugin*>(&FWM_InputManager_Plugin::Get());
	InputManager = UWM_ControllerFunctionLib::Get_WM_InputManager();
	const UWM_Settings* WM_Settings = GetDefault<UWM_Settings>();
	WM_SettingsRW = const_cast<UWM_Settings*>(WM_Settings);
	InputManager->All_DevicesList.Add(this);

}


void UWM_Device::BeginDevice() {
	InputManager->OnNumDevicesChanged.Broadcast(0);
	InputManager->GetSelectedDevice(); //to check selection
	InputManager->OnDeviceConnected.Broadcast(this);
	AssignDeviceToPlayerIndex(WM_SettingsRW->DefaultPlayerIndex_DeviceAssigment);
}

void UWM_Device::DestroyDevice() {
	OnDeviceAssigmentChange(ControllerAssigment, ControllerAssigment);
	if (isSelected) {
		OnDeviceSelected(false);
	}
	InputManager->OnNumDevicesChanged.Broadcast(0);
	InputManager->OnDeviceDisconnected.Broadcast(this);
	RemoveFromRoot();
	MarkPendingKill();
	InputManager->All_DevicesList.Remove(this);
}


void UWM_Device::AssignDeviceToPlayerIndex(int32 index) {

	const int32 newControllerAssigment = fmin(fmax(index, -1), InputManager->NumberOfPlayers - 1);
	if (ControllerAssigment != newControllerAssigment) {
		ClearDeviceInput();// PendingAssigmentsResets.Push(ControllerAssigment);
		ControllerAssigment_pending = newControllerAssigment;
		//ControllerAssigment = newControllerAssigment; //change!! this must be done after all pending resets
		///controller synchro hack
		//needResetAssigments = true;
	}
};

bool UWM_Device::tryApplyControllerAssigment() {
	if (PendingAssigmentsResets.Num() == 0) {
		if (ControllerAssigment != ControllerAssigment_pending) {
			const int oldAssigment = ControllerAssigment;
			ControllerAssigment = ControllerAssigment_pending;
			OnDeviceAssigmentChange(oldAssigment, ControllerAssigment);
			return true;
		}
	}
	
	return false;
};


void UWM_Device::ClearDeviceInput() {
	needResetAssigments = true;
	PendingAssigmentsResets.Push(ControllerAssigment);
}


void UWM_Device::OnDeviceAssigmentChange(int32 PreviousAssigment, int32 NewAssigment) {
	///->>>>
	InputManager->OnDeviceAssigmentChange.Broadcast(this, PreviousAssigment, NewAssigment);
};

void UWM_Device::OnBeginParseData() {
};

void UWM_Device::OnEndParseData() {
};

void UWM_Device::OnDataInitialized() {
}

void UWM_Device::OnDeviceSelected(bool selected) {
	isSelected = selected;
}

bool UWM_Device::isValidPlayerIndex() {
	if ((ControllerAssigment >= 0) && (ControllerAssigment < InputManager->NumberOfPlayers)) { 
		return true;
	}
	return false;
}