// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MenuInterface.h"
#include "MenuWidget.h"

#include "CoreMinimal.h"
#include "InGameMenu.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()

protected:

	virtual bool Initialize() override;

private:

	UPROPERTY(meta = (BindWidget))
	class UButton* CancelButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitButton;

	UFUNCTION()
	void CancelPressed();

	UFUNCTION()
	void QuitPressed();
};
