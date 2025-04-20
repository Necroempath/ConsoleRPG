#include "InputManager.h"

short InputManager::Input()
{
	short input;
	std::cin >> input;
	std::cin.ignore();

	return input;
}

InputManager::~InputManager() = default;
