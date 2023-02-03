// Copyright Peter Poticny - RalpEl(Rapid Wirehead) 2017 . All Rights Reserved.
using System.IO;
using System;

namespace UnrealBuildTool.Rules
{
	public class WM_InputManager_Plugin : ModuleRules
	{
		public WM_InputManager_Plugin(ReadOnlyTargetRules Target) : base(Target)
        {

            DefaultBuildSettings = BuildSettingsVersion.V2;
            IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
           // IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
           
            bLegacyPublicIncludePaths = false;
            //PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
            PCHUsage = PCHUsageMode.NoSharedPCHs;
            PrivatePCHHeaderFile = "Private/WM_InputManager_PluginPrivatePCH.h";
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/Devices"));
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/Devices/MEM"));
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/OS"));
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/OS/DllImport"));

           /* PublicIncludePaths.AddRange(
            new string[] {
                "WM_InputManager_Plugin/Public",      
				// ... add public include paths required here ...
			}
            );*/

            PrivateIncludePaths.AddRange(
                new string[] {
                "WM_InputManager_Plugin/Private",
              
                    // ... add other private include paths required here ...
                }
                );

            //PublicIncludePaths.Add();

            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "InputCore",
                    "InputDevice",
                    "SlateCore",
                    "Slate",
                    "UMG",
                    "DeveloperSettings",
                    "ApplicationCore",             
                    "EnhancedInput",
                  
                    //"UnrealEd",
                   // "BlueprintGraph",
                   // "AnimGraph"
				}
			);

            PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"InputDevice",
                    "Json",
                    "JsonUtilities",
                    "EnhancedInput",
                }
			);

            PublicIncludePaths.AddRange(
        new string[] {
            "EnhancedInput/Public"
            // ... add public include paths required here ...
        }
        );


            PrivateIncludePaths.AddRange(
               new string[] {
            "EnhancedInput/Private",
                   // ... add other private include paths required here ...
               }
               );


        }
	}
}