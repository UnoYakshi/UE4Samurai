#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "SamuraiStatsComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4SAMURAI_API USamuraiStatsComp : public UActorComponent
{
	GENERATED_BODY()
	
	// FUNCTIONS
public:
	USamuraiStatsComp();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

	// PROPERTIES
public:
	/* HUD Properties... */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
	UStatProperty* PropHP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
	UStatProperty* PropMP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
	UStatProperty* PropStam;
	

protected:
	
};
