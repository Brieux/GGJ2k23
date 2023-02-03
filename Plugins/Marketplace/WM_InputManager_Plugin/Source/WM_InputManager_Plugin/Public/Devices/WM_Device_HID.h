// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WM_Settings.h"

#include "WM_Device_HID.generated.h"

USTRUCT(BlueprintType)
struct FWM_HID_XInputWrap
{
	GENERATED_USTRUCT_BODY()
	TMap<int16, int64> XinputInitialDist;
};



USTRUCT(BlueprintType)
struct FWM_HID_DeviceInfo
{
	GENERATED_USTRUCT_BODY()	

	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString ProductString = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString ManufacturerString = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString SerialNumberString = "";

	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		int32 VID = 0;
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		int32 PID = 0;
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		int32 Version = 0;
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString VID_HEX = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString PID_HEX = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString Version_HEX = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString VPID_HEX = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		FString VID_PID_ = "";
	UPROPERTY(BlueprintReadOnly, Category = "HID_Info")
		int32 ParserVersion = 1;

	int32 Usage = 0;
	int32 UsagePage = 0;

	FWM_HID_DeviceInfo() {

	}
};


///for getting all types of axis
UENUM(BlueprintType)
enum class EWM_AxisCodeTable : uint8
{
	NoFlags = 0,
	X_Axis = 0x30,
	Y_Axis = 0x31,
	Z_Axis  = 0x32,
	X_Rot = 0x33,
	Y_Rot = 0x34,
	Z_Rot = 0x35,
	Slider = 0x36,
	Dial = 0x37,
	Wheel = 0x38,
	Hat = 0x39,
	Vx = 0x40,
	Vy = 0x41,
	Vz = 0x42,
	Vrx = 0x44,
	Vry = 0x45,
	Vrz = 0x46,
	Rudder = 0xBA,
	Throttle = 0xBB,
};
ENUM_CLASS_FLAGS(EWM_AxisCodeTable);



USTRUCT(BlueprintType)
struct FWM_HID_ButtonData
{
	GENERATED_USTRUCT_BODY()

		FWM_HID_ButtonData() {}

	bool bLastButtonState = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
		bool bIsPressed = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
		int32 ButtonNumber = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
		TEnumAsByte<EWM_KeyTriggerState> KeyTriggerState = EWM_KeyTriggerState::NoTrigger;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Button")
		FString ButtonBindingCode = "";

	void SetPreviousButtonState() {
		bLastButtonState = bIsPressed;
		bIsPressed = false;
	}
	void SetButtonTriggerState() {
		if (bIsPressed != bLastButtonState)
		{
			KeyTriggerState = bIsPressed ? EWM_KeyTriggerState::WasJustPressed : EWM_KeyTriggerState::WasJustReleased;
		}
		else ///// if pressed & NoTrigger --> repeats pressedState
		{
			KeyTriggerState = EWM_KeyTriggerState::NoTrigger;
		}
	}

	bool LSTN_Value = false;
	void SetLSTN_Value() {
		LSTN_Value = bIsPressed;
	}
};

USTRUCT(BlueprintType)
struct FWM_HID_AxisData
{
	GENERATED_USTRUCT_BODY()
		FWM_HID_AxisData()
	{
		//const UWM_Settings* WM_Settings = GetDefault<UWM_Settings>();
		//UWM_Settings* WM_SettingsRW = const_cast<UWM_Settings*>(WM_Settings);
	}

	const UWM_Settings* WM_Settings = GetDefault<UWM_Settings>();

	bool initialized = false;
	TArray<int32> DefaultInverts = { 0x31,0x34,0x35 };
	int32 UsageMin = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		int32 LogicalMin = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		int32 LogicalMax = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		float LogicalCenter = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		float LogicalRange = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		float RawValue = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		float NormalizedRawValue = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		float CenteredValue = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		float axisValue = 0.0f;
	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		float BitFloatValue = 0.0f;*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		EWM_AxisCodeTable axisEnum = EWM_AxisCodeTable::NoFlags;
	FString MapTarget = "";

	float LastValue = 0.0f;
	//bool bInverted = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		FString AxisBindingCode = "";

	FString axisHEX = "";
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Axis")
		int32 instance = 0;

	bool Initialized = false;
	void InitializeRange() {
		LogicalCenter = (LogicalMin + LogicalMax) *0.5f;
		LogicalRange = (fabs(LogicalMin) + fabs(LogicalMax));
		errorT = LogicalRange > 1.0f ? 1.0f / (LogicalRange*0.5f) : 0.0f;
		C_Min = LogicalMin - LogicalCenter;  //0 -- 127.5
		C_Max = LogicalMax - LogicalCenter;
		readNormalizedRawValue();
		Initialized = true;
	}

