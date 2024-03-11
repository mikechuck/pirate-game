// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeLobby.h"
#include "GameStateLobby.h"

AGameModeLobby::AGameModeLobby()
{
	GameStateClass = AGameStateLobby::StaticClass();
}

int32 AGameModeLobby::GetPlayerCount() const
{
	return GetGameState<AGameStateLobby>()->PlayerCount;
}

void AGameModeLobby::SetPlayerCount(int32 newPlayerCount)
{
	GetGameState<AGameStateLobby>()->PlayerCount = newPlayerCount;
}

void AGameModeLobby::StartPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("COMING FROM C++ GAME MODE"));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("StartPlay Called"));

	StartPlayEvent();

	Super::StartPlay();
}

void AGameModeLobby::StartPlayEvent_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("StartPlayEvent Default Implementation called"));
}