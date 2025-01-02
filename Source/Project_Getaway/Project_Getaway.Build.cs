// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Getaway : ModuleRules
{
	public Project_Getaway(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
