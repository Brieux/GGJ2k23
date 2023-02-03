// Copyright Peter Poticny - RalpEl Lemontmoon(Rapid Wirehead) 2017 . All Rights Reserved. Buy me a beer at  paypal.me/RalphEl 

#pragma once
#include "Windows/WindowsApplication.h"
#include "hidsdi.h" //header


//PULONG = *uint32

struct F_Hid_dll
{
public:
	typedef bool(*ImportType_HidD_GetSerialNumberString)            (HANDLE HidDeviceObject, PVOID Buffer, uint32 BufferLength);
	typedef bool(*ImportType_HidD_GetManufacturerString)            (HANDLE HidDeviceObject, PVOID Buffer, uint32 BufferLength);
	typedef bool(*ImportType_HidD_GetProductString)                 (HANDLE HidDeviceObject, PVOID Buffer, uint32 BufferLength);
	typedef bool(*ImportType_HidD_GetPreparsedData)                 (HANDLE HidDeviceObject, PHIDP_PREPARSED_DATA PreparsedData);
	typedef bool(*ImportType_HidD_FreePreparsedData)                (PHIDP_PREPARSED_DATA PreparsedData);
	typedef bool(*ImportType_HidD_GetInputReport)                   (HANDLE HidDeviceObject, PVOID ReportBuffer, ULONG ReportBufferLength);
	typedef int32(*ImportType_HidD_SetConfiguration)		        (HANDLE HidDeviceObject, PHIDD_CONFIGURATION Configuration, ULONG ConfigurationLength);
	typedef int32(*ImportType_HidD_SetFeature)		                (HANDLE HidDeviceObject, PVOID BufferLength, ULONG ReportBufferLength);
	typedef int32(*ImportType_HidD_SetNumInputBuffers)			    (HANDLE HidDeviceObject, ULONG NumberOfBuffers);
	typedef int32(*ImportType_HidD_SetOutputReport)					(HANDLE HidDeviceObject, PVOID BufferLength, ULONG ReportBufferLength);
	typedef int32(*ImportType_HidD_GetNumInputBuffers)              (HANDLE HidDeviceObject, PULONG NumInputBuffers);



	typedef int32(*ImportType_HidP_GetButtonCaps)                   (HIDP_REPORT_TYPE ReportType, PHIDP_BUTTON_CAPS ButtonCaps, uint16* ButtonCapsLength, PHIDP_PREPARSED_DATA PreparsedData);
	typedef int32(*ImportType_HidP_GetCaps)                         (PHIDP_PREPARSED_DATA PreparsedData, PHIDP_CAPS Capabilities);
	typedef int32(*ImportType_HidP_GetData)                         (HIDP_REPORT_TYPE ReportType, PHIDP_DATA DataList, uint32* DataLength, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLeength);
	typedef int32(*ImportType_HidP_GetExtendedAttributes)           (HIDP_REPORT_TYPE ReportType, uint16 DataIndex, PHIDP_PREPARSED_DATA PreparseData, PHIDP_EXTENDED_ATTRIBUTES Attribures, PULONG LengthAttributes); //uint32
	typedef int32(*ImportType_HidP_GetLinkCollectionNodes)          (PHIDP_LINK_COLLECTION_NODE LinkCollectionNodes, PULONG LinkCollectionNodesLength, PHIDP_PREPARSED_DATA PreparseData);
	typedef int32(*ImportType_HidP_GetScaledUsageValue)             (HIDP_REPORT_TYPE ReportType, uint16 UsagePage, uint16 LinkCollection, uint16 Usage, int32 *UsageValue, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLength);
	typedef int32(*ImportType_HidP_GetSpecificButtonCaps)           (HIDP_REPORT_TYPE ReportType, uint16 UsagePage, uint16 LinkCollection, PHIDP_BUTTON_CAPS ButtonCaps, PUSHORT ButtonCapsLength, PHIDP_PREPARSED_DATA PreparsedData);
	typedef int32(*ImportType_HidP_GetSpecificValueCaps)            (HIDP_REPORT_TYPE ReportType, uint16 UsagePage, uint16 LinkCollection, uint16 Usage, PHIDP_VALUE_CAPS ValueCaps, PUSHORT ValueCapsLength, PHIDP_PREPARSED_DATA PreparsedData);
	typedef int32(*ImportType_HidP_GetUsages)                       (HIDP_REPORT_TYPE ReportType, uint16 UsagePage, uint16 LinkCollection, uint16* UsageList, uint32* UsageLength, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLength);
	typedef int32(*ImportType_HidP_GetUsagesEx)		                (HIDP_REPORT_TYPE ReportType, uint16 LinkCollection, PUSAGE_AND_PAGE ButtonList, ULONG * UsageLength, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLength);
	typedef int32(*ImportType_HidP_GetUsageValue)                   (HIDP_REPORT_TYPE ReportType, uint16 UsagePage, uint16 LinkCollection, uint16 Usage, uint32* UsageValue, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLength);
	typedef int32(*ImportType_HidP_GetUsageValueArray)		        (HIDP_REPORT_TYPE ReportType, uint16 UsagePage, uint16 LinkCollection, uint16 Usage, PCHAR UsageValue, USHORT UsageValueByteLength, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLength);
	typedef int32(*ImportType_HidP_GetValueCaps)		            (HIDP_REPORT_TYPE ReportType, PHIDP_VALUE_CAPS ValueCaps, uint16* ValueCapsLength, PHIDP_PREPARSED_DATA PreparsedData);
	typedef int32(*ImportType_HidP_InitializeReportForID)		    (HIDP_REPORT_TYPE ReportType, UCHAR ReportID, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLength);
	
