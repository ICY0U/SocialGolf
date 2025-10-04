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
            // Media Framework for video playback and encoding
            "Media", "MediaUtils", "MediaAssets",
            // JSON support for replay data
            "Json", "JsonUtilities",
            // File management
            "PakFile", "CookOnTheFly"
        });
        PrivateDependencyModuleNames.AddRange(new string[] {
            // Additional private dependencies for camera recording
            "EngineSettings", "ImageCore",
            // HTTP for potential cloud replay sharing
            "HTTP"
        });
        
        // Editor-only dependencies
        if (Target.Type == TargetType.Editor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "MediaPlayerEditor"
            });
        }
        
        // Include our project directories (Materials directory removed)
        PublicIncludePaths.AddRange(new string[] {
            "SocialGolf/SaveSystem",
            "SocialGolf/Core",
            "SocialGolf/Camera",
            "SocialGolf/Save",
            "SocialGolf/Golf",
            "SocialGolf/Replay",
            "SocialGolf/Rendering"
        });
        
        // Enable C++20 features if needed
        CppStandard = CppStandardVersion.Cpp20;

        // Platform-specific dependencies
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicDependencyModuleNames.AddRange(new string[] {
                "D3D11RHI",
                "D3D12RHI"
            });
            
            // Try to add WMF media support if available
            PrivateDependencyModuleNames.AddRange(new string[] {
                "WmfMedia"
            });
        }
    }
}