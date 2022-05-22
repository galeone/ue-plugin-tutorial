// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Swap : ModuleRules {
  public Swap(ReadOnlyTargetRules Target) : base(Target) {
    PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

    PublicIncludePaths.AddRange(new string[] {});

    PrivateIncludePaths.AddRange(new string[] {});

    PublicDependencyModuleNames.AddRange(new string[] {
      "Core",
      "SwapLibrary",
      "Projects",
    });
  }
}