	typedef int32(*ImportType_HidP_SetUsageValue)		            (HIDP_REPORT_TYPE ReportType, uint16 UsagePage, uint16 LinkCollection, uint16 Usage, ULONG UsageValue, PHIDP_PREPARSED_DATA PreparsedData, PCHAR Report, uint32 ReportLength);
	/*HidD_SetConfiguration(HANDLE HidDeviceObject, PHIDD_CONFIGURATION Configuration, ULONG ConfigurationLength);
	HidD_SetFeature(HANDLE HidDeviceObject, PVOID BufferLength, ULONG ReportBufferLength);
		HidD_SetNumInputBuffers(HANDLE HidDeviceObject, ULONG NumberOfBuffers)
	HidD_SetOutputReport(HANDLE HidDeviceObject, PVOID BufferLength, ULONG ReportBufferLength);*/

	void* DLLHandle = nullptr;
	//HidD 
	ImportType_HidD_GetSerialNumberString   HidD_GetSerialNumberString;
	ImportType_HidD_GetManufacturerString   HidD_GetManufacturerString;
	ImportType_HidD_GetProductString        HidD_GetProductString;
	ImportType_HidD_FreePreparsedData       HidD_FreePreparsedData;
	ImportType_HidD_GetPreparsedData        HidD_GetPreparsedData;
	ImportType_HidD_SetConfiguration        HidD_SetConfiguration;
	ImportType_HidD_SetFeature              HidD_SetFeature;
	ImportType_HidD_SetNumInputBuffers      HidD_SetNumInputBuffers;
	ImportType_HidD_SetOutputReport         HidD_SetOutputReport;
	ImportType_HidD_GetInputReport          HidD_GetInputReport;
	ImportType_HidD_GetNumInputBuffers      HidD_GetNumInputBuffers;

