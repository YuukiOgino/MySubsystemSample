// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/MySubsystemCollection.h"
#include "MyCustomObject.generated.h"

/**
 * 
 */
UCLASS()
class MYPLUGIN_API UMyCustomObject : public UObject
{
	GENERATED_BODY()

	TArray<UClass*> SubsystemClasses;
public:
	void Initialize();

	void Shutdown();

	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

	void ShowLogSampleText();
private:
	FMySubsystemCollection SubsystemCollection;
	
};
