// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"				
#include "UObject/CoreNet.h"	   
#include "AbilitySystemComponent.h"
#include "MyAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
 
 DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthChangeDelegate, float, health, float, maxHealth);
 
UCLASS()
class UNKNOWN_API UMyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UMyAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Category = "Abilities | States", EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Health)
		FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, Health);

	UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UPROPERTY(Category = "Abilities | States", EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mana)
		FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UMyAttributeSet, Mana);

	UFUNCTION()
		virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
	FHealthChangeDelegate OnHealthChange;
};
