// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Engine/World.h"
#include "MyPlayerState.h"

AMyGameMode::AMyGameMode(const FObjectInitializer& ObjectInitalizer) : Super(ObjectInitalizer)
{

}

void AMyGameMode::StartPlay()
{
	
		//Super::StartPlay();
	
    
	/*if (MatchState == MatchState::WaitingToStart && ReadyToStartMatch())
	{
		StartMatch();
	}*/
}

void AMyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	PlayerNum++;
	if (PlayerNum  == 4)
	{
		//SetMatchState(MatchState::WaitingToStart);
		StartMatch();
	}
}

void AMyGameMode::RestartPlayer(AController* NewPlayer)
{
	
		//Super::RestartPlayer(NewPlayer);
	
	
}

void AMyGameMode::StartMatch()
{
	Super::StartMatch();
	for ( auto It= GetWorld()->GetPlayerControllerIterator();It;It++)
	{
		//It->
		//(*It)->UnPossess();
		ACharacter* Cha = GetWorld()->SpawnActorDeferred<ACharacter>(Player, Tran,NULL,NULL, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);
		if (Cha)
		{
			Cha->FinishSpawning(Tran);
			//APlayerState* PlayerState =
			//(*It)->
				(*It)->GetPlayerState<AMyPlayerState>();
			//Cha->SetPlayerState(PlayerState);
			
		}
		//GetWorld()->IsPlayInEditor();
		//Cha->SetPlayerState();
		(*It)->Possess(Cha);
		
	}
}
