// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"
///h/ttp://www.blakewatts.com/namedpipepaper.html
#include "WM_Input_DevicesRAW.h"
#include "IInputDeviceModule.h"
#include "IInputDevice.h"

#include "WM_ControllerFunctionLib.h"
#include "WM_Settings.h"
#include "Xinput.h"
#include "WM_Device.h"
#include "WM_Device_HID.h"

#include <iostream>
#include <string>
//#include <SetupAPI.h>

#include "Windows/WindowsApplication.h"
#include "Framework/Application/SlateApplication.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "GenericPlatform/GenericPlatformInputDeviceMapper.h"
#include "GenericPlatform/GenericPlatformApplicationMisc.h"

//#include "EnhancedInputComponent.h"
//#include "EnhancedInputSubsystems.h"

//#include <dos.h>   // definitions for _disable, _enable
//#pragma intrinsic(_disable)
//#pragma intrinsic(_enable)

//#include <sstream>
//#pragma optimize( "", off )
DEFINE_LOG_CATEGORY_STATIC(LogWM_Input_DevicesRAW, Log, All);
#define X_PREFIX (FString)("IG_")


///h/ttps://docs.microsoft.com/en-us/windows/win32/devio/registering-for-device-notification
///h/ttps://stackoverflow.com/questions/706352/use-registerdevicenotification-for-all-usb-devices*/
WM_Input_DevicesRAW::WM_Input_DevicesRAW(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
	: WM_InputDevices(InMessageHandler), IWindowsInterface(), IXInputInterface()//, IDirectInputInterface()
{

	//	Dinput->EnumDevices(DI8DEVCLASS_GAMECTRL, , this, DIEDBSFL_ATTACHEDONLY);
	InputManager = UWM_ControllerFunctionLib::Get_WM_InputManager();
	if (!InputManager || !InputManager->IsValidLowLevel()) { return; }
	InputManager->PluginCORE = this;
	Log_Success("WM_InputManager Loaded");

	///////////////GENERIC MAPPINGS
	FDefaultDeviceMappings mappings;
	TArray<int32> tmp;

	mappings.DefaultAxisMappings.Add("A1", "30(0)");
	mappings.DefaultAxisMappings.Add("A2", "31(0)");
	mappings.DefaultAxisMappings.Add("A3", "32(0)");
	mappings.DefaultAxisMappings.Add("A4", "35(0)");
	mappings.DefaultAxisMappings.Add("A5", "33(0)");
	mappings.DefaultAxisMappings.Add("A6", "34(0)");
	mappings.DefaultAxisMappings.Add("S1", "36(0)");
	mappings.DefaultAxisMappings.Add("S2", "36(1)");
	mappings.DefaultAxisMappings.Add("D1", "37(0)");
	mappings.DefaultAxisMappings.Add("W1", "38(0)");
	mappings.DefaultAxisMappings.Add("R1", "BA(0)");
	mappings.DefaultAxisMappings.Add("T1", "BB(0)");
	mappings.DefaultAxisMappings.Add("RS1", "None");
	mappings.DefaultAxisMappings.Add("RS2", "None");
	mappings.DefaultAxisMappings.Add("RS3", "None");
	mappings.DefaultAxisMappings.Add("RS4", "None");
	mappings.DefaultAxisMappings.Add("RS5", "None");
	mappings.DefaultAxisMappings.Add("RS6", "None");
	mappings.DefaultAxisMappings.Add("RS7", "None");
	mappings.DefaultAxisMappings.Add("RS8", "None");
	mappings.DefaultAxisMappings.Add("RS9", "None");
	mappings.DefaultAxisMappings.Add("RS10", "None");
	mappings.DefaultAxisMappings.Add("RS11", "None");
	mappings.DefaultAxisMappings.Add("RS12", "None");
	tmp = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50 };
	mappings.ButtonMappingsAdd(tmp);
	InputManager->DefaultMappings.Add("GENERIC", mappings);

	///////////////XINPUT MAPPINGS
	mappings = FDefaultDeviceMappings();
	mappings.DefaultAxisMappings.Add("A1", "30(0)");
	mappings.DefaultAxisMappings.Add("A2", "31(0)");
	mappings.DefaultAxisMappings.Add("A3", "33(0)");
	mappings.DefaultAxisMappings.Add("A4", "34(0)");
	mappings.DefaultAxisMappings.Add("A5", "32(0)");
	mappings.DefaultAxisMappings.Add("A6", "35(0)");
	//tmp = { 3,1,2,4,5,6,0,0,7,8,9,10 }; //TODO 11,12   Ltrigger,, RTrigger
	tmp = { 3,1,2,4,5,6,11,12,7,8,9,10}; 
	mappings.ButtonMappingsAdd(tmp);
	InputManager->DefaultMappings.Add("XINPUT", mappings);


	/*const UWM_Settings* ManagerSettings = GetDefault<UWM_Settings>();
	if (ManagerSettings && ManagerSettings->IsValidLowLevel() && ManagerSettings->InitAPI_Manually) {

	}
	else {*/
	LoadHWNDTarget();
	HWND NextWindow = GetWindow(hwndTarget, GW_HWNDNEXT);
	HWND TopWindow = GetTopWindow(hwndTarget);
	UnregisterDevices(nullptr);
	UnregisterDevices(hwndTarget);
	UnregisterDevices(NextWindow);
	UnregisterDevices(TopWindow);
	RegisterDevices();

	//}
	///////////////////////////////////////////////////////////////////////////////
}

/*bool WM_Input_DevicesRAW::InitializeInputManager() {

}*/

#include <Dbt.h>
//#include <setupapi.h>
#include <initguid.h> 
#include <stdio.h>
#include <usbiodef.h>
//devguid.h,   GUID_DEVCLASS_USB  DEVICE_NOTIFY_ALL_INTERFACE_CLASSES 
bool WM_Input_DevicesRAW::WM_RegisterDeviceNotification() {

	/*DEV_BROADCAST_DEVICEINTERFACE NotificationFilter;
	ZeroMemory(&NotificationFilter, sizeof(NotificationFilter));

	NotificationFilter.dbcc_size = sizeof(NotificationFilter);
	NotificationFilter.dbcc_devicetype = DBT_DEVTYP_DEVICEINTERFACE; // DBT_DEVT
	NotificationFilter.dbcc_reserved = 0;

	NotificationFilter.dbcc_classguid = GUID_DEVINTERFACE_USB_DEVICE;
	//GetTopWindow(hwndtarget)
	HWND ha = hwndTarget;
	//HDEVNOTIFY hDevNotify = RegisterDeviceNotification(ha, &NotificationFilter, DEVICE_NOTIFY_SERVICE_HANDLE);
	HDEVNOTIFY hDevNotify = RegisterDeviceNotification(ha, &NotificationFilter, DEVICE_NOTIFY_WINDOW_HANDLE);*/

	/*
	DEV_BROADCAST_DEVICEINTERFACE NotificationFilter;
	ZeroMemory(&NotificationFilter, sizeof(NotificationFilter));

	NotificationFilter.dbcc_size = sizeof(NotificationFilter);
	NotificationFilter.dbcc_devicetype = DBT_DEVTYP_DEVICEINTERFACE; // DBT_DEVT
	NotificationFilter.dbcc_reserved = 0;
	NotificationFilter.dbcc_classguid = GUID_DEVINTERFACE_USB_DEVICE;
	//GetTopWindow(hwndtarget)
	HWND ha =  hwndTarget;
	//HDEVNOTIFY hDevNotify = RegisterDeviceNotification(ha, &NotificationFilter, DEVICE_NOTIFY_SERVICE_HANDLE);
	HDEVNOTIFY hDevNotify = RegisterDeviceNotification(ha, &NotificationFilter, DEVICE_NOTIFY_ALL_INTERFACE_CLASSES);
	*/


	DEV_BROADCAST_DEVICEINTERFACE NotificationFilter;
	ZeroMemory(&NotificationFilter, sizeof(NotificationFilter));
	NotificationFilter.dbcc_size = sizeof(DEV_BROADCAST_DEVICEINTERFACE);
	NotificationFilter.dbcc_devicetype = DBT_DEVTYP_DEVICEINTERFACE;
	// assume we want to be notified with USBSTOR
   // to get notified with all interface on XP or above
   // ORed 3rd param with DEVICE_NOTIFY_ALL_INTERFACE_CLASSES and dbcc_classguid will be ignored
	NotificationFilter.dbcc_classguid = GUID_DEVINTERFACE_USB_DEVICE;
	// HDEVNOTIFY hDevNotify = RegisterDeviceNotification(hwndTarget, &NotificationFilter, DEVICE_NOTIFY_ALL_INTERFACE_CLASSES);
	HDEVNOTIFY hDevNotify = RegisterDeviceNotification(hwndTarget, &NotificationFilter, DEVICE_NOTIFY_WINDOW_HANDLE);
	if (!hDevNotify) {
		Log_Error("CannotRegisterDeviceNotification");
		return false;
	}

	return true;
}
bool WM_Input_DevicesRAW::UnregisterDevices(HWND TargetHWND) {
	RAWINPUTDEVICE RAW_InputDevice;
	BOOL RESULT;
	//	RAW_InputDevice.hwndTarget = NULL;
	RAW_InputDevice.hwndTarget = TargetHWND;

	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x04;
	RAW_InputDevice.dwFlags = RIDEV_REMOVE;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));

	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x05;
	RAW_InputDevice.dwFlags = RIDEV_REMOVE;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));

	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x08;
	RAW_InputDevice.dwFlags = RIDEV_REMOVE;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));
	return true;
}


static BOOL CALLBACK enumWindowCallback(HWND hWnd, LPARAM lparam) {
	int length = GetWindowTextLength(hWnd);
	char* buffer = new char[length + 1];
	GetWindowText(hWnd, (LPWSTR)buffer, length + 1);
	std::string windowTitle(buffer);

	// List visible windows with a non-empty title
	if (IsWindowVisible(hWnd) && length != 0) {
		std::cout << hWnd << ":  " << windowTitle << std::endl;
	}
	return true;
}

/*HWND a_hWnd = (HWND)hParent;
HWND a_FirstChild = NULL;
a_FirstChild = ::GetWindow(a_hWnd, GW_CHILD);

if (a_FirstChild != NULL)
{

	HWND a_NextChild = NULL;
	do
	{
		a_NextChild = ::GetWindow(a_FirstChild, GW_HWNDNEXT);
		if (a_NextChild != NULL)
		{
			a_FirstChild = a_NextChild;
		}
	} while (a_NextChild != NULL);
}*/
BOOL CALLBACK FindTopmostWnd(HWND hwnd, LPARAM lParam)
{
	HWND* pHwnd = (HWND*)lParam;

	HWND myParent = hwnd;
	do
	{
		myParent = GetParent(myParent);
	} while (myParent && (myParent != *pHwnd));

	if (myParent != 0)
	{
		// If the window is a menu_worker window then use it's parent
		TCHAR szClassName[7];
		while (0 != GetClassNameW(hwnd, szClassName, 7)
			&& 0 != _tcsncmp(szClassName, TEXT("Dialog"), 6)
			&& 0 != _tcsncmp(szClassName, TEXT("Afx"), 3)
			)
		{
			// find the worker's parent
			hwnd = GetParent(hwnd);
		}

		*pHwnd = hwnd;

		return false;
	}

	return true;

	//HWND hTopmostWnd = hWnd;
	//EnumWindows(FindTopmostWnd, (LPARAM)&hTopmostWnd);
}
bool WM_Input_DevicesRAW::RegisterDevices() {


	LoadHWNDTarget();
	/*HWND hTopmostWnd = hwndTarget;
		EnumWindows(FindTopmostWnd, (LPARAM)&hTopmostWnd);*/
		//EnumWindows(enumWindowCallback, NULL);

	int32  numerrors = 0;

	/*if (!hwndTarget) {
		LoadHWNDTarget();
		Log_Error("WM_Input Manager system log -> HWND not loaded");
		DEVICES_REGISTERED = false;
		return false;
	}
	else {*/
	//hwndTarget = GetTopWindow(hwndTarget);

	UnregisterDevices(nullptr);
	UnregisterDevices(hwndTarget);
	WM_RegisterDeviceNotification();


	RAWINPUTDEVICE RAW_InputDevice;
	BOOL RESULT;

	// EnumWindows
	// HWND NextWindow = GetWindow(hwndTarget, GW_HWNDNEXT); //API function with GW_HWNDNEXT
	// HWND NextWindow = GetWindow(hwndTarget, GW_ENABLEDPOPUP);
	 //HWND NextWindow = GetWindow(hwndTarget, GW_HWNDPREV);
	HWND TopWindow = hwndTarget;
	SetActiveWindow(TopWindow);

	RAW_InputDevice.hwndTarget = TopWindow;
	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x04;
	RAW_InputDevice.dwFlags = RIDEV_DEVNOTIFY | RIDEV_INPUTSINK;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));
	if (!RESULT) {
		numerrors += 1;
	}
	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x05;
	RAW_InputDevice.dwFlags = RIDEV_DEVNOTIFY | RIDEV_INPUTSINK;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));
	if (!RESULT) {
		numerrors += 1;
	}
	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x08;
	RAW_InputDevice.dwFlags = RIDEV_DEVNOTIFY | RIDEV_INPUTSINK;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));
	if (!RESULT) {
		numerrors += 1;
	}

	///NOT IMPLEMENTED YET,,,, not sure if there will be some use of it,,, if YES contact me & I will do it

	//KEYB
	/*
	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x06;
	RAW_InputDevice.dwFlags = RIDEV_DEVNOTIFY;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));
	*/


	//mouse
/*	RAW_InputDevice.usUsagePage = 0x01;
	RAW_InputDevice.usUsage = 0x02;
	RAW_InputDevice.dwFlags = RIDEV_DEVNOTIFY;
	RESULT = RegisterRawInputDevices(&RAW_InputDevice, 1, sizeof(RAW_InputDevice));
	*/
	//HANDLE hPipe;



	/*HANDLE hPipe = CreateFile(TEXT("\\\\.\\pipe\\USB"),
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		0,
		NULL);
	UINT pipesize = 256;
	TCHAR pipename[256];
	GetNamedPipeClientComputerName(hPipe, pipename, pipesize);

	FString pipenamecom = TCHAR_TO_ANSI(pipename);
	Log_Success(pipenamecom);

	DWORD dwWritten;
	if (hPipe != INVALID_HANDLE_VALUE)
	{
		Log_Success("PIPEWORKS");
		WriteFile(hPipe,
			"Hello Pipe\n",
			12,   // = length of string + terminating '\0' !!!
			&dwWritten,
			NULL);
		Log_Success("PIPEEND");

		//CloseHandle(hPipe);
	}
	DisconnectNamedPipe(hPipe);*/

	if (numerrors == 0) {
		//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("DEVICES SUCESSFULLY REGISTERED"));
		Log_Success("WM_Input Manager system log -> DEVICES SUCESSFULLY REGISTERED");
		DEVICES_REGISTERED = true;
		InputManager->bDevicesRegistered = true;
		return true;
	}
	else {
		Log_Error("WM_Input Manager system log -> FAILED TO REGISTER SOME DEVICES");
		DEVICES_REGISTERED = false;
		InputManager->bDevicesRegistered = false;
		return false;
	}
	//}
		//WM_RegisterDeviceNotification();

}


