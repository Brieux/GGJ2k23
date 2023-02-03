// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"

#include "WM_Device_Mouse.h"

#include "WM_InputManager.h"
#include "WM_ControllerFunctionLib.h"


UWM_Device_Mouse::UWM_Device_Mouse(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DeviceType = EWM_DeviceType::Mouse;
	
}
void UWM_Device_Mouse::BeginDevice() {
	Super::BeginDevice();
	InputManager->numMouses++;
	if (WM_SettingsRW->logConnectDisconnect) {
		UE_LOG(LogWM_Device_Keyboard, Warning, TEXT("starting mouse  "));
	}
}
void UWM_Device_Mouse::DestroyDevice() {
	Super::DestroyDevice();
	InputManager->numMouses--;
	if (WM_SettingsRW->logConnectDisconnect) {
		UE_LOG(LogWM_Device_Keyboard, Warning, TEXT("removing mouse  "));
	}
}
