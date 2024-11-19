// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MySubsystemSample : ModuleRules
{
	public MySubsystemSample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		CppStandard = CppStandardVersion.Latest;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore"});

		PrivateDependencyModuleNames.AddRange(new string[] { "MyPlugin" });
	}
}
