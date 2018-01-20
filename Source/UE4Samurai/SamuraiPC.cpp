#include "SamuraiPC.h"
#include "Blueprint/UserWidget.h"


void ASamuraiPC::BeginPlay()
{
	Super::BeginPlay();

	if (wStats)
	{
		// Create the widget and store it...
		StatsWidget = CreateWidget< UUserWidget >(this, wStats);

		// Extra check to  make sure the pointer holds the widget...
		if (StatsWidget)
		{
			StatsWidget->AddToViewport();
		}
		bShowMouseCursor = true;
	}
}