void WM_Input_DevicesRAW::CheckPooledDevices()
{
	//STEAM tryed testing to register devices to different windows
	HWND NextWindow = GetWindow(hwndTarget, GW_HWNDNEXT); //API function with GW_HWNDNEXT
	HWND TopWindow = GetTopWindow(hwndTarget);
	UINT DeviceCountRegistered = 0;
	GetRegisteredRawInputDevices(nullptr, &DeviceCountRegistered, sizeof(RAWINPUTDEVICE));
	InputManager->NumWindows = (int32)DeviceCountRegistered;

	TArray<RAWINPUTDEVICELIST> DeviceList;
	UINT DeviceCount = 0;

	GetRawInputDeviceList(nullptr, &DeviceCount, sizeof(RAWINPUTDEVICELIST));
	if (DeviceCount == 0)
	{
		return;
	}

	DeviceList.AddUninitialized(DeviceCount);
	GetRawInputDeviceList(DeviceList.GetData(), &DeviceCount, sizeof(RAWINPUTDEVICELIST));
	InputManager->NumPoolingDevices = (int32)DeviceCount;


	TArray<HANDLE> ConnectedUniqueHandles;
	for (const RAWINPUTDEVICELIST& Device : DeviceList)
	{
		const LPARAM lParam = (LPARAM)Device.hDevice;
		const HANDLE uniqueHANDLE = Device.hDevice;
		ConnectedUniqueHandles.AddUnique(uniqueHANDLE);

		uint32 NameLen = 0;
		//check CONNECTION
		if (DevicesBy_UniqueHandle.Contains(uniqueHANDLE)) {
			//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Booom Sucess Found unique handle"));
		}
		else {
			if (!ProcessedPooledDevices.Contains(uniqueHANDLE)) {
				CreateUEDevice(uniqueHANDLE, lParam, 0);
				if (DevPluginDEBUG) {
					UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("POOLED device Created"));
				}
				ProcessedPooledDevices.AddUnique(uniqueHANDLE);
			}
		}
	}

	TMap<HANDLE, UWM_Device*> DevicesBy_UniqueHandleCopy;
	for (auto&Each : DevicesBy_UniqueHandle) {
		DevicesBy_UniqueHandleCopy.Add(Each.Key, Each.Value);
	}

	for (auto&Each : DevicesBy_UniqueHandleCopy) {
		//Each.Key
		if (ConnectedUniqueHandles.Contains(Each.Key)) {

		}
		else {
			if (ProcessedPooledDevices.Contains(Each.Key)) {
				RemoveUEDevice(Each.Key);
				if (DevPluginDEBUG) {
					UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("POOLED device Removed"));
				}
				ProcessedPooledDevices.Remove(Each.Key);
			}
		}
	}
}

void WM_Input_DevicesRAW::Tick(float DeltaTime) {
	//nosuper
}


void WM_Input_DevicesRAW::SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	MessageHandler = InMessageHandler;
}

///notusedYET
void WM_Input_DevicesRAW::OnDeviceConnected() {
	//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("foundNewDevice"));
}

void WM_Input_DevicesRAW::OnDeviceLost() {
	//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("deviceLost"));
}


int32 WM_Input_DevicesRAW::GetFreeXInputSlot() {

	for (int i = 0; i < 4; i++) {
		if (!InputManager->XInputDevices.Find(i)) {
			return i;
		}
	}
	Log_Error("nofree XInputSlot Slot");

	return -1;
}

int32 WM_Input_DevicesRAW::getFreeJoystickSlot() {

	for (int i = 0; i < 128; i++) {
		if (!InputManager->Joystick_DeviceList.Find(i)) {
			return i;
		}
	}
	Log_Error("nofree Joystick Slot");

	return -1;
}

int32 WM_Input_DevicesRAW::getFreeKeyboardSlot() {

	for (int i = 0; i < 128; i++) {
		if (!InputManager->Keyboard_DevicesList.Find(i)) {
			return i;
		}
	}
	Log_Error("nofree Keyboard Slot");

	return -1;
}


void WM_Input_DevicesRAW::CreateUEDevice(HANDLE uniqueHANDLE, const LPARAM lParam, const int32 Xi) {
	if (DevicesBy_UniqueHandle.Contains(uniqueHANDLE)) {
		return;
	}

	if (DevPluginDEBUG) {
		UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" device FOUND %d "), uniqueHANDLE);
	}

	bool SupportedDevice = false;
	UINT deviceNameLength = 256;
	TCHAR pDeviceName[256];
	FString deviceName;
	TArray<FString>ParsedDeviceName;
	UINT dwResult = GetRawInputDeviceInfo((HRAWINPUT)lParam, RIDI_DEVICENAME, &pDeviceName, &deviceNameLength);
	if (!dwResult) { Log_Error("CreateUEDevice -- > cant get RIDI_DEVICENAME  "); }
	else {
		deviceName = TCHAR_TO_ANSI(pDeviceName);
		//X//
		deviceName.ParseIntoArrayWS(ParsedDeviceName, TEXT("#"), true);
	}

	RID_DEVICE_INFO Raw_DeviceInfo = { 0 };
	UINT deviceInfoLength = sizeof(RID_DEVICE_INFO);
	FString dwString; //deviceTypeString
	dwResult = GetRawInputDeviceInfo((HRAWINPUT)lParam, RIDI_DEVICEINFO, &Raw_DeviceInfo, &deviceInfoLength);
	if (!dwResult) { Log_Error("CreateUEDevice -- > cant get RID_DEVICE_INFO "); }
	else {
		dwString = *dwTypeToString(Raw_DeviceInfo);
	}

	int32 DeviceSlot = INDEX_NONE;
	const EWM_DeviceType devicetype = getMyDeviceType(Raw_DeviceInfo);

	UWM_Device * device = nullptr;
	if (Raw_DeviceInfo.dwType == RIM_TYPEHID) {

		const FString vidhex = UWM_ControllerFunctionLib::DwordToHexString(Raw_DeviceInfo.hid.dwVendorId);
		const FString pidhex = UWM_ControllerFunctionLib::DwordToHexString(Raw_DeviceInfo.hid.dwProductId);
		const FString serialhex = UWM_ControllerFunctionLib::DwordToHexString(Raw_DeviceInfo.hid.dwVersionNumber);
		const FString VPID = vidhex + "&" + pidhex;
		const FString VID_PID_ = "VID_" + vidhex + "&" + "PID_" + pidhex;

		int32 ParserVersion = 2;
		if (InputManager->WM_SettingsRW->V2ParserDevices.Contains(VID_PID_)) {
			ParserVersion = 1;
		}

		///////////////////////////////////////////////////////////////////////////////////
		//FString SAVESTRING = manufacturerstring  +"-/-"+ productString +"-/-"+ FString::FromInt(Raw_DeviceInfo.hid.dwVendorId)  +"-"+ FString::FromInt(RawDeviceInfo.hid.dwProductId);
		//FString SAVESTRING = "VID_" + VendorHex + "&" + "PID_" + ProductHex + "&" + FString::FromInt(Raw_DeviceInfo.hid.dwVersionNumber);
		const FString SAVESTRING = ParsedDeviceName[1] + ParsedDeviceName[2] + "&" + FString::FromInt(Raw_DeviceInfo.hid.dwVersionNumber);
		if (devicetype == EWM_DeviceType::JoystickOrGamepad) {
			SupportedDevice = true;

			DeviceSlot = getFreeJoystickSlot(); ///make function to automatically assign to UE DeviceIndex
			UWM_HID_Joystick * gamepad = NewObject<UWM_HID_Joystick>(UWM_HID_Joystick::StaticClass());
			gamepad->AddToRoot(); //to stay in memory!!!
			DevicesBy_UniqueHandle.Add(uniqueHANDLE, gamepad);
			device = Cast<UWM_Device>(gamepad);

			gamepad->SAVESTRING = SAVESTRING; //for config
			gamepad->DeviceInfo.Usage = Raw_DeviceInfo.hid.usUsage;
			gamepad->DeviceInfo.UsagePage = Raw_DeviceInfo.hid.usUsagePage;
			gamepad->DeviceInfo.VID = Raw_DeviceInfo.hid.dwVendorId;
			gamepad->DeviceInfo.PID = Raw_DeviceInfo.hid.dwProductId;
			gamepad->DeviceInfo.Version = Raw_DeviceInfo.hid.dwVersionNumber;
			gamepad->DeviceInfo.VID_HEX = vidhex;
			gamepad->DeviceInfo.PID_HEX = pidhex;
			gamepad->DeviceInfo.Version_HEX = serialhex;
			gamepad->DeviceInfo.VPID_HEX = VPID;
			gamepad->DeviceInfo.VID_PID_ = VID_PID_;
			gamepad->DeviceInfo.ParserVersion = ParserVersion;

			Log_Success("--------------------------------------------------------------------");
			Log_Success(FString::Printf(TEXT("NEW Joystick! (handle = 0x%x)"), uniqueHANDLE));
			Log_Success("DeviceType = " + dwString);
			Log_Success("DeviceName = " + deviceName);
			Log_Success("SaveString = " + SAVESTRING);



			if (deviceName.Contains(X_PREFIX)) {
				/* This isn't a reliable way of getting the XInput user index, which can change with hotplugging, so note that it's a guess */
				FString X_I_DStr;
				ParsedDeviceName[1].Split(X_PREFIX, NULL, &X_I_DStr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
				int32 tXID = FCString::Strtoi(*X_I_DStr, NULL, 16)*0.5;
				if (tXID >= 0 && tXID < XUSER_MAX_COUNT) {
					gamepad->X_I_D = tXID;
				}

				gamepad->is_XInput = true;
				gamepad->is_XInputSlotGuess = true;
				Log_Success("Joystick uses XINPUT");
			}

			const DWORD k_ValveVendorId = 0x28DE;
			if (Raw_DeviceInfo.hid.dwVendorId == k_ValveVendorId) {
				gamepad->is_Steam = true;
				Log_Success("Joystick input from Steam");
			}

			Log_Success("--------------------------------------------------------------------");
			InputManager->Joystick_DeviceList.Add(DeviceSlot, gamepad);
			InputManager->HID_DeviceList.Add(DeviceSlot, gamepad);
			InputManager->NumFoundJoysticks_Debug += 1;
		}
		if (!SupportedDevice) {
			Log_Success("--------------------------------------------------------------------");
			Log_Success("Some Unsupported Device for plugin other than joystick! ");
			Log_Success(*dwString);
			Log_Success(*deviceName);
			Log_Success("--------------------------------------------------------------------");
		}

		
	}

	else if (Raw_DeviceInfo.dwType == RIM_TYPEKEYBOARD) {
		SupportedDevice = true;
		DeviceSlot = getFreeKeyboardSlot(); ///make functionto automatically assign to UE DeviceIndex
		UWM_Device_Keyboard * keyboard = NewObject<UWM_Device_Keyboard>(UWM_Device_Keyboard::StaticClass());
		keyboard->AddToRoot();
		DevicesBy_UniqueHandle.Add(uniqueHANDLE, keyboard);
		device = Cast<UWM_Device_Keyboard>(keyboard);

		Log_Success("--------------------------------------------------------------------");
		Log_Success("NEW Keyboard created! ");
		Log_Success(*dwString);
		Log_Success(*deviceName);
		Log_Success("--------------------------------------------------------------------");
	}

	else if (Raw_DeviceInfo.dwType == RIM_TYPEMOUSE) {
		SupportedDevice = true;
		DeviceSlot = getFreeKeyboardSlot(); ///make functionto automatically assign to UE DeviceIndex
		UWM_Device_Mouse * mouse = NewObject<UWM_Device_Mouse>(UWM_Device_Mouse::StaticClass());
		mouse->AddToRoot();
		DevicesBy_UniqueHandle.Add(uniqueHANDLE, mouse);
		device = Cast<UWM_Device_Mouse>(mouse);

		Log_Success("--------------------------------------------------------------------");
		Log_Success("NEW Mouse created! ");
		Log_Success(*dwString);
		Log_Success(*deviceName);
		Log_Success("--------------------------------------------------------------------");
	}

	else if (!SupportedDevice) {
		Log_Success("--------------------------------------------------------------------");
		Log_Success("Other Unsupported device ");
		Log_Success(*dwString);
		Log_Success(*deviceName);
		Log_Success("--------------------------------------------------------------------");
	}


	if (device && device->IsValidLowLevel()) {
		device->UniqueHandleString = FString::Printf(TEXT("0x%x"), uniqueHANDLE);
		device->DeviceType = devicetype;
		device->DeviceSlot = DeviceSlot;
		device->BasicDeviceInfo.DeviceType = Raw_DeviceInfo.dwType;
		device->BasicDeviceInfo.DeviceTypeString = dwString;
		device->BasicDeviceInfo.DeviceName = deviceName;

		for (int32 i = 0; i < ParsedDeviceName.Num(); i++) {
			if (i == 0) {
				device->BasicDeviceInfo.DN_A = ParsedDeviceName[i];
			}
			if (i == 1) {
				device->BasicDeviceInfo.DN_B = ParsedDeviceName[i];
			}
			if (i == 2) {
				device->BasicDeviceInfo.DN_C = ParsedDeviceName[i];
			}
			if (i == 3) {
				device->BasicDeviceInfo.DN_D = ParsedDeviceName[i];
			}

			//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("pDeviceInfo : %s "), *ParsedDeviceName[i]);
			//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("devname : %s "), *deviceName);

		}
		
		registerEnhancedDevice(device, InputManager->WM_SettingsRW->DefaultPlayerIndex_DeviceAssigment);
		device->BeginDevice();
		
	}

}


void  WM_Input_DevicesRAW::RemoveUEDevice(HANDLE uniqueHANDLE) {

	if (DevicesBy_UniqueHandle.Contains(uniqueHANDLE)) {
		UWM_Device* Device = *DevicesBy_UniqueHandle.Find(uniqueHANDLE);
		if (Device->IsValidLowLevel()) {
			
			if (InputManager->SelectedDevice == Device) {
				InputManager->SelectedDevice = nullptr;
			}

			if (Device->DeviceType == EWM_DeviceType::JoystickOrGamepad) {
				UWM_Device_HID* DeviceHID = Cast<UWM_Device_HID>(Device);
				InputManager->Joystick_DeviceList.Remove(Device->DeviceSlot);
				InputManager->HID_DeviceList.Remove(Device->DeviceSlot);

				if (InputManager->XInputDevices.FindKey(DeviceHID)) {
					int32 xindex = *InputManager->XInputDevices.FindKey(DeviceHID);
					InputManager->XInputDevices.Remove(xindex);
				}
				Reset_HIDDeviceEvents(DeviceHID);
				//ResetJoystickEventsForPlayerController(DeviceHID->ControllerAssigment);
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("removing HID : %d "), uniqueHANDLE);


			}

			else if (Device->DeviceType == EWM_DeviceType::Keyboard) {
				InputManager->Keyboard_DevicesList.Remove(Device->DeviceSlot);
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("removing KEYBOARD : %d "), uniqueHANDLE);

			}

			else if (Device->DeviceType == EWM_DeviceType::Mouse) {
				InputManager->Mouse_DeviceList.Remove(Device->DeviceSlot);
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("removing MOUSE : %d "), uniqueHANDLE);
			}

			Log_Success("--------------------------------------------------------------------");
			Log_Success("Removed Device");
			Log_Success(*Device->BasicDeviceInfo.DeviceTypeString);
			Log_Success(*Device->BasicDeviceInfo.DeviceName);
			Log_Success("--------------------------------------------------------------------");

			unregisterEnhancedDevice(Device, Device->ControllerAssigment);
			Device->RemoveFromRoot();
			Device->DestroyDevice();
			Device->ConditionalBeginDestroy();
			Device = nullptr;

			InputManager->GetSelectedDevice();
			//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("removing : %d "), uniqueHANDLE);
		}
		InputManager->OnNumDevicesChanged.Broadcast(0);
		DevicesBy_UniqueHandle.Remove(uniqueHANDLE);
	}
}


void WM_Input_DevicesRAW::SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) {
	//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("is calling set channel value -- >   "));

}

