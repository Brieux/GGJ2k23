// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
/*
RIDEV_REMOVE is what you need.Call RegisterRawInputDevices with RIDEV_REMOVE and a NULL hwndTarget.

You can only register one window per device, per application, for raw input anyway.So when you remove it, it's global for the application and not just a specific window.

So when having multiple window frames, I'll have to register every time the window focus changes?

If you register your devices with the hwndTarget as NULL, the input messages will be sent to whichever window has keyboard focus.
*/
#include "WM_InputManager_PluginPrivatePCH.h"

#include "WM_InputManager_Plugin.h"
#include "WM_ControllerFunctionLib.h"
#include "IInputDeviceModule.h"
#include "IInputDevice.h"

#include "WM_Settings.h"
#include "WM_Input_DevicesRAW.h"


#define LOCTEXT_NAMESPACE "WM_InputManagerPlugin"


/// MOD
IMPLEMENT_MODULE(FWM_InputManager_Plugin, WM_InputManager_Plugin)

void FWM_InputManager_Plugin::StartupModule()
{

	IInputDeviceModule::StartupModule();
#if PLATFORM_WINDOWS
	///"LoadingPhase": "PostConfigInit",	
	/*const UWM_Settings* WM_Settings = GetDefault<UWM_Settings>();
	UWM_Settings* ManagerSettings = const_cast<UWM_Settings*>(WM_Settings);
	ManagerSettings->LoadCustomKeysList();*/

	if (!InputManager) {
		InputManager = NewObject<UWM_InputManager>(UWM_InputManager::StaticClass());
		InputManager->AddToRoot();
	}
	//THIS WILL BE LATER EXPANDED TO CLASS_INPUTKEY_TYPES if there will be more types of HID devices
	// DEVELOPERS WILL BE ABLE TO ADD THEIR own named number of buttons, axes, dpads KEYS IN ManagerSettings --> will need restart;
    // needed for some advanced joysticks having a lot of caps.

	const FName WM_KeyboardMenu(TEXT("WM_Keyboard"));
	EKeys::AddMenuCategoryDisplayInfo(WM_KeyboardMenu, LOCTEXT("HIDKeyboard", "HID Keyboard"), TEXT("GraphEditor.KeyEvent_16x"));
	Add_KeyboardInputType("HIDKeyboard_Enter", "Enter", FKeyDetails::ModifierKey, WM_KeyboardMenu, 0);      //LStick Horizontal   30    30
	
	const FName WM_GamepadMenu(TEXT("WM_GamepadController"));
	EKeys::AddMenuCategoryDisplayInfo(WM_GamepadMenu, LOCTEXT("HIDJoystick", "HID Joystick"), TEXT("GraphEditor.KeyEvent_16x"));
	/////easier key creation                                                                                                    //XBox One For Windows        //DUALSHOCK For Windows
	AddAxis_JoystickInputType("HIDJoystick_Axis1",    "A:1  (L)-X-Axis",  FKeyDetails::FloatAxis,        WM_GamepadMenu,   "A1");      //LStick Horizontal   30    30
	AddAxis_JoystickInputType("HIDJoystick_Axis2",    "A:2  (L)-Y-Axis",  FKeyDetails::FloatAxis,        WM_GamepadMenu,   "A2");      //LStick Vertical     31    31
	AddAxis_JoystickInputType("HIDJoystick_Axis3",    "A:3  (R)-X-Axis",  FKeyDetails::FloatAxis,        WM_GamepadMenu,   "A3");      //Left AnalogTrigger  33    32
	AddAxis_JoystickInputType("HIDJoystick_Axis4",    "A:4  (R)-Y-Axis",  FKeyDetails::FloatAxis,        WM_GamepadMenu,   "A4");	     //Right AnalogTrigger 34   35
	AddAxis_JoystickInputType("HIDJoystick_Axis5",    "A:5  (L)-AnalogTrigger", FKeyDetails::FloatAxis,  WM_GamepadMenu,   "A5");      // RStick Horizontal  32    33 //pedal
	AddAxis_JoystickInputType("HIDJoystick_Axis6",    "A:6  (R)-AnalogTrigger", FKeyDetails::FloatAxis,  WM_GamepadMenu,   "A6");      // RStick Vertical    35    34 //pedal
	AddAxis_JoystickInputType("HIDJoystick_Axis7",    "A:7  Slider1",     FKeyDetails::FloatAxis,        WM_GamepadMenu,   "S1");
	AddAxis_JoystickInputType("HIDJoystick_Axis8",    "A:8  Slider2",     FKeyDetails::FloatAxis,        WM_GamepadMenu,   "S2");
	AddAxis_JoystickInputType("HIDJoystick_Axis9",    "A:9  Dial",        FKeyDetails::FloatAxis,        WM_GamepadMenu,   "D1");
	AddAxis_JoystickInputType("HIDJoystick_Axis10",   "A:10 Wheel",		 FKeyDetails::FloatAxis,         WM_GamepadMenu,   "W1");
	AddAxis_JoystickInputType("HIDJoystick_Axis11",   "A:11 Rudder",	 FKeyDetails::FloatAxis,         WM_GamepadMenu,   "R1");
	AddAxis_JoystickInputType("HIDJoystick_Axis12",   "A:12 Throttle",   FKeyDetails::FloatAxis,         WM_GamepadMenu,   "T1");
	AddAxis_JoystickInputType("HIDJoystick_Axis13",   "A:13 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS1");
	AddAxis_JoystickInputType("HIDJoystick_Axis14",   "A:14 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS2");
	AddAxis_JoystickInputType("HIDJoystick_Axis15",   "A:15 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS3");
	AddAxis_JoystickInputType("HIDJoystick_Axis16",   "A:16 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS4");
	AddAxis_JoystickInputType("HIDJoystick_Axis17",   "A:17 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS5");
	AddAxis_JoystickInputType("HIDJoystick_Axis18",   "A:18 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS6");
	AddAxis_JoystickInputType("HIDJoystick_Axis19",   "A:19 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS7");
	AddAxis_JoystickInputType("HIDJoystick_Axis20",   "A:20 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS8");
	/*
	AddAxis_JoystickInputType("HIDJoystick_Axis21",   "A:21 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS9");
	AddAxis_JoystickInputType("HIDJoystick_Axis22",   "A:22 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS10");
	AddAxis_JoystickInputType("HIDJoystick_Axis23",   "A:23 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS11");
	AddAxis_JoystickInputType("HIDJoystick_Axis24",   "A:24 ", FKeyDetails::FloatAxis,  WM_GamepadMenu, "RS12");
	*/
	                                                                                                                                                              ///SONY
	AddButton_JoystickInputType("HIDJoystick_Button1",  "B:1  Face Left",	    FKeyDetails::GamepadKey, WM_GamepadMenu, 1);    //"A" 3                  //LEFT    
	AddButton_JoystickInputType("HIDJoystick_Button2",  "B:2  Face Down",       FKeyDetails::GamepadKey, WM_GamepadMenu, 2);    //"B" 1                 DOWN
	AddButton_JoystickInputType("HIDJoystick_Button3",  "B:3  Face Right",      FKeyDetails::GamepadKey, WM_GamepadMenu, 3);    //"X" 2                 RIGHT
	AddButton_JoystickInputType("HIDJoystick_Button4",  "B:4  Face Up",         FKeyDetails::GamepadKey, WM_GamepadMenu, 4);    //"Y" 4                 UP       
	AddButton_JoystickInputType("HIDJoystick_Button5",  "B:5  (L)-Shoulder",    FKeyDetails::GamepadKey, WM_GamepadMenu, 5);    //"L-Shoulder"          "L-Shoulder"
	AddButton_JoystickInputType("HIDJoystick_Button6",  "B:6  (R)-Shoulder",    FKeyDetails::GamepadKey, WM_GamepadMenu, 6);    //"R-Shoulder"          "R-Shoulder"
	AddButton_JoystickInputType("HIDJoystick_Button7",  "B:7  (L)-Trigger",     FKeyDetails::GamepadKey, WM_GamepadMenu, 7);    //"Back"                LTRIGGER 
	AddButton_JoystickInputType("HIDJoystick_Button8",  "B:8  (R)-Trigger",     FKeyDetails::GamepadKey, WM_GamepadMenu, 8);    //"Start"               RTRIGGER 
	AddButton_JoystickInputType("HIDJoystick_Button9",  "B:9  Select/Back",     FKeyDetails::GamepadKey, WM_GamepadMenu, 9);    //"L-Stick-Click"       Select/Back"
	AddButton_JoystickInputType("HIDJoystick_Button10", "B:10 Start/Forward",   FKeyDetails::GamepadKey, WM_GamepadMenu, 10);   //"R-Stick-Click"       Start/Forward"
	AddButton_JoystickInputType("HIDJoystick_Button11", "B:11 (L)-StickButton", FKeyDetails::GamepadKey, WM_GamepadMenu, 11);  //                       (L)Stick - BTN
	AddButton_JoystickInputType("HIDJoystick_Button12", "B:12 (R)-StickButton", FKeyDetails::GamepadKey, WM_GamepadMenu, 12);   //                      (R)Stick - BTN
	AddButton_JoystickInputType("HIDJoystick_Button13", "B:13 Home",		    FKeyDetails::GamepadKey, WM_GamepadMenu, 13);                          // Home

	AddButton_JoystickInputType("HIDJoystick_Button14", "B:14", FKeyDetails::GamepadKey, WM_GamepadMenu, 14);//                                       //touchpad
	AddButton_JoystickInputType("HIDJoystick_Button15", "B:15", FKeyDetails::GamepadKey, WM_GamepadMenu, 15);
	AddButton_JoystickInputType("HIDJoystick_Button16", "B:16", FKeyDetails::GamepadKey, WM_GamepadMenu, 16);
	AddButton_JoystickInputType("HIDJoystick_Button17", "B:17", FKeyDetails::GamepadKey, WM_GamepadMenu, 17);
	AddButton_JoystickInputType("HIDJoystick_Button18", "B:18", FKeyDetails::GamepadKey, WM_GamepadMenu, 18);
	AddButton_JoystickInputType("HIDJoystick_Button19", "B:19", FKeyDetails::GamepadKey, WM_GamepadMenu, 19);
	AddButton_JoystickInputType("HIDJoystick_Button20", "B:20", FKeyDetails::GamepadKey, WM_GamepadMenu, 20);
	AddButton_JoystickInputType("HIDJoystick_Button21", "B:21", FKeyDetails::GamepadKey, WM_GamepadMenu, 21);
	AddButton_JoystickInputType("HIDJoystick_Button22", "B:22", FKeyDetails::GamepadKey, WM_GamepadMenu, 22);
	AddButton_JoystickInputType("HIDJoystick_Button23", "B:23", FKeyDetails::GamepadKey, WM_GamepadMenu, 23);
	AddButton_JoystickInputType("HIDJoystick_Button24", "B:24", FKeyDetails::GamepadKey, WM_GamepadMenu, 24);
	AddButton_JoystickInputType("HIDJoystick_Button25", "B:25", FKeyDetails::GamepadKey, WM_GamepadMenu, 25);
	AddButton_JoystickInputType("HIDJoystick_Button26", "B:26", FKeyDetails::GamepadKey, WM_GamepadMenu, 26);
	AddButton_JoystickInputType("HIDJoystick_Button27", "B:27", FKeyDetails::GamepadKey, WM_GamepadMenu, 27);
	AddButton_JoystickInputType("HIDJoystick_Button28", "B:28", FKeyDetails::GamepadKey, WM_GamepadMenu, 28);
	AddButton_JoystickInputType("HIDJoystick_Button29", "B:29", FKeyDetails::GamepadKey, WM_GamepadMenu, 29);
	AddButton_JoystickInputType("HIDJoystick_Button30", "B:30", FKeyDetails::GamepadKey, WM_GamepadMenu, 30);
	AddButton_JoystickInputType("HIDJoystick_Button31", "B:31", FKeyDetails::GamepadKey, WM_GamepadMenu, 31);
	AddButton_JoystickInputType("HIDJoystick_Button32", "B:32", FKeyDetails::GamepadKey, WM_GamepadMenu, 32);
	AddButton_JoystickInputType("HIDJoystick_Button33", "B:33", FKeyDetails::GamepadKey, WM_GamepadMenu, 33);
	AddButton_JoystickInputType("HIDJoystick_Button34", "B:34", FKeyDetails::GamepadKey, WM_GamepadMenu, 34);
	AddButton_JoystickInputType("HIDJoystick_Button35", "B:35", FKeyDetails::GamepadKey, WM_GamepadMenu, 35);
	AddButton_JoystickInputType("HIDJoystick_Button36", "B:36", FKeyDetails::GamepadKey, WM_GamepadMenu, 36);
	AddButton_JoystickInputType("HIDJoystick_Button37", "B:37", FKeyDetails::GamepadKey, WM_GamepadMenu, 37);
	AddButton_JoystickInputType("HIDJoystick_Button38", "B:38", FKeyDetails::GamepadKey, WM_GamepadMenu, 38);
	AddButton_JoystickInputType("HIDJoystick_Button39", "B:39", FKeyDetails::GamepadKey, WM_GamepadMenu, 39);
	AddButton_JoystickInputType("HIDJoystick_Button40", "B:40", FKeyDetails::GamepadKey, WM_GamepadMenu, 40);
	AddButton_JoystickInputType("HIDJoystick_Button41", "B:41", FKeyDetails::GamepadKey, WM_GamepadMenu, 41);
	AddButton_JoystickInputType("HIDJoystick_Button42", "B:42", FKeyDetails::GamepadKey, WM_GamepadMenu, 42);


	/*
	AddButton_JoystickInputType("HIDJoystick_Button43", "B:43", FKeyDetails::GamepadKey, WM_GamepadMenu, 43);
	AddButton_JoystickInputType("HIDJoystick_Button44", "B:44", FKeyDetails::GamepadKey, WM_GamepadMenu, 44);
	AddButton_JoystickInputType("HIDJoystick_Button45", "B:45", FKeyDetails::GamepadKey, WM_GamepadMenu, 45);
	AddButton_JoystickInputType("HIDJoystick_Button46", "B:46", FKeyDetails::GamepadKey, WM_GamepadMenu, 46);
	AddButton_JoystickInputType("HIDJoystick_Button47", "B:47", FKeyDetails::GamepadKey, WM_GamepadMenu, 47);
	AddButton_JoystickInputType("HIDJoystick_Button48", "B:48", FKeyDetails::GamepadKey, WM_GamepadMenu, 48);
	AddButton_JoystickInputType("HIDJoystick_Button49", "B:49", FKeyDetails::GamepadKey, WM_GamepadMenu, 49);
	AddButton_JoystickInputType("HIDJoystick_Button50", "B:50", FKeyDetails::GamepadKey, WM_GamepadMenu, 50);
	*/

	AddDPAD_JoystickInputType("HIDJoystick_DPAD",  "DPAD",             FKeyDetails::GamepadKey, WM_GamepadMenu,  "39(0)");
	AddDPAD_JoystickInputType("HIDJoystick_DPAD2", "DPAD:2",           FKeyDetails::GamepadKey, WM_GamepadMenu,  "39(1)");
	AddDPAD_JoystickInputType("HIDJoystick_DPAD3", "DPAD:3",           FKeyDetails::GamepadKey, WM_GamepadMenu,  "39(2)");
	
	//I have added THREE because some fligsticks have as i found on some forums



	//HERE ADD AS ANY DPADS as you need ,, some flightsticks have 2or3                                --> here change value in brackets to 2 in case u have DPAD3
	
	////SKIPPED FOR LATER VERSION in device settings,, developer will add as many keys they need with default binding
	//--> NEEDS RESTART EDITOR
	/*UWM_Settings* ManagerSettings = GetMutableDefault<UWM_Settings>();
	for (auto&Each : ManagerSettings->CustomAxis) {
		//const FName categoryName(Each.Value.CategoryName);
		AddButton_JoystickInputType(Each.Value.InputName, Each.Value.InputDisplayName, FKeyDetails::GamepadKey, WM_GamepadController, 14);
	}*/
#endif
}

