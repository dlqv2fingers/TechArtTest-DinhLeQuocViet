// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TechArt_Prototype : ModuleRules
{
	public TechArt_Prototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
