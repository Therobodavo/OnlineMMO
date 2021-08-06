// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "OnlineBeaconHost.h"
#include "../Beacons/CustomBeaconClient.h"
#include "../Utility/Helper.h"
#include "../NetworkManager.h"
AMainMenuGameMode::AMainMenuGameMode()
{

}

void AMainMenuGameMode::StartPlay()
{
	Super::StartPlay();
	UNetworkManager* networkManager = GetGameInstance()->GetSubsystem<UNetworkManager>();
	
	for (int i = 0; i < networkManager->GetServerCount(); i++) 
	{
		networkManager->CreateClientBeacon(i)->ConnectToServer(networkManager->GetServerFullIP(i));
	}
}

void AMainMenuGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}
