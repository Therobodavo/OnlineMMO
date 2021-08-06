#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECTDEDI_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
public:
public:
	UMainMenu(const FObjectInitializer& ObjectInitializer);
protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnPlay();

	class UButton* playBTN = NULL;
private:
};
