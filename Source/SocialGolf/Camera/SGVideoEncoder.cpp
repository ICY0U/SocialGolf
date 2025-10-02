#include "SGVideoEncoder.h"
#include "Engine/Engine.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Async/Async.h"
#include "HAL/PlatformProcess.h"
#include "ImageUtils.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Modules/ModuleManager.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "RenderingThread.h"

USGVideoEncoder::USGVideoEncoder()
{
    bIsEncoding = false;
    EncodingProgress = 0.0f;
    TotalFramesToEncode = 0;
    FramesEncoded = 0;
}

bool USGVideoEncoder::StartVideoEncoding(const FString& OutputPath, int32 Width, int32 Height, float FPS)
{
    if (bIsEncoding)
    {
        UE_LOG(LogTemp, Warning, TEXT("Video encoding already in progress"));
        return false;
    }

    // Store settings
    VideoWidth = Width;
    VideoHeight = Height;
    FrameRate = FPS;
    CurrentOutputPath = OutputPath;
    EncodingProgress = 0.0f;
    FramesEncoded = 0;
    bIsEncoding = true;

    return CreateOutputFile(OutputPath);
}

bool USGVideoEncoder::CreateOutputFile(const FString& OutputPath)
{
    // Ensure output directory exists
    FString OutputDir = FPaths::GetPath(OutputPath);
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    
    if (!PlatformFile.CreateDirectoryTree(*OutputDir))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create output directory: %s"), *OutputDir);
        return false;
    }

    return true;
}

bool USGVideoEncoder::FinishVideoEncoding()
{
    if (!bIsEncoding)
    {
        return false;
    }

    bIsEncoding = false;

    // Notify completion
    OnEncodingComplete.ExecuteIfBound(true, CurrentOutputPath);

    UE_LOG(LogTemp, Log, TEXT("Video encoding completed: %s"), *CurrentOutputPath);
    return true;
}

void USGVideoEncoder::CancelVideoEncoding()
{
    if (bIsEncoding)
    {
        bIsEncoding = false;
        OnEncodingComplete.ExecuteIfBound(false, FString());
    }
}

void USGVideoEncoder::UpdateProgress()
{
    if (TotalFramesToEncode > 0)
    {
        EncodingProgress = (float)FramesEncoded / (float)TotalFramesToEncode;
        OnEncodingProgress.ExecuteIfBound(EncodingProgress);
    }
}

// ==========================================
// FFmpeg Video Encoder Implementation
// ==========================================

bool USGFFmpegVideoEncoder::EncodeFramesToMP4WithFFmpeg(const TArray<TArray<FColor>>& Frames, 
                                                       const FString& OutputPath,
                                                       int32 Width, int32 Height, 
                                                       float FPS, int32 Quality)
{
    if (Frames.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No frames to encode"));
        return false;
    }

    // Check if FFmpeg is available
    if (!IsFFmpegAvailable())
    {
        UE_LOG(LogTemp, Warning, TEXT("FFmpeg not available for video encoding. Please install FFmpeg and add it to your system PATH."));
        return false;
    }

    // Create temporary directory for frame images
    FString TempDir = FPaths::Combine(FPaths::ProjectIntermediateDir(), TEXT("VideoFrames"), 
                                     FGuid::NewGuid().ToString());
    
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (!PlatformFile.CreateDirectoryTree(*TempDir))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create temp directory: %s"), *TempDir);
        return false;
    }

    bool bSuccess = false;

    UE_LOG(LogTemp, Log, TEXT("Encoding %d frames to MP4: %s"), Frames.Num(), *OutputPath);

    // Save frames to disk
    if (SaveFramesToDisk(Frames, TempDir, Width, Height))
    {
        // Create FFmpeg command
        FString InputPattern = FPaths::Combine(TempDir, TEXT("frame_%04d.png"));
        FString Command = CreateFFmpegCommand(InputPattern, OutputPath, FPS, Quality);

        // Run FFmpeg
        bSuccess = RunFFmpegProcess(Command);

        if (bSuccess)
        {
            UE_LOG(LogTemp, Log, TEXT("Successfully encoded video: %s"), *OutputPath);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("FFmpeg encoding failed"));
        }
    }

    // Clean up temporary files
    CleanupTempFiles(TempDir);

    return bSuccess;
}

