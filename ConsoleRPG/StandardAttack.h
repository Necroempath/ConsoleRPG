#pragma once
#include "Technique.h"
class StandardAttack : public Technique
{
public:
	StandardAttack() {};

	void execute(Combatant& performer, Combatant& target) const override;

	virtual ~StandardAttack();
};

