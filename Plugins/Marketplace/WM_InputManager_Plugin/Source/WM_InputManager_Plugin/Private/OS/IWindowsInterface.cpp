// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"
#include "IWindowsInterface.h"
#include "Windows/WindowsApplication.h"
#include "Framework/Application/SlateApplication.h"


IWindowsInterface::IWindowsInterface() {
	GenericApplication = FSlateApplication::Get().GetPlatformApplication();
	WindowsApplication = (FWindowsApplication*)GenericApplication.Get();
	//WindowsApplication->GetMessageHandler();
	check(WindowsApplication);
	WindowsApplication->AddMessageHandler(*this);
	LoadHWNDTarget();
	/*const TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().GetActiveTopLevelWindow();
	        hwndTarget = (ParentWindow.IsValid() && (ParentWindow->GetNativeWindow().IsValid())) ?
		    hwndTarget = (HWND)ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;*/
	
}
void IWindowsInterface::LoadHWNDTarget() {
	const TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().GetActiveTopLevelWindow();
	hwndTarget = (ParentWindow.IsValid() && (ParentWindow->GetNativeWindow().IsValid())) ?
	hwndTarget = (HWND)ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;
	
	//ParentWindow->GetChildWindows()
	/*auto MyWindow = SNew(SWindow).ClientSize(FVector2D(640, 480));
	const TSharedPtr<SWindow> Wind = FSlateApplication::Get().AddWindow(MyWindow, true);
	hwndTarget = (HWND)Wind->GetNativeWindow()->GetOSWindowHandle();*/

	
}

void IWindowsInterface::StopModal() {
	FSlateApplication::Get().ExternalUIChange(false);
}


void IWindowsInterface::LoadHWNDTargetOverSteam() {
	 TArray<TSharedRef<SWindow>> ParentWindows = FSlateApplication::Get().GetTopLevelWindows();
	 if (ParentWindows.Num() > 1) {
		 const TSharedPtr<SWindow> ParentWindow2 = ParentWindows[1];
		 hwndTarget = (ParentWindow2.IsValid() && (ParentWindow2->GetNativeWindow().IsValid())) ?
			 hwndTarget = (HWND)ParentWindow2->GetNativeWindow()->GetOSWindowHandle() : nullptr;
	 }
	 else {
		 const TSharedPtr<SWindow> ParentWindow = ParentWindows[0];
		 hwndTarget = (ParentWindow.IsValid() && (ParentWindow->GetNativeWindow().IsValid())) ?
		 hwndTarget = (HWND)ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;
	 }
	 
	//const TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().GetActiveTopLevelWindow();
	


}

TArray<TSharedRef<SWindow>> IWindowsInterface::GetChildWindows() {
	//FSlateApplication::Get().window
	//TArray<TSharedRef<SWindow>> ChildWindows = FSlateApplication::Get().GetTopLevelWindows();
	TArray<TSharedRef<SWindow>> ChildWindows;
	 FSlateApplication::Get().GetAllVisibleWindowsOrdered(ChildWindows);
	return ChildWindows;
}

IWindowsInterface::~IWindowsInterface()
{
}