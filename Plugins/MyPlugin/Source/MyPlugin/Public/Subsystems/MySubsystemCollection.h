// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyAbstractSubsystem.h"

/**
 * 
 */
class FMySubsystemCollection final : public FSubsystemCollectionBase
{
public:

	USubsystem* GetSubsystem(UClass* SubsystemClass) const
	{
		return GetSubsystemInternal(SubsystemClass);
	}
	
	FMySubsystemCollection(): FSubsystemCollectionBase(UMyAbstractSubsystem::StaticClass()) {};

	~FMySubsystemCollection()=default;
};
