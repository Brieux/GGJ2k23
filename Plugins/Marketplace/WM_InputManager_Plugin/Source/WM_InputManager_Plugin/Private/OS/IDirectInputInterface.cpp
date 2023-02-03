// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"
#include "IDirectInputInterface.h"

//#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#pragma comment(lib, "dinput8.lib")
#pragma comment(lib, "dxguid.lib")

DEFINE_LOG_CATEGORY_STATIC(LogWM_Input_DevicesDXInput, Log, All);
IDirectInputInterface::IDirectInputInterface() {
	
	
	HMODULE appmodule = (HINSTANCE)GetModuleHandle(NULL);
	UE_LOG(LogWM_Input_DevicesDXInput, Warning, TEXT("INITIALIZING DXINPUT8"));
	HRESULT result = DirectInput8Create(appmodule, DIRECTINPUT_VERSION, IID_IDirectInput8, (void **)&DX8Input, NULL);
	check(result == S_OK);
	//RegisterDeviceNotification()
	/*if (result == S_OK) {
		UE_LOG(LogWM_Input_DevicesDXInput, Warning, TEXT(" DXINPUT8 SUCESSFULLY CREATED"));
		DX8Input->EnumDevices(DI8DEVCLASS_GAMECTRL, &enumerateGameControllers, this, DIEDBSFL_ATTACHEDONLY);
	}*/
  

}


void IDirectInputInterface::EnumerateDevices() {
	if (DX8Input) {
		UE_LOG(LogWM_Input_DevicesDXInput, Warning, TEXT(" ENUMERATING DEVICES "));
		//DX8Input->EnumDevices(DI8DEVCLASS_GAMECTRL, &enumerateGameControllers, this, DIEDBSFL_ATTACHEDONLY);
		DX8Input->EnumDevices(DI8DEVCLASS_GAMECTRL, &enumerateGameControllers, this, DIEDBSFL_ATTACHEDONLY);
	}
	
}

BOOL CALLBACK IDirectInputInterface::enumerateGameControllers(LPCDIDEVICEINSTANCE devInst, LPVOID pvRef) {

	LPDIRECTINPUTDEVICE8 gameController;
	IDirectInputInterface * callbackOriginClassInstance = (IDirectInputInterface*)pvRef;
	if (FAILED(callbackOriginClassInstance->DX8Input->CreateDevice(devInst->guidInstance, &gameController, NULL))) {
		return DIENUM_CONTINUE;
	}
	else {
		//store gamecontroller
		//callbackOriginClassInstance->GameControllers.Add(*gameController);
		callbackOriginClassInstance->OnCreateGameController(gameController);
		//gameControllers.push_back(gameController);
		return DIENUM_CONTINUE;
	}

}

void IDirectInputInterface::OnCreateGameController(LPDIRECTINPUTDEVICE8 gameController) {
	GameControllers.Add(gameController);
	//UE_LOG(LogWM_Input_DevicesDXInput, Warning, TEXT("NEW DXINPUT DEVICE DETECTED"));
	DIDEVCAPS capabilities;
	capabilities.dwSize = sizeof(DIDEVCAPS);	
	
	//DX8Input->GetDeviceStatus(GameControllers[0])
	for (auto ctrl : GameControllers) {
		if (FAILED(ctrl->GetCapabilities(&capabilities))) {
			 //throw critical,, cannot get capabilities
		} 
		else {
			//azes pushback(capabilities.dwaxes);

			DIJOYSTATE joystate;
			if (FAILED(ctrl->GetDeviceState(sizeof(DIJOYSTATE), &joystate))) {
				//failed to create joystate
			}
			else {
		       
			}
			DIEFFECTINFO effectinfo;
			effectinfo.dwSize = sizeof(DIEFFECTINFO);
					
			//ctrl->GetForceFeedbackState(&effectinfo); //pause, continue,, useroff etc.
		}
	}
	//DX8Input->GetDeviceStatus(gameController[0]->)
}
//on new device created.



IDirectInputInterface::~IDirectInputInterface()
{
}