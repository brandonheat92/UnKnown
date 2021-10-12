// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h" 
#include "Unknown.h"
#include "BaseGameplayAbility.generated.h"


UCLASS()
class UNKNOWN_API UBaseGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UBaseGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
		GASAbilityInput abilityInput = GASAbilityInput::None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		UAnimMontage* AnimMontToPlay;

};
