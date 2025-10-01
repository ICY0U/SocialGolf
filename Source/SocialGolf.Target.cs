using UnrealBuildTool;
public class SocialGolfTarget : TargetRules
{
    public SocialGolfTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;
        ExtraModuleNames.Add("SocialGolf");
    }
}