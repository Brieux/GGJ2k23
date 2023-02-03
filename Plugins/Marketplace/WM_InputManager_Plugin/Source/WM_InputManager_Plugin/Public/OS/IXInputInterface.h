// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once
#include "Windows/WindowsApplication.h"
#include "IXInputInterface.h"

#include "OS/DllImport/ImportDLL_Xinput.h"

class IXInputInterface : public IInterface
{
public:
	IXInputInterface();
	virtual ~IXInputInterface();

	F_Xinput_dll Xinput_Dll_Ref;
	
};
