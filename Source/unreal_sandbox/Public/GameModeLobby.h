// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeLobby.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_SANDBOX_API AGameModeLobby : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AGameModeLobby();
	virtual ~AGameModeLobby() = default;

	/* Return number of players in the lobby */
	UFUNCTION(BlueprintPure, Category = "Players")
	virtual int32 GetPlayerCount() const;

	/* Set number of players in the lobby */
	UFUNCTION(BlueprintCallable, Category = "Players")
	virtual void SetPlayerCount(int32 newPlayerCount);

	virtual void StartPlay();

	UFUNCTION(BlueprintNativeEvent, Category = "Players", DisplayName = "Start")
	void StartPlayEvent();
};
