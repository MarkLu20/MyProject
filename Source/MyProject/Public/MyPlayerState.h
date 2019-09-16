// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentPlayerStateChange, FName, CurrentState;
//UPROPERTY()
USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_USTRUCT_BODY()
		/** ²»¼æÈÝµÄ×´Ì¬*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FName> Name;
};
typedef TMap<FName, FName> State;
UCLASS()
class MYPROJECT_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
		FSoftObjectPath  Temp;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,ReplicatedUsing = OnRep_StateMapChange)
		TMap<FName, FMyStruct> StateMap;
	UFUNCTION()
		void OnRep_StateMapChange();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
