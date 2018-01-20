#include "SamuraiStatsComp.h"


USamuraiStatsComp::USamuraiStatsComp()
{
	PrimaryComponentTick.bCanEverTick = true;
}
void USamuraiStatsComp::BeginPlay()
{
	Super::BeginPlay();
}
void USamuraiStatsComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
