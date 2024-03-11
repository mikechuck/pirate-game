// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameStateLobby.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_SANDBOX_API AGameStateLobby : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	AGameStateLobby();
	virtual ~AGameStateLobby() = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 PlayerCount;
};
