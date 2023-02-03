// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#include "WM_InputManager_PluginPrivatePCH.h"
#include "WM_InputManager_Plugin.h"
#include "WM_InputManagerBase.h"

#include "WM_ControllerFunctionLib.h"
#if PLATFORM_WINDOWS
#include "WM_Input_DevicesRAW.h"
#endif
#include "WM_Settings.h"
#include "Engine/World.h"


#include "Components/InputComponent.h"



#include "Engine/LocalPlayer.h"
#include "EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "EnhancedInput/Public/InputMappingContext.h"
#include "EnhancedInput/Public/EnhancedInputComponent.h"
#include "EnhancedInput/Public/EnhancedPlayerInput.h"

#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputPlatformSettings.h"
#include "EnhancedInputLibrary.h"



DEFINE_LOG_CATEGORY_STATIC(LogWM_InputManager, Log, All);

UWM_InputManagerBase::UWM_InputManagerBase(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{

	//hackToGet Any Static Class and write to it
	const UWM_Settings* WM_Settings = GetDefault<UWM_Settings>();
	WM_SettingsRW = const_cast<UWM_Settings*>(WM_Settings);

	InputSettings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	//ActionsMappings = InputSettings->ActionMappings;
	//AxisMappings = InputSettings->AxisMappings;
	PlayerInput_Ref = const_cast<UPlayerInput*>(GetDefault<UPlayerInput>());

//	PluginPath = *(FPaths::GamePluginsDir() + "/WMInputManagerPlugin/Content/WM_Config/HiddDrivers/");
//	DriversContentPath = *(FPaths::GameContentDir() + "/WM_Config/HiddDrivers/");


}

void UWM_InputManagerBase::BeginWorldPlay() {
	On_WM_InputManagerBegin.Broadcast();
	UE_LOG(LogWM_InputManager, Log, TEXT("BEGIN WORLD PLAY:"));
}
void UWM_InputManagerBase::EndWorldPlay() {
	OnDeviceConnected.Clear();
	OnDeviceDisconnected.Clear();
	OnJoystickButtonTrigger.Clear();
	OnNumDevicesChanged.Clear();
	OnDeviceSelected.Clear();
	OnButtonKeyPressed.Clear();
	OnButtonKeyReleased.Clear();
	OnSwitchManagerMode.Clear();
	OnSetNumberOfPlayers.Clear();
	On_WM_InputManagerBegin.Clear();
	On_WM_InputManagerEnd.Broadcast();
	On_WM_InputManagerEnd.Clear();
	OnSwitchManagerModeEnum.Clear();
	ManagerModeEnum = EWM_InputManagerMode::off;

UE_LOG(LogWM_InputManager, Log, TEXT("END WORLD PLAY:"));
}




void UWM_InputManagerBase::Tick() {

	SViewport* viewport = (SViewport*)FSlateApplication::Get().GetGameViewport().Get();
	if (viewport) {
		hasSViewport = true;
	}
	else {
		hasSViewport = false;
	}


	gameWorld = NULL;
	bool hasplay = false;
	for (TObjectIterator<UWorld> Itr; Itr; ++Itr) {
		UWorld* world = *Itr;
		if (world->IsValidLowLevel()) {
			if (world->WorldType != EWorldType::Editor && world->WorldType != EWorldType::None) {
				if (world->bBegunPlay) {
					hasplay = true;
					gameWorld = world;
				}
			}
		}
	}

	if (hasplay) {
		if (!IsPlaying) {
			IsPlaying = true;
			BeginWorldPlay();
		}
	}
	else {
		if (IsPlaying) {
			IsPlaying = false;
			EndWorldPlay();
		}
	}



	/*UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());

	UEnhancedPlayerInput* PlayerInput = Subsystem->GetPlayerInput();*/

	
	bool bExperiment = false;
	if (bExperiment) {
		if (IsPlaying) {
			int numPlayerControllers = UGameplayStatics::GetNumPlayerControllers(gameWorld);
			APlayerController* playerController = gameWorld->GetFirstPlayerController();
			//UPlayerInput* playerInput = playerController->PlayerInput.Get();
			//playerInput.mappings
			/*UEnhancedPlayerInput* eplayerInput = nullptr;
			eplayerInput->EnhancedActionMappings.Num();
			eplayerInput->AppliedInputContexts.Find(nullptr);*/

			if (playerController !=NULL && playerController->IsValidLowLevel())
			{
				if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer()))
				{
					//EMappingQueryResult result; //	subsystem->QueryMapKeyInActiveContextSet	
					TArray<FEnhancedActionKeyMapping > mappings = subsystem->GetAllPlayerMappableActionKeyMappings();
					for (int i = 0; i < mappings.Num(); i++) {
						//FKey key = mappings[i].Key;
						FString info =  mappings[i].Key.GetDisplayName().ToString() + "  " + mappings[i].PlayerMappableOptions.Name.ToString();
						UE_LOG(LogWM_InputManager, Log, TEXT("FEnhancedActionKeyMapping - > %s"), *info);
					}

					//nputMappingContext* ctx = nullptr;
					/*ctx.get
					FEnhancedActionKeyMapping m; m.Action.GetName();*/
					//ctx.GetMappings

					//UEnhancedInputDeveloperSettings
					/*if (UEnhancedInputPlatformSettings* PlatformSettings = UEnhancedInputPlatformSettings::Get())
					{
						
						TMap<TObjectPtr<const UInputMappingContext>, TObjectPtr<const UInputMappingContext>> ContextRedirects;
						PlatformSettings->GetAllMappingContextRedirects(ContextRedirects);
						for (const TPair<TObjectPtr<const UInputMappingContext>, TObjectPtr<const UInputMappingContext>> Pair : ContextRedirects)
						{
							if (!Pair.Key || !Pair.Value)
							{
								UE_LOG(LogEnhancedInput, Error, TEXT("An invalid Mappping Context Redirect specified in '%s'"), PlatformSettings->GetConfigOverridePlatform());
								continue;
							}

							// Replace the existing IMC with the one that it should be redirected to on the PlayerInput 
							if (const int32* ExistingIMCPriority = OrderedInputContexts.Find(Pair.Key))
							{
								OrderedInputContexts.Remove(Pair.Key);
								OrderedInputContexts.Add(Pair.Value, *ExistingIMCPriority);
								AppliedContextRedirects.Add(Pair);

								// Optional logging that may be helpful for debugging purposes
								if (PlatformSettings->ShouldLogMappingContextRedirects())
								{
									UE_LOG(
										LogEnhancedInput,
										Log,
										TEXT("'%s' Redirecting Mapping Context '%s' -> '%s'"),
										PlatformSettings->GetConfigOverridePlatform(), *Pair.Key->GetName(), *Pair.Value->GetName()
									);
								}
							}
						}
					}*/

					
				
					///FString pcvalid = "yes";
					//UE_LOG(LogWM_InputManager, Log, TEXT("subsystem VALID - > %s"), *pcvalid);
					//Subsystem->AddMappingContext(DefaultMappingContext, 0);

					/*if (UEnhancedPlayerInput* einput = CastChecked<UEnhancedPlayerInput>(playerController->PlayerInput)) {
						FString info = "UEnhancedPlayerInput is valid:   " + einput->ActionMappings[0].Key.GetDisplayName().ToString() +  "  " + einput->ActionMappings[0].ActionName.ToString();
						UE_LOG(LogWM_InputManager, Log, TEXT("other warn - > %s"), *info);
						
					
					}*/

					/*if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(playerController)) {
					
						//EnhancedInputComponent.get
					}*/

			
					

					/*if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(playerController)) {
						FString info = "EnhancedInputComponent is valid";
						UE_LOG(LogWM_InputManager, Log, TEXT("other warn - > %s"), *info);


						TArray<FInputAxisKeyBinding> mappings = EnhancedInputComponent->AxisKeyBindings;
						//EnhancedInputComponent->GetNumActionBindings
						//EnhancedInputComponent->AxisKeyBindings;
						for (int i = 0; i < mappings.Num(); i++) {
						
							FKey key = mappings[i].AxisKey;
							FString infob = mappings[i].AxisKey.ToString() ;
							UE_LOG(LogWM_InputManager, Log, TEXT("other warn - > %s"), *infob);


						}
					}*/

					/*TArray<FInputAxisKeyMapping> mappings = subsystem->GetPlayerInput()->Action;
					for (int i = 0; i < mappings.Num(); i++) {
						FKey key = mappings[i].Key;
						FString info = mappings[i].AxisName.ToString() + " " + mappings[i].Key.GetDisplayName().ToString();
						UE_LOG(LogWM_InputManager, Log, TEXT("other warn - > %s"), *info);


					}*/

					/*TArray< FEnhancedActionKeyMapping> mappings = subsystem->GetAllPlayerMappableActionKeyMappings();
					for (int i = 0; i < mappings.Num(); i++) {
						FKey key = mappings[i].Key;
						FString info = mappings[i].Action.GetName() + " " +  mappings[i].Key.GetDisplayName().ToString();
						UE_LOG(LogWM_InputManager, Log,  TEXT("other warn - > %s"), *info);

						
					}*/
				}
			}
		}


			/*UEnhancedPlayerInput* enhancedPlayerInput = Cast<UEnhancedPlayerInput>(playerInput);
			if (enhancedPlayerInput != NULL && enhancedPlayerInput->IsValidLowLevel()) {
				//UE_LOG(LogWM_InputManager, Log, TEXT("BEGIN WORLD PLAY:"));
				UInputMappingContext* inputcontext;
				UEnhancedInputLocalPlayerSubsystem* subsystem;
				FEnhancedActionKeyMapping f;
	     	}*/
			
			// Get the local player subsystem
	
			//UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
			// Clear out existing mapping, and add our mapping


		//	playerinput->AxisMappings.GetData().
	
				/*for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator) {
					APlayerController* n_pc = Cast<APlayerController>(*Iterator);

					//Subsystem->ClearAllMappings();
					//Subsystem->AddMappingContext(InputMapping, 0);

					//and then checking IsLocalPlayerController or Cast(playerController->Player)
				}
		}*/
	}
	


	
	//UWorld::get();

	/*
	GetWorld()->GetFirstPlayerController()

		Or:
	UGameplayStatics::GetPlayerController(GetWorld(), 0)

		Or :
		GEngine->GetGamePlayer(world, 0)->PlayerController

		Or :
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
		and then checking IsLocalPlayerController or Cast(playerController->Player)
		
		*/
}





