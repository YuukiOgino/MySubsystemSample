// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"
#include "Subsystems/MySubsystem.h"

// Sets default values
AMyActor::AMyActor():
	MyInstance(),
	MyCustomInstance()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	MyInstance = NewObject<UMyObject>(this, UMyObject::StaticClass());
	MyInstance->Initialize();

	// FSubsystemCollection、もしくはFObjectSubsystemCollectionでサブシステムを管理している場合
	MyInstance->GetSubsystem<UMySubsystem>()->ShowLogSampleText();

	MyCustomInstance = NewObject<UMyCustomObject>(this, UMyCustomObject::StaticClass());
	MyCustomInstance->Initialize();
	// FSubsystemCollectionBaseからカスタムしたSubsystemCollection。管理しているオブジェクトを経由して登録したサブシステム全てに対して実行
	MyCustomInstance->ShowLogSampleText();

}

void AMyActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	MyInstance->Shutdown();
	MyCustomInstance->Shutdown();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