void WM_Input_DevicesRAW::SetChannelValues(int32 ControllerId, const FForceFeedbackValues& Values) {
	//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("is calling set channel values -- >   "));	


}
void WM_Input_DevicesRAW::SetForceFeedbackForPlayerID(int32 PlayerControllerID, float AllMotorsStrength, float LeftMotorStrength, float RightMotorStrength) {

	LeftMotorStrength = fmax(LeftMotorStrength, AllMotorsStrength);
	RightMotorStrength = fmax(RightMotorStrength, AllMotorsStrength);
	for (auto&vibrationController : InputManager->Joystick_DeviceList) {
		UWM_HID_Joystick * joystick = vibrationController.Value;
		if (joystick) {
			if (joystick->is_XInput && joystick->X_I_D >= 0) {
				DWORD xResult;
				XINPUT_STATE state;
				xResult = Xinput_Dll_Ref.XInputGetState(joystick->X_I_D, &state);
				if (xResult == ERROR_SUCCESS) {
					XINPUT_VIBRATION vibration;
					ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));

					if (joystick->ControllerAssigment == PlayerControllerID) {
						vibration.wLeftMotorSpeed = LeftMotorStrength * 65000.0f;
						vibration.wRightMotorSpeed = RightMotorStrength * 65000.0f;
						//	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("vibrating controller - > %s "), *FString::FromInt(joystick->ControllerAssigment));
					}
					Xinput_Dll_Ref.XInputSetState((DWORD)joystick->X_I_D, &vibration);
				}
			}
			else {
			}
		}
	}
}

/*UINT GetRegisteredRawInputDevices(
	PRAWINPUTDEVICE pRawInputDevices,
	PUINT           puiNumDevices,
	UINT            cbSize
);*/
//STEAM FIX


bool WM_Input_DevicesRAW::ProcessMessage(const HWND hwnd, const uint32 Msg, const WPARAM wParam, const LPARAM lParam, int32& OutResult)
{
	HANDLE uniqueHANDLE;
	UINT dwSize = 0;
	bool bWM_Sucess = false;

	if (InputManager->IsValidLowLevel()) {
		InputManager->Tick();
		InputManager->NumMessageAttempts += 1;
		if (UsePOOLINGMethod) {
			if (PoolingTimer <= 0) {
				CheckPooledDevices(); //STEAM
				PoolingTimer = PoolingTimerSize;
			}
			else {
				PoolingTimer -= 1;
			}
		}

	}
	else {
		Log_Error("ERROR : WM_InputManager not LOADED ");
		return true;
	}



	/*	Log_Success("DBT_DeviceArrival");
		uniqueHANDLE = reinterpret_cast<HANDLE>(lParam);
		CreateUEDevice(uniqueHANDLE, lParam, 0);
		break;
	case DBT_DEVICEREMOVECOMPLETE:
		Log_Success("DBT_DeviceRemoval");

		break;
	case DBT_DEVNODES_CHANGED:
		Log_Success("DBT_DevNodesChanged");

		break;
	default:

		break;
	}*/

	if (!DEVICES_REGISTERED) {
		Log_Error("TRYING TO PREREGISTER DEVICES");
		RegisterDevices();
	}

	//DBT method can recognize devices with STEAM overlay
	if (DBT_DEVICEARRIVAL == wParam || DBT_DEVICEREMOVECOMPLETE == wParam) {
		//switch (wParam) {
		//case DBT_DEVICEARRIVAL:
		PDEV_BROADCAST_HDR pHdr = (PDEV_BROADCAST_HDR)lParam;
		switch (pHdr->dbch_devicetype) {
		case DBT_DEVTYP_DEVICEINTERFACE: {
			PDEV_BROADCAST_DEVICEINTERFACE pDevInf = (PDEV_BROADCAST_DEVICEINTERFACE)pHdr;
			// do something...
			/*FString deviceName = TCHAR_TO_ANSI(pDevInf->dbcc_name);
			Log_Success("DBT_DEVTYP_DEVICEINTERFACE  receive device change");
			Log_Success(*deviceName);*/


			break;
		}
		case DBT_DEVTYP_HANDLE: {
			PDEV_BROADCAST_HANDLE pDevHnd = (PDEV_BROADCAST_HANDLE)pHdr;
			// do something...
			//pDevHnd->dbch_handle
			Log_Success("PDEV_BROADCAST_HANDLE");
			break;
		}
		case DBT_DEVTYP_OEM: {
			PDEV_BROADCAST_OEM pDevOem = (PDEV_BROADCAST_OEM)pHdr;
			// do something...
			break;
		}
		case DBT_DEVTYP_PORT: {
			PDEV_BROADCAST_PORT pDevPort = (PDEV_BROADCAST_PORT)pHdr;
			// do something...
			break;
		}
		case DBT_DEVTYP_VOLUME: {
			PDEV_BROADCAST_VOLUME pDevVolume = (PDEV_BROADCAST_VOLUME)pHdr;
			// do something...
			break;
		}
		}
	}
	switch (Msg) {
	case WM_CREATE: {
	}
	case WM_INPUT_DEVICE_CHANGE: {
		//Log_Success( "WM_DEVICE_CHANGE");
		//STEAM
		if (!UsePOOLINGMethod) {
			uniqueHANDLE = reinterpret_cast<HANDLE>(lParam);

			if (wParam == GIDC_ARRIVAL) {
				Log_Success("DEVICE_CHANGE _ Arrival");
				CreateUEDevice(uniqueHANDLE, lParam, 0);

				//DXversion test
				//EnumerateDevices();
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" DXGAMECONTROLLERS %d "), GameControllers.Num());
			}
			else if (wParam == GIDC_REMOVAL) {
				Log_Success("DEVICE_CHANGE _ Removal");
				RemoveUEDevice(uniqueHANDLE);

			}
		}

		//GetRawInputDeviceInfoW()
		bWM_Sucess = true;
	}

	case WM_INPUT: {

		uniqueHANDLE = reinterpret_cast<HANDLE>(lParam);
		RAWINPUT *RAW;
		GetRawInputData((HRAWINPUT)lParam, RID_INPUT, NULL, &dwSize, sizeof(RAWINPUTHEADER));
		uint32 rsize = dwSize;
		RAW = (RAWINPUT*)FMemory_Alloca(rsize);
		if (GetRawInputData((HRAWINPUT)lParam, RID_INPUT, RAW, &rsize, sizeof(RAWINPUTHEADER)) != dwSize) {
			return false;
		}
		HANDLE DeviceHeader = RAW->header.hDevice;

		uniqueHANDLE = RAW->header.hDevice;
		if (!DevicesBy_UniqueHandle.Contains(uniqueHANDLE)) {
			return bWM_Sucess;
		}

		UWM_Device* Device = *DevicesBy_UniqueHandle.Find(uniqueHANDLE);
		if (!Device->IsValidLowLevel()) {
			return bWM_Sucess;
		}

		if (RAW->header.dwType == RIM_TYPEHID)
		{
			UWM_Device_HID* HIDDevice = Cast<UWM_Device_HID>(Device);

			//get manufacturer/product/serial 
			if (!Device->dataInitialized) {
				FString productString = "";
				FString manufacturerstring = "";
				FString serialString = "";

				if (HIDDevice->is_Steam) {
					manufacturerstring = "Valve Corporation";
					productString = "Steam Configured Controller";
				}
				else {
					UINT infoBufferSize = 256;
					TCHAR ridiDeviceName[256];
					UINT dwResult = GetRawInputDeviceInfo(RAW->header.hDevice, RIDI_DEVICENAME, &ridiDeviceName, &infoBufferSize);
					FString deviceName = TCHAR_TO_ANSI(ridiDeviceName);
					//Log_Success("-----> Getting Device Name and Manufacturer String");
					//Log_Success(deviceName);
					HANDLE HIDHandle = CreateFile(LPCWSTR(ridiDeviceName), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

					wchar_t ProductName[256];

					if (HID_Dll_Ref.HidD_GetProductString((HRAWINPUT)HIDHandle, &ProductName, sizeof(ProductName))) {
						productString = TCHAR_TO_ANSI(ProductName);
						productString.TrimStartAndEndInline();
					}

					wchar_t ManufacturerName[256];
					if (HID_Dll_Ref.HidD_GetManufacturerString((HRAWINPUT)HIDHandle, &ManufacturerName, sizeof(ManufacturerName))) {
						manufacturerstring = TCHAR_TO_ANSI(ManufacturerName);
						manufacturerstring.TrimStartAndEndInline();
					}
					wchar_t SerialName[256];
					if (HID_Dll_Ref.HidD_GetSerialNumberString((HRAWINPUT)HIDHandle, &SerialName, sizeof(SerialName))) {
						serialString = TCHAR_TO_ANSI(SerialName);
					}
					CloseHandle(HIDHandle);
				}

				if (HIDDevice->IsValidLowLevel()) {
					HIDDevice->DeviceInfo.ManufacturerString = manufacturerstring;
					HIDDevice->DeviceInfo.ProductString = productString;
					HIDDevice->DeviceInfo.SerialNumberString = serialString;
					Device->dataInitialized = true;
				}
			}

			if (Device->Enabled) {

				PHIDP_PREPARSED_DATA PREPARSED_DATA = nullptr;
				uint32 RESULT;
				uint32 bufferSize = 0;
				RESULT = GetRawInputDeviceInfo(RAW->header.hDevice, RIDI_PREPARSEDDATA, nullptr, &bufferSize);
				if (RESULT != (uint32)(-1)) {
					PREPARSED_DATA = (PHIDP_PREPARSED_DATA)FMemory_Alloca(bufferSize);
					RESULT = GetRawInputDeviceInfo(RAW->header.hDevice, RIDI_PREPARSEDDATA, PREPARSED_DATA, &bufferSize);
				}
				if (RESULT != (uint32)(-1)) {
					HIDP_CAPS Caps;
					RESULT = HID_Dll_Ref.HidP_GetCaps(PREPARSED_DATA, &Caps);
					if (RESULT == HIDP_STATUS_SUCCESS)
					{

						//expand HID TREE 
						///for Jo HID
						if (Device->GetClass() == UWM_HID_Joystick::StaticClass()) {
							UWM_HID_Joystick* JoystickDevice = Cast<UWM_HID_Joystick>(Device);
							if (JoystickDevice->IsValidLowLevel()) {
								const int32 ParserVersion = JoystickDevice->DeviceInfo.ParserVersion;
								if (ParserVersion == 1) {
									ParseHID(JoystickDevice, RAW, PREPARSED_DATA, Caps);
								}
								else if (ParserVersion == 2) {
									ParseHID_V2(JoystickDevice, RAW, PREPARSED_DATA, Caps);
								}

							}

						}

						//XINPUT

						//...

						//...
					}
					else {
						InputManager->DEBUG.Broadcast("HidP_GetCaps ", HID_Dll_Ref.HIDP_STATUS_ToString(RESULT));
					}
					HID_Dll_Ref.HidD_FreePreparsedData(PREPARSED_DATA);
				}
			}
		}

		else if (RAW->header.dwType == RIM_TYPEKEYBOARD) {
			//DevPluginDEBUG = true;
			UWM_Device_Keyboard* Keyboard = Cast<UWM_Device_Keyboard>(Device);
			switch (RAW->data.keyboard.Message)
			{
			case WM_SYSKEYDOWN:

				break;
			case WM_SYSCHAR:

				break;
			case WM_CHAR:

				break;
			case WM_KEYDOWN:
				if (DevPluginDEBUG) {
					UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("onWM_Input --> KEYDOWN  %x"), 0);
					UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("onWM_Input --> want parse keyboard  %x"), 0);
					UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" hDeviceHandle %d "), uniqueHANDLE);
					//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" Vkey %d "), RAW->data.keyboard.VKey);

					FString Keyhex;
					ByteToHex((byte)RAW->data.keyboard.VKey, Keyhex);
					if (RAW->data.keyboard.VKey == 0x0D) {
						MessageHandler->OnControllerButtonPressed("HIDKeyboard_Enter", 0, false);

					}
					UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" Vkey %s "), *Keyhex);
					/*if (Keyhex == "0D") {
						MessageHandler->OnControllerButtonPressed("HIDKeyboard_Enter", 0, false);
					}*/

					//MessageHandler->OnControllerButtonReleased

					//FString aa = (lParam >> 30) & 1;

				}
				break;

			case WM_KEYUP:

				if (DevPluginDEBUG) {
					if (RAW->data.keyboard.VKey == 0x0D) {
						MessageHandler->OnControllerButtonReleased("HIDKeyboard_Enter", 0, false);
					}
					UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("onWM_Input --> KEY UP  %x"), 0);
				}
				break;
			}
		}
		else if (RAW->header.dwType == RIM_TYPEMOUSE) {
			UWM_Device_Mouse* Mouse = Cast<UWM_Device_Mouse>(Device);
			//RAW->data.mouse
			/*
			switch (RAW->data.mouse.usButtonFlags) {
			case RI_MOUSE_LEFT_BUTTON_DOWN: {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("RI_MOUSE_LEFT_BUTTON_DOWN  %s"), *FString::FromInt(raw->data.mouse.ulRawButtons));
			break;
			}
			case RI_MOUSE_LEFT_BUTTON_UP: {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("RI_MOUSE_LEFT_BUTTON_UP  %s"), *FString::FromInt(raw->data.mouse.ulRawButtons));
			break;
			}
			case RI_MOUSE_MIDDLE_BUTTON_DOWN: {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("RI_MOUSE_MIDDLE_BUTTON_DOWN  %s"), *FString::FromInt(raw->data.mouse.ulRawButtons));
			break;
			}
			case RI_MOUSE_MIDDLE_BUTTON_UP: {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("RI_MOUSE_MIDDLE_BUTTON_UP  %s"), *FString::FromInt(raw->data.mouse.ulRawButtons));
			break;
			}
			case RI_MOUSE_RIGHT_BUTTON_DOWN: {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("RI_MOUSE_RIGHT_BUTTON_DOWN  %s"), *FString::FromInt(raw->data.mouse.ulRawButtons));
			break;
			}
			case RI_MOUSE_RIGHT_BUTTON_UP: {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("RI_MOUSE_RIGHT_BUTTON_UP  %s"), *FString::FromInt(raw->data.mouse.ulRawButtons));
			break;
			}
			default:
			break;
			}*/
			/*
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse lLastX  %s"), *FString::FromInt(RAW->data.mouse.lLastX));
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse lLastY  %s"), *FString::FromInt(RAW->data.mouse.lLastY));
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse ulButtons  %s"), *FString::FromInt(RAW->data.mouse.ulButtons));
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse ulExtraInformation  %s"), *FString::FromInt(RAW->data.mouse.ulExtraInformation));
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse ulRawButtons  %s"), *FString::FromInt(RAW->data.mouse.ulRawButtons));
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse usButtonData  %s"), *FString::FromInt(RAW->data.mouse.usButtonData));
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse usButtonFlags  %s"), *FString::FromInt(RAW->data.mouse.usButtonFlags));
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("Mouse usFlags  %s"), *FString::FromInt(RAW->data.mouse.usFlags));
			*/
		}
		//DefRawInputProc(&(PRAWINPUT)RAW, rsize, sizeof(RAWINPUTHEADER));
		//DefRawInputProc((PRAWINPUT*)RAW, rsize, sizeof(RAWINPUTHEADER));

		if (Device != NULL) {
			FInputDeviceId uid = FInputDeviceId::CreateFromInternalId(Device->GetUniqueID() + 1000);
			FPlatformUserId userID = FPlatformUserId::CreateFromInternalId(0);
			IPlatformInputDeviceMapper::Get().Internal_MapInputDeviceToUser(uid, userID, EInputDeviceConnectionState::Connected);
		}
	}

	}
	return bWM_Sucess;
}


