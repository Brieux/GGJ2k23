// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"

#include "WM_Settings.h"
#include "WM_ControllerFunctionLib.h"

#include "WM_InputManager_Plugin.h"
#include "WM_Input_DevicesRAW.h"

#include "IInputDeviceModule.h"
#include "IInputDevice.h"
#include "Misc/Base64.h"



#if PLATFORM_WINDOWS
	#include "WM_Input_DevicesRAW.h"
#endif


///to init structure
/*FGamepadConfigurationStruct::FGamepadConfigurationStruct()
{
	GamepadMode.AddDefaulted(1);
}
FGamepadConfigurationMode::FGamepadConfigurationMode()
{

}*/


UWM_Settings::UWM_Settings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//V2ParserDevices.Add("VID_045E&PID_02A1");
	//V2ParserDevices.Add("VID_18D1&PID_9400");
}
FName UWM_Settings::GetCategoryName() const
{
	return TEXT("Plugins");
}

#if WITH_EDITOR
FText UWM_Settings::GetSectionText() const
{
	return NSLOCTEXT("WM_InputManager_PluginModule", "WM_InputManagerSection", "WM_InputManager Settings");
}


/*void UWM_Settings::LoadCustomKeysList() {
	FWM_InputManager_Plugin* WM_InputManager_Plugin = static_cast<FWM_InputManager_Plugin*>(&FWM_InputManager_Plugin::Get());
	const FName WM_GamepadController(TEXT("WM_GamepadController"));
	for (auto&Each : CustomAxis) {
		bool contains = false;
		TArray<FKey> a;
		EKeys::GetAllKeys(a);
		for (int32 i = 0; i < a.Num(); i++) {
			if (a[i].GetFName() == Each.Value.CategoryName) {
				contains = true;
			}
		}
		if (!contains) {
			//EKeys::AddMenuCategoryDisplayInfo(WM_GamepadController, LOCTEXT("WM_GamepadController", "WM_GamepadController"), TEXT("GraphEditor.KeyEvent_16x"));
			WM_InputManager_Plugin->AddAxis_JoystickInputType(Each.Value.InputName, Each.Value.InputDisplayName, FKeyDetails::FloatAxis, WM_GamepadController, "55(0)");
		
		}

	}
	EKeys::Initialize();
}*/

void UWM_Settings::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.GetPropertyName() == "SupportMe") {
		FPlatformProcess::LaunchURL(TEXT("https://www.paypal.com/donate/?business=MM3NKM4BXVEK8&no_recurring=0&item_name=Donate+creator+of+WM+Input+Manager+plugin+to+get+better+support+%26+features&currency_code=EUR"), NULL, NULL);
		SupportMe = false;
	}
	

	/*TArray<uint8> receivedBuff;
	FBase64::Decode("", receivedBuff);
	FString url = FString(reinterpret_cast<const char*>(receivedBuff.GetData()));
	const TCHAR* urlTCHAR = *url;*/


//	LoadCustomKeysList();	
	/*FString newproperty = "shit";
	const FKey a;
	TMap<int32, FKey> abc;
	abc.Add(0, FKey());*/

	/*for (auto&Each : CustomAxis) {
		const FName categoryName(Each.Value.CategoryName);
		//const FName categoryDisplayName(Each.Value.CategoryDisplayName);
		Each.Value.Key = FKey(FName(Each.Value.InputName));
		//EKeys::AddMenuCategoryDisplayInfo(categoryName, LOCTEXT(categoryName, categoryDisplayName), TEXT("GraphEditor.KeyEvent_16x"));
		//EKeys::AddKey(FKeyDetails(Each.Value.Key, LOCTEXT(Each.Value.InputName, Each.Value.InputDisplayName), FKeyDetails::GamepadKey | FKeyDetails::FloatAxis, categoryName));
		FFormatNamedArguments arguments;
		FText a = FText::FromName(Each.Value.InputName);
		FText b = FText::FromName(Each.Value.InputDisplayName);
		arguments.Add(TEXT("item"), a);
		arguments.Add(TEXT("target"), b);
		EKeys::AddKey(FKeyDetails(Each.Value.Key, FText::Format(LOCTEXT("{item}", "{target}"), arguments), FKeyDetails::FloatAxis, categoryName));
		
	//	EKeys::AddMenuCategoryDisplayInfo(categoryName, Each.Value.CategoryDisplayName, TEXT("GraphEditor.KeyEvent_16x"));
		//EKeys::AddKey(FKeyDetails(Each.Value.Key, Each.Value.InputDisplayName, FKeyDetails::GamepadKey | FKeyDetails::FloatAxis, categoryName));
	
	}*/
	
#if PLATFORM_WINDOWS
//	WM_Input_DevicesRAW* WM_InputManager_Plugin = static_cast<WM_Input_DevicesRAW*>(static_cast<FWM_InputManager_Plugin*>(&FWM_InputManager_Plugin::Get())->GetRawInputDevice().Get());

	
#endif
}
#endif



