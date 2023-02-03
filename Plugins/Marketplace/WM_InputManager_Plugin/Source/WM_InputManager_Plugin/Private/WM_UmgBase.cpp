// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"
#include "WM_UmgBase.h"

#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"


/*void UWM_UmgBase::ONDevConnected_Implementation() {
	
}*/

void UWM_UmgBase::NativeConstruct() {
	Super::NativeConstruct();
	

}
/*
TSharedRef<SWidget> UWM_UmgBase::RebuildWidget()
{
	

		class UPanelWidget * RootWidget = Cast<UPanelWidget>(GetRootWidget());
	if (!RootWidget || RootWidget->IsValidLowLevel()) {
		RootWidget = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
		UCanvasPanelSlot* RootWidgetSlot = Cast<UCanvasPanelSlot>(RootWidget->Slot);
		if (RootWidgetSlot) {
			RootWidgetSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
			RootWidgetSlot->SetOffsets(FMargin(0.f, 0.f));
			RootWidgetSlot->Content->bHiddenInDesigner = false;
			//RootWidgetSlot->Content->RebuildWidget();
		}
	
		WidgetTree->RootWidget = RootWidget;
		WidgetTree->RootWidget->bHiddenInDesigner = false;
		
	}
	//RebuildWidget();
	
	TSharedRef<SWidget> Widget = Super::RebuildWidget();
	if (RootWidget && WidgetTree) {
		//UWidget * RootWidget = Cast<UWidget>(GetRootWidget());
		ExampleButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MyButton"));
		
		//ExampleButton->OnClicked.AddDynamic(this, &UWM_UmgBase::OnButtonClicked);
		
		RootWidget->AddChild(ExampleButton);
		
		//WidgetTree->FindWidget(TEXT("WIDGET_NAME");
	}

	return Widget;
}*/