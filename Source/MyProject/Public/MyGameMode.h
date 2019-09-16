// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/Character.h"
#include "MyGameMode.generated.h"

/**
 *
 */
 //UENUM()
 //enum class EMatchState : uint8
 //{
 //
 //};
UCLASS()
class MYPROJECT_API AMyGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

		/*U*FUNCTION(BlueprintCallable, Category = Game)
			void SetGameState();*/
public:
	virtual void StartPlay() override;


	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void RestartPlayer(AController* NewPlayer) override;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ACharacter> Player;
	UPROPERTY(EditDefaultsOnly)
		FTransform Tran;

private:
	int32 PlayerNum = 0;

	virtual void StartMatch() override;

};
