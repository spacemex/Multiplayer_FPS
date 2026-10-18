#include "MultiplayerFPSCore.h"

#define LOCTEXT_NAMESPACE "FMultiplayerFPSCoreModule"

void FMultiplayerFPSCoreModule::StartupModule()
{
	UE_LOG(LogTemp, Log, TEXT("MultiplayerFPSCore module initialized."));
}

void FMultiplayerFPSCoreModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("MultiplayerFPSCore module shutdown."));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMultiplayerFPSCoreModule, MultiplayerFPSCore)
