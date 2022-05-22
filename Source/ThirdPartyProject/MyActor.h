#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class THIRDPARTYPROJECT_API AMyActor : public AActor {
  GENERATED_BODY()

  public:
  // Sets default values for this actor's properties
  AMyActor();

  protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;
};
