#pragma once
//#include "string.h"
class Combatant
{
protected:
	//string _name;

	struct Stat
	{
		static int _hp;
		static int _maxHp;
		static int _stamina;
		static int _maxStamina;
		static int _AP;
		static int _speed;
		static int _minDamage;
		static int _maxDamage;
		static int _hitRating;
		static int _critRating;
		static int _evasion;
		static int _blockRating;
		static int _blockPower;
		static int _armor;
		static int _armorPenetration;
		static int _resistance;
	};

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