FString WM_Input_DevicesRAW::dwTypeToString(const RID_DEVICE_INFO& DeviceInfo)
{
	FString result = "";
	switch (DeviceInfo.dwType)
	{
	case RIM_TYPEHID:
		result = "UnsupportedHID";
		if (DeviceInfo.hid.usUsagePage == 0x01 && DeviceInfo.hid.usUsage == 0x04) {
			result = "JOYSTICK";
		}
		if (DeviceInfo.hid.usUsagePage == 0x01 && DeviceInfo.hid.usUsage == 0x05) {
			result = "GAMEPAD";
		}
		break;
	case RIM_TYPEKEYBOARD:
		result = "KEYBOARD";
		break;

	case RIM_TYPEMOUSE:
		result = "MOUSE";
		break;
	}
	return result;
}

EWM_DeviceType WM_Input_DevicesRAW::getMyDeviceType(const RID_DEVICE_INFO& DeviceInfo)
{

	EWM_DeviceType result = EWM_DeviceType::No_Device;
	//FString result = "";

	switch (DeviceInfo.dwType)
	{
	case RIM_TYPEHID:

		if (DeviceInfo.hid.usUsagePage == 0x01 && DeviceInfo.hid.usUsage == 0x04) {
			result = EWM_DeviceType::JoystickOrGamepad;
		}
		if (DeviceInfo.hid.usUsagePage == 0x01 && DeviceInfo.hid.usUsage == 0x05) {
			result = EWM_DeviceType::JoystickOrGamepad;
		}

		break;
	case RIM_TYPEKEYBOARD:

		result = EWM_DeviceType::Keyboard;
		break;

	case RIM_TYPEMOUSE:
		result = EWM_DeviceType::Mouse;
		break;

	}

	return result;
}


void WM_Input_DevicesRAW::WriteForceFeedbackData()
{
	//inprogress

	/*uint8_t buf[32];
	ULONG bfzie = sizeof(buf);
	memset(buf, 0, bfzie);
	buf[0] = 0x01;
	ULONG bytesrecieved;

	if (ReadFile(HIDHandle, buf, bfzie, &bytesrecieved, NULL)) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("INPUT BUFFER RETRIEVED"), 0);
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("sizeofbuf - > %s "), *FString::FromInt(sizeof(buf)));
	for (int32 i = 0; i < sizeof(buf); i++) {
	FString logtext = " buf: " + FString::FromInt(i) + " ==  " + FString::FromInt(buf[i]);
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("bfr - > %s "), *logtext);
	}

	}
	buf[0] = 0x04;
	buf[1] = 127;
	buf[2] = 127;
	buf[3] = 255;
	buf[4] = 127;
	buf[5] = 127;
	buf[6] = 15;
	buf[7] = 0;
	buf[8] = 208;
	//buf[6] = 255;
	//buf[7] = 255;
	//buf[8] = 255;
	ULONG byteswritten;
	if (WriteFile(HIDHandle, buf, sizeof(buf), &byteswritten, NULL)) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("INPUT BUFFER WRITTEN"), 0);
	}*/




	/*ULONG numbuffers = 0;
	if (HID_Dll_Ref.HidD_GetNumInputBuffers(HIDHandle, &numbuffers))
	{
	   UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("numbuffers - > %s "), *FString::FromInt(numbuffers));
	}
	if (HID_Dll_Ref.HidD_GetInputReport(HIDHandle, buf , bfzie)) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("INPUT BUFFER RETRIEVED"), 0);
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("sizeofbuf - > %s "), *FString::FromInt(sizeof(buf)) );
	for (int32 i = 0; i < sizeof(buf); i++) {
	FString logtext = " buf: " + FString::FromInt(i) + " ==  " + FString::FromInt(buf[i]);
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("bfr - > %s "), *logtext);
	}
	//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("buff0 - > %s "), *FString::FromInt(buf[0]) );
	//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("buff1 - > %s "), *FString::FromInt(buf[1]) );
	};
	if (HID_Dll_Ref.HidD_SetOutputReport(HIDHandle , buf , sizeof(buf))) {
	buf[2] = 255;
	buf[3] = 255;
	buf[4] = 255;
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("INPUT BUFFER WRITTENBACK"), 0);
	}*/

	/*uint8_t buf[32];
	memset(buf, 0, sizeof(buf));
	buf[0] = 0x05;
	buf[1] = 0x01;
	buf[2] = 255;
	buf[3] = 255;
	buf[4] = 255;
	buf[5] = 255;
	buf[6] = 255;
	buf[7] = 255;
	//buf[8] = 255;
	DWORD byteswritten;
	WriteFile(HIDHandle, buf, sizeof(buf), &byteswritten, NULL);
	HID_Dll_Ref.HidD_SetOutputReport(HIDHandle, buf, sizeof(buf));*/
}


//////////INPUTS
//#if 0
void WM_Input_DevicesRAW::ParseHID(UWM_Device_HID * HID_Device, const RAWINPUT* RAW_, const PHIDP_PREPARSED_DATA PREPARSEDDATA_, const HIDP_CAPS& CAPS_)
{
	if (!HID_Device->IsValidLowLevel()) { return; }
	HID_Device->OnBeginParseData();
	HID_Device->setLastButtonsData();
	if (!InputManager->IsPlaying) { return; }; 	//disable inputs in editor

	const uint16 isNONZERO_Type = 1;
	int32  HIDP_RESULT;
	uint32 MEM_AllocSize = 0;
	uint16 NumberOfCaps = 0;
	USAGE U_Page = 0;
	USAGE U_Min = 0;
	USAGE U_Max = 0;

	bool bButtonsAreValid = false;
	//////////////////////////////////////////////////////////////////////////////////////////////
	NumberOfCaps = CAPS_.NumberInputButtonCaps;

	MEM_AllocSize = sizeof(HIDP_BUTTON_CAPS) * CAPS_.NumberInputButtonCaps;
	HIDP_BUTTON_CAPS* ButtonCaps = (HIDP_BUTTON_CAPS*)FMemory_Alloca(MEM_AllocSize);
	HIDP_RESULT = HID_Dll_Ref.HidP_GetButtonCaps(HidP_Input, ButtonCaps, &NumberOfCaps, PREPARSEDDATA_);
	//FMemory::Memzero(ButtonCaps, MEM_AllocSize);

	//////////////////////////////////////////////////////////////////////////////////////////////
	if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetButtonCaps -->"); }
	else
	{
		U_Page = ButtonCaps->UsagePage;
		U_Min = ButtonCaps->Range.UsageMin;
		U_Max = ButtonCaps->Range.UsageMax;
		/////////////////////////////////////////////////////////////////////////////////////////////
		uint32 UsageLength = U_Max - U_Min + 1;
		const uint16 NumButtons = UsageLength;
		MEM_AllocSize = UsageLength * sizeof(uint16);
		uint16* UsageList = (uint16*)FMemory_Alloca(MEM_AllocSize); FMemory::Memzero(UsageList, MEM_AllocSize); //ushort
		HIDP_RESULT = HID_Dll_Ref.HidP_GetUsages(HidP_Input, U_Page, 0, UsageList, &UsageLength, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
		/////////////////////////////////////////////////////////////////////////////////////////////
		if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetUsages -->"); }
		else
		{
			bButtonsAreValid = true;
			if (!HID_Device->RawDataWasInitialized) {
				for (uint16 i = 0; i < NumButtons; i++) {
					const FString BindCode = "BTN-" + FString::FromInt(i + 1);  //removed NONZERO
					HID_Device->Button_DHP.Add(BindCode, i + isNONZERO_Type);
					HID_Device->ButtonsData[i + isNONZERO_Type].ButtonBindingCode = BindCode;
				}
			}
			for (uint16 HID_PressedButton = 0; HID_PressedButton < UsageLength; ++HID_PressedButton)
			{
				const uint16 ButtonIndex = UsageList[HID_PressedButton] - U_Min + isNONZERO_Type; ///+1 FOR NONZERO
				if (ButtonIndex < HID_Device->ButtonsData.Num())
				{
					HID_Device->ButtonsData[ButtonIndex].bIsPressed = true;
					if (HID_Device->FirstPressedRawKey == -1) {
						HID_Device->FirstPressedRawKey = ButtonIndex;
					}
				}
			}
		}
	}
	uint16 axisN = 0;
	bool bAxesAreValid = false;
	int32 numActiveAxes = 0;
	int32 numActiveDpadAxes = 0;
	////////////////////////////////////////////////////////////////////////////////////////
	NumberOfCaps = CAPS_.NumberInputValueCaps;

	MEM_AllocSize = NumberOfCaps * sizeof(HIDP_VALUE_CAPS);
	HIDP_VALUE_CAPS* ValueCaps = (HIDP_VALUE_CAPS*)FMemory_Alloca(MEM_AllocSize);
	FMemory::Memzero(ValueCaps, MEM_AllocSize); //ushort
	HIDP_RESULT = HID_Dll_Ref.HidP_GetValueCaps(HidP_Input, ValueCaps, &NumberOfCaps, PREPARSEDDATA_);
	////////////////////////////////////////////////////////////////////////////////////////
	if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetValueCaps -->"); }
	else
	{
		//	const UEnum* ACTEnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EWM_AxisCodeTable"), true);
			//FString ACTName = "";
		bAxesAreValid = true;
		HID_Device->Axis_AID.Empty();
		for (uint16 VCap_Index = 0; VCap_Index < NumberOfCaps; ++VCap_Index)
		{
			const int32 A_IDX = VCap_Index + isNONZERO_Type;
			//FWM_HID_AxisData& AxisData = HID_Device->AxisData[VCap_Index + isNONZERO_Type];
			//U_Page = VCap_Index == 0 ? HID_Device->DeviceInfo.UsagePage : ValueCaps[VCap_Index].UsagePage; //SOLVED
			U_Page = ValueCaps[VCap_Index].UsagePage;
			U_Min = ValueCaps[VCap_Index].Range.UsageMin;
			U_Max = ValueCaps[VCap_Index].Range.UsageMax;
			if (U_Min < 0x30) continue;
			if (!HID_Device->AxisData[A_IDX].Initialized) {
				HID_Device->AxisData[A_IDX].UsageMin = U_Min;
				HID_Device->AxisData[A_IDX].LogicalMin = UWM_ControllerFunctionLib::CovnertToBitSize(ValueCaps[VCap_Index].LogicalMin, ValueCaps[VCap_Index].BitSize, true);
				HID_Device->AxisData[A_IDX].LogicalMax = UWM_ControllerFunctionLib::CovnertToBitSize(ValueCaps[VCap_Index].LogicalMax, ValueCaps[VCap_Index].BitSize, true);
				HID_Device->AxisData[A_IDX].axisEnum = EWM_AxisCodeTable(U_Min);
				HID_Device->Axis_AID.Add(U_Min, HID_Device->Axis_AID.Contains(U_Min) ? 1 + int32(HID_Device->Axis_AID[U_Min]) : 0);
				const int32 instance = int32(HID_Device->Axis_AID[U_Min]);
				HID_Device->AxisData[A_IDX].instance = instance;

				FString hex;
				ByteToHex(U_Min, hex);
				HID_Device->AxisData[A_IDX].axisHEX = hex;
				HID_Device->AxisData[A_IDX].MapTarget = hex + "(" + FString::FromInt(instance) + ")";
				HID_Device->AxisData[A_IDX].InitializeRange();
				HID_Device->AxisData[A_IDX].Initialized = true;
			}

			/*	int32 ScaledValue;
				HID_Dll_Ref.HidP_GetScaledUsageValue(HidP_Input, U_Page, 0, U_Min, &ScaledValue, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
				UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("lmax - > %s"), *FString::FromInt(ScaledValue));*/
				//FString log = "HidP_GetUsageValue --> " + ("UP : " + FString::FromInt(U_Page)) + ("Umin : " + FString::FromInt(U_Min) + "Map : " + AxisData.MapTarget) + "Map : " + FString::FromInt(ValueCaps[VCap_Index].Range.UsageMax);
				//InputManager->DEBUG.Broadcast(FString::FromInt(VCap_Index), log);
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" - > %s"), *log);
			uint32 Value;
			HIDP_RESULT = HID_Dll_Ref.HidP_GetUsageValue(HidP_Input, U_Page, 0, U_Min, &Value, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
			if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetUsageValue --> " + ("UP:" + FString::FromInt(U_Page)) + ("Umin:" + FString::FromInt(U_Min)) + "Map: " + HID_Device->AxisData[A_IDX].MapTarget); }
			else
			{
				axisN++;
				HID_Device->AxisData[A_IDX].LastValue = HID_Device->AxisData[A_IDX].RawValue;
				HID_Device->AxisData[A_IDX].RawValue = (LONG)Value;
				//FString poi = UEnum(EWM_AxisCodeTable(0x33)).GetEnumNameStringByValue(0x33); 
				HID_Device->AxisData[A_IDX].axisValue = HID_Device->AxisData[A_IDX].GetValueWithConfig(HID_Device->HID_CONFIG.AxisConfigurations[VCap_Index + isNONZERO_Type], true);

				if (U_Min != 0x39) {
					numActiveAxes++;
					//ACTName = ACTEnumPtr->GetNameStringByValue(U_Min);
					//const FString BCode = ACTName + "-" + AxisData.MapTarget;
					//HID_Device->Axis_DHP.Add(BCode, VCap_Index + isNONZERO_Type);
					const FString BCode = "Axis-" + HID_Device->AxisData[A_IDX].MapTarget;
					HID_Device->Axis_DHP.Add(BCode, VCap_Index + isNONZERO_Type);
					//JoystickDevice->Axis_DHP.Add(BCode, numActiveAxes);
					HID_Device->AxisData[A_IDX].AxisBindingCode = BCode;
				}

				else {
					numActiveDpadAxes++;
					const FString BCode = "HAT-" + HID_Device->AxisData[A_IDX].MapTarget;
					const int32 dpadInstance = HID_Device->AxisData[A_IDX].instance + isNONZERO_Type;
					HID_Device->DPAD_DHP.Add(BCode, dpadInstance);
					//JoystickDevice->DPAD_DHP.Add(BCode, numActiveDpadAxes);
					HID_Device->AxisData[A_IDX].AxisBindingCode = BCode;
					HID_Device->DPADData[dpadInstance].AxisData = HID_Device->AxisData[A_IDX];
					HID_Device->DPADData[dpadInstance].Value = (float)Value;
					HID_Device->DPADData[dpadInstance].GetDpadValues();
				}

			}
		}

		if (HID_Device->is_XInput && Xinput_Dll_Ref.LOADED) {
			if (HID_Device->X_I_D < 0) {
				TArray<ButtonMapping> ButtonMappings;
				ButtonMapping BMapping;
				BMapping.StartIndex = 0;
				BMapping.U_Page = ButtonCaps->UsagePage;
				BMapping.U_Min = ButtonCaps->Range.UsageMin;
				BMapping.U_Max = ButtonCaps->Range.UsageMax;
				ButtonMappings.Add(BMapping);
				DetectXInputSlot(HID_Device, ButtonMappings);

			}

			if (HID_Device->X_I_D >= 0) {
				DWORD xResult;
				XINPUT_STATE state;
				xResult = Xinput_Dll_Ref.XInputGetState(HID_Device->X_I_D, &state);

				if (xResult == ERROR_SUCCESS) {
					FString AxisString = "";
					int32 A_IDX = 0;
					for (int8 i = 0; i < 2; i++) {
						if (i == 0) {
							axisN++;
							U_Min = 0x32;
							AxisString = "Axis-32(0)";
						}
						if (i == 1) {
							axisN++;
							U_Min = 0x35;
							AxisString = "Axis-35(0)";
						}
						if (i > 1) {
							continue;
						}
						A_IDX = HID_Device->Axis_DHP.Find(AxisString) ? HID_Device->Axis_DHP[AxisString] : axisN + 1 + isNONZERO_Type;
						if (!HID_Device->is_XInputInitialized) {
							//FWM_HID_AxisData& AxisTrigger = HID_Device->AxisData[axisindex];
							//AxisTrigger = HID_Device->AxisData[axisindex];
							FString hex = "";
							ByteToHex(U_Min, hex);
							HID_Device->AxisData[A_IDX].LogicalMin = (USHORT)0;   ///fixed swap with min max
							HID_Device->AxisData[A_IDX].LogicalMax = (USHORT)255;
							HID_Device->AxisData[A_IDX].UsageMin = U_Min;
							HID_Device->AxisData[A_IDX].axisEnum = EWM_AxisCodeTable(U_Min);
							HID_Device->AxisData[A_IDX].axisHEX = hex;
							HID_Device->AxisData[A_IDX].MapTarget = hex + "(" + FString::FromInt(0) + ")";
							HID_Device->AxisData[A_IDX].InitializeRange();
							HID_Device->AxisData[A_IDX].Initialized = true;
							const FString BCode = "Axis-" + HID_Device->AxisData[A_IDX].MapTarget;
							HID_Device->Axis_DHP.Add(BCode, A_IDX);
							HID_Device->AxisData[A_IDX].AxisBindingCode = BCode;
						}

						if (i == 0) {
							HID_Device->AxisData[A_IDX].RawValue = (float)state.Gamepad.bLeftTrigger;
						}
						if (i == 1) {
							HID_Device->AxisData[A_IDX].RawValue = (float)state.Gamepad.bRightTrigger;
						}
						HID_Device->AxisData[A_IDX].axisValue = HID_Device->AxisData[A_IDX].GetValueWithConfig(HID_Device->HID_CONFIG.AxisConfigurations[A_IDX], true);
						//AxisTrigger.axisValue = AxisTrigger.GetValueWithConfig(HID_Device->HID_CONFIG.AxisConfigurations[axisindex], true);


						/*
						XINPUT_CAPABILITIES capabilities;
						Xinput_Dll_Ref.XInputGetCapabilities((DWORD)HID_Device->X_I_D, XINPUT_FLAG_GAMEPAD, &capabilities);
						*/

						/*XINPUT_VIBRATION vibration;
						ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));
						vibration.wLeftMotorSpeed = (WORD)65535;
						vibration.wRightMotorSpeed = (WORD)65535;
						Xinput_Dll_Ref.XInputSetState((DWORD)HID_Device->X_I_D, &vibration);*/
					}
					HID_Device->is_XInputInitialized = true;
				}
			}
		}
	}

	///////////OUTPUT
	///////////////////////////////////////////
	///////////////////////////////////////////
	///////////////////////////////////////////
	/*uint16 NumberOutputValueCaps = 0;
	NumberOutputValueCaps = CAPS_.NumberOutputValueCaps;
	MEM_AllocSize = NumberOutputValueCaps * sizeof(HIDP_VALUE_CAPS);
	HIDP_VALUE_CAPS* OutputValueCaps = (HIDP_VALUE_CAPS*)FMemory_Alloca(MEM_AllocSize);
	FMemory::Memzero(OutputValueCaps, MEM_AllocSize); //ushort
	HIDP_RESULT = HID_Dll_Ref.HidP_GetValueCaps(HidP_Output, OutputValueCaps, &NumberOutputValueCaps, PREPARSEDDATA_);
	//HID_Dll_Ref.HidD_SetOutputReport()

	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID InputReportByteLength - > %s "), *FString::FromInt(CAPS_.InputReportByteLength))
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID OutputReportByteLength - > %s "), *FString::FromInt(CAPS_.OutputReportByteLength));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID FeatureReportByteLength - > %s "), *FString::FromInt(CAPS_.FeatureReportByteLength));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID NumberOutputButtonCaps - > %s "), *FString::FromInt(CAPS_.NumberOutputButtonCaps));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID NumberOutputDataIndices - > %s "), *FString::FromInt(CAPS_.NumberOutputDataIndices));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID FEATURE VCAPS - > %s "), *FString::FromInt(CAPS_.NumberFeatureValueCaps));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID FEATURE BCAPS - > %s "), *FString::FromInt(CAPS_.NumberFeatureButtonCaps));


	if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetValueCaps -->"); }
	else
	{
		//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID OUTOUT EXIST - > %s  inside:  %s   : %d"), *HID_Dll_Ref.HIDP_STATUS_ToString(HID_STATUS), *INFO, HID_STATUS);
		UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID NumberOutputValueCaps - > %s "), *FString::FromInt(NumberOutputValueCaps));

		for (uint16 VCap_OutIndex = 0; VCap_OutIndex < NumberOutputValueCaps; ++VCap_OutIndex)
			{
			bool success = false;


			   //UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID UsageMin - > %s "), *FString::FromInt(cap.LogicalMin));
			   //UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID UsageMAx - > %s "), *FString::FromInt(cap.LogicalMax));
			   U_Page = OutputValueCaps[VCap_OutIndex].UsagePage;
			   U_Min = OutputValueCaps[VCap_OutIndex].Range.UsageMin;
			   uint32 InputValue = 255;
			   uint32 Value = 0;
			 //  HIDP_RESULT = HID_Dll_Ref.HidP_SetUsageValue(HIDP_REPORT_TYPE::HidP_Output, U_Page, 0, U_Min, &Value, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);

			   HIDP_RESULT = HID_Dll_Ref.HidP_GetUsageValue(HidP_Output, U_Page, 0, U_Min, &Value, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, CAPS_.OutputReportByteLength);
			 //  HIDP_RESULT = HID_Dll_Ref.HidP_SetUsageValue(HidP_Output, U_Page, 0, U_Min, ULONG(InputValue), PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, CAPS_.OutputReportByteLength);
			   if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetUsageValue --> " + ("UP:" + FString::FromInt(U_Page)) + ("Umin:" + FString::FromInt(U_Min)) + "Map: " ); }
			   else
			   {
				   UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID OutputValue - > %s "), *FString::FromInt(Value));
			   }

			}
	//	OutputValueCaps[0]
	}*/

	HID_Dll_Ref.HidD_FreePreparsedData(PREPARSEDDATA_);
	if (HID_Device->needResetAssigments) {
		HID_Device->isPaused = true;
	}

	if (!HID_Device->isPaused) {
		UpdateHID_ButtonEvents(HID_Device);
	}

	//checking if DeviceWasInitialized
	if (!HID_Device->RawDataWasInitialized) {
		if (bButtonsAreValid || bAxesAreValid) {
			HID_Device->RawDataWasInitialized = true;
			if (InputManager->SelectedDevice == HID_Device) {
				InputManager->OnDeviceSelected.Broadcast(HID_Device); // recall on deviceselected 
			}
			HID_Device->OnDataInitialized();
			HID_Device->OnRawDataInitialized.Broadcast();
		}
	}
	HID_Device->OnEndParseData();
}
//#else 