FString USGFFmpegVideoEncoder::CreateFFmpegCommand(const FString& InputPattern, const FString& OutputPath, 
                                                 float FPS, int32 Quality)
{
    // Create high-quality H.264 MP4 with good compatibility
    FString Command = FString::Printf(
        TEXT("-y -framerate %.2f -i \"%s\" -c:v libx264 -preset medium -crf %d -pix_fmt yuv420p -movflags +faststart \"%s\""),
        FPS,
        *InputPattern,
        Quality,
        *OutputPath
    );

    return Command;
}

bool USGFFmpegVideoEncoder::IsFFmpegAvailable()
{
    // Try to run ffmpeg with version command
    int32 ReturnCode = -1;
    FString StdOut;
    FString StdErr;
    
    bool bSuccess = FPlatformProcess::ExecProcess(
        TEXT("ffmpeg"), 
        TEXT("-version"),
        &ReturnCode,
        &StdOut,
        &StdErr
    );

    bool bFFmpegAvailable = bSuccess && ReturnCode == 0;
    
    UE_LOG(LogTemp, Log, TEXT("FFmpeg availability check: %s"), bFFmpegAvailable ? TEXT("Available") : TEXT("Not Available"));
    
    return bFFmpegAvailable;
}

bool USGFFmpegVideoEncoder::SaveFramesToDisk(const TArray<TArray<FColor>>& Frames, const FString& TempDirectory,
                                            int32 Width, int32 Height)
{
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

    if (!ImageWrapper.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create PNG image wrapper"));
        return false;
    }

    for (int32 FrameIndex = 0; FrameIndex < Frames.Num(); FrameIndex++)
    {
        const TArray<FColor>& Frame = Frames[FrameIndex];
        
        if (Frame.Num() != Width * Height)
        {
            UE_LOG(LogTemp, Warning, TEXT("Frame %d has incorrect size: %d (expected %d)"), 
                   FrameIndex, Frame.Num(), Width * Height);
            continue;
        }

        // Convert FColor array to raw RGBA data
        TArray<uint8> RawData;
        RawData.Reserve(Frame.Num() * 4);

        for (const FColor& Color : Frame)
        {
            RawData.Add(Color.R);
            RawData.Add(Color.G);
            RawData.Add(Color.B);
            RawData.Add(Color.A);
        }

        // Set image data
        if (!ImageWrapper->SetRaw(RawData.GetData(), RawData.Num(), Width, Height, ERGBFormat::RGBA, 8))
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to set image data for frame %d"), FrameIndex);
            continue;
        }

        // Get compressed PNG data
        const TArray64<uint8>& CompressedData = ImageWrapper->GetCompressed();

        // Save to file
        FString FramePath = FPaths::Combine(TempDirectory, FString::Printf(TEXT("frame_%04d.png"), FrameIndex));
        
        if (!FFileHelper::SaveArrayToFile(CompressedData, *FramePath))
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to save frame %d to: %s"), FrameIndex, *FramePath);
            return false;
        }
    }

    UE_LOG(LogTemp, Log, TEXT("Saved %d frames to temp directory: %s"), Frames.Num(), *TempDirectory);
    return true;
}

bool USGFFmpegVideoEncoder::RunFFmpegProcess(const FString& Command)
{
    UE_LOG(LogTemp, Log, TEXT("Running FFmpeg with arguments: %s"), *Command);

    int32 ReturnCode = -1;
    FString StdOut;
    FString StdErr;

    // Run FFmpeg with the command arguments
    bool bSuccess = FPlatformProcess::ExecProcess(
        TEXT("ffmpeg"),
        *Command,
        &ReturnCode,
        &StdOut,
        &StdErr
    );

    if (!bSuccess || ReturnCode != 0)
    {
        UE_LOG(LogTemp, Error, TEXT("FFmpeg failed with return code %d"), ReturnCode);
        if (!StdErr.IsEmpty())
        {
            UE_LOG(LogTemp, Error, TEXT("FFmpeg stderr: %s"), *StdErr);
        }
        return false;
    }

    UE_LOG(LogTemp, Log, TEXT("FFmpeg completed successfully"));
    return true;
}

void USGFFmpegVideoEncoder::CleanupTempFiles(const FString& TempDirectory)
{
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    
    if (PlatformFile.DirectoryExists(*TempDirectory))
    {
        PlatformFile.DeleteDirectoryRecursively(*TempDirectory);
        UE_LOG(LogTemp, Verbose, TEXT("Cleaned up temp directory: %s"), *TempDirectory);
    }
}