void FWM_InputManager_Plugin::ShutdownModule() {
	//not shared ptr yet -> uncomment
	/*if (InputManager && InputManager->IsValidLowLevel()) {
		InputManager->ConditionalBeginDestroy();
		InputManager = nullptr;
	}*/
}


void FWM_InputManager_Plugin::AddAxis_JoystickInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, FString UniqueStringIdentifier) {
	UWM_Settings* ManagerSettings = GetMutableDefault<UWM_Settings>();
	FString GamepadPrefix = ManagerSettings->Hid_GamepadNaming;
	InputText = GamepadPrefix + " " + InputText;

	FKey Key = FKey(FName(*InputName));

	FFormatNamedArguments arguments;
	FText a = FText::FromName(FName(*InputName));
	FText b = FText::FromName(FName(*InputText));
	arguments.Add(TEXT("item"), a);
	arguments.Add(TEXT("target"), b);
	EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

	InputManager->HIDJoystick_Axes.Add( Key, UniqueStringIdentifier );
	InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::Axis);
	//--> rinitialize structure;
	
}

void FWM_InputManager_Plugin::AddButton_JoystickInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, int32 UniqueStringIdentifier) {
	UWM_Settings* ManagerSettings = GetMutableDefault<UWM_Settings>();
	FString GamepadPrefix = ManagerSettings->Hid_GamepadNaming;
	InputText = GamepadPrefix + " " + InputText;


	FKey Key = FKey(FName(*InputName));
	FFormatNamedArguments arguments;
	FText a = FText::FromName(FName(*InputName));
	FText b = FText::FromName(FName(*InputText));
	arguments.Add(TEXT("item"), a);
	arguments.Add(TEXT("target"), b);
	EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

	InputManager->HIDJoystick_Buttons.Add(Key, "B" + FString::FromInt(UniqueStringIdentifier));
	InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::Button);

	if (!InputManager->HidInputKeys_ByClass.Contains(UWM_HID_Joystick::StaticClass())){
		InputManager->HidInputKeys_ByClass.Add(UWM_HID_Joystick::StaticClass(), FHidKeysByClass());
     } 
	//--> rinitialize structure;
}

