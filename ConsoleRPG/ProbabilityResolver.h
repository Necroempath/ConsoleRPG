#pragma once
#include <stdlib.h>
#include <ctime>
class ProbabilityResolver
{
	static void initSeed(unsigned int seed = static_cast<unsigned int>(time(0)));

	static int Random(int min = 1, int max = 100);

public:
	static bool IsHit(int offensiveFactor, int defensiveFactor);

	static bool IsCrit(int factor);

	static bool IsBlock(int factor);

	static int GetDamage(int minDamage, int maxDamage);
};

