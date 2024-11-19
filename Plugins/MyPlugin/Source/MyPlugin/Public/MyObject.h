// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/MyAbstractSubsystem.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS()
class MYPLUGIN_API UMyObject : public UObject
{
	GENERATED_BODY()
	
public:
	
	UMyAbstractSubsystem* GetSubsystemBase(TSubclassOf<UMyAbstractSubsystem> SubsystemClass) const
	{
		return SubsystemCollection.GetSubsystem<UMyAbstractSubsystem>(SubsystemClass);
	}
	
	template <typename TSubsystemClass>
	TSubsystemClass* GetSubsystem() const
	{
		return SubsystemCollection.GetSubsystem<TSubsystemClass>(TSubsystemClass::StaticClass());
	}
	
	template <typename TSubsystemClass>
	static FORCEINLINE TSubsystemClass* GetSubsystem(const UMyObject* GameInstance)
	{
		if (GameInstance)
		{
			return GameInstance->GetSubsystem<TSubsystemClass>();
		}
		return nullptr;
	}
	
	template <typename TSubsystemClass>
	const TArray<TSubsystemClass*>& GetSubsystemArray() const
	{
		return SubsystemCollection.GetSubsystemArray<TSubsystemClass>(TSubsystemClass::StaticClass());
	}

	void Initialize();

	void Shutdown();

	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
	
private:
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0)
	FSubsystemCollection<UMyAbstractSubsystem> SubsystemCollection;
#else
	FObjectSubsystemCollection<UMyAbstractSubsystem> SubsystemCollection;
#endif
};