void FWM_InputManager_Plugin::AddDPADGamepadInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, FString UniqueStringIdentifier) {
	UWM_Settings* ManagerSettings = GetMutableDefault<UWM_Settings>();
	FString GamepadPrefix = ManagerSettings->Hid_GamepadNaming;
	InputText = GamepadPrefix + " " + InputText;

	FKey Key = FKey(FName(*InputName));

	FFormatNamedArguments arguments;
	FText a = FText::FromName(FName(*InputName));
	FText b = FText::FromName(FName(*InputText));
	arguments.Add(TEXT("item"), a);
	arguments.Add(TEXT("target"), b);
	EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

	InputManager->HIDJoystick_DPADButtons.Add(Key, "DPAD-" + UniqueStringIdentifier);
	//InputManager->HIDJoystick_Buttons.Add(Key, "DPAD-" + UniqueStringIdentifier);
	InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::DPAD);
	//--> rinitialize structure;



}






void FWM_InputManager_Plugin::AddDPAD_JoystickInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, FString UniqueStringIdentifier) {
	UWM_Settings* ManagerSettings = GetMutableDefault<UWM_Settings>();
	FString GamepadPrefix = ManagerSettings->Hid_GamepadNaming;
	InputText = GamepadPrefix + " " + InputText;

	const FString CollectionName = InputName;
	FDPADCollection DPAD;
	const FString BINDING = "HAT-" + UniqueStringIdentifier;
	DPAD.BINDING = BINDING;


	for (int i = 0; i < 4; i++) {
		//FName tempInputName = InputName;
		//FName tempInputText = InputText;

		if (i == 0) {
			///DONT DO SPACES IN FIRST LOCTEXT text
			FName tempInputName = FName(*(InputName + "UP"));
			FName tempInputText = FName(*(InputText + " UP"));

			FKey Key = FKey(FName(tempInputName));
			FFormatNamedArguments arguments;
			FText a = FText::FromName(tempInputName);
			FText b = FText::FromName(tempInputText);
			arguments.Add(TEXT("item"), a);
			arguments.Add(TEXT("target"), b);
			EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

			DPAD.UP = Key;
			InputManager->HIDJoystick_DPADButtons.Add(Key, CollectionName);
			InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::DPAD);
		}
		else if (i == 1) {
			FName tempInputName = FName(*(InputName + "DOWN"));
			FName tempInputText = FName(*(InputText + " DOWN"));
			FKey Key = FKey(FName(tempInputName));
			FFormatNamedArguments arguments;
			FText a = FText::FromName(tempInputName);
			FText b = FText::FromName(tempInputText);
			arguments.Add(TEXT("item"), a);
			arguments.Add(TEXT("target"), b);
			EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

			DPAD.DOWN = Key;
			InputManager->HIDJoystick_DPADButtons.Add(Key, CollectionName);
			InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::DPAD);
		}
		else if (i == 2) {
			FName tempInputName = FName(*(InputName + "LEFT"));
			FName tempInputText = FName(*(InputText + " LEFT"));
			FKey Key = FKey(FName(tempInputName));
			FFormatNamedArguments arguments;
			FText a = FText::FromName(tempInputName);
			FText b = FText::FromName(tempInputText);
			arguments.Add(TEXT("item"), a);
			arguments.Add(TEXT("target"), b);
			EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

			DPAD.LEFT = Key;
			InputManager->HIDJoystick_DPADButtons.Add(Key, CollectionName);
			InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::DPAD);
		}
		else if (i == 3) {
			FName tempInputName = FName(*(InputName + "RIGHT"));
			FName tempInputText = FName(*(InputText + " RIGHT"));
			FKey Key = FKey(FName(tempInputName));
			FFormatNamedArguments arguments;
			FText a = FText::FromName(tempInputName);
			FText b = FText::FromName(tempInputText);
			arguments.Add(TEXT("item"), a);
			arguments.Add(TEXT("target"), b);
			EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

			DPAD.RIGHT = Key;
			InputManager->HIDJoystick_DPADButtons.Add(Key, CollectionName);
			InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::DPAD);
		}

	}

	InputManager->HIDJoystick_DPADs.Add(CollectionName, DPAD);
	InputManager->HIDJoystick_DPADDefaults.Add(CollectionName, BINDING);

}



