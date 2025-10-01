using UnrealBuildTool;
public class SocialGolf : ModuleRules
{
    public SocialGolf(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core","CoreUObject","Engine","InputCore",
            "UMG","Slate","SlateCore","PhysicsCore","Chaos","DeveloperSettings",
            // Camera recording dependencies
            "RenderCore", "RHI", "ImageWrapper", "ImageWriteQueue",
            "GameplayMediaEncoder", "MediaAssets"
        });
        PrivateDependencyModuleNames.AddRange(new string[] {
            // Additional private dependencies for camera recording
            "EngineSettings", "ImageCore"
        });
        
        // Include our project directories
        PublicIncludePaths.AddRange(new string[] {
            "SocialGolf/SaveSystem",
            "SocialGolf/Core",
            "SocialGolf/Camera",
            "SocialGolf/Save",
            "SocialGolf/Materials",
            "SocialGolf/Golf"
        });
        
        // Enable C++20 features if needed
        CppStandard = CppStandardVersion.Cpp20;
    }
}