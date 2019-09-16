// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "MyAnimNotify_PlayParticleEffect.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyAnimNotify_PlayParticleEffect : public UAnimNotify_PlayParticleEffect
{
	GENERATED_BODY()
	
public:
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		FSoftObjectPath  Temp;
};
