#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerList.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECTDEDI_API UServerList : public UUserWidget
{
	GENERATED_BODY()
public:
	UServerList(const FObjectInitializer& ObjectInitializer);
	UFUNCTION()
		void SetServerStatus(int serverID);
	UFUNCTION()
		void RefreshServers();
protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	void CreateServerStatus();
private:
	class UVerticalBox* serverListVertBox = NULL;
	class UButton* refreshBTN = NULL;
	TSubclassOf<class UUserWidget> serverStatusClass = NULL;
	TMap<int, class UUserWidget*> serverStatusList;
};
