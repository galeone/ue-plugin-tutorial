using UnrealBuildTool;

public class Swap : ModuleRules {
  public Swap(ReadOnlyTargetRules Target) : base(Target) {
    PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

    PublicDependencyModuleNames.AddRange(new string[] {
      "Core",
      "SwapLibrary",
    });
  }
}
