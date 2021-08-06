// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestProjectDediGameMode.generated.h"

UCLASS(minimalapi)
class ATestProjectDediGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATestProjectDediGameMode();
	virtual void StartPlay() override;
	virtual void BeginPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
protected:
	UFUNCTION(BlueprintCallable)
		bool CreateHostBeacon();
	UPROPERTY()
		class ACustomBeaconHostObject* customHost = NULL;
};



