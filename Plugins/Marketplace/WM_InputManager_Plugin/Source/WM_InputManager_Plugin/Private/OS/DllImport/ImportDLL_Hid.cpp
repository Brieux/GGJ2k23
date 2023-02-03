// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 
#include "WM_InputManager_PluginPrivatePCH.h"
#include "ImportDLL_Hid.h"

F_Hid_dll::F_Hid_dll()
    //HidD
	: DLLHandle(nullptr)
	, HidD_GetSerialNumberString(nullptr)
	, HidD_GetManufacturerString(nullptr)
	, HidD_GetProductString(nullptr)
	, HidD_FreePreparsedData(nullptr)
	, HidD_GetPreparsedData(nullptr)

	, HidD_SetConfiguration(nullptr)
	, HidD_SetFeature(nullptr)
	, HidD_SetNumInputBuffers(nullptr)
	, HidD_SetOutputReport(nullptr)
	, HidD_GetInputReport(nullptr)
	, HidD_GetNumInputBuffers(nullptr)

	//HidP
	, HidP_GetButtonCaps(nullptr)
	, HidP_GetCaps(nullptr)
	, HidP_GetData(nullptr)
	, HidP_GetExtendedAttributes(nullptr)
	, HidP_GetLinkCollectionNodes(nullptr)
	, HidP_GetScaledUsageValue(nullptr)
	, HidP_GetSpecificButtonCaps(nullptr)
	, HidP_GetSpecificValueCaps(nullptr)
	, HidP_GetUsages(nullptr)
	, HidP_GetUsagesEx(nullptr)
	, HidP_GetUsageValue(nullptr)
	, HidP_GetUsageValueArray(nullptr)
	, HidP_GetValueCaps(nullptr)
	, HidP_InitializeReportForID(nullptr)
	, HidP_SetUsageValue(nullptr)
{
}

F_Hid_dll::~F_Hid_dll()
{
	if (DLLHandle)
	{
		FPlatformProcess::FreeDllHandle(DLLHandle);
		DLLHandle = nullptr;
	}
}

bool F_Hid_dll::LOAD_LIBRARY()
{
	DLLHandle = FPlatformProcess::GetDllHandle(TEXT("HID.dll"));
	check(DLLHandle);
	if (DLLHandle)
	{
		///HidD
		HidD_GetSerialNumberString = (F_Hid_dll::ImportType_HidD_GetSerialNumberString) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_GetSerialNumberString"));
		check(HidD_GetSerialNumberString);
		HidD_GetManufacturerString = (F_Hid_dll::ImportType_HidD_GetManufacturerString) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_GetManufacturerString"));
		check(HidD_GetManufacturerString);
		HidD_GetProductString = (F_Hid_dll::ImportType_HidD_GetProductString) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_GetProductString"));
		check(HidD_GetProductString);
		HidD_FreePreparsedData = (F_Hid_dll::ImportType_HidD_FreePreparsedData) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_FreePreparsedData"));
		check(HidD_FreePreparsedData);
		HidD_GetPreparsedData = (F_Hid_dll::ImportType_HidD_GetPreparsedData) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_GetPreparsedData"));
		check(HidD_GetPreparsedData);

		HidD_SetConfiguration = (F_Hid_dll::ImportType_HidD_SetConfiguration) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_SetConfiguration"));
		check(HidD_SetConfiguration);
		HidD_SetFeature = (F_Hid_dll::ImportType_HidD_SetFeature) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_SetFeature"));
		check(HidD_SetFeature);
		HidD_SetNumInputBuffers = (F_Hid_dll::ImportType_HidD_SetNumInputBuffers) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_SetNumInputBuffers"));
		check(HidD_SetNumInputBuffers);
		HidD_SetOutputReport = (F_Hid_dll::ImportType_HidD_SetOutputReport) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_SetOutputReport"));
		check(HidD_SetOutputReport);
		HidD_GetInputReport = (F_Hid_dll::ImportType_HidD_GetInputReport) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_GetInputReport"));
		check(HidD_GetInputReport);
		HidD_GetNumInputBuffers = (F_Hid_dll::ImportType_HidD_GetNumInputBuffers) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidD_GetNumInputBuffers"));
		check(HidD_GetNumInputBuffers);

		//HidP
		HidP_GetButtonCaps = (F_Hid_dll::ImportType_HidP_GetButtonCaps) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetButtonCaps"));
		check(HidP_GetButtonCaps);
		HidP_GetCaps = (F_Hid_dll::ImportType_HidP_GetCaps) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetCaps"));
		check(HidP_GetCaps);
		HidP_GetData = (F_Hid_dll::ImportType_HidP_GetData) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetData"));
		check(HidP_GetData);
		HidP_GetExtendedAttributes = (F_Hid_dll::ImportType_HidP_GetExtendedAttributes) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetExtendedAttributes"));
		check(HidP_GetExtendedAttributes);
		HidP_GetLinkCollectionNodes = (F_Hid_dll::ImportType_HidP_GetLinkCollectionNodes) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetLinkCollectionNodes"));
		check(HidP_GetLinkCollectionNodes);
		HidP_GetScaledUsageValue = (F_Hid_dll::ImportType_HidP_GetScaledUsageValue) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetScaledUsageValue"));
		check(HidP_GetScaledUsageValue);
		HidP_GetSpecificButtonCaps = (F_Hid_dll::ImportType_HidP_GetSpecificButtonCaps) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetSpecificButtonCaps"));
		check(HidP_GetSpecificButtonCaps);
		HidP_GetSpecificValueCaps = (F_Hid_dll::ImportType_HidP_GetSpecificValueCaps) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetSpecificValueCaps"));
		check(HidP_GetSpecificValueCaps);
		HidP_GetUsages = (F_Hid_dll::ImportType_HidP_GetUsages) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetUsages"));
		check(HidP_GetUsages);
		HidP_GetUsagesEx = (F_Hid_dll::ImportType_HidP_GetUsagesEx) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetUsagesEx"));
		check(HidP_GetUsagesEx);
		HidP_GetUsageValue = (F_Hid_dll::ImportType_HidP_GetUsageValue) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetUsageValue"));
		check(HidP_GetUsageValue);
		HidP_GetUsageValueArray = (F_Hid_dll::ImportType_HidP_GetUsageValueArray) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetUsageValueArray"));
		check(HidP_GetUsageValueArray);
		HidP_GetValueCaps = (F_Hid_dll::ImportType_HidP_GetValueCaps) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_GetValueCaps"));
		check(HidP_GetValueCaps);
		HidP_InitializeReportForID = (F_Hid_dll::ImportType_HidP_InitializeReportForID) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_InitializeReportForID"));
		check(HidP_InitializeReportForID);
		HidP_SetUsageValue = (F_Hid_dll::ImportType_HidP_SetUsageValue) FPlatformProcess::GetDllExport(DLLHandle, TEXT("HidP_SetUsageValue"));
		check(HidP_SetUsageValue);


	}
	return (DLLHandle != nullptr);
}

