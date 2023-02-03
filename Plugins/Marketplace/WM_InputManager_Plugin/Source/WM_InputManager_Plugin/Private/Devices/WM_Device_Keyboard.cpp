// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"

#include "WM_Device_Keyboard.h"

#include "WM_InputManager.h"
#include "WM_ControllerFunctionLib.h"
DEFINE_LOG_CATEGORY_STATIC(LogWM_Device_Keyboard, Log, All);

UWM_Device_Keyboard::UWM_Device_Keyboard(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DeviceType = EWM_DeviceType::Keyboard;
	
}
void UWM_Device_Keyboard::BeginDevice() {
	Super::BeginDevice();
	InputManager->numKeyboards++;
	if (WM_SettingsRW->logConnectDisconnect) {
		UE_LOG(LogWM_Device_Keyboard, Warning, TEXT("starting keyboard  "));
	}
	
}

void UWM_Device_Keyboard::DestroyDevice() {
	Super::DestroyDevice();
	InputManager->numKeyboards--;
	if (WM_SettingsRW->logConnectDisconnect) {
		UE_LOG(LogWM_Device_Keyboard, Warning, TEXT("removing keyboard  "));
	}
}