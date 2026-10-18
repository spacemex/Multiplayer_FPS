// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MFPSCharacter.generated.h"

class UCameraComponent;
class UInputAction;
struct FInputActionValue;

UCLASS(Blueprintable)
class MULTIPLAYERFPSPLAYER_API AMFPSCharacter : public ACharacter
{
private:
	GENERATED_BODY()

public:
	AMFPSCharacter();

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintPure, Category="FPS|Camera")
	FORCEINLINE UCameraComponent* GetFirstPersonCamera() const { return FirstPersonCamera; }
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="FPS|Camera")
	TObjectPtr<UCameraComponent> FirstPersonCamera;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="FPS|Input")
	TObjectPtr<UInputAction> MoveAction;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="FPS|Input")
	TObjectPtr<UInputAction> LookAction;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="FPS|Input")
	TObjectPtr<UInputAction> JumpAction;
	
	virtual void HandleMove(const FInputActionValue& Value);
	virtual void HandleLook(const FInputActionValue& Value);
	virtual void HandleJumpStarted();
	virtual void HandleJumpStopped();
};
