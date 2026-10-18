// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MFPSPlayerController.h"

#include "EnhancedInputSubsystems.h"

AMFPSPlayerController::AMFPSPlayerController()
{
	bShowMouseCursor = false;
}

void AMFPSPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!IsLocalController() || !DefaultMappingContext)
	{
		return;
	}
	
	ULocalPlayer* LocalPlayer = GetLocalPlayer();

	if (!LocalPlayer)
	{
		return;
	}
	
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

	if (InputSubsystem)
	{
		InputSubsystem->AddMappingContext(DefaultMappingContext, 0);
	}
}
