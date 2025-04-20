#pragma once
#include "Combatant.h"
#include "ProbabilityResolver.h"
#include "ActionReport.h"
class CombatAction
{
protected:
	static string _name;

public:
	static string GetName();

	virtual ActionReport Execute(Combatant& performer, Combatant& target) const = 0;

	virtual ~CombatAction();
};

