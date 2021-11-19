// Fill out your copyright notice in the Description page of Project Settings.


#include "MathUtils.h"
#include <math.h>
#include <random>

float UMathUtils::exponentialDecay(float initialValue, float halfLife, int currentStep)
{
	return initialValue * pow(2, (-1 / halfLife) * (float)currentStep);
}

float UMathUtils::gaussianRandom(float mu, float sigma)
{
	std::random_device rd{};
	std::mt19937 gen{ rd() };
	std::normal_distribution<float> d{ mu, sigma };

	return d(gen);

}