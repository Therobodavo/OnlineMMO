// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerStatusWidget.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECTDEDI_API UServerStatusWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	int serverID = -1;
	class UNetworkManager* networkManager = NULL;
	virtual void NativeOnInitialized() override;
	UFUNCTION()
		void JoinServer();
};
