#include "SGHUD.h"
#include "Engine/Engine.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

ASGHUD::ASGHUD()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickInterval = 0.1f; // Update 10 times per second for FPS calculation
}

void ASGHUD::BeginPlay()
{
    Super::BeginPlay();
    
    // Initialize FPS tracking
    FPSCounter = 0.0f;
    FPSTimer = 0.0f;
    FrameCount = 0;
}

void ASGHUD::DrawHUD()
{
    Super::DrawHUD();

    if (!Canvas)
    {
        return;
    }

    // Update FPS calculation
    UpdateFPS(GetWorld()->GetDeltaSeconds());

    // Draw FPS display
    if (bShowFPS)
    {
        DrawFPSDisplay();
    }

    // Draw network stats if enabled
    if (bShowNetworkStats && GetWorld()->GetNetMode() != NM_Standalone)
    {
        DrawNetworkStats();
    }
}

void ASGHUD::UpdateFPS(float DeltaTime)
{
    FrameCount++;
    FPSTimer += DeltaTime;

    // Update FPS counter every second
    if (FPSTimer >= 1.0f)
    {
        FPSCounter = FrameCount / FPSTimer;
        FrameCount = 0;
        FPSTimer = 0.0f;
    }
}

void ASGHUD::DrawFPSDisplay()
{
    if (!Canvas)
    {
        return;
    }

    // Determine FPS color based on performance
    FLinearColor DisplayColor = FPSTextColor;
    if (FPSCounter < 30.0f)
    {
        DisplayColor = FLinearColor::Red;
    }
    else if (FPSCounter < 45.0f)
    {
        DisplayColor = FLinearColor::Yellow;
    }
    else
    {
        DisplayColor = FLinearColor::Green;
    }

    // Format FPS text
    FString FPSText = FString::Printf(TEXT("FPS: %.1f"), FPSCounter);

    // Draw FPS
    Canvas->SetDrawColor(DisplayColor.ToRGBE());
    Canvas->DrawText(
        GEngine->GetSmallFont(),
        FPSText,
        FPSPosition.X,
        FPSPosition.Y,
        FPSTextScale,
        FPSTextScale
    );
}

void ASGHUD::DrawNetworkStats()
{
    if (!Canvas || !GetWorld())
    {
        return;
    }

    APlayerController* PC = GetOwningPlayerController();
    if (!PC)
    {
        return;
    }

    float YOffset = FPSPosition.Y + 30.0f;
    const float LineHeight = 20.0f;
    
    // Draw network mode
    FString NetModeText;
    switch (GetWorld()->GetNetMode())
    {
        case NM_DedicatedServer:
            NetModeText = TEXT("NET: Dedicated Server");
            break;
        case NM_ListenServer:
            NetModeText = TEXT("NET: Listen Server");
            break;
        case NM_Client:
            NetModeText = TEXT("NET: Client");
            break;
        default:
            NetModeText = TEXT("NET: Standalone");
            break;
    }

    // Use blue color instead of Cyan
    Canvas->SetDrawColor(FLinearColor(0.0f, 0.7f, 1.0f, 1.0f).ToRGBE());
    Canvas->DrawText(GEngine->GetSmallFont(), NetModeText, FPSPosition.X, YOffset, FPSTextScale, FPSTextScale);
    YOffset += LineHeight;

    // Draw ping if in multiplayer
    if (GetWorld()->GetNetMode() == NM_Client)
    {
        if (AGameStateBase* GameState = GetWorld()->GetGameState())
        {
            float Ping = PC->PlayerState ? PC->PlayerState->GetPingInMilliseconds() : 0.0f;
            FString PingText = FString::Printf(TEXT("Ping: %.0f ms"), Ping);
            
            FLinearColor PingColor = FLinearColor::Green;
            if (Ping > 150.0f)
            {
                PingColor = FLinearColor::Red;
            }
            else if (Ping > 100.0f)
            {
                PingColor = FLinearColor::Yellow;
            }

            Canvas->SetDrawColor(PingColor.ToRGBE());
            Canvas->DrawText(GEngine->GetSmallFont(), PingText, FPSPosition.X, YOffset, FPSTextScale, FPSTextScale);
            YOffset += LineHeight;
        }
    }

    // Draw player count
    if (AGameStateBase* GameState = GetWorld()->GetGameState())
    {
        int32 PlayerCount = GameState->PlayerArray.Num();
        FString PlayerText = FString::Printf(TEXT("Players: %d"), PlayerCount);
        
        Canvas->SetDrawColor(FLinearColor::White.ToRGBE());
        Canvas->DrawText(GEngine->GetSmallFont(), PlayerText, FPSPosition.X, YOffset, FPSTextScale, FPSTextScale);
    }
}

void ASGHUD::ToggleFPSDisplay()
{
    bShowFPS = !bShowFPS;
}

void ASGHUD::ToggleNetworkStats()
{
    bShowNetworkStats = !bShowNetworkStats;
}