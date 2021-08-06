#include "ServerList.h"
#include "Components/VerticalBox.h"
#include "../Utility/Helper.h"
#include "../NetworkManager.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "../GameModes/MainMenuGameMode.h"
#include "../Beacons/CustomBeaconClient.h"
#include "Components/Button.h"
#include "ServerStatusWidget.h"
UServerList::UServerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	serverStatusClass = Helper::LoadBP<UUserWidget, UUserWidget>("WidgetBlueprint'/Game/Blueprints/BP_ServerStatus'");
}

void UServerList::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	serverListVertBox = Cast<UVerticalBox>(GetWidgetFromName("ServerList_VB"));
	refreshBTN = Cast<UButton>(GetWidgetFromName("RefreshButton"));
	refreshBTN->OnClicked.AddDynamic(this, &UServerList::RefreshServers);
	CreateServerStatus();
}
void UServerList::NativeConstruct()
{
	Super::NativeConstruct();
}
void UServerList::CreateServerStatus() 
{
	UNetworkManager* networkManager = GetGameInstance()->GetSubsystem<UNetworkManager>();
	for (int i = 0; i < networkManager->GetServerCount(); i++)
	{
		UServerStatusWidget* server = CreateWidget<UServerStatusWidget>(GetWorld(), serverStatusClass, FName("Server" + i));
		server->serverID = i;
		server->networkManager = networkManager;
		serverStatusList.Add(i, server);
		serverListVertBox->AddChild(serverStatusList[i]);
		SetServerStatus(i);
	}
}
void UServerList::SetServerStatus(int serverID)
{
	UNetworkManager* networkManager = GetGameInstance()->GetSubsystem<UNetworkManager>();
	
	UTextBlock* serverName = Cast<UTextBlock>(serverStatusList[serverID]->GetWidgetFromName("ServerName_Text"));
	UTextBlock* playerCount = Cast<UTextBlock>(serverStatusList[serverID]->GetWidgetFromName("ServerPlayerCount_Text"));
	UTextBlock* serverPing = Cast<UTextBlock>(serverStatusList[serverID]->GetWidgetFromName("ServerPing_Text"));

	if (Helper::Validate(serverName)) 
	{
		serverName->SetText(FText::FromString(networkManager->GetServerName(serverID)));
	}
	if (Helper::Validate(playerCount))
	{
		playerCount->SetText(FText::FromString(FString::FromInt(networkManager->GetServerPlayerCount(serverID))));
	}
	if (Helper::Validate(serverName))
	{
		serverPing->SetText(FText::FromString(FString::FromInt(networkManager->GetServerPing(serverID))));
	}
}
void UServerList::RefreshServers() 
{
	UNetworkManager* networkManager = GetGameInstance()->GetSubsystem<UNetworkManager>();
	for (int i = 0; i < networkManager->GetServerCount(); i++)
	{
		ACustomBeaconClient* c = networkManager->CreateClientBeacon(i);
		c->OnServerUpdated.AddDynamic(this, &UServerList::SetServerStatus);
		c->ConnectToServer(networkManager->GetServerFullIP(i));
	}
}