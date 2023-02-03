// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WM_Settings.h"

#include "WM_Device_Keyboard.generated.h"

USTRUCT(BlueprintType)
struct FWM_Keyboard_DeviceInfo
{
	GENERATED_USTRUCT_BODY()

	int32 dwType;
	int32 SubType;
	int32 KeyboardMode;
	int32 NumberOfFunctionKeys;
	int32 NumberOfIndicators;
	int32 NumberOfKeys;


	FWM_Keyboard_DeviceInfo() {

	}

};
//UCLASS(Blueprintable,nonTransient)
UCLASS(Blueprintable,nonTransient)
class WM_INPUTMANAGER_PLUGIN_API UWM_Device_Keyboard : public UWM_Device
{
	GENERATED_BODY()
public:
	UWM_Device_Keyboard(const FObjectInitializer& ObjectInitializer);
	

	virtual void BeginDevice() override;
	virtual void DestroyDevice() override;

};
