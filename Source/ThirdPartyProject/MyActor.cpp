#include "MyActor.h"

#include "Engine/Engine.h"

#include "Swap.h"

// Sets default values
AMyActor::AMyActor() { PrimaryActorTick.bCanEverTick = false; }

// Called when the game starts or when spawned
void AMyActor::BeginPlay() {
  Super::BeginPlay();

  FSwap *plugin = FModuleManager::GetModulePtr<FSwap>("Swap");

  FString a(TEXT("man"));
  FString b(TEXT("bat"));
  const FString Message = plugin->SwapConcat(a, b);

  uint64 Key{1};
  float TimeToDisplay{10};
  FColor DisplayColor{FColor::White};

  GEngine->AddOnScreenDebugMessage(Key, TimeToDisplay, DisplayColor, Message);
}
