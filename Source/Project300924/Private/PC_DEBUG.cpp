﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_DEBUG.h"
#include "EnhancedInputComponent.h"

void APC_DEBUG::SetupInputComponent()
{
	Super::SetupInputComponent();
	if(UEnhancedInputComponent* EIP = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		EIP->BindAction(_DebugAction, ETriggerEvent::Triggered, this, &APC_DEBUG::Debug);
	}
}

void APC_DEBUG::Debug(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Display, TEXT("Debug is working."));
}