void FWM_InputManager_Plugin::Add_KeyboardInputType(FString InputName, FString InputText, uint8 keyFlags, FName MenuCategory, int32 UniqueStringIdentifier) {
	UWM_Settings* ManagerSettings = GetMutableDefault<UWM_Settings>();
	FString KeyboardPrefix = ManagerSettings->Hid_KeyboardNaming;
	InputText = KeyboardPrefix + " " + InputText;


	FKey Key = FKey(FName(*InputName));
	FFormatNamedArguments arguments;
	FText a = FText::FromName(FName(*InputName));
	FText b = FText::FromName(FName(*InputText));
	arguments.Add(TEXT("item"), a);
	arguments.Add(TEXT("target"), b);
	EKeys::AddKey(FKeyDetails(Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), keyFlags, MenuCategory));

	/*InputManager->HIDJoystick_Buttons.Add(Key, "B" + FString::FromInt(UniqueStringIdentifier));
	InputManager->HIDJoystick_KeysByType.Add(Key, EWM_GamepadKeyType::Button);

	if (!InputManager->HidInputKeys_ByClass.Contains(UWM_HID_Joystick::StaticClass())) {
		InputManager->HidInputKeys_ByClass.Add(UWM_HID_Joystick::StaticClass(), FHidKeysByClass());
	}*/
	
}
TSharedPtr<class IInputDevice> FWM_InputManager_Plugin::CreateInputDevice(const TSharedRef< FGenericApplicationMessageHandler >& MessageHandler)
{
#if PLATFORM_WINDOWS

	InputDevices_Interface = MakeShareable(new WM_Input_DevicesRAW(MessageHandler));
	return InputDevices_Interface;
	/*const UWM_Settings* ManagerSettings = GetDefault<UWM_Settings>();
	if (ManagerSettings && ManagerSettings->InitAPI_Manually) {
		PendingMessageHandler = MessageHandler;
	}
	else {
		
	}*/
#endif
}


WM_InputDevices::WM_InputDevices(const TSharedRef< FGenericApplicationMessageHandler >& MessageHandler)
	: MessageHandler(MessageHandler)
{
};


#undef LOCTEXT_NAMESPACE