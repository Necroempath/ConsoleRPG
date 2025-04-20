#include "StandardAttack.h"

string StandardAttack::_name("Standard attack");

StandardAttack::StandardAttack(const TechniqueStats& stats) : Technique(stats) {};

StandardAttack::~StandardAttack() = default; 

ActionReport StandardAttack::Execute(Combatant& performer, Combatant& target) const
{
	ActionReport report;

	performer.decreaseStamina(_stats._staminaConsumption);
	target.increaseAP(_stats._APConsumption); // допустим, цель получает инициативу

	if (!ProbabilityResolver::IsHit(performer.HitRating(), target.Evasion())) {
		report.result = ActionReport::ActionResult::MISS;
		return report;
	}

	if (ProbabilityResolver::IsCrit(performer.CritRating())) {
		report.isCrit = true;
		report.result = ActionReport::ActionResult::CRIT;
	}
	else {
		report.result = ActionReport::ActionResult::HIT;
	}

	if (ProbabilityResolver::IsBlock(target.BlockRating())) {
		report.isBlocked = true;
		report.result = ActionReport::ActionResult::BLOCK;
	}

	int baseDamage = ProbabilityResolver::GetDamage(performer.MinDamage(), performer.MaxDamage());
	int modifiedDamage = static_cast<int>(baseDamage * _stats._damageMultiplier) + _stats._damageFlatBonus;

	float absorptionRate = (target.Armor() - performer.ArmorPenetration()) / 1000;
	absorptionRate = absorptionRate > 0 ? absorptionRate : 0;

	modifiedDamage *= 1 - absorptionRate;
	if (modifiedDamage < 0) modifiedDamage = 0;

	report.damageDealt = modifiedDamage;
	target.decreaseHp(modifiedDamage);

	return report;
}