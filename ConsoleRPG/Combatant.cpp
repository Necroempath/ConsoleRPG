#include "Combatant.h"

#pragma region Accessors
const Combatant::Stat& Combatant::getHp() const {
    return _hp;
}

const Combatant::Stat& Combatant::getMaxHp() const {
    return _maxHp;
}

const Combatant::Stat& Combatant::getStamina() const {
    return _stamina;
}

const Combatant::Stat& Combatant::getMaxStamina() const {
    return _maxStamina;
}

const Combatant::Stat& Combatant::getSpeed() const {
    return _speed;
}

const Combatant::Stat& Combatant::getMinDamage() const {
    return _minDamage;
}

const Combatant::Stat& Combatant::getMaxDamage() const {
    return _maxDamage;
}

const Combatant::Stat& Combatant::getHitRating() const {
    return _hitRating;
}

const Combatant::Stat& Combatant::getCritRating() const {
    return _critRating;
}

const Combatant::Stat& Combatant::getEvasion() const {
    return _evasion;
}

const Combatant::Stat& Combatant::getBlockRating() const {
    return _blockRating;
}

const Combatant::Stat& Combatant::getBlockPower() const {
    return _blockPower;
}

const Combatant::Stat& Combatant::getArmor() const {
    return _armor;
}

const Combatant::Stat& Combatant::getArmorPenetration() const {
    return _armorPenetration;
}

const Combatant::Stat& Combatant::getResistance() const {
    return _resistance;
}

const Combatant::Stat& Combatant::getResistancePenetration() const {
    return _resistancePenetration;
}

int Combatant::getAP() const {
    return _AP;
}
#pragma endregion

#pragma region StatModifiers
void Combatant::decreaseHp(const int value) {
	_hp._base -= value;
}

void Combatant::increaseHp(const int value) {
	_hp._base += value;
}

void Combatant::decreaseStamina(const int value) {
	_stamina._base -= value;
}

void Combatant::increaseStamina(const int value) {
	_stamina._base += value;
}

void Combatant::decreaseAP(const int value) {
	_AP -= value;
}

void Combatant::increaseAP(const int value) {
	_AP += value;
}
#pragma endregion

Combatant::~Combatant() = default;
