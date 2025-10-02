#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "Async/Future.h"
#include "HAL/ThreadSafeBool.h"
#include "SGVideoEncoder.generated.h"

// Internal delegate for C++ only (not exposed to Blueprint system)
DECLARE_DELEGATE_TwoParams(FOnVideoEncodingComplete_Internal, bool /* bSuccess */, const FString& /* OutputPath */);
DECLARE_DELEGATE_OneParam(FOnVideoEncodingProgress_Internal, float /* Progress */);

/**
 * Video encoder for creating MP4 files from frame sequences
 * Uses external FFmpeg for reliable video encoding
 */
UCLASS(BlueprintType)
class SOCIALGOLF_API USGVideoEncoder : public UObject
{
    GENERATED_BODY()

public:
    USGVideoEncoder();

    // Settings for video encoding
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Settings")
    int32 VideoWidth = 1920;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Settings")
    int32 VideoHeight = 1080;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Settings")
    float FrameRate = 30.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Settings")
    int32 VideoBitrate = 5000000; // 5 Mbps

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Video Settings")
    int32 VideoQuality = 23; // H.264 CRF value (lower = better quality)

    // Encoding functions
    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    bool StartVideoEncoding(const FString& OutputPath, int32 Width, int32 Height, float FPS);

    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    bool FinishVideoEncoding();

    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    void CancelVideoEncoding();

    // Status functions
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Video Encoding")
    bool IsEncoding() const { return bIsEncoding; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Video Encoding")
    float GetEncodingProgress() const { return EncodingProgress; }

    // Event delegates (internal C++ only)
    FOnVideoEncodingComplete_Internal OnEncodingComplete;
    FOnVideoEncodingProgress_Internal OnEncodingProgress;

protected:
    // Internal encoding state
    FString CurrentOutputPath;
    FThreadSafeBool bIsEncoding;
    float EncodingProgress;
    int32 TotalFramesToEncode;
    int32 FramesEncoded;

    // Helper functions
    bool CreateOutputFile(const FString& OutputPath);
    void UpdateProgress();
};

/**
 * FFmpeg video encoder using external FFmpeg process
 * Primary video encoding solution for reliable MP4 creation
 */
UCLASS(BlueprintType)
class SOCIALGOLF_API USGFFmpegVideoEncoder : public UObject
{
    GENERATED_BODY()

public:
    // Check if FFmpeg is available
    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    static bool IsFFmpegAvailable();

    // Create FFmpeg command for frame sequence
    UFUNCTION(BlueprintCallable, Category = "Video Encoding")
    static FString CreateFFmpegCommand(const FString& InputPattern, const FString& OutputPath, 
                                     float FPS, int32 Quality);

    // Static encoding functions (not exposed to Blueprint due to TArray<FColor> complexity)
    static bool EncodeFramesToMP4WithFFmpeg(const TArray<TArray<FColor>>& Frames, 
                                           const FString& OutputPath,
                                           int32 Width, int32 Height, 
                                           float FPS, int32 Quality = 23);

protected:
    static bool SaveFramesToDisk(const TArray<TArray<FColor>>& Frames, const FString& TempDirectory,
                               int32 Width, int32 Height);
    static bool RunFFmpegProcess(const FString& Command);
    static void CleanupTempFiles(const FString& TempDirectory);
};