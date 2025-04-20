#pragma once
#include <iostream>

class MainMenuUI
{
public:
	enum MainMenuOption
	{
		NEW_JOURNEY = 1,
		CONTINUE,
		GAME_INFO,
		EXIT,
	};

	static void Print();

	virtual ~MainMenuUI();
};

