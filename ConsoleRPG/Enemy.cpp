#include "Enemy.h"

Enemy::Enemy(const string& name, const CombatantStats& stats) : Combatant(name, stats) {};

Enemy::~Enemy() = default;
