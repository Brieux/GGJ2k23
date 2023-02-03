// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WM_Settings.h"

#include "WM_Device_Mouse.generated.h"



//UCLASS(Blueprintable,nonTransient)
UCLASS(Blueprintable,nonTransient)
class WM_INPUTMANAGER_PLUGIN_API UWM_Device_Mouse : public UWM_Device
{
	GENERATED_BODY()
public:
	UWM_Device_Mouse(const FObjectInitializer& ObjectInitializer);
	
	virtual void BeginDevice() override;
	virtual void DestroyDevice() override;
};
