#include "ProbabilityResolver.h"

void ProbabilityResolver::initSeed(unsigned int seed)
{
	srand(seed);
}

int ProbabilityResolver::Random(int min, int max)
{
	return min + rand() % (max - min + 1);
}

bool ProbabilityResolver::IsHit(int offensiveFactor, int defensiveFactor)
{
	return Random(offensiveFactor - defensiveFactor, 100) >= 50;
}

bool ProbabilityResolver::IsCrit(int factor)
{
	return Random() <= factor;
}

bool ProbabilityResolver::IsBlock(int factor)
{
	return Random() <= factor;
}

int ProbabilityResolver::GetDamage(int minDamage, int maxDamage)
{
	return Random(minDamage, maxDamage);
}
