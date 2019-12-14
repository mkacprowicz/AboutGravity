// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GravCharacter.generated.h"

class UGravMovementComponent;

UCLASS()
class ABOUTGRAVITY_API AGravCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGravCharacter(const FObjectInitializer& ObjectInitializer);
		//: Super(ObjectInitializer.SetDefaultSubobjectClass<UGravMovementComponent>(ACharacter::CharacterMovementComponentName)) {};

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Character")
		UGravMovementComponent* GetGravityMovementComponent();
};
