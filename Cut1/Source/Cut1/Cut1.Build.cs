// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cut1 : ModuleRules
{
	public Cut1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
