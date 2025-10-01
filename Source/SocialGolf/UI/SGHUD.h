#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SGHUD.generated.h"

UCLASS()
class SOCIALGOLF_API ASGHUD : public AHUD
{
    GENERATED_BODY()

public:
    ASGHUD();

protected:
    virtual void DrawHUD() override;
    virtual void BeginPlay() override;

    // FPS Display settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|FPS")
    bool bShowFPS = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|FPS")
    bool bShowNetworkStats = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|FPS")
    FLinearColor FPSTextColor = FLinearColor::Green;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|FPS")
    float FPSTextScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|FPS")
    FVector2D FPSPosition = FVector2D(50.0f, 50.0f);

private:
    // FPS calculation
    float FPSCounter = 0.0f;
    float FPSTimer = 0.0f;
    int32 FrameCount = 0;
    
    void UpdateFPS(float DeltaTime);
    void DrawFPSDisplay();
    void DrawNetworkStats();
    
public:
    UFUNCTION(BlueprintCallable, Category = "HUD")
    void ToggleFPSDisplay();
    
    UFUNCTION(BlueprintCallable, Category = "HUD")
    void ToggleNetworkStats();
};