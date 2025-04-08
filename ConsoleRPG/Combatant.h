#pragma once
#include "string.h"
class Combatant
{
protected:
	string _name;

	struct Stat
	{
		int _base;
		int _permanent;
		int _temporary;
	};

#pragma region Stats
	Stat _hp;
	Stat _maxHp;
	Stat _stamina;
	Stat _maxStamina;
	Stat _speed;
	Stat _minDamage;
	Stat _maxDamage;
	Stat _hitRating;
	Stat _critRating;
	Stat _evasion;
	Stat _blockRating;
	Stat _blockPower;
	Stat _armor;
	Stat _armorPenetration;
	Stat _resistance;

	int _AP;
#pragma endregion

#pragma region Accessors
	const Stat& getHp() const;
	const Stat& getMaxHp() const;
	const Stat& getStamina() const;
	const Stat& getMaxStamina() const;
	const Stat& getSpeed() const;
	const Stat& getMinDamage() const;
	const Stat& getMaxDamage() const;
	const Stat& getHitRating() const;
	const Stat& getCritRating() const;
	const Stat& getEvasion() const;
	const Stat& getBlockRating() const;
	const Stat& getBlockPower() const;
	const Stat& getArmor() const;
	const Stat& getArmorPenetration() const;
	const Stat& getResistance() const;
	const Stat& getResistancePenetration() const;

	int getAP() const;
#pragma endregion

#pragma region StatModifiers
	void decreaseHp(const int value);

	void increaseHp(const int value);

	void decreaseStamina(const int value);

	void increaseStamina(const int value);

	void decreaseAP(const int value);

	void increaseAP(const int value);
#pragma endregion

public:
	virtual ~Combatant();
};

