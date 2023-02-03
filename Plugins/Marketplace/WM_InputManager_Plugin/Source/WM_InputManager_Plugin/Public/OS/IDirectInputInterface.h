// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once
#include "IDirectInputInterface.h"

#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>

class IDirectInputInterface : public IInterface
{
public:
	IDirectInputInterface();
	virtual ~IDirectInputInterface();
	IDirectInput8 * DX8Input = nullptr;
	
	 static BOOL CALLBACK enumerateGameControllers(LPCDIDEVICEINSTANCE devInst, LPVOID pvRef);
	 TArray<LPDIRECTINPUTDEVICE8> GameControllers;
	 virtual void OnCreateGameController(LPDIRECTINPUTDEVICE8 gameController);


	 void EnumerateDevices();
};