//volatile HIDP_BUTTON_CAPS *g_caps = nullptr;
//volatile HIDP_VALUE_CAPS* g_value_caps = nullptr;
//volatile ButtonMapping* g_mapping = nullptr;
uint16 GetButtonIndex(USAGE Page, USAGE Usage, TArray<ButtonMapping> Mapping) {

	for (int i = 0; i < Mapping.Num(); ++i) {
		const ButtonMapping& MappingI = Mapping[i];
		if (MappingI.U_Page == Page && Usage >= MappingI.U_Min && Usage <= MappingI.U_Max) {
			//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" Found button %d"), MappingI.StartIndex + Usage - MappingI.U_Min);
			return (uint16)MappingI.StartIndex + Usage - MappingI.U_Min;
		}
	}
	int* nullvalue = nullptr;
	(*nullvalue) = 0;
	return (uint16)(-1);
}

/*uint16 GetButtonIndex(USAGE Page, USAGE Usage, TArray<ButtonMapping> Mapping, int32 ButtonMappingCount) {


	for (int i = 0; i < ButtonMappingCount; ++i) {
		const ButtonMapping& MappingI = Mapping[i];
		if (MappingI.U_Page == Page && Usage >= MappingI.U_Min && Usage <= MappingI.U_Max) {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" Found button %d"), MappingI.StartIndex + Usage - MappingI.U_Min);
			return (uint16)MappingI.StartIndex + Usage - MappingI.U_Min;
		}
	}
	int* nullvalue = nullptr;
	(*nullvalue) = 0;
	return (uint16)(-1);
}*/

