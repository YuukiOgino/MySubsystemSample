// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/MyExNativeSubsystem.h"
#include "Engine/Engine.h"

void UMyExNativeSubsystem::ShowLogSampleText()
{
	const FString Message = FString::Printf(TEXT("Ex Native Plugin!!"));
	const FColor Col = FColor::Green;
	const FVector2D Scl = FVector2D(1.0f, 1.0f);
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, Col, *Message, true, Scl);
}
