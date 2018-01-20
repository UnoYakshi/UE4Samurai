/*  */

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatProperty.generated.h"

/**
 * Stat (HUD) property...
 */
UCLASS(BlueprintType, Blueprintable)
class UE4SAMURAI_API UStatProperty : public UObject
{
	GENERATED_BODY()

	/* PROPERTIES... */
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	FString Name = "";
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	float MinVal = 0.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	float MaxVal = 100.f;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = UI)
	float CurrentVal = 100.f;
	
	/* FUNCTIONS... */
public:
	UFUNCTION(BlueprintCallable, Category = UI)
	void Add(float Val);

	UFUNCTION(BlueprintCallable, Category = UI)
	void Subtract(float Val);
	
	UFUNCTION(BlueprintCallable, Category = UI)
	void Set(float NewVal);
	
	UFUNCTION(BlueprintCallable, Category = UI)
	float Get();

/* SYSTEM... */
public:
	UStatProperty();
	UStatProperty(FString Name, float BaseVal, float Min, float Max);
};
