// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl  Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IInputDeviceModule.h"
#include "InputCoreTypes.h"



//MODULE INTERFACE
class IWM_InputManager_Plugin : public IInputDeviceModule
{
public:

	static inline IWM_InputManager_Plugin& Get()
	{
		return FModuleManager::LoadModuleChecked<IWM_InputManager_Plugin>("WM_InputManager_Plugin");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("WM_InputManager_Plugin");
	}
};
