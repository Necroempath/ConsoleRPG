#pragma once
#include "string.h"
#include "CombatantStats.h"
class Combatant
{
private:
	//virtual void abstract() = 0;

protected:
	string _name;
	CombatantStats _stats;
    CombatantStats _temp;

    Combatant(const string& name, const CombatantStats& stats) : _name(name), _stats(stats), _temp() {};

#pragma region Accessors
    int hp() const;
    int maxHp() const;
    int stamina() const;
    int maxStamina() const;
    int AP() const;
    int speed() const;
    int minDamage() const;
    int maxDamage() const;
    int hitRating() const;
    int critRating() const;
    int evasion() const;
    int blockRating() const;
    int blockPower() const;
    int armor() const;
    int armorPenetration() const;
    int resistance() const;
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

