// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/Devices/WM_Device_Keyboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_Device_Keyboard() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_Keyboard();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_Keyboard_NoRegister();
	WM_INPUTMANAGER_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo;
class UScriptStruct* FWM_Keyboard_DeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo, Z_Construct_UPackage__Script_WM_InputManager_Plugin(), TEXT("WM_Keyboard_DeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo.OuterSingleton;
}
template<> WM_INPUTMANAGER_PLUGIN_API UScriptStruct* StaticStruct<FWM_Keyboard_DeviceInfo>()
{
	return FWM_Keyboard_DeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_Keyboard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWM_Keyboard_DeviceInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
		nullptr,
		&NewStructOps,
		"WM_Keyboard_DeviceInfo",
		sizeof(FWM_Keyboard_DeviceInfo),
		alignof(FWM_Keyboard_DeviceInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo.InnerSingleton;
	}
	void UWM_Device_Keyboard::StaticRegisterNativesUWM_Device_Keyboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_Device_Keyboard);
	UClass* Z_Construct_UClass_UWM_Device_Keyboard_NoRegister()
	{
		return UWM_Device_Keyboard::StaticClass();
	}
	struct Z_Construct_UClass_UWM_Device_Keyboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_Device_Keyboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWM_Device,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Keyboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//UCLASS(Blueprintable,nonTransient)\n" },
		{ "IncludePath", "Devices/WM_Device_Keyboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_Keyboard.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UCLASS(Blueprintable,nonTransient)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_Device_Keyboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_Device_Keyboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_Device_Keyboard_Statics::ClassParams = {
		&UWM_Device_Keyboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Keyboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Keyboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_Device_Keyboard()
	{
		if (!Z_Registration_Info_UClass_UWM_Device_Keyboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_Device_Keyboard.OuterSingleton, Z_Construct_UClass_UWM_Device_Keyboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_Device_Keyboard.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_Device_Keyboard>()
	{
		return UWM_Device_Keyboard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_Device_Keyboard);
	UWM_Device_Keyboard::~UWM_Device_Keyboard() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_Statics::ScriptStructInfo[] = {
		{ FWM_Keyboard_DeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FWM_Keyboard_DeviceInfo_Statics::NewStructOps, TEXT("WM_Keyboard_DeviceInfo"), &Z_Registration_Info_UScriptStruct_WM_Keyboard_DeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWM_Keyboard_DeviceInfo), 578382415U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_Device_Keyboard, UWM_Device_Keyboard::StaticClass, TEXT("UWM_Device_Keyboard"), &Z_Registration_Info_UClass_UWM_Device_Keyboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_Device_Keyboard), 1435558110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_1128582055(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Keyboard_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
