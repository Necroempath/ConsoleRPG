#include "Game.h"
#include "Hero.h"
void Game::Launch() 
{
	MainMenuUI::Print();
	const string name("Dekart");
	CombatantStats stats = { 410, 410, 200, 200, 200, 20, 20, 30, 50, 0, 0, 0, 0, 0, 0, 0 };
	Hero* hero = new Hero(name, stats);
	switch (InputManager::Input())
	{
	case MainMenuUI::NEW_JOURNEY:
		
		break;
	case MainMenuUI::CONTINUE:
		break;
	case MainMenuUI::GAME_INFO:
		break;
	case MainMenuUI::EXIT:
		return;
		break;
	}
}


Game::~Game() = default;
