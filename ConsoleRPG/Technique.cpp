#include "Technique.h"

Technique::Technique(const TechniqueStats& stats) : _stats(stats), _isHit(false), _isCrit(false), _isBlock(false) {};

Technique::~Technique() = default;