void UWM_InputManagerBase::SetNumberOfPlayers(int32 NumPlayers) {

		NumberOfPlayers = fmin(fmax(NumPlayers, 0), 10);
	//if (NumberOfPlayers != NumPlayers) {
		OnSetNumberOfPlayers.Broadcast(NumberOfPlayers);
	//}
	
}

/*void UWM_InputManager::AddJoystickGamepad(int32 DeviceSlot) {

	Joystick_DeviceList.Add(DeviceSlot, gamepad);

}*/

void UWM_InputManagerBase::SwitchManagerMode(FString Mode) {
	if (ManagerMode != Mode) {
		ManagerMode = Mode;
		OnSwitchManagerMode.Broadcast(ManagerMode);
	}
};

void UWM_InputManagerBase::SwitchManagerModeEnum(EWM_InputManagerMode Mode) {
	if (ManagerModeEnum != Mode) {
		ManagerModeEnum = Mode;
		OnSwitchManagerModeEnum.Broadcast(ManagerModeEnum);
	}
}
void UWM_InputManagerBase::GetActionInputs(TArray<FName> & ActionInputs) {

	TArray<FName>inputNames;
	TArray<FInputActionKeyMapping> ActionMappings = InputSettings->GetActionMappings();
	for (FInputActionKeyMapping& Each : ActionMappings) {
		
		inputNames.AddUnique(Each.ActionName);
		
	}
	ActionInputs = inputNames;

}
void UWM_InputManagerBase::GetAxisInputs(TArray<FName> & AxisInputs) {

	TArray<FName>inputNames;
	TArray<FInputAxisKeyMapping> AxisMappings = InputSettings->GetAxisMappings();
	for (FInputAxisKeyMapping& Each : AxisMappings) {
		inputNames.AddUnique(Each.AxisName);
	}
	AxisInputs = inputNames;

}
void UWM_InputManagerBase::GetAllKeysForAction(FName ActionName, TArray<FKey> & Keys) {

	 TArray<FKey>t_keys;
	 TArray<FInputActionKeyMapping> ActionMappings = InputSettings->GetActionMappings();
	 for (FInputActionKeyMapping& Each : ActionMappings) {
		 if (Each.ActionName == ActionName) {
			 t_keys.Add(Each.Key);
		 }
	 }
	 Keys = t_keys;

}
void UWM_InputManagerBase::GetAllKeysForAxis(FName AxisName, TArray<FKey> & Keys) {
	TArray<FKey>t_keys;
	TArray<FInputAxisKeyMapping> AxisMappings = InputSettings->GetAxisMappings();
		for (FInputAxisKeyMapping& Each : AxisMappings) {
			if(Each.AxisName == AxisName){
				t_keys.Add(Each.Key);
			}
		}	
	Keys = t_keys;
}




