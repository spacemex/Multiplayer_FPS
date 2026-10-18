// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MFPSPlayerController.generated.h"

class UInputMappingContext;

UCLASS(Blueprintable)
class MULTIPLAYERFPSPLAYER_API AMFPSPlayerController : public APlayerController
{
private:
	GENERATED_BODY()
	
public:
	AMFPSPlayerController();
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="FPS|Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;
};
