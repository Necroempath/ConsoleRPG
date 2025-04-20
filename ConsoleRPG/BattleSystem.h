#pragma once
#include "BattleUI.h"
#include "InputManager.h"
#include "CombatAction.h"
#include "Combatant.h"

class BattleSystem
{
public:
	void ExecuteAction(CombatAction& action, Combatant& performer, Combatant& target);

	CombatAction& PlayerOption(Combatant& hero)
	{
		BattleUI::DisplayOptions();

		switch (InputManager::Input())
		{
		case 1:
			Technique* techinque = hero.GetTechniques().GetValue(StandardAttack::GetName());
			return techinque;
			techinque->Execute(hero, hero);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	}

	void Run(Combatant& hero, Combatant& opponent)
	{
		turn = time + hero.AP() >= time + opponent.AP() ? Turn::HERO_TURN : Turn::OPPONENT_TURN;

		switch (turn)
		{
		case BattleSystem::Turn::HERO_TURN:
			PlayerOption(hero);
			break;
		case BattleSystem::Turn::OPPONENT_TURN:
			break;
		}
	}
private:
	size_t time = 0;

	enum class Turn
	{
		HERO_TURN,
		OPPONENT_TURN
	};

	Turn turn;
	ActionReport report;
	void HandleReport(const ActionReport& report, Combatant& performer, Combatant& target);
	void DisplayActionMessage(const ActionReport& report) const;
	void TriggerReactions(const ActionReport& report, Combatant& performer, Combatant& target);
};