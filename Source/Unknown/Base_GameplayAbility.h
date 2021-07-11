// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h" 
#include "Unknown.h"
#include "Base_GameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class UNKNOWN_API UBase_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UBase_GameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
		GASAbilityInput abilityInput = GASAbilityInput::None;
};