void WM_Input_DevicesRAW::ParseHID_V2(UWM_Device_HID * HID_Device, const RAWINPUT* RAW_, const PHIDP_PREPARSED_DATA PREPARSEDDATA_, const HIDP_CAPS& CAPS_)
{
	if (!HID_Device->IsValidLowLevel()) { return; }
	HID_Device->OnBeginParseData();
	HID_Device->setLastButtonsData();
	if (!InputManager->IsPlaying) { return; }; 	//disable inputs in editor


	bool isXINPUT = false;


	const uint16 isNONZERO_Type = 1;
	int32  HIDP_RESULT;
	uint32 MEM_AllocSize = 0;
	uint16 NumberOfCaps = 0;
	USAGE U_Page = 0;
	USAGE U_Min = 0;
	USAGE U_Max = 0;

	bool bButtonsAreValid = false;
	//////////////////////////////////////////////////////////////////////////////////////////////
	NumberOfCaps = CAPS_.NumberInputButtonCaps;

	MEM_AllocSize = sizeof(HIDP_BUTTON_CAPS) * CAPS_.NumberInputButtonCaps;
	HIDP_BUTTON_CAPS* ButtonCaps = (HIDP_BUTTON_CAPS*)FMemory_Alloca(MEM_AllocSize);
	HIDP_RESULT = HID_Dll_Ref.HidP_GetButtonCaps(HidP_Input, ButtonCaps, &NumberOfCaps, PREPARSEDDATA_);
	//g_caps = ButtonCaps;
	//FMemory::Memzero(ButtonCaps, MEM_AllocSize;
	//ButtonMapping ButtonMappings[100];
	TArray< ButtonMapping> ButtonMappings;
	int32 ButtonStartIndex = 0;
	//ButtonMappings.AddDefaulted(NumberOfCaps);
	//g_mapping = ButtonMappings;
	//int32 ButtonMappingCount = NumberOfCaps;
	//int32 NumPages = 0;
	//USAGE Pages[100];
	TArray<USAGE> Pages;
	TMap<int32, int32> PagesUsageLength;
	//Pagess.AddUnique(Page);

	//////////////////////////////////////////////////////////////////////////////////////////////
	if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetButtonCaps -->"); }
	else
	{


		/*for (int32 i = 0; i < NumberOfCaps; ++i) {
			HIDP_BUTTON_CAPS* CurrentCap = &ButtonCaps[i];
			ButtonMappings[i].StartIndex = ButtonStartIndex;
			ButtonMappings[i].U_Page = CurrentCap->UsagePage;
			if (ButtonMappings[i].U_Page == 9) {
				if (CurrentCap->IsRange) {
					ButtonMappings[i].U_Min = CurrentCap->Range.UsageMin;
					ButtonMappings[i].U_Max = CurrentCap->Range.UsageMax;
					ButtonStartIndex += CurrentCap->Range.UsageMax - CurrentCap->Range.UsageMin + 1;
				}
				else {
					ButtonMappings[i].U_Min = CurrentCap->NotRange.Usage;
					ButtonMappings[i].U_Max = CurrentCap->NotRange.Usage;
					++ButtonStartIndex;
				}
				bool NewPage = true;
				for (int j = 0; j < NumPages; ++j) {
					if (Pages[j] == CurrentCap->UsagePage) {
						NewPage = false;
						break;
					}
				}
				if (NewPage) {
					Pages[NumPages] = CurrentCap->UsagePage;
					++NumPages;
				}
			}
		}*/
		//int32 mapIndex = 0;



		for (int32 i = 0; i < NumberOfCaps; ++i) {
			HIDP_BUTTON_CAPS* CurrentCap = &ButtonCaps[i];

			//UPage 9 = Buttons
			if (CurrentCap->UsagePage == 9) {
				ButtonMapping BMapping;
				BMapping.StartIndex = ButtonStartIndex;
				BMapping.U_Page = CurrentCap->UsagePage;

				if (CurrentCap->IsRange) {
					BMapping.U_Min = CurrentCap->Range.UsageMin;
					BMapping.U_Max = CurrentCap->Range.UsageMax;

					ButtonStartIndex += CurrentCap->Range.UsageMax - CurrentCap->Range.UsageMin + 1;
				}
				else {
					BMapping.U_Min = CurrentCap->NotRange.Usage;
					BMapping.U_Max = CurrentCap->NotRange.Usage;

					++ButtonStartIndex;
				}
				ButtonMappings.Add(BMapping);
				Pages.AddUnique(CurrentCap->UsagePage);
				PagesUsageLength.Add(CurrentCap->UsagePage, ButtonStartIndex);

			}
			

		}

		//HIDP_RESULT = HID_Dll_Ref.HidP_GetUsages(HidP_Input, U_Page, 0, UsageList, &UsageLength, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
		//for (int Page = 0; Page < Pages.Num(); ++Page) {
		for (USAGE PAGE : Pages) {
			/////////////////////////////////////////////////////////////////////////////////////////////
			uint32 UsageLength = *PagesUsageLength.Find(PAGE);//  ButtonStartIndex;
			MEM_AllocSize = UsageLength * sizeof(uint16);
			uint16* UsageList = (uint16*)FMemory_Alloca(MEM_AllocSize); FMemory::Memzero(UsageList, MEM_AllocSize); //ushort
			HIDP_RESULT = HID_Dll_Ref.HidP_GetUsages(HidP_Input, PAGE, 0, UsageList, &UsageLength, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
			/////////////////////////////////////////////////////////////////////////////////////////////
			if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetUsages -->"); }
			else
			{
				if (PAGE == 9) {
					bButtonsAreValid = true;
					if (!HID_Device->RawDataWasInitialized) {
						uint16 lastindex = 0;

						if (HID_Device->is_XInputSlotGuess) {
							ButtonStartIndex += 2;
						}

						for (uint16 i = 0; i < ButtonStartIndex; i++) {
							lastindex = i + isNONZERO_Type;

							const FString BindCode = "BTN-" + FString::FromInt(i + isNONZERO_Type);  //removed NONZERO
							HID_Device->Button_DHP.Add(BindCode, i + isNONZERO_Type);
							HID_Device->ButtonsData[i + isNONZERO_Type].ButtonBindingCode = BindCode;	
						}
						

						/*if (HID_Device->is_XInputSlotGuess) {
							for (uint16 i = 0; i < 2; i++) {
								int xindex = lastindex + 1 + i + 1;
								const FString BindCode = "BTN-" + FString::FromInt(xindex);  //removed NONZERO
								HID_Device->Button_DHP.Add(BindCode, xindex);
								HID_Device->ButtonsData[idx].ButtonBindingCode = BindCode;
								/*HIDP_BUTTON_CAPS* cap = new HIDP_BUTTON_CAPS();
								cap->UsagePage = 9;
								cap->IsRange = true;
								cap->Range.UsageMin = 2;
								cap->Range.UsageMax = 2;*/
						/*	}
						}*/

					}
					for (uint16 HID_PressedButton = 0; HID_PressedButton < UsageLength; ++HID_PressedButton)
					{
						const uint16 ButtonIndex = GetButtonIndex(PAGE, UsageList[HID_PressedButton], ButtonMappings) + isNONZERO_Type; ///+1 FOR NONZERO
						//const uint16 ButtonIndex = GetButtonIndex(Pages[Page], UsageList[HID_PressedButton], ButtonMappings, ButtonMappingCount) + isNONZERO_Type; ///+1 FOR NONZERO
						if (ButtonIndex < HID_Device->ButtonsData.Num())
						{
							HID_Device->ButtonsData[ButtonIndex].bIsPressed = true;
							if (HID_Device->FirstPressedRawKey == -1) {
								HID_Device->FirstPressedRawKey = ButtonIndex;
							}
						}
					}
				}
			}
		}


		/*for (int Page = 0; Page < Pages.Num(); ++Page) {
			/////////////////////////////////////////////////////////////////////////////////////////////
			uint32 UsageLength = *PagesUsageLength.Find(Pages[Page]);//  ButtonStartIndex;
			MEM_AllocSize = UsageLength * sizeof(uint16);
			uint16* UsageList = (uint16*)FMemory_Alloca(MEM_AllocSize); FMemory::Memzero(UsageList, MEM_AllocSize); //ushort
			HIDP_RESULT = HID_Dll_Ref.HidP_GetUsages(HidP_Input, Pages[Page], 0, UsageList, &UsageLength, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
			/////////////////////////////////////////////////////////////////////////////////////////////
			if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetUsages -->"); }
			else
			{


				if (Page == 0) {
					bButtonsAreValid = true;
					if (!HID_Device->RawDataWasInitialized) {
						for (uint16 i = 0; i < ButtonStartIndex; i++) {
							const FString BindCode = "BTN-" + FString::FromInt(i + 1);  //removed NONZERO
							HID_Device->Button_DHP.Add(BindCode, i + isNONZERO_Type);
							HID_Device->ButtonsData[i + isNONZERO_Type].ButtonBindingCode = BindCode;
						}
					}
				}
				for (uint16 HID_PressedButton = 0; HID_PressedButton < UsageLength; ++HID_PressedButton)
				{
					const uint16 ButtonIndex = GetButtonIndex(Pages[Page], UsageList[HID_PressedButton], ButtonMappings) + isNONZERO_Type; ///+1 FOR NONZERO
					//const uint16 ButtonIndex = GetButtonIndex(Pages[Page], UsageList[HID_PressedButton], ButtonMappings, ButtonMappingCount) + isNONZERO_Type; ///+1 FOR NONZERO
					if (ButtonIndex < HID_Device->ButtonsData.Num())
					{
						HID_Device->ButtonsData[ButtonIndex].bIsPressed = true;
						if (HID_Device->FirstPressedRawKey == -1) {
							HID_Device->FirstPressedRawKey = ButtonIndex;
						}
					}
				}
			}
		}*/
	}

	uint16 axisN = 0;
	bool bAxesAreValid = false;
	int32 numActiveAxes = 0;
	int32 numActiveDpadAxes = 0;
	////////////////////////////////////////////////////////////////////////////////////////
	NumberOfCaps = CAPS_.NumberInputValueCaps;

	MEM_AllocSize = NumberOfCaps * sizeof(HIDP_VALUE_CAPS);
	HIDP_VALUE_CAPS* ValueCaps = (HIDP_VALUE_CAPS*)FMemory_Alloca(MEM_AllocSize);
	FMemory::Memzero(ValueCaps, MEM_AllocSize); //ushort
	//g_value_caps = ValueCaps;
	HIDP_RESULT = HID_Dll_Ref.HidP_GetValueCaps(HidP_Input, ValueCaps, &NumberOfCaps, PREPARSEDDATA_);
	////////////////////////////////////////////////////////////////////////////////////////
	if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetValueCaps -->"); }
	else
	{
		//	const UEnum* ACTEnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EWM_AxisCodeTable"), true);
			//FString ACTName = "";
		bAxesAreValid = true;
		HID_Device->Axis_AID.Empty();
		for (uint16 VCap_Index = 0; VCap_Index < NumberOfCaps; ++VCap_Index)
		{
			const int32 A_IDX = VCap_Index + isNONZERO_Type;
			//FWM_HID_AxisData& AxisData = HID_Device->AxisData[VCap_Index + isNONZERO_Type];
		//	U_Page = VCap_Index == 0 ? HID_Device->DeviceInfo.UsagePage : ValueCaps[VCap_Index].UsagePage; //SOLVED
			U_Page = ValueCaps[VCap_Index].UsagePage;
			U_Min = ValueCaps[VCap_Index].Range.UsageMin;
			U_Max = ValueCaps[VCap_Index].Range.UsageMax;
			if (U_Min < 0x30) continue;
			if (!HID_Device->AxisData[A_IDX].Initialized) {
				HID_Device->AxisData[A_IDX].UsageMin = U_Min;
				HID_Device->AxisData[A_IDX].LogicalMin = UWM_ControllerFunctionLib::CovnertToBitSize(ValueCaps[VCap_Index].LogicalMin, ValueCaps[VCap_Index].BitSize, true);
				HID_Device->AxisData[A_IDX].LogicalMax = UWM_ControllerFunctionLib::CovnertToBitSize(ValueCaps[VCap_Index].LogicalMax, ValueCaps[VCap_Index].BitSize, true);
				HID_Device->AxisData[A_IDX].axisEnum = EWM_AxisCodeTable(U_Min);
				HID_Device->Axis_AID.Add(U_Min, HID_Device->Axis_AID.Contains(U_Min) ? 1 + int32(HID_Device->Axis_AID[U_Min]) : 0);
				const int32 instance = int32(HID_Device->Axis_AID[U_Min]);
				HID_Device->AxisData[A_IDX].instance = instance;

				FString hex;
				ByteToHex(U_Min, hex);
				HID_Device->AxisData[A_IDX].axisHEX = hex;
				HID_Device->AxisData[A_IDX].MapTarget = hex + "(" + FString::FromInt(instance) + ")";
				HID_Device->AxisData[A_IDX].InitializeRange();
				HID_Device->AxisData[A_IDX].Initialized = true;
			}

			/*	int32 ScaledValue;
				HID_Dll_Ref.HidP_GetScaledUsageValue(HidP_Input, U_Page, 0, U_Min, &ScaledValue, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
				UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("lmax - > %s"), *FString::FromInt(ScaledValue));*/
				//FString log = "HidP_GetUsageValue --> " + ("UP : " + FString::FromInt(U_Page)) + ("Umin : " + FString::FromInt(U_Min) + "Map : " + AxisData.MapTarget) + "Map : " + FString::FromInt(ValueCaps[VCap_Index].Range.UsageMax);
				//InputManager->DEBUG.Broadcast(FString::FromInt(VCap_Index), log);
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT(" - > %s"), *log);
			uint32 Value;
			HIDP_RESULT = HID_Dll_Ref.HidP_GetUsageValue(HidP_Input, U_Page, 0, U_Min, &Value, PREPARSEDDATA_, (PCHAR)RAW_->data.hid.bRawData, RAW_->data.hid.dwSizeHid);
			if (HIDP_RESULT != HIDP_STATUS_SUCCESS) { Log_HIDP_Error(HIDP_RESULT, "HidP_GetUsageValue --> " + ("UP:" + FString::FromInt(U_Page)) + ("Umin:" + FString::FromInt(U_Min)) + "Map: " + HID_Device->AxisData[A_IDX].MapTarget); }
			else
			{
				axisN++;
				HID_Device->AxisData[A_IDX].LastValue = HID_Device->AxisData[A_IDX].RawValue;
				HID_Device->AxisData[A_IDX].RawValue = (LONG)Value;
				//FString poi = UEnum(EWM_AxisCodeTable(0x33)).GetEnumNameStringByValue(0x33); 
				HID_Device->AxisData[A_IDX].axisValue = HID_Device->AxisData[A_IDX].GetValueWithConfig(HID_Device->HID_CONFIG.AxisConfigurations[VCap_Index + isNONZERO_Type], true);

				if (U_Min != 0x39) {
					numActiveAxes++;
					//ACTName = ACTEnumPtr->GetNameStringByValue(U_Min);
					//const FString BCode = ACTName + "-" + AxisData.MapTarget;
					//HID_Device->Axis_DHP.Add(BCode, VCap_Index + isNONZERO_Type);
					const FString BCode = "Axis-" + HID_Device->AxisData[A_IDX].MapTarget;
					HID_Device->Axis_DHP.Add(BCode, VCap_Index + isNONZERO_Type);
					//JoystickDevice->Axis_DHP.Add(BCode, numActiveAxes);
					HID_Device->AxisData[A_IDX].AxisBindingCode = BCode;
				}

				else {
					numActiveDpadAxes++;
					const FString BCode = "HAT-" + HID_Device->AxisData[A_IDX].MapTarget;
					const int32 dpadInstance = HID_Device->AxisData[A_IDX].instance + isNONZERO_Type;
					HID_Device->DPAD_DHP.Add(BCode, dpadInstance);
					//JoystickDevice->DPAD_DHP.Add(BCode, numActiveDpadAxes);
					HID_Device->AxisData[A_IDX].AxisBindingCode = BCode;
					HID_Device->DPADData[dpadInstance].AxisData = HID_Device->AxisData[A_IDX];
					HID_Device->DPADData[dpadInstance].Value = (float)Value;
					HID_Device->DPADData[dpadInstance].GetDpadValues();
				}
			}
		}

		if (HID_Device->is_XInput && Xinput_Dll_Ref.LOADED) {
			if (HID_Device->is_XInputSlotGuess) {
				DetectXInputSlot(HID_Device, ButtonMappings);
			}

			if (HID_Device->X_I_D >= 0) {
				DWORD xResult;
				XINPUT_STATE state;
				xResult = Xinput_Dll_Ref.XInputGetState(HID_Device->X_I_D, &state);

				if (xResult == ERROR_SUCCESS) {
					FString AxisString = "";
					int32 A_IDX = 0;
					for (int8 i = 0; i < 2; i++) {
						if (i == 0) {
							axisN++;
							U_Min = 0x32;
							AxisString = "Axis-32(0)";
						}
						if (i == 1) {
							axisN++;
							U_Min = 0x35;
							AxisString = "Axis-35(0)";
						}
						if (i > 1) {
							continue;
						}
						A_IDX = HID_Device->Axis_DHP.Find(AxisString) ? HID_Device->Axis_DHP[AxisString] : axisN + 1 + isNONZERO_Type;
						if (!HID_Device->is_XInputInitialized) {
							//FWM_HID_AxisData& AxisTrigger = HID_Device->AxisData[axisindex];
							//AxisTrigger = HID_Device->AxisData[axisindex];
							FString hex = "";
							ByteToHex(U_Min, hex);
							HID_Device->AxisData[A_IDX].LogicalMin = (USHORT)0;   ///fixed swap with min max
							HID_Device->AxisData[A_IDX].LogicalMax = (USHORT)255;
							HID_Device->AxisData[A_IDX].UsageMin = U_Min;
							HID_Device->AxisData[A_IDX].axisEnum = EWM_AxisCodeTable(U_Min);
							HID_Device->AxisData[A_IDX].axisHEX = hex;
							HID_Device->AxisData[A_IDX].MapTarget = hex + "(" + FString::FromInt(0) + ")";
							HID_Device->AxisData[A_IDX].InitializeRange();
							HID_Device->AxisData[A_IDX].Initialized = true;
							const FString BCode = "Axis-" + HID_Device->AxisData[A_IDX].MapTarget;
							HID_Device->Axis_DHP.Add(BCode, A_IDX);
							HID_Device->AxisData[A_IDX].AxisBindingCode = BCode;
						}


						int buttonIndex = 0;
						if (i == 0) {
							HID_Device->AxisData[A_IDX].RawValue = (float)state.Gamepad.bLeftTrigger;
							buttonIndex = HID_Device->Button_DHP.Num() -1;
						}
						if (i == 1) {
							HID_Device->AxisData[A_IDX].RawValue = (float)state.Gamepad.bRightTrigger;
							buttonIndex = HID_Device->Button_DHP.Num();//   12;
						}
						HID_Device->AxisData[A_IDX].axisValue = HID_Device->AxisData[A_IDX].GetValueWithConfig(HID_Device->HID_CONFIG.AxisConfigurations[A_IDX], true);
						AnalogToButton(HID_Device, A_IDX, buttonIndex);


						//AxisTrigger.axisValue = AxisTrigger.GetValueWithConfig(HID_Device->HID_CONFIG.AxisConfigurations[axisindex], true);


						/*
						XINPUT_CAPABILITIES capabilities;
						Xinput_Dll_Ref.XInputGetCapabilities((DWORD)HID_Device->X_I_D, XINPUT_FLAG_GAMEPAD, &capabilities);
						*/

						/*XINPUT_VIBRATION vibration;
						ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));
						vibration.wLeftMotorSpeed = (WORD)65535;
						vibration.wRightMotorSpeed = (WORD)65535;
						Xinput_Dll_Ref.XInputSetState((DWORD)HID_Device->X_I_D, &vibration);*/
					}
					HID_Device->is_XInputInitialized = true;
				}
			}
		}
	}


	HID_Dll_Ref.HidD_FreePreparsedData(PREPARSEDDATA_);
	if (HID_Device->needResetAssigments) {
		HID_Device->isPaused = true;
	}

	if (!HID_Device->isPaused) {
		UpdateHID_ButtonEvents(HID_Device);
	}

	//checking if DeviceWasInitialized
	if (!HID_Device->RawDataWasInitialized) {
		if (bButtonsAreValid || bAxesAreValid) {
			HID_Device->RawDataWasInitialized = true;
			if (InputManager->SelectedDevice == HID_Device) {
				InputManager->OnDeviceSelected.Broadcast(HID_Device); // recall on deviceselected 
			}
			HID_Device->OnDataInitialized();
			HID_Device->OnRawDataInitialized.Broadcast();
		}
	}
	HID_Device->OnEndParseData();
}

void WM_Input_DevicesRAW::AnalogToButton(UWM_Device_HID* HID_Device, int32 analogindex, int32 buttonindex) {
	if (HID_Device->AxisData.IsValidIndex(analogindex) && HID_Device->ButtonsData.IsValidIndex(buttonindex)) {
		const float axisvalue = HID_Device->AxisData[analogindex].axisValue;
		FWM_HID_ButtonData& buttondata = HID_Device->ButtonsData[buttonindex];
		if (!buttondata.bIsPressed) {
			if (axisvalue >= 0.975f) {
				buttondata.bIsPressed = true;
				if (HID_Device->FirstPressedRawKey == -1) {
					HID_Device->FirstPressedRawKey = buttonindex;
				}
			}
		}
	}	
}
//#endif


void WM_Input_DevicesRAW::SendHID_BUTTON_Events(UWM_Device_HID* HID_Device)
{
	//////////////////////////////////////////
	///PREPARED  FOR MULTICLASS DEVICES
	//filter by class  ==> InputManager->    TMap<deviceclass*, Struct> HIDDeviceKeys;   Struct{Buttons, Analogs, Hats, others }
	/*if (!InputManager->HidInputKeys_ByClass.Find(HID_Device->GetClass())) {return;}
	else {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HIDCLASS EXIST:   %s"), *JoystickDevice->GetClass()->GetName());
	}*/
	/*	for (auto&Each : InputManager->HidInputKeys_ByClass[JoystickDevice->GetClass()].Buttons) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HIDCLASS EXIST:   %s"), *JoystickDevice->GetClass()->GetName());
	}*/
	//HIDDevice->StaticClass();
	/////////////////////////////////////////////////
	// for auto&Each : InputManager[deviceclass]->Buttons;
	for (auto&Each : InputManager->HIDJoystick_Buttons) {
		if (HID_Device->HID_CONFIG.BUTTONS_BINDINGS.Contains(Each.Key)) {
			const FString hexBinding = HID_Device->HID_CONFIG.BUTTONS_BINDINGS[Each.Key];
			if (HID_Device->Button_DHP.Contains(hexBinding)) {
				const int32 buttonIndex = HID_Device->Button_DHP[hexBinding];
				FWM_HID_ButtonData& buttonData = HID_Device->ButtonsData[buttonIndex];
				//SendHID_ButtonEVENT(JoystickDevice, &buttonData);
				SendHID_ButtonEVENT(HID_Device, Each.Key, &buttonData);
			}

			/*else {
				return;
				FWM_HID_ButtonData buttonData = FWM_HID_ButtonData();
				buttonData.bLastButtonState = true;
				SendHID_ButtonEVENT(HID_Device, Each.Key, &buttonData);
				MessageHandler->OnControllerButtonReleased(Each.Key.GetFName(), HID_Device->ControllerAssigment, false);
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID ERROR - > %s  inside:  %s "),TEXT("RESETTING STATE"));
			}*/

		}
		else {
			Log_Error("BUTTONS_BINDINGS Not Contains some key (You need to delete WM_Devices .sav file) - key : " + Each.Key.GetFName().ToString());
		}
	}
}

