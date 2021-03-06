// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathUtils.generated.h"

/**
 * 
 */
UCLASS()
class PROUN_API UMathUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "RhizomeMathUtils")
		static float exponentialDecay(float initialValue, float halfLife, int currentStep);

	UFUNCTION(BlueprintCallable, Category = "RhizomeMathUtils")
		static float gaussianRandom(float mu, float sigma);
};
