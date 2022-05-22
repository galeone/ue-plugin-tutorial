using UnrealBuildTool;
using System.Collections.Generic;

public class ThirdPartyProjectEditorTarget : TargetRules {
  public ThirdPartyProjectEditorTarget(TargetInfo Target) : base(Target) {
    Type = TargetType.Editor;
    DefaultBuildSettings = BuildSettingsVersion.V2;
    ExtraModuleNames.AddRange(new string[] { "ThirdPartyProject", "Swap" });
  }
}
