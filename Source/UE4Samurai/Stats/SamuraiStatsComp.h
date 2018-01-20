#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SamuraiStatsComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4SAMURAI_API USamuraiStatsComp : public UActorComponent
{
	GENERATED_BODY()

public:
	USamuraiStatsComp();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


protected:
	
};