void UWM_InputManagerBase::GetAllInputBindingsForKey(FKey Key, TArray<FName> & ActionsForKey) {
	TArray<FName> t_Actions;


	//ENHANCED INPUT MAPPINGS
	TArray<FEnhancedActionKeyMapping> emappings = getEnhancedMappings();
	if (emappings.Num() > 0) {
		for (int i = 0; i < emappings.Num(); i++) {
			FEnhancedActionKeyMapping nMap = emappings[i];
			if (nMap.Key == Key) {
				FName actionName = "";
				if (nMap.bIsPlayerMappable) {
					actionName = nMap.PlayerMappableOptions.Name;
				}
				if (actionName.IsEqual("") || actionName.IsEqual("None")) {
					actionName = nMap.Action.GetFName();
				}
				
			}
		}
	}

	//INPUT MAPPINGS
	//TArray<FInputActionKeyMapping> bindings = PlayerInput_Ref.actions
	TArray<FKey>  keys;
	TArray<FInputActionKeyMapping> ActionMappings = InputSettings->GetActionMappings();
	TArray<FInputAxisKeyMapping>   AxisMappings =   InputSettings->GetAxisMappings();
	
	for (int32 i = 0; i < ActionMappings.Num(); i++) {
		//t_keys.Add(bindings[i].Key);	
		GetAllKeysForAction(ActionMappings[i].ActionName, keys);
		if (keys.FindByKey(Key)) {
			t_Actions.AddUnique(ActionMappings[i].ActionName);
		}
	}
	for (int32 i = 0; i < AxisMappings.Num(); i++) {
		//t_keys.Add(bindings[i].Key);	
		GetAllKeysForAxis(AxisMappings[i].AxisName, keys);
		if (keys.FindByKey(Key)) {
			t_Actions.AddUnique(AxisMappings[i].AxisName);
		}
	}
	

	

	
	ActionsForKey = t_Actions;
}


