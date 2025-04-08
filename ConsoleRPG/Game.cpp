#include "Game.h"

void Game::launch() 
{
	MainMenuUI::print();

	switch (InputManager::input())
	{
	case MainMenuUI::NEW_JOURNEY:
		break;
	case MainMenuUI::CONTINUE:
		break;
	case MainMenuUI::GAME_INFO:
		break;
	case MainMenuUI::EXIT:
		break;
	}
}

Game::~Game() = default;
