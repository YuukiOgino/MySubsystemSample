// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomObject.h"

void UMyCustomObject::Initialize()
{
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0)
	SubsystemCollection.Initialize(this);
#else
	if (!SubsystemCollection.IsInitialized())
	{
		SubsystemCollection.Initialize(this);
	}
#endif
	const UClass* BaseType = UMyAbstractSubsystem::StaticClass();
	GetDerivedClasses(BaseType, SubsystemClasses, true);
}

void UMyCustomObject::Shutdown()
{
	SubsystemCollection.Deinitialize();
}

void UMyCustomObject::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UMyCustomObject* This = CastChecked<UMyCustomObject>(InThis);
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0)
	This->SubsystemCollection.AddReferencedObjects(Collector);
#else
	This->SubsystemCollection.AddReferencedObjects(This, Collector);
#endif
	UObject::AddReferencedObjects(This, Collector);
}

void UMyCustomObject::ShowLogSampleText()
{
	for (const auto Element : SubsystemClasses)
	{
		const auto Subsystem = static_cast<UMyAbstractSubsystem*>(SubsystemCollection.GetSubsystem(Element));
		Subsystem->ShowLogSampleText();
	}
}