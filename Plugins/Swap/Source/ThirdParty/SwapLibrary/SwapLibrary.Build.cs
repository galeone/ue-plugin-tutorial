using System.IO;
using UnrealBuildTool;

public class SwapLibrary : ModuleRules {
  public SwapLibrary(ReadOnlyTargetRules Target) : base(Target) {
    Type = ModuleType.External;

    PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));

    if (Target.Platform == UnrealTargetPlatform.Linux) {
      string libname = "libc++-clang++17.so";
      string path = Path.Combine(ModuleDirectory, "linux", "x64", libname);
      PublicAdditionalLibraries.Add(path);
      RuntimeDependencies.Add(path);
    }
  }
}