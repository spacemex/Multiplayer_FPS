#include "MultiplayerFPSPlayer.h"

#define LOCTEXT_NAMESPACE "FMultiplayerFPSPlayerModule"

void FMultiplayerFPSPlayerModule::StartupModule()
{
    UE_LOG(LogTemp, Log, TEXT("MultiplayerFPSPlayer initialized."));
}

void FMultiplayerFPSPlayerModule::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("MultiplayerFPSPlayer shutdown."));
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FMultiplayerFPSPlayerModule, MultiplayerFPSPlayer)