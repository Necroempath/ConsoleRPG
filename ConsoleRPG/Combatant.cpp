#include "Combatant.h"

#pragma region Accessors
int Combatant::Hp() const { return _stats.hp; }
int Combatant::MaxHp() const { return _stats.maxHp; }
int Combatant::Stamina() const { return _stats.stamina; }
int Combatant::MaxStamina() const { return _stats.maxStamina; }
int Combatant::AP() const { return _stats.AP; }
int Combatant::Speed() const { return _stats.speed; }
int Combatant::MinDamage() const { return _stats.minDamage; }
int Combatant::MaxDamage() const { return _stats.maxDamage; }
int Combatant::HitRating() const { return _stats.hitRating; }
int Combatant::CritRating() const { return _stats.critRating; }
int Combatant::CritMultiplier() const { return _stats.critMultiplier; }
int Combatant::Evasion() const { return _stats.evasion; }
int Combatant::BlockRating() const { return _stats.blockRating; }
int Combatant::BlockPower() const { return _stats.blockPower; }
int Combatant::Armor() const { return _stats.armor; }
int Combatant::ArmorPenetration() const { return _stats.armorPenetration; }
int Combatant::Resistance() const { return _stats.resistance; }
#pragma endregion

#pragma region StatModifiers
void Combatant::decreaseHp(const int value) {
	_stats.hp -= value;
}

void Combatant::increaseHp(const int value) {
    _stats.hp += value;
}

void Combatant::decreaseStamina(const int value) {
    _stats.stamina -= value;
}

void Combatant::increaseStamina(const int value) {
    _stats.stamina += value;
}

void Combatant::decreaseAP(const int value) {
    _stats.AP -= value;
}

void Combatant::increaseAP(const int value) {
    _stats.AP += value;
}
#pragma endregion

Combatant::~Combatant() = default;
