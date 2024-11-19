// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/MyAbstractSubsystem.h"
#include "MyNativeSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MYNATIVEPLUGIN_API UMyNativeSubsystem : public UMyAbstractSubsystem
{
	GENERATED_BODY()
public:
	virtual void ShowLogSampleText() override;
};