void UWM_InputManagerBase::setEnchancedInputContext(UInputMappingContext* inputMappingContext) {
	currentEnchancedInputMapping = inputMappingContext;
}

TArray<FEnhancedActionKeyMapping> UWM_InputManagerBase::getEnhancedMappings() {
	TArray<FEnhancedActionKeyMapping> mappings;

	if (currentEnchancedInputMapping != nullptr && currentEnchancedInputMapping->IsValidLowLevel()) {
		mappings = currentEnchancedInputMapping->GetMappings();
	}

	/*if (IsPlaying) {
		//int numPlayerControllers = UGameplayStatics::GetNumPlayerControllers(gameWorld);
		APlayerController* playerController = gameWorld->GetFirstPlayerController();
		if (playerController != NULL && playerController->IsValidLowLevel())
		{
			if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer()))
			{
				mappings = subsystem->GetAllPlayerMappableActionKeyMappings();
			}
		}
	}*/

	return mappings;
}


void UWM_InputManagerBase::GetActionsListStringForKey(FKey Key, FString& ActionsListString) {
	TArray<FName> actions;

	FString tempstring;
	GetAllInputBindingsForKey(Key, actions);
	for (int32 i = 0; i < actions.Num(); i++) {
		tempstring.Append(actions[i].ToString());
		if (i < actions.Num() - 1) {
			tempstring.Append(" / ");
		}
	}
	ActionsListString = tempstring;
}



void UWM_InputManagerBase::OnDeviceButtonKeyEvent_Implementation(FKey WM_Key, UWM_Device* Device, TEnumAsByte<EWM_KeyTriggerState>&TriggerState) {
	if (TriggerState == EWM_KeyTriggerState::WasJustPressed) {
		OnButtonKeyPressed.Broadcast(WM_Key, Device);
	}

	else if (TriggerState == EWM_KeyTriggerState::WasJustReleased) {
		OnButtonKeyReleased.Broadcast(WM_Key, Device);
	}
}
//STEAMFIX
void UWM_InputManagerBase::InitializeAPI() {
	/*if (PluginCORE) {
		PluginCORE->RegisterDevices();
	}*/
}
/*
void UWM_InputManagerBase::SaveDevicesConfig() {
	WM_SettingsRW->SaveConfig(16384Ui64, L"../../../HMM/Saved/Config/Windows/CustomTEST.ini");
}*/