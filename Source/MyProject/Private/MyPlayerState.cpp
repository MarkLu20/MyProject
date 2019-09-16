// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"
#include "UnrealEngine.h"
#include "UnrealNetwork.h"



void AMyPlayerState::OnRep_StateMapChange()
{
	GEngine->AddOnScreenDebugMessage(-1,100.0f,FColor::Red,TEXT("OnRep_StateMapChange"));
}

void AMyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMyPlayerState,StateMap);
	
}
