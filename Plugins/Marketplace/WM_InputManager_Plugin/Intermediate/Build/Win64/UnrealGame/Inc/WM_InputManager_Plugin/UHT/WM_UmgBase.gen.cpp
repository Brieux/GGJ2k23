// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WM_InputManager_Plugin/Public/WM_UmgBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWM_UmgBase() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_WM_InputManager_Plugin();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_UmgBase();
	WM_INPUTMANAGER_PLUGIN_API UClass* Z_Construct_UClass_UWM_UmgBase_NoRegister();
// End Cross Module References
	void UWM_UmgBase::StaticRegisterNativesUWM_UmgBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWM_UmgBase);
	UClass* Z_Construct_UClass_UWM_UmgBase_NoRegister()
	{
		return UWM_UmgBase::StaticClass();
	}
	struct Z_Construct_UClass_UWM_UmgBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWM_UmgBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WM_InputManager_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWM_UmgBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WM_UmgBase.h" },
		{ "ModuleRelativePath", "Public/WM_UmgBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWM_UmgBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWM_UmgBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWM_UmgBase_Statics::ClassParams = {
		&UWM_UmgBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWM_UmgBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWM_UmgBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWM_UmgBase()
	{
		if (!Z_Registration_Info_UClass_UWM_UmgBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWM_UmgBase.OuterSingleton, Z_Construct_UClass_UWM_UmgBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWM_UmgBase.OuterSingleton;
	}
	template<> WM_INPUTMANAGER_PLUGIN_API UClass* StaticClass<UWM_UmgBase>()
	{
		return UWM_UmgBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWM_UmgBase);
	UWM_UmgBase::~UWM_UmgBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_UmgBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_UmgBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWM_UmgBase, UWM_UmgBase::StaticClass, TEXT("UWM_UmgBase"), &Z_Registration_Info_UClass_UWM_UmgBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWM_UmgBase), 1063807178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_UmgBase_h_58144305(TEXT("/Script/WM_InputManager_Plugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_UmgBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WM_InputManager_Plugin_Source_WM_InputManager_Plugin_Public_WM_UmgBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
