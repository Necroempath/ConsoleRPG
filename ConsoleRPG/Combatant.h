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

public:
#pragma region Accessors
    int Hp() const;
    int MaxHp() const;
    int Stamina() const;
    int MaxStamina() const;
    int AP() const;
    int Speed() const;
    int MinDamage() const;
    int MaxDamage() const;
    int HitRating() const;
    int CritRating() const;
    int CritMultiplier() const;
    int Evasion() const;
    int BlockRating() const;
    int BlockPower() const;
    int Armor() const;
    int ArmorPenetration() const;
    int Resistance() const;
#pragma endregion

#pragma region StatModifiers
	void decreaseHp(const int value);

	void increaseHp(const int value);

	void decreaseStamina(const int value);

	void increaseStamina(const int value);

	void decreaseAP(const int value);

	void increaseAP(const int value);
#pragma endregion

	virtual ~Combatant();
};

