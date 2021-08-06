// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "CustomBeaconHostObject.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECTDEDI_API ACustomBeaconHostObject : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
public:
	ACustomBeaconHostObject();
protected:
	virtual void OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) override;
};
