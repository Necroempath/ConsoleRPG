#include "Hero.h"

Hero::Hero(const string& name, const CombatantStats& stats) : Combatant(name, stats) {}

Hero::~Hero() = default;
