#include "MainMenu.h"
#include "UIManager.h"
#include "Components/Button.h"
UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}
void UMainMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	playBTN = Cast<UButton>(GetWidgetFromName("PlayButton"));
	playBTN->OnClicked.AddDynamic(this, &UMainMenu::OnPlay);
}

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();
}
void UMainMenu::OnPlay() 
{
	UUIManager* manager = GetGameInstance()->GetSubsystem<UUIManager>();
	manager->SwitchScenes(Menu::MainMenu,Menu::ServerList);
}
