// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProjectDediGameMode.h"
#include "TestProjectDediCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "OnlineBeaconHost.h"
#include "Beacons/CustomBeaconHostObject.h"
ATestProjectDediGameMode::ATestProjectDediGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ATestProjectDediGameMode::StartPlay() 
{
	Super::StartPlay();
}
void ATestProjectDediGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (CreateHostBeacon())
	{
		GLog->Log("CREATED HOST BEACON");
	}
	else
	{
		GLog->Log("HOST BEACON FAILED TO BE CREATED");
	}
}
void ATestProjectDediGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}
bool ATestProjectDediGameMode::CreateHostBeacon()
{
	if (GetWorld())
	{
		AOnlineBeaconHost* host = GetWorld()->SpawnActor<AOnlineBeaconHost>(AOnlineBeaconHost::StaticClass());
		if (host && host->InitHost())
		{
			host->PauseBeaconRequests(false);
			customHost = GetWorld()->SpawnActor<ACustomBeaconHostObject>(ACustomBeaconHostObject::StaticClass());
			if (customHost)
			{
				host->RegisterHost(customHost);
				return true;
			}
		}
	}
	return false;
}
