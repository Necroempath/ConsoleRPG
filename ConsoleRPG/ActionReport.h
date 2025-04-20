#pragma once
#include "string.h"
struct ActionReport {
	enum class ActionResult {
		MISS,
		HIT,
		CRIT,
		BLOCK,
		OTHER
	};

	ActionResult result = ActionResult::OTHER;
	int damageDealt = 0;
	bool isCrit = false;
	bool isBlocked = false;
};