// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyNativePlugin.h"
#include "Core.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FMyNativePluginModule"

void FMyNativePluginModule::StartupModule() {}

void FMyNativePluginModule::ShutdownModule() {}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyNativePluginModule, MyNativePlugin)