void WM_Input_DevicesRAW::UpdateHID_ButtonEvents(UWM_Device_HID* HID_Device) {
	HID_Device->SetButtonDataTriggerStates();
	SendHID_BUTTON_Events(HID_Device);
	SendHID_DPAD_Events(HID_Device);
}

void WM_Input_DevicesRAW::SendHID_DPAD_Events(UWM_Device_HID* HID_Device) {
	for (auto&Each : InputManager->HIDJoystick_DPADs) {
		if (HID_Device->HID_CONFIG.DPADS_BINDINGS.Contains(Each.Key)) {
			const FString hexBinding = HID_Device->HID_CONFIG.DPADS_BINDINGS[Each.Key];
			if (HID_Device->DPAD_DHP.Contains(hexBinding)) {
				const int32 i = HID_Device->DPAD_DHP[hexBinding];
				//if (JoystickDevice->Button_DHP.Contains(hexBinding)) {
				FWM_HID_DPADData collectionData = HID_Device->DPADData[i];
				SendHID_ButtonEVENT(HID_Device, Each.Value.UP, &collectionData.UP);
				SendHID_ButtonEVENT(HID_Device, Each.Value.DOWN, &collectionData.DOWN);
				SendHID_ButtonEVENT(HID_Device, Each.Value.LEFT, &collectionData.LEFT);
				SendHID_ButtonEVENT(HID_Device, Each.Value.RIGHT, &collectionData.RIGHT);
			}
		}
		else {
			Log_Error("DPADS_BINDINGS Not Contains (You need to delete WM_Devices sav: " + Each.Key);
		}
	}
}

void WM_Input_DevicesRAW::SendHID_ButtonEVENT(UWM_Device_HID* HID_Device, FKey key, FWM_HID_ButtonData* buttondata) {
	//HID_Device->ButtonKeyValues[key] = buttondata->bIsPressed;
	if (!checkEnhancedDeviceIsAssignedCorrectly(HID_Device)) {
		return;
	}

	const int32 playerIndex = HID_Device->ControllerAssigment;

	//FPlatformUserId UserId = FGenericPlatformMisc::GetPlatformUserForUserIndex(playerIndex);
	FSlateApplication& slateApplication = FSlateApplication::Get();
	const FPlatformUserId userID =  FPlatformUserId::CreateFromInternalId(playerIndex);
	const FInputDeviceId deviceID = FInputDeviceId::CreateFromInternalId(HID_Device->GetUniqueID());
	
	// registerEnhancedDevice(HID_Device, playerIndex);
	// remapEnhancedDevice(HID_Device, playerIndex);
	EInputDeviceConnectionState state = FGenericPlatformInputDeviceMapper::Get().GetInputDeviceConnectionState(deviceID);
	
	if (state == EInputDeviceConnectionState::Connected) {
		switch (buttondata->KeyTriggerState) {
		case  EWM_KeyTriggerState::WasJustPressed: {
			//HID_Device->ButtonKeyValues[key] = true;
			if (HID_Device->isValidPlayerIndex() && InputManager->EnableHIDInternalButtonEvents) {
				
					//MessageHandler->OnControllerButtonPressed(key.GetFName(), HID_Device->ControllerAssigment, false);
				    //Log_Success("playerIndex() : " + FString::FromInt(playerIndex) + "   platformID: " + FString::FromInt(UserId.GetInternalId()));

					MessageHandler->OnControllerButtonPressed(key.GetFName(), userID, deviceID, false);

			 		/*FKeyEvent buttonEvent(Key, slateApplication.GetPlatformApplication()->GetModifierKeys(), deviceID, false, 0, 0);
					//FKeyEvent buttonEvent(Key, slateApplication.GetPlatformApplication()->GetModifierKeys(), (uint32)playerIndex, false, 0, 0);
					FSlateApplication::Get().ProcessKeyDownEvent(buttonEvent);*/
					//IPlatformInputDeviceMapper::Get().GetUserForInputDevice();
					//Log_Success("GetUserIndex() : " + FString::FromInt(buttonEvent.GetUserIndex()) + "   platformID: " + FString::FromInt(buttonEvent.GetPlatformUserId()));

					//LOG BOUND DEVICES
					bool logDeviceBinding = false;
					if (logDeviceBinding) {
						TArray<FInputDeviceId> devices;
						FGenericPlatformInputDeviceMapper::Get().GetAllInputDevicesForUser(userID, devices);

						for (const FInputDeviceId& info : devices)
						{
							//EInputDeviceConnectionState state = FGenericPlatformInputDeviceMapper::Get().GetInputDeviceConnectionState(info);
							Log_Success("deviceInfo : " + FString::FromInt(info.GetId()));
						}

					}
				
				/*ISlateInputManager m;m.GetUserIndexForController()slateApplication.SetInputManager*/	

			}

			InputManager->OnDeviceButtonKeyEvent(key, HID_Device, buttondata->KeyTriggerState);
			break;
		}
		case  EWM_KeyTriggerState::WasJustReleased: {
			//HID_Device->ButtonKeyValues[key] = false;
			if (HID_Device->isValidPlayerIndex() && InputManager->EnableHIDInternalButtonEvents) {
			
					//MessageHandler->OnControllerButtonReleased(key.GetFName(), HID_Device->ControllerAssigment, false);
					MessageHandler->OnControllerButtonReleased(key.GetFName(), userID, deviceID, false);

					/*FKeyEvent buttonEvent(Key, slateApplication.GetPlatformApplication()->GetModifierKeys(), (uint32)playerIndex, false, 0, 0);
				    FSlateApplication::Get().ProcessKeyUpEvent(buttonEvent);*/	
			}
			InputManager->OnDeviceButtonKeyEvent(key, HID_Device, buttondata->KeyTriggerState);
			break;
		}
		case  EWM_KeyTriggerState::NoTrigger: {
			if (buttondata->bIsPressed) {
				//	HID_Device->ButtonKeyValues[key] = true;
				if (HID_Device->isValidPlayerIndex() && InputManager->EnableHIDInternalButtonEvents) {
					//MessageHandler->OnControllerButtonPressed(key.GetFName(), HID_Device->ControllerAssigment, true);
					MessageHandler->OnControllerButtonPressed(key.GetFName(), userID, deviceID, true);
					/*FKeyEvent buttonEvent(Key, slateApplication.GetPlatformApplication()->GetModifierKeys(), (uint32)playerIndex, false, 0, 0);
					FSlateApplication::Get().ProcessKeyDownEvent(buttonEvent);*/
				}
			}
			break;
		}
		default: {
			break;
		}
		}
	}
}


/*void onInputDeviceConnectionChange(FInputDeviceId inputDeviceID, FPlatformUserId platformUserID, FPlatformUserId platformUserID_old) {
	inputDeviceID.
}*/

void WM_Input_DevicesRAW::SendHID_AXIS_Events(UWM_Device_HID* HID_Device)
{
	if (!checkEnhancedDeviceIsAssignedCorrectly(HID_Device)) {
		return;
	}
	//IInputInterface::SetDeviceProperty()
	
	const int32 playerIndex = HID_Device->ControllerAssigment;
	const FSlateApplication& slateApplication = FSlateApplication::Get();
	const FPlatformUserId userID = FPlatformUserId::CreateFromInternalId(playerIndex);
	const FInputDeviceId deviceID = FInputDeviceId::CreateFromInternalId(HID_Device->GetUniqueID());

		for (auto& Each : InputManager->HIDJoystick_Axes) {
			if (HID_Device->HID_CONFIG.AXIS_BINDINGS.Contains(Each.Key)) {
				const FString hexBinding = HID_Device->HID_CONFIG.AXIS_BINDINGS[Each.Key];
				//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("other warn - > %s : %s "), *Each.Key.GetFName().ToString(), *Each.Key.GetDisplayName().ToString());
				if (HID_Device->Axis_DHP.Contains(hexBinding)) {
					const int32 axisindex = HID_Device->Axis_DHP[hexBinding];
					const float AxisValue = HID_Device->AxisData[axisindex].axisValue;
					HID_Device->AxisKeyValues[Each.Key] = AxisValue;
					if (HID_Device->isValidPlayerIndex()) {
						//MessageHandler->OnControllerAnalog(Each.Key.GetFName(), HID_Device->ControllerAssigment, AxisValue);
						MessageHandler->OnControllerAnalog(Each.Key.GetFName(), userID, deviceID, AxisValue);
						//FAnalogInputEvent buttonEvent(Each.Key.GetFName(), slateApplication.GetPlatformApplication()->GetModifierKeys(), (uint32)playerIndex, false, 0, 0,AxisValue);
					    //FSlateApplication::Get().ProcessAnalogInputEvent(buttonEvent);
					
					}

					if (DEBUG_ANALOG_AXIS_TEST) {
						InputManager->DEBUG.Broadcast("AnalogSend" + Each.Key.GetFName().ToString(), FString::FromInt(AxisValue));
					}
				}

				else {
					HID_Device->AxisKeyValues[Each.Key] = 0.0f;
					if (HID_Device->isValidPlayerIndex()) {
						//MessageHandler->OnControllerAnalog(Each.Key.GetFName(), HID_Device->ControllerAssigment, 0.0f);
						MessageHandler->OnControllerAnalog(Each.Key.GetFName(), userID, deviceID, 0.0f);   //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
						//FAnalogInputEvent buttonEvent(Each.Key.GetFName(), slateApplication.GetPlatformApplication()->GetModifierKeys(), (uint32)playerIndex, false, 0, 0, 0.0f);
						//FSlateApplication::Get().ProcessAnalogInputEvent(buttonEvent);
						
					}
					if (DEBUG_ANALOG_AXIS_TEST) {
						InputManager->DEBUG.Broadcast("Analog_NOHEX", "NOHEX");
					}
				}
			}
			else {
				Log_Error("AXIS_BINDINGS Not Contains(You need to delete WM_Devices sav" + Each.Key.GetFName().ToString());
				if (DEBUG_ANALOG_AXIS_TEST) {
					InputManager->DEBUG.Broadcast("NO ANALOG BINDING", "NOBINDNG");
				}
			}
		}
	//}

}



void WM_Input_DevicesRAW::Reset_HIDDeviceEvents(UWM_Device_HID* HID_Device) {
	if (!checkEnhancedDeviceIsAssignedCorrectly(HID_Device)) {
		return;
	}
	const int32 playerIndex = HID_Device->ControllerAssigment;

	if (HID_Device->isValidPlayerIndex()) {

			const FSlateApplication& slateApplication = FSlateApplication::Get();
			const FPlatformUserId userID = FPlatformUserId::CreateFromInternalId(playerIndex);
			const FInputDeviceId deviceID = FInputDeviceId::CreateFromInternalId(HID_Device->GetUniqueID());

			for (auto& Each : InputManager->HIDJoystick_Axes) {
				//MessageHandler->OnControllerAnalog(Each.Key.GetFName(), playerIndex, 0);
				MessageHandler->OnControllerAnalog(Each.Key.GetFName(), userID, deviceID, 0.0f);
			}

		if (InputManager->WM_SettingsRW->bENABLE_AUTO_BUTTON_RELEASE) {

			for (auto& Each : InputManager->HIDJoystick_DPADs) {

				/*MessageHandler->OnControllerButtonReleased(Each.Value.UP.GetFName(), playerIndex, false);
				MessageHandler->OnControllerButtonReleased(Each.Value.DOWN.GetFName(), playerIndex, false);
				MessageHandler->OnControllerButtonReleased(Each.Value.LEFT.GetFName(), playerIndex, false);
				MessageHandler->OnControllerButtonReleased(Each.Value.RIGHT.GetFName(), playerIndex, false);*/

				MessageHandler->OnControllerButtonReleased(Each.Value.UP.GetFName(), userID, deviceID, false);
				MessageHandler->OnControllerButtonReleased(Each.Value.DOWN.GetFName(), userID, deviceID, false);
				MessageHandler->OnControllerButtonReleased(Each.Value.LEFT.GetFName(), userID, deviceID, false);
				MessageHandler->OnControllerButtonReleased(Each.Value.RIGHT.GetFName(), userID, deviceID, false);

			}
			for (auto& Each : InputManager->HIDJoystick_Buttons) {
				//FKeyEvent buttonEvent(Each.Key.GetFName(), slateApplication.GetPlatformApplication()->GetModifierKeys(), (uint32)playerIndex, false, 0, 0);
				//FSlateApplication::Get().ProcessKeyUpEvent(buttonEvent);
				MessageHandler->OnControllerButtonReleased(Each.Key.GetFName(), userID, deviceID, false);
			}
		}
	}
	
}

void WM_Input_DevicesRAW::ResetJoystickEventsForPlayerController(int32 playerIndex) {
	if (playerIndex >= 0) {
	
			for (auto& Each : InputManager->HIDJoystick_Axes) {
				//MessageHandler->OnControllerAnalog(Each.Key.GetFName(), playerIndex, 0);
				//MessageHandler->OnControllerAnalog(Each.Key.GetFName(), platformUserId, inputDeviceID, 0);
			}

			if (InputManager->WM_SettingsRW->bENABLE_AUTO_BUTTON_RELEASE) {
				FSlateApplication& slateApplication = FSlateApplication::Get();
				
				for (auto& Each : InputManager->HIDJoystick_DPADs) {
					
					/*MessageHandler->OnControllerButtonReleased(Each.Value.UP.GetFName(), playerIndex, false);
					MessageHandler->OnControllerButtonReleased(Each.Value.DOWN.GetFName(), playerIndex, false);
					MessageHandler->OnControllerButtonReleased(Each.Value.LEFT.GetFName(), playerIndex, false);
					MessageHandler->OnControllerButtonReleased(Each.Value.RIGHT.GetFName(), playerIndex, false);*/

					/*MessageHandler->OnControllerButtonReleased(Each.Value.UP.GetFName(), platformUserId, inputDeviceID, false);
					MessageHandler->OnControllerButtonReleased(Each.Value.DOWN.GetFName(), platformUserId, inputDeviceID, false);
					MessageHandler->OnControllerButtonReleased(Each.Value.LEFT.GetFName(), platformUserId, inputDeviceID, false);
					MessageHandler->OnControllerButtonReleased(Each.Value.RIGHT.GetFName(), platformUserId, inputDeviceID, false);*/

				}
				for (auto& Each : InputManager->HIDJoystick_Buttons) {
					FKeyEvent buttonEvent(Each.Key.GetFName(), slateApplication.GetPlatformApplication()->GetModifierKeys(), (uint32)playerIndex, false, 0, 0);
					FSlateApplication::Get().ProcessKeyUpEvent(buttonEvent);
					//MessageHandler->OnControllerButtonReleased(Each.Key.GetFName(), platformUserId, inputDeviceID, false);
				}
			}
		
		
	}
}

