// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"


#include "MenuSystem/MenuInterface.h"
#include "SMyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API USMyGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()
	
public:
	USMyGameInstance(const FObjectInitializer & ObjectInitializer);

	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMenu();

	UFUNCTION(BlueprintCallable)
	void LoadInGameMenu();
	
	UFUNCTION(Exec)
	void Host() override;

	UFUNCTION(Exec)
	void Join(const FString& Address) override;

	virtual void LoadMainMenu() override;
	
private:

	TSubclassOf<class UUserWidget>MenuClass;
	TSubclassOf<class UUserWidget>InGameMenuClass;

	class UMainMenu* Menu;
	
};
