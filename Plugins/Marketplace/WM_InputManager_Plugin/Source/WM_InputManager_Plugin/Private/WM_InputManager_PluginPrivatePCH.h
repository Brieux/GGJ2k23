// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 



//#include "Engine.h"
//#include "UnrealEd.h"

//I want to avoid monolithic build
//#include "EngineMinimal.h"
//N_mono
#include "Delegates/Delegate.h"
#include "Delegates/DelegateBase.h"
#include "Delegates/DelegateCombinations.h"
#include "Delegates/DelegateInstanceInterface.h"
#include "Delegates/DelegateInstancesImpl.h"
#include "Containers/Map.h" 
#include "CoreUObject/Public/UObject/NoExportTypes.h"
#include "CoreUObject/Public/Templates/Casts.h" //TSubclassOf
#include "CoreUObject/Public/Templates/SubclassOf.h"
#include "CoreUObject/Public/UObject/UObjectIterator.h"
#include "Kismet/GameplayStatics.h"



#include "CoreMinimal.h"
#include "IWM_InputManager_Plugin.h"
#include "WM_InputManager_Plugin.h"


///Internal includes
#include "Devices/MEM/WM_HID_Joystick_SAV.h"
#include "Devices/WM_Device.h"
#include "Devices/WM_Device_Mouse.h"
#include "Devices/WM_Device_Keyboard.h"
#include "Devices/WM_Device_HID.h"
#include "Devices/WM_HID_Joystick.h"

#include "WM_InputManager.h"
#include "WM_ControllerFunctionLib.h"