	/*float GetValue() const
	{
		switch (UsageMin) {
		case EWM_AxisCodeTable::Hat:
			return RawValue;
		default:
			const int32 defaultInvrt = DefaultInverts.Contains(UsageMin) ? -1 : 1;
			const int32 invertFactor = (bInverted ? -1 : 1)*defaultInvrt;
		   return FMath::GetMappedRangeValueClamped(FVector2D(0.0f, 256.0f), FVector2D(-1.0f, 1.0f)*invertFactor, RawValue);
		}
	}*/

	float errorT = 0.0f;
	float C_Min = 0.0f; //-127.5
	float C_Max = 0.0f; //127.5


	void readNormalizedRawValue() {
		NormalizedRawValue = RawValue / LogicalRange;
	}

	float GetValueWithConfig(FWM_HID_AxisConfiguration config, bool hasconfig)
	{
		switch (UsageMin) {
		case int32(EWM_AxisCodeTable::Hat):
			return RawValue;

		default:
			readNormalizedRawValue();
			const int defaultInvrt = DefaultInverts.Contains(UsageMin) ? -1 : 1;

			const bool bInverted =    hasconfig ? config.bInverted : false;
			const bool bIsPedal =     hasconfig ? config.bIsPedal : false;
			const float DeadZone = hasconfig ? config.DeadZone : WM_Settings->DefaultDeadzone; //  0.2f;
			const float Sensitivity = hasconfig ? config.Sensitivity : WM_Settings->DefaultSensitivity; //1.0f
			//const int invertLogic = (bInverted ? -1 : 1) * defaultInvrt * (bIsPedal ? -1 : 1); ///multiply default inverted

			const FVector2D pedalRange = (bInverted ? FVector2D(1.0f, 0.0f) : FVector2D(0.0f, 1.0f));
			const int invertLogic =      (bInverted ? -1 : 1) * defaultInvrt; ///multiply default inverted	
			const FVector2D axisRange = FVector2D(-1.0f, 1.0f)*invertLogic;

			const FVector2D outRange = bIsPedal ? pedalRange : axisRange; //fixed range
			///
			CenteredValue = RawValue - LogicalCenter;
			//float value = FMath::GetMappedRangeValueClamped(FVector2D(C_Min, C_Max), outRange*invertLogic, CenteredValue);
			float value = FMath::GetMappedRangeValueClamped(FVector2D(C_Min, C_Max), outRange, CenteredValue);
			value = fabs(value) > errorT ? value : 0.0f;

			const float magnitude = FMath::Abs(value)*FMath::Abs(value);
			const float DynamicDeadzone = DeadZone * (1.0f - magnitude);
			float FinalValue = value;
			//DeadZoneValue = value - FMath::Sign(value)*magicDeadzone;
			if (value < 0) {
				FinalValue = fmin(value + DynamicDeadzone, 0.0f);
			}
			if (value > 0) {
				FinalValue = fmax(value - DynamicDeadzone, 0.0f);
			}

			axisValue = FMath::Pow(fabs(FinalValue), Sensitivity)* FMath::Sign(value);
			/*if (UsageMin == 51) {
				axisValue = FMath::Pow(fabs(FinalValue), Sensitivity)* FMath::Sign(value);
			}*/
			return axisValue;
		}
	}

	float LSTN_Value = false;
	void SetLSTN_Value() {
		LSTN_Value = axisValue;
	}

};


USTRUCT(BlueprintType)
struct FWM_HID_DPADData
{
	GENERATED_USTRUCT_BODY()

		FWM_HID_DPADData()
	{
	}
	FWM_HID_ButtonData UP;
	FWM_HID_ButtonData DOWN;
	FWM_HID_ButtonData LEFT;
	FWM_HID_ButtonData RIGHT;

    float Value = 0.0f;
	bool bWasAnyPressed = false;
	void GetDpadValues() {
		bWasAnyPressed = false;
		int dValue = AxisData.axisValue;
		//U, UR, R, RD, D, DL, L ,LU
		//int DPadS[] = {1,2,3,4,5,6,7,8};
		//int DPadS[] = { 0,1,2,3,4,5,6,7 };
		TArray<int32> DPadSequence;
		//DPadSequence.Append(DPadS, ARRAY_COUNT(DPadS));
		DPadSequence = {0,1,2,3,4,5,6,7};
		if (AxisData.LogicalMax == 7) {
			DPadSequence = { 0,1,2,3,4,5,6,7 };
		}
		else if (AxisData.LogicalMax == 8) {
			DPadSequence = { 1,2,3,4,5,6,7,8 };
		}

		UP.bIsPressed =     (dValue == DPadSequence[0]) || (dValue == DPadSequence[1]) || (dValue == DPadSequence[7]);
		RIGHT.bIsPressed =  (dValue == DPadSequence[1]) || (dValue == DPadSequence[2]) || (dValue == DPadSequence[3]);
		DOWN.bIsPressed =   (dValue == DPadSequence[3]) || (dValue == DPadSequence[4]) || (dValue == DPadSequence[5]);
		LEFT.bIsPressed =   (dValue == DPadSequence[5]) || (dValue == DPadSequence[6]) || (dValue == DPadSequence[7]);

		bWasAnyPressed = DPadSequence.Contains(dValue);
	
	}
	void SetPreviousButtonStates() {
		UP.SetPreviousButtonState();
		DOWN.SetPreviousButtonState();
		LEFT.SetPreviousButtonState();
		RIGHT.SetPreviousButtonState();
	}
	void SetButtonsTriggerState() {
		UP.SetButtonTriggerState();
		DOWN.SetButtonTriggerState();
		LEFT.SetButtonTriggerState();
		RIGHT.SetButtonTriggerState();
	}

