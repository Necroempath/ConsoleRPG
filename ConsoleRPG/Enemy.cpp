#include "Enemy.h"

Enemy::Enemy(const string& name, const BaseStats& stats) : Combatant(name, stats) {};

Enemy::~Enemy() = default;
