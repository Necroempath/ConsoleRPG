#include "Combatant.h"

#pragma region Accessors
int Combatant::hp() const { return _stats.hp; }
int Combatant::maxHp() const { return _stats.maxHp; }
int Combatant::stamina() const { return _stats.stamina; }
int Combatant::maxStamina() const { return _stats.maxStamina; }
int Combatant::AP() const { return _stats.AP; }
int Combatant::speed() const { return _stats.speed; }
int Combatant::minDamage() const { return _stats.minDamage; }
int Combatant::maxDamage() const { return _stats.maxDamage; }
int Combatant::hitRating() const { return _stats.hitRating; }
int Combatant::critRating() const { return _stats.critRating; }
int Combatant::evasion() const { return _stats.evasion; }
int Combatant::blockRating() const { return _stats.blockRating; }
int Combatant::blockPower() const { return _stats.blockPower; }
int Combatant::armor() const { return _stats.armor; }
int Combatant::armorPenetration() const { return _stats.armorPenetration; }
int Combatant::resistance() const { return _stats.resistance; }
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
