// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/MyAbstractSubsystem.h"
#include "MyExNativeSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MYEXNATIVEPLUGIN_API UMyExNativeSubsystem : public UMyAbstractSubsystem
{
	GENERATED_BODY()
public:
	virtual void ShowLogSampleText() override;
};
