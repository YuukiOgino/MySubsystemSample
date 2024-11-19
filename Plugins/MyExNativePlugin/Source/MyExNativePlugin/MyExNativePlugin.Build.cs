// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyExNativePlugin : ModuleRules
{
	public MyExNativePlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		CppStandard = CppStandardVersion.Latest;
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"MyPlugin", 
				"Engine",
				"Slate",
				"SlateCore",
				"Projects"
			}
			);
	}
}
