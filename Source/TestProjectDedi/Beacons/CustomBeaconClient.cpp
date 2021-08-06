// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomBeaconClient.h"
#include "../NetworkManager.h"
#include "../Utility/Helper.h"
#include "../UI/UIManager.h"
#include "../UI/ServerList.h"
ACustomBeaconClient::ACustomBeaconClient() 
{
	FConnected.AddDynamic(this, &ACustomBeaconClient::RefreshServerInfo);
	//networkManager = GetGameInstance()->GetSubsystem<UNetworkManager>();
	OnServerInfoReceived.AddDynamic(this, &ACustomBeaconClient::UpdateServerInfo);
	OnPingComplete.AddDynamic(this, &ACustomBeaconClient::UpdateServerPing);
}

bool ACustomBeaconClient::ConnectToServer(const FString& Address)
{
	FURL Destination = FURL(NULL, *Address, ETravelType::TRAVEL_Absolute);
	Destination.Port++; //Server uses 1 higher port for listen server?

	bool couldConnect = InitClient(Destination);
	return couldConnect;
}

void ACustomBeaconClient::ClientPing_Implementation()
{
#if !UE_BUILD_SHIPPING
	//UE_LOG(LogBeacon, Log, TEXT("Ping"));

	float currentTime = GetWorld()->GetTimeSeconds();

	int64 endTime = FDateTime::Now().GetTicks(); //Get our end time in Ticks
	int64 diff = endTime - startTime; 	//Find the difference in ticks.

	//Divide diff by 10,000 to convert to Milliseconds
	//And cast to int32 while we are at
	int32 ms = (int32)diff / 10000;
	GLog->Log("CLIENT PONG");
	OnPingComplete.Broadcast(ms);
#endif
}
void ACustomBeaconClient::Ping_Implementation()
{
#if !UE_BUILD_SHIPPING
	GLog->Log("SERVER PING");
	startTime = FDateTime::Now().GetTicks(); //Set our initial start time in ticks
	ServerPong(); 	//Call server pong rpc
#endif
}


bool ACustomBeaconClient::ServerPong_Validate()
{
#if !UE_BUILD_SHIPPING
	return true;
#else
	return false;
#endif
}

void ACustomBeaconClient::ServerPong_Implementation()
{
#if !UE_BUILD_SHIPPING
	ClientPing();
#endif
}

void ACustomBeaconClient::OnFailure()
{
	Super::OnFailure();
	if (BeaconConnection)
	{
		FConnected.Broadcast(false, this, BeaconConnection->RemoteAddressToString());
	}
}

void ACustomBeaconClient::OnConnected()
{
	Super::OnConnected();
	if (BeaconConnection) 
	{
		FConnected.Broadcast(true, this, BeaconConnection->RemoteAddressToString());
	}
}

void ACustomBeaconClient::Disconnect()
{
	DestroyBeacon();
}
void ACustomBeaconClient::ClientSendInfo_Implementation(int numPlayers)
{
	OnServerInfoReceived.Broadcast(numPlayers);
}
void ACustomBeaconClient::RefreshServerInfo(bool isConnected,AOnlineBeaconClient* client, const FString& connectedIP) 
{
	if (isConnected)
	{
		GLog->Log("Connected to server " + connectedIP);
	}
	else 
	{
		GLog->Log("Server Offline? Failed to connect to server " + connectedIP);
	}
}
void ACustomBeaconClient::UpdateServerInfo(int numPlayers)
{
	networkManager->SetServerPlayerCount(serverID, numPlayers);
	OnServerUpdated.Broadcast(serverID);
	//UUIManager* uiManager = GetGameInstance()->GetSubsystem<UUIManager>();
	//Cast<UServerList>(uiManager->menuList[Menu::ServerList])->SetServerStatus(serverID);
	//Disconnect();
}

void ACustomBeaconClient::UpdateServerPing(int32 ping)
{
	networkManager->SetServerPing(serverID, ping);
}
