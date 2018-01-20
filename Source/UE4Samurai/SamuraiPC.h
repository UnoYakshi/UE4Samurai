// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SamuraiPC.generated.h"

/**
 * 
 */
UCLASS()
class UE4SAMURAI_API ASamuraiPC : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
	// PROPERTIES
protected:
	/* Stats-HUD widget... */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> wStats;

	UUserWidget* StatsWidget;
};