	//HidP
	ImportType_HidP_GetButtonCaps           HidP_GetButtonCaps;
	ImportType_HidP_GetCaps                 HidP_GetCaps;
	ImportType_HidP_GetData                 HidP_GetData;
	ImportType_HidP_GetExtendedAttributes   HidP_GetExtendedAttributes;
	ImportType_HidP_GetLinkCollectionNodes  HidP_GetLinkCollectionNodes;
	ImportType_HidP_GetScaledUsageValue     HidP_GetScaledUsageValue;
	ImportType_HidP_GetSpecificButtonCaps   HidP_GetSpecificButtonCaps;
	ImportType_HidP_GetSpecificValueCaps    HidP_GetSpecificValueCaps;
	ImportType_HidP_GetUsages               HidP_GetUsages;
	ImportType_HidP_GetUsagesEx             HidP_GetUsagesEx;
	ImportType_HidP_GetUsageValue           HidP_GetUsageValue;
	ImportType_HidP_GetUsageValueArray      HidP_GetUsageValueArray;
	ImportType_HidP_GetValueCaps		    HidP_GetValueCaps;
	ImportType_HidP_InitializeReportForID   HidP_InitializeReportForID;
	ImportType_HidP_SetUsageValue           HidP_SetUsageValue;
	
	F_Hid_dll();
	virtual ~F_Hid_dll();

	
	bool LOAD_LIBRARY();
	bool LOADED = LOAD_LIBRARY();


	FString HIDP_STATUS_ToString(const int32 HIDP_STATUS) const
	{
		switch (HIDP_STATUS)
		{
		case HIDP_STATUS_BAD_LOG_PHY_VALUES:
			return TEXT("HIDP_STATUS_BAD_LOG_PHY_VALUES");
		case HIDP_STATUS_BUFFER_TOO_SMALL:
			return TEXT("HIDP_STATUS_BUFFER_TOO_SMALL");
		case HIDP_STATUS_BUTTON_NOT_PRESSED:
			return TEXT("HIDP_STATUS_BUTTON_NOT_PRESSED");
		case HIDP_STATUS_DATA_INDEX_NOT_FOUND:
			return TEXT("HIDP_STATUS_DATA_INDEX_NOT_FOUND");
		case HIDP_STATUS_DATA_INDEX_OUT_OF_RANGE:
			return TEXT("HIDP_STATUS_DATA_INDEX_OUT_OF_RANGE");
		case HIDP_STATUS_I8042_TRANS_UNKNOWN:
			return TEXT("HIDP_STATUS_I8042_TRANS_UNKNOWN");
			/*case HIDP_STATUS_I8242_TRANS_UNKNOWN:
			return TEXT("HIDP_STATUS_I8242_TRANS_UNKNOWN");*/
		case HIDP_STATUS_INTERNAL_ERROR:
			return TEXT("HIDP_STATUS_INTERNAL_ERROR");
		case HIDP_STATUS_INVALID_PREPARSED_DATA:
			return TEXT("HIDP_STATUS_INVALID_PREPARSED_DATA");
		case HIDP_STATUS_INVALID_REPORT_LENGTH:
			return TEXT("HIDP_STATUS_INVALID_REPORT_LENGTH");
		case HIDP_STATUS_INVALID_REPORT_TYPE:
			return TEXT("HIDP_STATUS_INVALID_REPORT_TYPE");
		case HIDP_STATUS_IS_VALUE_ARRAY:
			return TEXT("HIDP_STATUS_IS_VALUE_ARRAY");
		case HIDP_STATUS_NOT_IMPLEMENTED:
			return TEXT("HIDP_STATUS_NOT_IMPLEMENTED");
		case HIDP_STATUS_NOT_VALUE_ARRAY:
			return TEXT("HIDP_STATUS_NOT_VALUE_ARRAY");
		case HIDP_STATUS_NULL:
			return TEXT("HIDP_STATUS_NULL");
		case HIDP_STATUS_REPORT_DOES_NOT_EXIST:
			return TEXT("HIDP_STATUS_REPORT_DOES_NOT_EXIST");
		case HIDP_STATUS_SUCCESS:
			return TEXT("HIDP_STATUS_SUCCESS");
		case HIDP_STATUS_USAGE_NOT_FOUND:
			return TEXT("HIDP_STATUS_USAGE_NOT_FOUND");
		case HIDP_STATUS_VALUE_OUT_OF_RANGE:
			return TEXT("HIDP_STATUS_VALUE_OUT_OF_RANGE");
		default:
			return TEXT("Invalid HIDP_STATUS");
		}
	}

};

