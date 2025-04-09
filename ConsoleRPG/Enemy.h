#pragma once
#include "Combatant.h"
class Enemy : public Combatant
{
public:
	explicit Enemy(const string& name, const BaseStats& stats);

	virtual ~Enemy();
};

