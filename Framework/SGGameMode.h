#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGGameMode.generated.h"

class USGSaveManager;

UCLASS()
class SOCIALGOLF_API ASGGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ASGGameMode();

    virtual void BeginPlay() override;
    
    // Multiplayer support functions
    virtual void PostLogin(APlayerController* NewPlayer) override;
    virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;

    // Save System Access
    UFUNCTION(BlueprintCallable, Category = "Save System")
    USGSaveManager* GetSaveManager() const { return SaveManager; }

protected:
    // Save Manager Component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Save System")
    USGSaveManager* SaveManager;

    // Save/Load event handlers
    UFUNCTION()
    void OnSaveCompleted(bool bSuccess, const FString& ErrorMessage);

    UFUNCTION()
    void OnLoadCompleted(bool bSuccess, const FString& ErrorMessage);
};