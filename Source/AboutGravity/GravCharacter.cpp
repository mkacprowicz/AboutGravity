// Fill out your copyright notice in the Description page of Project Settings.

#include "GravCharacter.h"
#include "GravMovementComponent.h"

AGravCharacter::AGravCharacter(const FObjectInitializer& ObjectInitializer)
// : Super(ObjectInitializer.SetDefaultSubobjectClass<UGravMovementComponent>(ACharacter::CharacterMovementComponentName))
{}


UGravMovementComponent* AGravCharacter::GetGravityMovementComponent()
{
	return Cast<UGravMovementComponent>(GetMovementComponent());
}