	FWM_HID_AxisData AxisData;
	bool LSTN_Value = false;
	void SetLSTN_Value() {
		LSTN_Value = bWasAnyPressed;
	}
};


//UCLASS(Blueprintable,nonTransient)
UCLASS(Blueprintable,nonTransient)
class WM_INPUTMANAGER_PLUGIN_API UWM_Device_HID : public UWM_Device
{
	GENERATED_BODY()
public:
	UWM_Device_HID(const FObjectInitializer& ObjectInitializer);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HID)
		FWM_HID_DeviceInfo DeviceInfo;

	virtual void BeginDevice() override;
	virtual void DestroyDevice() override;
	virtual void OnDataInitialized() override;
	virtual void OnDeviceSelected(bool selected) override;
	
	//////////// XINPUT /////////////////
	UPROPERTY(BlueprintReadOnly, Category = "HID")
		bool is_XInput = false;
	UPROPERTY(BlueprintReadOnly, Category = "HID")
		bool is_XInputInitialized = false;
	UPROPERTY(BlueprintReadOnly, Category = "HID")
		bool is_XInputSlotGuess = false;
	UPROPERTY(BlueprintReadOnly, Category = "HID")
		int32 X_I_D = -1;

	//////////// STEAM /////////////////
	UPROPERTY(BlueprintReadOnly, Category = "HID")
		bool is_Steam = false;

	///////////////////////////////////////////////
	///HID RAWDATA
	TArray<FWM_HID_ButtonData> ButtonsData;
	TArray<FWM_HID_AxisData>   AxisData;
	TArray<FWM_HID_DPADData>   DPADData;
	
	TMap<FString, int32>   Button_DHP;
	TMap<uint8,   int32>   Axis_AID;
	TMap<FString, int32>   Axis_DHP;
	TMap<FString, int32>   DPAD_DHP;

	FHID_Joystick_CONFIG HID_CONFIG_DEFAULT;
	FHID_Joystick_CONFIG HID_CONFIG;

	TMap<FKey, float> AxisKeyValues; 
	TMap<FKey, bool>  ButtonKeyValues; 
	TMap<FKey, TEnumAsByte<EWM_KeyTriggerState> > ButtonKeyStates; 


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRaw_Available Buttons", Keywords = "Get Available Raw Buttons"), Category = "RawData")
		TArray<int32> GetRaw_Available_Buttons();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRaw_Available Axes", Keywords = "Get Available Raw "), Category = "RawData")
		TArray<int32> GetRaw_Available_Axes();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRaw_Available DPADs", Keywords = "Get Available DPads"), Category = "RawData")
		TArray<int32> GetRaw_Available_DPADs();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRaw_Axis Data", Keywords = "Get Raw Axis Data "), Category = "RawData")
		FWM_HID_AxisData GetRaw_AxisData(int32 index) const;	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRaw_DPAD Data", Keywords = "Get Raw DPAD Data "), Category = "RawData")
		void GetRaw_DPADData(int32 index, bool& UP, bool& DOWN, bool& LEFT, bool& RIGHT, EWM_AxisCodeTable& axisEnum, FString& AxisBindingCode, FString& axisHEX, int32& instance,float& value) const;
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRaw_Button Value", Keywords = "Get Raw Button Value "), Category = "RawData")
		void GetRaw_ButtonValue(int32 index, bool&buttonValue, TEnumAsByte<EWM_KeyTriggerState>& KeyTriggerState);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetRaw_Axis Value", Keywords = "Get Raw Axis Value "), Category = "RawData")
		float GetRaw_AxisValue(int32 index) const;
	/**Use Only WM_Gamepad Keys !  */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetAxisKeyValue", Keywords = "Get Axis Key Value"), Category = "KeyValues")
		void GetAxisKeyValue(FKey Key, float& AxisValue, bool& isValid_WM_Key) const;
	/**Use Only WM_Gamepad Keys !  */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GetButtonKeyValue", Keywords = "Get Button Key Value"), Category = "KeyValues")
		void GetButtonKeyValue(FKey Key, bool& ButtonValue, bool& isValid_WM_Key) const;
	
	virtual void SetButtonDataTriggerStates();
	//detect first hold key
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WM_Device_HID")
	    int32 FirstPressedRawKey;
	
	void setLastButtonsData();

protected :
		/*void WriteDriver();
		void BeginHID_CalibrationProcess();*/

};
