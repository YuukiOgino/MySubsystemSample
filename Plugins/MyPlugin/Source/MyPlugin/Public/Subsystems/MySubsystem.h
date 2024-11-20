// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyAbstractSubsystem.h"
#include "MySubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MYPLUGIN_API UMySubsystem : public UMyAbstractSubsystem
{
	GENERATED_BODY()
public:
	virtual void ShowLogSampleText() override;
};
