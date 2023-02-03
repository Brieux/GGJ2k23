// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once
#include "Windows/WindowsApplication.h"
#include "IWindowsInterface.h"



class IWindowsInterface : public IWindowsMessageHandler
{
public:
	IWindowsInterface();
	virtual ~IWindowsInterface();
	virtual void LoadHWNDTarget();
	virtual void LoadHWNDTargetOverSteam();
	TArray<TSharedRef<SWindow>> GetChildWindows();
	TSharedPtr<GenericApplication> GenericApplication;
	FWindowsApplication* WindowsApplication = nullptr;
	HWND hwndTarget = nullptr;


	virtual void StopModal();
};
