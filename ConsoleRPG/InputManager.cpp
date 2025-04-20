#include "InputManager.h"

short InputManager::Input()
{
	short input;
	std::cin >> input;

	return input;
}

InputManager::~InputManager() = default;
