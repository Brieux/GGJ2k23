// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericPlatform/GenericApplicationMessageHandler.h"

#include "WM_InputManager_Plugin.h"
#include "WM_ControllerFunctionLib.generated.h"


UENUM(BlueprintType)
enum EWM_InputManagerMode
{
	off = 0,
	Config = 1,
	Assign = 2,
};

UENUM(BlueprintType)
enum EWM_GamepadKeyType
{
	NoGamepadKey = 0,
	Axis = 1,
	Button = 2,
	DPAD = 3,
};



UENUM(BlueprintType)
enum EWM_KeyTriggerState
{   
	NoTrigger = 0,
	WasJustPressed = 1,
	WasJustReleased = 2,
};



UENUM(BlueprintType)
enum EWM_DeviceType
{
	No_Device = 0,
	JoystickOrGamepad = 1,
	Keyboard = 2,
	Mouse = 3,	
};

USTRUCT(BlueprintType)
struct WM_INPUTMANAGER_PLUGIN_API FDPADCollection
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadOnly, Category = "RawInput")
		FKey UP;
	UPROPERTY(BlueprintReadOnly, Category = "RawInput")
		FKey DOWN;
	UPROPERTY(BlueprintReadOnly, Category = "RawInput")
		FKey LEFT;
	UPROPERTY(BlueprintReadOnly, Category = "RawInput")
		FKey RIGHT;
	UPROPERTY(BlueprintReadOnly, Category = "RawInput")
		FString BINDING;
};

UENUM(BlueprintType)
enum class EWM_InputManagerStatus : uint8
{
	WM_NoStatus    UMETA(DisplaName = "None"),
	WaitingForButtonPress     UMETA(DisplaName = "WaitingForButtonPress"),
	WaitingForAxisResponse    UMETA(DisplaName = "WaitingForAxleResponse")
};
ENUM_CLASS_FLAGS(EWM_InputManagerStatus);


UCLASS()
class WM_INPUTMANAGER_PLUGIN_API UWM_ControllerFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	   /*WM Input Manager - All Rights Reserved by RalpEl (C) 2017 " */
	    UFUNCTION(BlueprintPure, Category = "WM")
		static UWM_InputManager* Get_WM_InputManager();
	
	    static float CovnertToBitSize(float value, uint16 bytesize, bool UNSIGNED_val);
		static FString DwordToHex(DWORD inDword);
		static FString DwordToHexString(DWORD inDword);
	
		/*UFUNCTION(BlueprintPure, Category = "WM")
		static FString MakeAxisStr(FString inVal);*/

		
		
};




