#include "StandardAttack.h"

string StandardAttack::_name("Standard attack");

StandardAttack::StandardAttack(const TechniqueStats& stats) : Technique(stats) {};

void StandardAttack::Execute(Combatant& performer, Combatant& target) const
{
	performer.decreaseAP(_stats._APConsumption);
	target.increaseAP(_stats._APConsumption);

	performer.decreaseStamina(_stats._staminaConsumption);
	StandardAttack();
	if (ProbabilityResolver::IsHit(performer.HitRating(), target.Evasion()))
	{
		if (ProbabilityResolver::IsCrit(performer.CritRating())) _isCrit = true;;

		if (ProbabilityResolver::IsBlock(target.BlockRating())) _result = ActionResult::BLOCK;

		else _result = ActionResult::HIT;
	}
	else _result = ActionResult::MISS;

	int damage = (performer.MaxDamage() + performer.MinDamage()) / 2;
	int result_damage = damage * 1 + (performer.ArmorPenetration() - target.Armor()) / 100;

	if (result_damage > damage) result_damage = damage;

	target.decreaseHp(result_damage);
}

StandardAttack::~StandardAttack() = default;
