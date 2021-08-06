#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIManager.generated.h"

UENUM()
enum Menu
{
	MainMenu	UMETA(DisplayName = "MainMenuScreen"),
	ServerList	UMETA(DisplayName = "ServerListScreen"),
	HUD	UMETA(DisplayName = "HUD"),
	LoadingScreen UMETA(DisplayName = "LoadingScreen")
};


/**
 * UI Manager Class
 * Keeps track of and interacts with all UI widgets
 * 
 * Created by David Knolls
 */
UCLASS()
class TESTPROJECTDEDI_API UUIManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UUIManager();

	UPROPERTY()
		TMap<int, TSubclassOf<class UUserWidget>> menuBPList; //Blueprints stored after loaded.
	UPROPERTY()
		TMap<int, class UUserWidget*> menuList; //Instances of blueprints (these actually are created in the game)

	void InitWidgets();

	UFUNCTION(BlueprintCallable)
	void Init();

	void SetOverlay(bool);

	UFUNCTION(BlueprintCallable)
	void SetMenu(Menu u, bool state);

	void ToggleMenu(int MenuID);
	void DisableAll();
	void DisablePauseMenus();

	UFUNCTION(BlueprintCallable)
	void SwitchScenes(int currMenu, int newMenu);

	UFUNCTION(BlueprintCallable)
	void DisableAllButOne(Menu u);
	//void InitLoadLevel(int lvl);

	bool isInit = false;
	//UPROPERTY()
	//	class AMyPlayerController* controller = NULL;
	//UPROPERTY()
	//	class UMyGameInstance* instance = NULL;
	//UPROPERTY()
	//	class ULoadingScreen* loadingScreen = NULL;
};
