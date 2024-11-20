// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/MySubsystem.h"
#include "Engine/Engine.h"

void UMySubsystem::ShowLogSampleText()
{
	const FString Message = FString::Printf(TEXT("My Plugin!"));
	const FColor Col = FColor::Yellow;
	const FVector2D Scl = FVector2D(1.0f, 1.0f);
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, Col, *Message, true, Scl);
}