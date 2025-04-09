#include "Hero.h"

Hero::Hero(const string& name, const BaseStats& stats) : Combatant(name, stats) {}

Hero::~Hero() = default;
