#include "CombatAction.h"

#pragma region Accessors
string CombatAction::getName() const
{
	return _name;
}

int CombatAction::getId() const
{
	return _id;
}
#pragma endregion


CombatAction::~CombatAction() = default;
