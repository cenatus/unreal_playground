// Fill out your copyright notice in the Description page of Project Settings.


#include "MathUtils.h"
#include <math.h>

float UMathUtils::exponentialDecay(float initialValue, float halfLife, int currentStep)
{
	return initialValue * pow(2, (-1/halfLife)*(float)currentStep) ;
}
