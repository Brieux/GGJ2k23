// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WM_UmgBase.generated.h"

/**
 * 
 */
UCLASS()
class WM_INPUTMANAGER_PLUGIN_API UWM_UmgBase : public UUserWidget
{
	GENERATED_BODY()
public:


		/*UFUNCTION(BlueprintNativeEvent)
		void ONDevConnected();*/
	
		virtual void NativeConstruct() override;
		
	/*	UPROPERTY()
		class UButton* ExampleButton;*/
		//virtual TSharedRef<SWidget> RebuildWidget();

		//NOT USED YET AS THERE IS SOME Native UUserWidget upgrade needed
};
