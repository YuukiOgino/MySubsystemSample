// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCustomObject.h"
#include "MyObject.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYSUBSYSTEMSAMPLE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY()
	TObjectPtr<UMyObject> MyInstance;

	UPROPERTY()
	TObjectPtr<UMyCustomObject> MyCustomInstance;
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
