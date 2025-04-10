#pragma once
#include "Combatant.h"
class Hero : public Combatant
{
public:
	explicit Hero(const string& name, const CombatantStats& stats);

	virtual ~Hero();
};

