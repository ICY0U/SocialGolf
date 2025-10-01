#include "SGPlayerState.h"
#include "Net/UnrealNetwork.h"
ASGPlayerState::ASGPlayerState()
{
    bReplicates = true;
    DisplayName = FText::FromString(TEXT("Player"));
}
void ASGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ASGPlayerState, DisplayName);
}