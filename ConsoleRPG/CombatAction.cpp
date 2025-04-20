#include "CombatAction.h"

#pragma region Accessors
string CombatAction::GetName() const
{
	return _name;
}
CombatAction::ActionResult CombatAction::GetResult() const
{
	return _result;
}
#pragma endregion


CombatAction::~CombatAction() = default;
