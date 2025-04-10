#pragma once
#include "Combatant.h"

class CombatAction
{
protected:
	static string _name;
	static int _id;

public:
#pragma region Accessors
	string getName() const;
	int getId() const;
#pragma endregion

	virtual void execute(Combatant& performer, Combatant& targer) const = 0;

	virtual ~CombatAction();
};

