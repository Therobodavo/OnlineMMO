// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomBeaconHostObject.h"
#include "CustomBeaconClient.h"
#include "Engine/World.h"
#include "GameFramework/GameModeBase.h"

ACustomBeaconHostObject::ACustomBeaconHostObject() 
{
	ClientBeaconActorClass = ACustomBeaconClient::StaticClass();
	BeaconTypeName = ClientBeaconActorClass->GetName();
}
void ACustomBeaconHostObject::OnClientConnected(AOnlineBeaconClient* NewClientActor, UNetConnection* ClientConnection) 
{
	Super::OnClientConnected(NewClientActor, ClientConnection);
	if (NewClientActor) 
	{
		GLog->Log("CONNECTED");
		ACustomBeaconClient* client = Cast<ACustomBeaconClient>(NewClientActor);
		if (client) 
		{
			client->Ping();
			client->ClientSendInfo(GetWorld()->GetAuthGameMode()->GetNumPlayers());

			//Call event OnBeaconUpdate ??? or do them individually??

			client->Disconnect();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("NOT CONNECTED"));
	}
}

