// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestProjectDedi : ModuleRules
{
	public TestProjectDedi(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "UMG", "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "Paper2D" });
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
	}
}
