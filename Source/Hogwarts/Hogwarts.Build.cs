// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Hogwarts : ModuleRules
{
	public Hogwarts(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
