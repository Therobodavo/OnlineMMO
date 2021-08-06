// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkManager.h"
#include "IPAddress.h"
#include "Utility\Helper.h"
#include "OnlineBeaconHost.h"
#include "Beacons/CustomBeaconClient.h"
UNetworkManager::UNetworkManager() 
{

}

FString UNetworkManager::GetServerIP(int ServerID)
{
	if (ServerID >= 0 && ServerID < servers.Num() && servers[ServerID].IP != "")
		return servers[ServerID].IP;
	return FString("INVALID_IP");
}

FString UNetworkManager::GetServerPort(int ServerID)
{
	if (ServerID >= 0 && ServerID < servers.Num() && servers[ServerID].Port != "")
		return servers[ServerID].Port;
	return FString("INVALID_Port");
}
FString UNetworkManager::GetServerFullIP(int ServerID) 
{
	if (ServerID >= 0 && ServerID < servers.Num() && servers[ServerID].Port != "")
		return servers[ServerID].IP + ":" + servers[ServerID].Port;
	return FString("INVALID_FULL_IP");
}

int UNetworkManager::GetServerCount()
{
	return servers.Num();
}
void UNetworkManager::SetServerPlayerCount(int server, int num) 
{
	servers[server].PlayerCount = num;
}
void UNetworkManager::SetServerPing(int server, float ping) 
{
	servers[server].Ping = ping;
}
int UNetworkManager::GetServerPlayerCount(int server)
{
	return servers[server].PlayerCount;
}

FString UNetworkManager::GetServerName(int server)
{
	return Helper::EnumToString(TEXT("Server"),server);
}

int UNetworkManager::GetServerPing(int server)
{
	return 0;
}

ACustomBeaconClient* UNetworkManager::CreateClientBeacon(int server)
{
	ACustomBeaconClient* beacon = GetWorld()->SpawnActor<ACustomBeaconClient>(ACustomBeaconClient::StaticClass());
	beacon->serverID = server;
	beacon->networkManager = this;
	return beacon;
}
