// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "IWM_InputManager_Plugin.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IInputDeviceModule.h"
#include "IInputDevice.h"
#include "GenericPlatform/GenericApplication.h"

#include "WM_ControllerFunctionLib.h"

//MODULE from MODULEINTERFACE
class FWM_InputManager_Plugin : public IWM_InputManager_Plugin
{
	//TSharedRef< FGenericApplicationMessageHandler > PendingMessageHandler;
	virtual TSharedPtr< class IInputDevice > CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& MessageHandler) override;
	TSharedPtr< class WM_InputDevices > InputDevices_Interface;

public:
	//INTERFACE LOADED
	//... from Interface
	//
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	///Input ManagerObject REF & init
	class UWM_InputManager *InputManager = nullptr;
	virtual void AddAxis_JoystickInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, FString UniqueStringIdentifier);
	virtual void AddButton_JoystickInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, int32 UniqueStringIdentifier);
	virtual void AddDPADGamepadInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, FString UniqueStringIdentifier);
	virtual void AddDPAD_JoystickInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, FString UniqueStringIdentifier);
	virtual void Add_KeyboardInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, int32 UniqueStringIdentifier);
	

private:
};

// INTERFACE
class WM_InputDevices : public IInputDevice
{
public:
	WM_InputDevices(const TSharedRef<FGenericApplicationMessageHandler>& MessageHandler);
	virtual ~WM_InputDevices() {}

protected:
	TSharedRef<FGenericApplicationMessageHandler> MessageHandler;
private:

};

