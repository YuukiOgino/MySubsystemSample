// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "MyAbstractSubsystem.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class MYPLUGIN_API UMyAbstractSubsystem : public USubsystem
{
	GENERATED_BODY()
public:
	virtual void ShowLogSampleText() {}
};
