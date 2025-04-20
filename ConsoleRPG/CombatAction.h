#pragma once
#include "Combatant.h"
#include "ProbabilityResolver.h"
class CombatAction
{
protected:
	static string _name;

public:
#pragma region Accessors
	string GetName() const;
#pragma endregion

	virtual void Execute(Combatant& performer, Combatant& targer) const = 0;

	virtual ~CombatAction();
};

