// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"
#include "ImportDLL_Xinput.h"

F_Xinput_dll::F_Xinput_dll()
  
	: DLLHandle(nullptr)
	, XInputGetState(nullptr)
	, XInputSetState(nullptr)
	, XInputGetDSoundAudioDeviceGuids(nullptr)
	, XInputGetCapabilities(nullptr)
{
}

F_Xinput_dll::~F_Xinput_dll()
{
	if (DLLHandle)
	{
		FPlatformProcess::FreeDllHandle(DLLHandle);
		DLLHandle = nullptr;
	}
}

bool F_Xinput_dll::LOAD_LIBRARY()
{
	
	DLLHandle = nullptr;
	DLLHandle = FPlatformProcess::GetDllHandle(TEXT("xinput1_3.dll"));
	if (!DLLHandle) {
		DLLHandle = FPlatformProcess::GetDllHandle(TEXT("Xinput9_1_0.dll"));
	}
	if (DLLHandle)
	{
		///HidD
		XInputGetState = (F_Xinput_dll::ImportType_XInputGetState) FPlatformProcess::GetDllExport(DLLHandle, TEXT("XInputGetState"));
		check(XInputGetState);
	    XInputSetState = (F_Xinput_dll::ImportType_XInputSetState) FPlatformProcess::GetDllExport(DLLHandle, TEXT("XInputSetState"));
		check(XInputSetState);
		XInputGetDSoundAudioDeviceGuids = (F_Xinput_dll::ImportType_XInputGetDSoundAudioDeviceGuids) FPlatformProcess::GetDllExport(DLLHandle, TEXT("XInputGetDSoundAudioDeviceGuids"));
		check(XInputGetDSoundAudioDeviceGuids);
		XInputGetCapabilities = (F_Xinput_dll::ImportType_XInputGetCapabilities) FPlatformProcess::GetDllExport(DLLHandle, TEXT("XInputGetCapabilities"));
		check(XInputGetCapabilities);
	}

	return (DLLHandle != nullptr);
}

