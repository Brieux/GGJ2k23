// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once


#include "IInputDeviceModule.h"
#include "IInputDevice.h"
#include "WM_InputManager_Plugin.h"
#include "WM_ControllerFunctionLib.h"
#include "OS/IWindowsInterface.h"
#include "OS/DllImport/ImportDLL_Hid.h"

#include "OS/IDirectInputInterface.h"
//#include "OS/DllImport/ImportDLL_Xinput.h"
#include "OS/IXInputInterface.h"

typedef struct _HIDDD_INPUT_REPORT {
	UCHAR ReportId;
	UCHAR Data;
} HIDDD_INPUT_REPORT, *PHIDDD_INPUT_REPORT;

struct ButtonMapping {
	uint16 StartIndex;
	USAGE U_Page;
	USAGE U_Min;
	USAGE U_Max;
};

class WM_Input_DevicesRAW : public WM_InputDevices, IWindowsInterface, IXInputInterface//, IDirectInputInterface
{

public:
	UWM_InputManager* InputManager = nullptr;
	F_Hid_dll HID_Dll_Ref;
	//F_Xinput_dll Xinput_Dll_Ref;
	
	WM_Input_DevicesRAW(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler);
	virtual ~WM_Input_DevicesRAW() {};

	virtual bool ProcessMessage(HWND hwnd, uint32 msg, WPARAM wParam, LPARAM lParam, int32& OutResult) override;
	virtual void Tick(float DeltaTime) override;
	virtual void SendControllerEvents() override;
	virtual void SetMessageHandler(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler) override;
	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& OutDevice) override { return false; }
	virtual void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value)override;// override {}
	virtual void SetChannelValues(int32 ControllerId, const FForceFeedbackValues& Values) override;// {}
	virtual bool IsGamepadAttached() const override {
		return true;
	}

	virtual void SetForceFeedbackForPlayerID(int32 PlayerControllerID, float AllMotorsStrength, float LeftMotorStrength, float RightMotorStrength);
	virtual void ResetJoystickEventsForPlayerController(int32 playerIndex);
	virtual void Reset_HIDDeviceEvents(UWM_Device_HID* HID_Device);


	//STEAMFIX
	bool RegisterDevices();
	bool UnregisterDevices(HWND TargetHWND);
	bool WM_RegisterDeviceNotification();
protected:
	
	int32 getFreeJoystickSlot();
	int32 getFreeKeyboardSlot();
	int32 GetFreeXInputSlot();

	FString dwTypeToString(const RID_DEVICE_INFO& DeviceInfo);
	EWM_DeviceType getMyDeviceType(const RID_DEVICE_INFO& DeviceInfo);

	void Log_Error(FString INFO);
	void Log_Success(FString INFO);
	void Log_HIDP_Error(int32 HID_STATUS, FString INFO);
	
	TMap<HANDLE, UWM_Device*> DevicesBy_UniqueHandle;
	TMap<HANDLE, int32> DevicesPackets;
	void OnDeviceConnected();
	void OnDeviceLost();
	void CreateUEDevice(HANDLE uniqueHANDLE, const LPARAM lParam,  int32 Xi);
	void GetAdvancedHID_DeviceInfo(RAWINPUT* rawdata, UWM_Device* Device);
	void RemoveUEDevice(HANDLE uniqueHANDLE);

	//HIDP_BUTTON_CAPS* Get_ButtonCaps(const PHIDP_PREPARSED_DATA PreparsedData, const HIDP_CAPS Caps, uint16& NumberOfButtonCaps, int32& RESULT);
	//HIDP_VALUE_CAPS*  Get_ValueCaps(HIDP_VALUE_CAPS* In_ValueCaps, uint16& MumberOfValueCaps, const  PHIDP_PREPARSED_DATA PreparsedData, const HIDP_CAPS Caps,  int32& RESULT);
	void ParseHID(UWM_Device_HID* HID_Device, const RAWINPUT* RAW, const PHIDP_PREPARSED_DATA PREPARSEDDATA, const HIDP_CAPS& CAPS);
	void ParseHID_V2(UWM_Device_HID* HID_Device, const RAWINPUT* RAW, const PHIDP_PREPARSED_DATA PREPARSEDDATA, const HIDP_CAPS& CAPS);
	void DetectXInputSlot(UWM_Device_HID* HID_Device, TArray<ButtonMapping> &ButtonMappings);
	void ProcessXInput(UWM_Device_HID * HID_Device);
	bool Check_HIDP(int32 HIDP_STATUS, FString INFO, UWM_Device_HID* HidDevice);
	void AnalogToButton(UWM_Device_HID* HID_Device, int32 analogindex, int32 buttonindex);

	

	virtual void UpdateHID_ButtonEvents(UWM_Device_HID* HID_Device);
	virtual void SendHID_ButtonEVENT(UWM_Device_HID* HID_Device, FKey key, FWM_HID_ButtonData* button);
	virtual void SendHID_BUTTON_Events(UWM_Device_HID* HID_Device);
	virtual void SendHID_DPAD_Events(UWM_Device_HID* HID_Device);
	virtual void SendHID_AXIS_Events(UWM_Device_HID* HID_Device);
	virtual void WriteForceFeedbackData(); //inprogress.


	virtual void registerEnhancedDevice(UWM_Device* device, int32 index);
	virtual void unregisterEnhancedDevice(UWM_Device* device, int32 index);
	virtual void remapEnhancedDevice(UWM_Device* device, int32 index);
	virtual bool checkEnhancedDeviceIsAssignedCorrectly(UWM_Device* device);
	//STEAM FIX - no longer necessary!
	virtual void CheckPooledDevices();
	TArray<HANDLE>ProcessedPooledDevices;
	int32 PoolingTimer = 0;

	int32 PoolingTimerSize = 30;
	bool UsePOOLINGMethod = false;
	bool DEVICES_REGISTERED = false;
	
	

	bool DEBUG_ANALOG_AXIS_TEST = false;
	bool DevPluginDEBUG = false;
	//bool LOG_DEBUG_HIDP_PARSING = false;



	bool DevicesUnregistered = false;

};






