using UnrealBuildTool;
using System.Collections.Generic;

public class ThirdPartyProjectTarget : TargetRules {
  public ThirdPartyProjectTarget(TargetInfo Target) : base(Target) {
    Type = TargetType.Game;
    DefaultBuildSettings = BuildSettingsVersion.V2;
    ExtraModuleNames.AddRange(new string[] { "ThirdPartyProject", "Swap" });
  }
}
