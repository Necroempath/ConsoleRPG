#include "InputManager.h"

short InputManager::input()
{
	short input;
	std::cin >> input;

	return input;
}

InputManager::~InputManager() = default;
