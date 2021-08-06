// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "CustomBeaconClient.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerInfoUpdated, int, ServerID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeaconPingComplete, int32, TimeMS);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FConnectSuccess, bool, FIsConnected, AOnlineBeaconClient*, FClientBeacon, const FString&, FConnectedIP);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerInfoReceived, AOnlineBeaconClient*, FClientBeacon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerInfoReceived, int, PlayerCount);
UCLASS()
class TESTPROJECTDEDI_API ACustomBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
public:
	ACustomBeaconClient();

	UFUNCTION(BlueprintCallable)
		bool ConnectToServer(const FString& Address);
	UFUNCTION(Client, unreliable)
		void ClientSendInfo(int numPlayers);

	/** Send a ping RPC to the client */
	UFUNCTION(client, reliable)
		virtual void ClientPing();

	/** Send a pong RPC to the host */
	UFUNCTION(server, reliable, WithValidation)
		virtual void ServerPong();

	/** Initial Ping Start*/
	UFUNCTION(client, reliable)
		virtual void Ping();

	/** Provide a Blueprint binding for the OnPingComplete event */
	UPROPERTY(BlueprintAssignable, Category = "PingBeacon")
		FOnBeaconPingComplete OnPingComplete;

	FServerInfoUpdated OnServerUpdated;
	virtual void Disconnect();

	class UNetworkManager* networkManager = NULL;
	int serverID = 0;
protected:
	virtual void OnFailure() override;
	virtual void OnConnected() override;
	UFUNCTION()
		void RefreshServerInfo(bool isConnected, AOnlineBeaconClient* client, const FString& connectedIP);
	UFUNCTION()
		void UpdateServerInfo(int numPlayers);
	UFUNCTION()
		virtual void UpdateServerPing(int32 ping);
	UPROPERTY(BlueprintAssignable)
		FConnectSuccess FConnected;
	UPROPERTY(BlueprintAssignable)
		FServerInfoReceived OnServerInfoReceived;



	bool pingDone = false;
	int64 startTime = 0;
};
