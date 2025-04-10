#pragma once
#include "TechniqueStats.h"
#include "CombatAction.h"
class Technique : public CombatAction
{
protected:
	TechniqueStats _stats;
public:
	virtual void execute(Combatant& performer, Combatant& target) const = 0;

	virtual ~Technique();
};

