// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once
#include "Windows/WindowsApplication.h"
#include "Xinput.h"
/*#if PLATFORM_USES_MICROSOFT_LIBC_FUNCTIONS
#define __FMemory_Alloca_Func _alloca
#else
#define __FMemory_Alloca_Func alloca
#endif*/
//#define FMemory_Alloca(Size )((Size==0) ? 0 : (void*)(((PTRINT)__FMemory_Alloca_Func(Size + 15) + 15) & ~15))
//#pragma pack (push,1)
//#pragma pack (pop)


struct F_Xinput_dll
{
public:
	
	typedef int32(*ImportType_XInputGetState)  (DWORD a , XINPUT_STATE* b);
	typedef int32(*ImportType_XInputSetState)  (DWORD dwUserIndex, XINPUT_VIBRATION* vibration);
	typedef int32(*ImportType_XInputGetDSoundAudioDeviceGuids)  (DWORD dwUserIndex, GUID audioRender, GUID audiocapture);
	typedef int32(*ImportType_XInputGetCapabilities)  (DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES* capabilities);
	
	void* DLLHandle;
	ImportType_XInputGetState XInputGetState;
	ImportType_XInputSetState XInputSetState;
	ImportType_XInputGetDSoundAudioDeviceGuids XInputGetDSoundAudioDeviceGuids;
	ImportType_XInputGetCapabilities XInputGetCapabilities;

	F_Xinput_dll();
	virtual ~F_Xinput_dll();

	
	bool LOAD_LIBRARY();
	bool LOADED = LOAD_LIBRARY();


};

