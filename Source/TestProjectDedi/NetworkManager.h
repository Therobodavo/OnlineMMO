// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NetworkManager.generated.h"

USTRUCT()
struct FServerInfo
{
	GENERATED_BODY()

	FServerInfo(FString ip, FString port)
	{
		IP = ip;
		Port = port;
	}
	FServerInfo()
	{
		IP = "";
		Port = "";
	}
	FString IP = "";
	FString Port = "";
	int PlayerCount = 0;
	int Ping = 0;
};

//Server Names By ID
UENUM(BlueprintType)
enum Server
{
	Server1=0    UMETA(DisplayName = "Server1"),
	Server2=1      UMETA(DisplayName = "Server2"),
};

UCLASS()
class TESTPROJECTDEDI_API UNetworkManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UNetworkManager();

	UFUNCTION(BlueprintCallable)
		FString GetServerIP(int ServerID);
	UFUNCTION(BlueprintCallable)
		FString GetServerPort(int ServerID);
	UFUNCTION(BlueprintCallable)
		FString GetServerFullIP(int ServerID);
	UFUNCTION(BlueprintCallable)
		int GetServerCount();
	UFUNCTION(BlueprintCallable)
		void SetServerPlayerCount(int server, int num);
	void SetServerPing(int server, float ping);
	UFUNCTION(BlueprintCallable)
		int GetServerPlayerCount(int server);
	UFUNCTION(BlueprintCallable)
		FString GetServerName(int server);
	UFUNCTION(BlueprintCallable)
		int GetServerPing(int server);
	UFUNCTION(BlueprintCallable)
		class ACustomBeaconClient* CreateClientBeacon(int server);
private:
	TArray<FServerInfo> servers = { FServerInfo("69.47.161.199", "7777"), FServerInfo("69.47.161.199", "7779") };
	TArray<class ACustomBeaconClient*> clientBeacons;
};
