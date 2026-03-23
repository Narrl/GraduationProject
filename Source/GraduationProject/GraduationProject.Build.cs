// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GraduationProject : ModuleRules
{
	public GraduationProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"GraduationProject",
			"GraduationProject/Variant_Platforming",
			"GraduationProject/Variant_Platforming/Animation",
			"GraduationProject/Variant_Combat",
			"GraduationProject/Variant_Combat/AI",
			"GraduationProject/Variant_Combat/Animation",
			"GraduationProject/Variant_Combat/Gameplay",
			"GraduationProject/Variant_Combat/Interfaces",
			"GraduationProject/Variant_Combat/UI",
			"GraduationProject/Variant_SideScrolling",
			"GraduationProject/Variant_SideScrolling/AI",
			"GraduationProject/Variant_SideScrolling/Gameplay",
			"GraduationProject/Variant_SideScrolling/Interfaces",
			"GraduationProject/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