void WM_Input_DevicesRAW::SendControllerEvents()
{
	for (auto&Each : InputManager->HID_DeviceList) {
		UWM_Device_HID* HID_Device = Each.Value;
		if (!HID_Device->IsValidLowLevel()) { return; }
		

		if (HID_Device->PendingAssigmentsResets.Num() > 0) {
			HID_Device->needResetAssigments = true;
			HID_Device->isPaused = true;
			//if (HID_Device->isPaused) {
				for (int i = 0; i < HID_Device->PendingAssigmentsResets.Num(); i++) {
					Reset_HIDDeviceEvents(HID_Device); 	//ResetJoystickEventsForPlayerController(HID_Device->PendingAssigmentsResets[i]);

					HID_Device->PendingAssigmentsResets.RemoveAt(i);
				}
				UpdateHID_ButtonEvents(HID_Device);
			//}
		}
		else {
			bool bAssigmentChanged = HID_Device->tryApplyControllerAssigment();
			if (!checkEnhancedDeviceIsAssignedCorrectly(HID_Device)) {
				registerEnhancedDevice(HID_Device, HID_Device->ControllerAssigment);
				//Log_Success("controller assigment changed : " + FString::FromInt(HID_Device->ControllerAssigment));
			}
			/*if (bAssigmentChanged) {
				registerEnhancedDevice(HID_Device, HID_Device->ControllerAssigment);
				Log_Success("controller assigment changed : " + FString::FromInt(HID_Device->ControllerAssigment));
			}*/
			

			SendHID_AXIS_Events(HID_Device);
			HID_Device->needResetAssigments = false;
			HID_Device->isPaused = false;
		}
	}
}

void WM_Input_DevicesRAW::Log_Error(FString INFO) {
	if (InputManager->bEnableErrorLogs) {
		UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("other warn - > %s"), *INFO);
		if (InputManager->bCollectRuntimeLogs) {
			InputManager->Runtime_PluginErrors.Add(INFO);
		}

	}

}
void WM_Input_DevicesRAW::Log_Success(FString INFO) {
	if (InputManager->bEnableSucessLogs) {
		UE_LOG(LogWM_Input_DevicesRAW, Log, TEXT("sucess -> %s"), *INFO);
		if (InputManager->bCollectRuntimeLogs) {
			InputManager->Runtime_PluginSucess.Add(INFO);
		}
	}
}

void WM_Input_DevicesRAW::Log_HIDP_Error(int32 HID_STATUS, FString INFO) {
	if (InputManager->bEnableErrorLogs) {
		const FString hidpStatusString = HID_Dll_Ref.HIDP_STATUS_ToString(HID_STATUS);
		if (!hidpStatusString.Equals("Invalid HIDP_STATUS")) {
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID ERROR - > %s  inside:  %s   : %d"), *HID_Dll_Ref.HIDP_STATUS_ToString(HID_STATUS), *INFO, HID_STATUS);
			if (InputManager->bCollectRuntimeLogs) {
				InputManager->Runtime_PluginErrors.Add(HID_Dll_Ref.HIDP_STATUS_ToString(HID_STATUS) + " -> " + INFO);
			}
		}
	}
}

bool WM_Input_DevicesRAW::Check_HIDP(int32 HID_STATUS, FString INFO, UWM_Device_HID* HidDevice) {
	if (HID_STATUS == HIDP_STATUS_SUCCESS) {
		return true;
	}
	else {
		if (InputManager->bEnable_LOG_DEBUG_HIDP_PARSING) {
			FString DeviceI = FString::FromInt(HidDevice->DeviceInfo.VID) + ":" + FString::FromInt(HidDevice->DeviceInfo.PID);
			UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("HID ERROR - > %s  inside:  %s   :  %d  :  device -> %s"), *HID_Dll_Ref.HIDP_STATUS_ToString(HID_STATUS), *INFO, HID_STATUS, *DeviceI);
			InputManager->DEBUG.Broadcast(HID_Dll_Ref.HIDP_STATUS_ToString(HID_STATUS), INFO + " : " + DeviceI);
		}
		return false;
	}
}


//#define XINPUT_GAMEPAD_LEFT_TRIGGER    0x01220
//#define XINPUT_GAMEPAD_RIGHT_TRIGGER   0x02220

void WM_Input_DevicesRAW::DetectXInputSlot(UWM_Device_HID* HID_Device, TArray<ButtonMapping> &ButtonMappings) {
	// Look to see which XInput slot this device uses, based on approach used in SDL_hidapi_xbox360.c
	static const WORD s_arrButtons[] =
	{
		XINPUT_GAMEPAD_A, XINPUT_GAMEPAD_B, XINPUT_GAMEPAD_X, XINPUT_GAMEPAD_Y,
		XINPUT_GAMEPAD_LEFT_SHOULDER, XINPUT_GAMEPAD_RIGHT_SHOULDER, XINPUT_GAMEPAD_BACK, XINPUT_GAMEPAD_START,
		XINPUT_GAMEPAD_LEFT_THUMB, XINPUT_GAMEPAD_RIGHT_THUMB
	};
	const uint16 isNONZERO_Type = 1;

	WORD PressedButtons = 0;
	for (uint16 HID_PressedButton = 0; HID_PressedButton < 10; ++HID_PressedButton) {
		const uint16 ButtonIndex = GetButtonIndex(9, isNONZERO_Type + HID_PressedButton, ButtonMappings) + isNONZERO_Type; ///+1 FOR NONZERO
		if (ButtonIndex < HID_Device->ButtonsData.Num()) {
			if (HID_Device->ButtonsData[ButtonIndex].bIsPressed) {
				//Log_Success(FString::Printf(TEXT("%s: Button pressed: %d"), *HID_Device->BasicDeviceInfo.DeviceName, ButtonIndex));
				PressedButtons |= s_arrButtons[HID_PressedButton];
			}
		}
	}

	if (PressedButtons) {
		// Check to see if exactly one XInput controller matches the buttons that are pressed
		XINPUT_STATE state;
		int MatchedCount = 0;
		int MatchedXID = -1;
		for (int XID = 0; XID < XUSER_MAX_COUNT; ++XID) {
			if (Xinput_Dll_Ref.XInputGetState(XID, &state) == ERROR_SUCCESS && state.Gamepad.wButtons == PressedButtons) {
				++MatchedCount;
				MatchedXID = XID;
			}
		}
		if (MatchedCount == 1) {
			//Log_Success(FString::Printf(TEXT("%s: Found controller XInput slot: %d"), *HID_Device->BasicDeviceInfo.DeviceName, MatchedXID));
			HID_Device->X_I_D = MatchedXID;
			HID_Device->is_XInputSlotGuess = false;
		}
	}
}

void WM_Input_DevicesRAW::ProcessXInput(UWM_Device_HID * HID_Device) {
	//XINPUT
	/*DWORD xResult;
	XINPUT_STATE state;
	for (DWORD i = 0; i < 20; i++) {
	xResult = Xinput_Dll_Ref.XInputGetState(i, &state);

	if (xResult == ERROR_SUCCESS) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("xinput device sucess"));
	/*_XINPUT_CAPABILITIES f;
	XInputGetCapabilities()
	f.Gamepad.*/
	//xinput
	/*	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("numbuttons %s"), *FString::FromInt((int32)state.Gamepad.wButtons));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("sThumbLX %s"), *FString::FromInt((int32)state.Gamepad.sThumbLX));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("sThumbLY %s"), *FString::FromInt((int32)state.Gamepad.sThumbLY));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("sThumbRX %s"), *FString::FromInt((int32)state.Gamepad.sThumbRX));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("sThumbRY %s"), *FString::FromInt((int32)state.Gamepad.sThumbRY));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("bLeftTrigger %s"), *FString::FromInt((int32)state.Gamepad.bLeftTrigger));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("bRightTrigger %s"), *FString::FromInt((int32)state.Gamepad.bRightTrigger));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("dwPacketNumber %s"), *FString::FromInt((int32)state.dwPacketNumber));
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("INDEX %s"), *FString::FromInt(i));

	}
	else {
	//UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("xinput device nosucess"));
	}
	}*/
}

void WM_Input_DevicesRAW::registerEnhancedDevice(UWM_Device* device, int32 index) {
	FInputDeviceId deviceID = FInputDeviceId::CreateFromInternalId(device->GetUniqueID());
	FPlatformUserId userID = FPlatformUserId::CreateFromInternalId(index);
	FGenericPlatformInputDeviceMapper::Get().Internal_MapInputDeviceToUser(deviceID, userID, EInputDeviceConnectionState::Connected);
}

void WM_Input_DevicesRAW::unregisterEnhancedDevice(UWM_Device* device, int32 index) {
	 FInputDeviceId deviceID = FInputDeviceId::CreateFromInternalId(device->GetUniqueID());
	 FPlatformUserId userID = FPlatformUserId::CreateFromInternalId(index);
	FGenericPlatformInputDeviceMapper::Get().Internal_MapInputDeviceToUser(deviceID, userID, EInputDeviceConnectionState::Disconnected);
}

void WM_Input_DevicesRAW::remapEnhancedDevice(UWM_Device* device, int32 index) {
	FInputDeviceId deviceID = FInputDeviceId::CreateFromInternalId(device->GetUniqueID());
	FPlatformUserId userID = FPlatformUserId::CreateFromInternalId(index);
	FGenericPlatformInputDeviceMapper::Get().Internal_ChangeInputDeviceUserMapping(deviceID, userID, userID);
	FGenericPlatformInputDeviceMapper::Get().RemapControllerIdToPlatformUserAndDevice(index, userID, deviceID);
}

bool WM_Input_DevicesRAW::checkEnhancedDeviceIsAssignedCorrectly(UWM_Device* device) {
	const FInputDeviceId deviceID = FInputDeviceId::CreateFromInternalId(device->GetUniqueID());
	const FPlatformUserId userID = FPlatformUserId::CreateFromInternalId(device->ControllerAssigment);
	TArray<FInputDeviceId> devices;
	FGenericPlatformInputDeviceMapper::Get().GetAllInputDevicesForUser(userID, devices);
	if (devices.Contains(deviceID) ) {
		return true;
	}
	return false;
}





void WM_Input_DevicesRAW::GetAdvancedHID_DeviceInfo(RAWINPUT* raw, UWM_Device* Device) {

	//error reference pass data lost
	/*
	///here i can get that data !!!
	UINT dwSize = 256;
	TCHAR ridiDeviceName[256];
	UINT dwResult = GetRawInputDeviceInfo(raw->header.hDevice, RIDI_DEVICENAME, &ridiDeviceName, &dwSize);
	FString deviceName = TCHAR_TO_ANSI(ridiDeviceName);

	HANDLE HIDHandle = CreateFile(LPCWSTR(ridiDeviceName), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);
	wchar_t ManufacturerName[128];
	FString manufacturerstring = "none";
	if (HID_Dll_Ref.HidD_GetManufacturerString((HRAWINPUT)HIDHandle, &ManufacturerName, sizeof(ManufacturerName))) {
	manufacturerstring = TCHAR_TO_ANSI(ManufacturerName);
	manufacturerstring.TrimStartAndEndInline();
	//manufacturerstring.Trim();
	//manufacturerstring.TrimTrailing();
	if (PluginDEBUG) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("MANUFACTER NAME:  %s "), *manufacturerstring);
	}

	}
	JoystickDevice->DeviceInfo.ManufacturerString = manufacturerstring;
	CloseHandle(HIDHandle);*/

	/*UWM_Device_HID* HIDDevice = Cast<UWM_Device_HID>(Device);
	if (!HIDDevice->IsValidLowLevel()) { return; }


	UINT dwSize = 256;
	TCHAR ridiDeviceName[256];
	UINT dwResult = GetRawInputDeviceInfo(raw->header.hDevice, RIDI_DEVICENAME, &ridiDeviceName, &dwSize);
	FString deviceName = TCHAR_TO_ANSI(ridiDeviceName);

	HANDLE HIDHandle = CreateFile(LPCWSTR(ridiDeviceName), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);

	wchar_t ProductName[126];
	FString productString = "";
	if (HID_Dll_Ref.HidD_GetProductString((HRAWINPUT)HIDHandle, &ProductName, sizeof(ProductName))) {

	productString = TCHAR_TO_ANSI(ProductName);
	//productString.TrimStartAndEndInline();
	productString.Trim();
	productString.TrimTrailing();
	if (PluginDEBUG) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("PRODUCT NAME:   %s "), *productString);
	}
	}

	wchar_t ManufacturerName[128];
	FString manufacturerstring = "";
	if (HID_Dll_Ref.HidD_GetManufacturerString((HRAWINPUT)HIDHandle, &ManufacturerName, sizeof(ManufacturerName)) ) {
	manufacturerstring = TCHAR_TO_ANSI(ManufacturerName);
	//manufacturerstring.TrimStartAndEndInline();
	manufacturerstring.Trim();
	manufacturerstring.TrimTrailing();
	if (PluginDEBUG) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("MANUFACTER NAME:  %s "), *manufacturerstring);
	}
	}
	wchar_t SerialName[126];
	FString serialString = "";
	if (HID_Dll_Ref.HidD_GetSerialNumberString((HRAWINPUT)HIDHandle, &SerialName, sizeof(SerialName))) {
	serialString = TCHAR_TO_ANSI(SerialName);
	if (PluginDEBUG) {
	UE_LOG(LogWM_Input_DevicesRAW, Warning, TEXT("SERIAL NAME:   %s "), *serialString);
	}
	}

	CloseHandle(HIDHandle);

	HIDDevice->DeviceInfo.ProductString = productString;
	HIDDevice->DeviceInfo.ManufacturerString = manufacturerstring;*/
	//HIDDevice->DeviceInfo.serial = serialString;

}


/*InputManager->DEBUG.Broadcast("SIZE OF RAWINPUT HEADER", FString::FromInt(sizeof(RAWINPUTHEADER)));
InputManager->DEBUG.Broadcast("SIZE OF RAWINPUT ", FString::FromInt(sizeof(RAWINPUT)));
InputManager->DEBUG.Broadcast("SIZE OF PHIDP_PREPARSED_DATA ", FString::FromInt(sizeof(PHIDP_PREPARSED_DATA)));
InputManager->DEBUG.Broadcast("SIZE OF HIDP_CAPS ", FString::FromInt(sizeof(HIDP_CAPS)));
InputManager->DEBUG.Broadcast("SIZE OF ULONG ", FString::FromInt(sizeof(ULONG)));
InputManager->DEBUG.Broadcast("SIZE OF LONGLONG ", FString::FromInt(sizeof(LONGLONG)));
InputManager->DEBUG.Broadcast("SIZE OF int16 ", FString::FromInt(sizeof(int16)));
InputManager->DEBUG.Broadcast("SIZE OF uint16 ", FString::FromInt(sizeof(uint16)));
InputManager->DEBUG.Broadcast("SIZE OF uint32 ", FString::FromInt(sizeof(uint32)));
InputManager->DEBUG.Broadcast("SIZE OF int32 ", FString::FromInt(sizeof(int32)));
InputManager->DEBUG.Broadcast("SIZE OF SHORT ", FString::FromInt(sizeof(SHORT)));
InputManager->DEBUG.Broadcast("SIZE OF USHORT ", FString::FromInt(sizeof(USHORT)));
InputManager->DEBUG.Broadcast("SIZE OF CHAR ", FString::FromInt(sizeof(CHAR)));
InputManager->DEBUG.Broadcast("SIZE OF uint64_t ", FString::FromInt(sizeof(uint64_t)));
InputManager->DEBUG.Broadcast("SIZE OF int64_t ", FString::FromInt(sizeof(int64_t)));*/


//TSharedRef<FSlateVirtualUserHandle, ESPMode::ThreadSafe> handle =  slateApplication.FindOrCreateVirtualUser(playerIndex);
	//FKey const Key = FInputKeyManager::Get().GetKeyFromCodes(KeyCode, CharacterCode);

//#pragma optimize( "", on )

