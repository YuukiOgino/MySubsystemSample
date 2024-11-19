// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

void UMyObject::Initialize()
{
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0)
	SubsystemCollection.Initialize(this);
#else
	if (!SubsystemCollection.IsInitialized())
	{
		SubsystemCollection.Initialize(this);
	}
#endif
}

void UMyObject::Shutdown()
{
	SubsystemCollection.Deinitialize();
}

void UMyObject::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UMyObject* This = CastChecked<UMyObject>(InThis);
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 0)
	This->SubsystemCollection.AddReferencedObjects(Collector);
#else
	This->SubsystemCollection.AddReferencedObjects(This, Collector);
#endif
	UObject::AddReferencedObjects(This, Collector);
}