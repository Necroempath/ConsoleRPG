#pragma once
#include "Technique.h"
class StandardAttack : public Technique
{
public:
	StandardAttack(const TechniqueStats& stats);

	ActionReport Execute(Combatant& performer, Combatant& target) const override;

	virtual ~StandardAttack();
};

