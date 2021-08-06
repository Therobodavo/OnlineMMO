// Fill out your copyright notice in the Description page of Project Settings.


#include "UIManager.h"
#include "Blueprint/UserWidget.h"
#include "../Utility/Helper.h"
#include "MainMenu.h"
#include "ServerList.h"
/// <summary>
/// Load in menu blueprints.
/// </summary>
UUIManager::UUIManager()
{
	//UI Menu BP
	menuBPList.Add(Menu::MainMenu, Helper::LoadBP<UMainMenu, UUserWidget>("WidgetBlueprint'/Game/Blueprints/BP_MainMenu'"));
	menuBPList.Add(Menu::ServerList, Helper::LoadBP<UServerList, UUserWidget>("WidgetBlueprint'/Game/Blueprints/BP_ServerList'"));
}
/// <summary>
/// Create instance of widgets based off blueprints loaded in.
/// </summary>
void UUIManager::InitWidgets()
{
	
	menuList.Empty();
	for (const TPair<int, TSubclassOf<UUserWidget>>& pair : menuBPList)
	{
		if (Helper::Validate(menuBPList[pair.Key]))
		{
			menuList.Add(pair.Key, CreateWidget<UUserWidget>(GetWorld(), menuBPList[pair.Key]));
		}
	}
}
/// <summary>
/// Initialize manager.
/// </summary>
void UUIManager::Init()
{
	if (!isInit)
	{
		InitWidgets();
		isInit = true;
	}
}
/// <summary>
/// LEGACY CODE: SetMenu should be used.
/// Set combat overlay's state.
/// </summary>
/// <param name="toggle">state to set overlay to</param>
void UUIManager::SetOverlay(bool toggle)
{
	if (toggle && menuList.Contains(Menu::HUD) && Helper::Validate(menuList[Menu::HUD]) && !menuList[Menu::HUD]->IsInViewport())
		menuList[Menu::HUD]->AddToViewport();
	else if (!toggle && menuList.Contains(Menu::HUD) && Helper::Validate(menuList[Menu::HUD]) && menuList[Menu::HUD]->IsInViewport())
		menuList[Menu::HUD]->RemoveFromParent();
}
/// <summary>
/// Set given menu's state.
/// </summary>
/// <param name="u">given menu ID</param>
/// <param name="state">state to set menu to</param>
void UUIManager::SetMenu(Menu u, bool state)
{
	if (menuList.Contains(u) && Helper::Validate(menuList[u]))
	{
		if (state)
		{
			if (!menuList[u]->IsInViewport())
				menuList[u]->AddToViewport();
		}
		else
		{
			if (menuList[u]->IsInViewport())
				menuList[u]->RemoveFromParent();
		}
	}
}
/// <summary>
/// Toggles state for given menu (false -> true, true -> false)
/// </summary>
/// <param name="MenuID">menu ID to toggle state of</param>
void UUIManager::ToggleMenu(int MenuID)
{
	if (menuList.Contains(MenuID) && Helper::Validate(menuList[MenuID]))
	{
		if (menuList[MenuID]->IsInViewport())
			menuList[MenuID]->RemoveFromParent();
		else
			menuList[MenuID]->AddToViewport();
	}
}
/// <summary>
/// Set all menu states to false.
/// </summary>
void UUIManager::DisableAll()
{
	for (const TPair<int, UUserWidget*>& pair : menuList)
	{
		if (Helper::Validate(pair.Value) && pair.Value->IsInViewport())
			pair.Value->RemoveFromParent();
	}
}
/// <summary>
/// Set all menu states to false that aren't the combat overlay, main menu, or loading screen.
/// </summary>
void UUIManager::DisablePauseMenus()
{
	for (const TPair<int, UUserWidget*>& pair : menuList)
	{
		if (pair.Key != Menu::HUD && pair.Key != Menu::MainMenu && pair.Key != Menu::LoadingScreen && Helper::Validate(pair.Value))
		{
			if (pair.Value->IsInViewport())
				pair.Value->RemoveFromParent();
		}
	}
}
/// <summary>
/// Switch from one menu to another.
/// Sets one menu state to false and another to true.
/// </summary>
/// <param name="currMenu">menu to set to false</param>
/// <param name="newMenu">menu to set to true</param>
void UUIManager::SwitchScenes(int currMenu, int newMenu)
{
	if (menuList.Contains(newMenu) && Helper::Validate(menuList[newMenu]) && !menuList[newMenu]->IsInViewport())
	{
		menuList[newMenu]->AddToViewport();
		if (menuList.Contains(currMenu) && Helper::Validate(menuList[currMenu]) && menuList[currMenu]->IsInViewport())
			menuList[currMenu]->RemoveFromParent();
	}
}
/// <summary>
/// Set all menus to false except the given menu ID
/// </summary>
/// <param name="u">menu id to not turn off</param>
void UUIManager::DisableAllButOne(Menu u)
{
	for (const TPair<int, UUserWidget*>& pair : menuList)
	{
		if (pair.Key != u)
		{
			if (pair.Value->IsInViewport())
				pair.Value->RemoveFromParent();
		}
	}
}