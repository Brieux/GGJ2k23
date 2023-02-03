// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/Devices/WM_Device_Mouse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_Device_Mouse() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_Mouse();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_Device_Mouse_NoRegister();
// End Cross Module References
	void UWM_Device_Mouse::StaticRegisterNativesUWM_Device_Mouse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_Device_Mouse);
	UClass* Z_Construct_UClass_UWM_Device_Mouse_NoRegister()
	{
		return UWM_Device_Mouse::StaticClass();
	}
	struct Z_Construct_UClass_UWM_Device_Mouse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_Device_Mouse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWM_Device,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_Device_Mouse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//UCLASS(Blueprintable,nonTransient)\n" },
		{ "IncludePath", "Devices/WM_Device_Mouse.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Devices/WM_Device_Mouse.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UCLASS(Blueprintable,nonTransient)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_Device_Mouse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_Device_Mouse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_Device_Mouse_Statics::ClassParams = {
		&UWM_Device_Mouse::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWM_Device_Mouse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_Device_Mouse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_Device_Mouse()
	{
		if (!Z_Registration_Info_UClass_UWM_Device_Mouse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_Device_Mouse.OuterSingleton, Z_Construct_UClass_UWM_Device_Mouse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_Device_Mouse.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_Device_Mouse>()
	{
		return UWM_Device_Mouse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_Device_Mouse);
	UWM_Device_Mouse::~UWM_Device_Mouse() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Mouse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Mouse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_Device_Mouse, UWM_Device_Mouse::StaticClass, TEXT("UWM_Device_Mouse"), &Z_Registration_Info_UClass_UWM_Device_Mouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_Device_Mouse), 3468095741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Mouse_h_2850461675(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Mouse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_Devices_WM_Device_Mouse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
