using UnrealBuildTool;
public class SocialGolfEditorTarget : TargetRules
{
    public SocialGolfEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;
        ExtraModuleNames.Add("SocialGolf");
    }
}