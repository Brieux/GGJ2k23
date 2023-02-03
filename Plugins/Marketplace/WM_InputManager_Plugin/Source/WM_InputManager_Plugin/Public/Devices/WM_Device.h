// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WM_Settings.h"

#include "WM_Device.generated.h"



USTRUCT(BlueprintType)
struct FWM_BasicDeviceInfo
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(BlueprintReadOnly, Category = "BasicDeviceInfo")
		FString DeviceName;
	UPROPERTY(BlueprintReadOnly, Category = "BasicDeviceInfo")
		FString DN_A;
	UPROPERTY(BlueprintReadOnly, Category = "BasicDeviceInfo")
		FString DN_B;
	UPROPERTY(BlueprintReadOnly, Category = "BasicDeviceInfo")
		FString DN_C;
	UPROPERTY(BlueprintReadOnly, Category = "BasicDeviceInfo")
		FString DN_D;
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString DeviceTypeString;




	int32 DeviceType;

	FWM_BasicDeviceInfo() {

	}

};




DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRawDataInitialized); ///onRaw data collected

UCLASS(Blueprintable, nonTransient)
class WM_INPUTMANAGER_PLUGIN_API UWM_Device : public UObject
{
	GENERATED_BODY()
public:
	UWM_Device(const FObjectInitializer& ObjectInitializer);



	class UWM_InputManager *InputManager;
	UWM_Settings* WM_SettingsRW;

	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		FWM_BasicDeviceInfo BasicDeviceInfo;
	UPROPERTY(BlueprintAssignable, Category = "WM_Device")
		FOnRawDataInitialized OnRawDataInitialized;
	UPROPERTY(EditAnywhere, Category = "WM_Device")
		bool Enabled = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WM_Device")
		bool RawDataWasInitialized = false;




	UPROPERTY(EditAnywhere, Category = "WM_Device")
		FString SAVESTRING;
	//globalProperty
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		TEnumAsByte<EWM_DeviceType> DeviceType;
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		int32 DeviceSlot;
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		int32 UniqueDeviceSlot;
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		int32 ControllerAssigment = -1;
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		int32 ControllerAssigment_pending = -1;
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		bool DeviceActivityDetected = false;
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		bool isSelected = false;


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Assign Device To PlayerIndex", Keywords = "Assign Device To PlayerIndex"), Category = "WM_Device")
		void AssignDeviceToPlayerIndex(int32 index);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ClearDeviceInput", Keywords = "Clear Device Input"), Category = "WM_Device")
		void ClearDeviceInput();

	virtual bool tryApplyControllerAssigment();

	virtual void BeginDevice();
	virtual void DestroyDevice();
	virtual void OnBeginParseData();
	virtual void OnEndParseData();
	virtual void OnDataInitialized();
	virtual void OnDeviceAssigmentChange(int32 PreviousAssigment, int32 NewAssigment);
	virtual void OnDeviceSelected(bool selected);

	bool hasConfig = false;

	TArray<int32>PendingAssigmentsResets;


	bool isPaused = false;
	bool needResetAssigments = false;
	bool dataInitialized = false;
	//name of slot where config is saved;
	FString saveSlot;
	//not needed anymore
	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		FString UniqueHandleString = "";

	UPROPERTY(BlueprintReadOnly, Category = "WM_Device")
		int32 packetNum;

	UFUNCTION(BlueprintPure, Category = "WM_Device")
		bool isValidPlayerIndex();



};
