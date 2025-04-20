#pragma once
#include "TechniqueStats.h"
#include "CombatAction.h"
class Technique : public CombatAction
{
protected:
	TechniqueStats _stats;

	bool _isHit;
	bool _isCrit;
	bool _isBlock;
public:
	Technique(const TechniqueStats& stats);

	virtual ActionReport Execute(Combatant& performer, Combatant& target) const = 0;

	virtual ~Technique();
};

