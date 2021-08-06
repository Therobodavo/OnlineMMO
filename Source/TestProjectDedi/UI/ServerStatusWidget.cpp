// Fill out your copyright notice in the Description page of Project Settings.


#include "../UI/ServerStatusWidget.h"
#include "Kismet/GameplayStatics.h"
#include "../NetworkManager.h"
#include "Components/Button.h"
void UServerStatusWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	Cast<UButton>(GetWidgetFromName("ServerConnect_Button"))->OnClicked.AddDynamic(this,&UServerStatusWidget::JoinServer);
}

void UServerStatusWidget::JoinServer()
{
	if (serverID >= 0 && networkManager)
	{
		UGameplayStatics::OpenLevel(this,FName(*(networkManager->GetServerFullIP(serverID))));
	}
}
