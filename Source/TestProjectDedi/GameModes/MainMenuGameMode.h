// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECTDEDI_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMainMenuGameMode();
	virtual void StartPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
protected:
};
