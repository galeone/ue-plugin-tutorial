// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "HAL/Platform.h"
#include "Modules/ModuleManager.h"

class SWAP_API FSwap : public IModuleInterface {
  public:
  // There's no need to override IModuleInterface
  // StartupModule & ShutdownModule methods.

  FString SwapConcat(FString &a, FString &b);
};
