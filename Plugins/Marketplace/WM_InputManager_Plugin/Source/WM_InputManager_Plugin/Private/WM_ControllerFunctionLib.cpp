// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"


#include "WM_ControllerFunctionLib.h"
#if PLATFORM_WINDOWS
     #include "WM_InputManager_Plugin.h"
	 #include "WM_Input_DevicesRAW.h"
#endif
#include "WM_Settings.h"

//#include "WM_Device_HID.h"
#include "WM_HID_Joystick_SAV.h"
#include "WM_HID_Joystick.h"
#include "WM_Device_Keyboard.h"





///GETS DIIRECTLY FROM PLUGIN BASE
UWM_InputManager* UWM_ControllerFunctionLib::Get_WM_InputManager() {
#if PLATFORM_WINDOWS

	FWM_InputManager_Plugin* Plugin = static_cast<FWM_InputManager_Plugin*>(&FWM_InputManager_Plugin::Get());
	if (Plugin && Plugin->InputManager && Plugin->InputManager->IsValidLowLevel()) {

		return Plugin->InputManager;
	}
	else {
		return nullptr;
	}

#endif
}





float UWM_ControllerFunctionLib::CovnertToBitSize(float value, uint16 bitsize, bool UNSIGNED_val) {	
	switch (bitsize) {


	case 8: {
		return UNSIGNED_val ? (UCHAR)value : (CHAR)value;
	}
	case 16: {
		return UNSIGNED_val ? (USHORT)value : (SHORT)value;
	}
	case 32: {
		return UNSIGNED_val ? (ULONG)value : (LONG)value;
	}
	}
	return value;	
}

FString UWM_ControllerFunctionLib::DwordToHex(DWORD inDword) {
	BYTE bytees[sizeof(DWORD)];
	bytees[0] = (inDword >> 24) & 0xFF;
	bytees[1] = (inDword >> 16) & 0xFF;
	bytees[2] = (inDword >> 8) & 0xFF;
	bytees[3] = inDword & 0xFF;
	FString outstring;
	outstring.Append("0x");
	for (byte b : bytees) {
		if (b > 0) {
			FString locHex;
			ByteToHex(b, locHex);
			outstring.Append(locHex);
		}
	}
	return outstring;
}

FString UWM_ControllerFunctionLib::DwordToHexString(DWORD inDword) {
	BYTE bytees[sizeof(DWORD)];
	bytees[0] = (inDword >> 24) & 0xFF;
	bytees[1] = (inDword >> 16) & 0xFF;
	bytees[2] = (inDword >> 8) & 0xFF;
	bytees[3] = inDword & 0xFF;
	FString outstring;
	//outstring.Append("0x");
	for (byte b : bytees) {
		if (b > 0) {
			FString locHex;
			ByteToHex(b, locHex);
			outstring.Append(locHex);
		}
	}
	return outstring;
}


//what da hell to include there EngineMinimal to allow ANY_PACKAGE to be UObject ? Doesn't matter there is no use of that anymore
/*
FString UWM_ControllerFunctionLib::MakeAxisStr(FString inVal) {	
	TArray<FString> pstring;
	inVal.ParseIntoArray(pstring, TEXT("("), true);
	FString ACTName = "";
	if (pstring.Num() > 0) {
		//USAGE acode = FCString::Atoi(*pstring[0]);
		
		uint8 acode [4];
	    HexToBytes( *("0x"+ pstring[0]), acode);
		const UEnum* ACTEnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EWM_AxisCodeTable"), true);
		ACTName = ACTEnumPtr->GetNameStringByValue((uint64)acode) + "-";
	}
	
	FString outString = ACTName + inVal;
	return outString;
}*/
