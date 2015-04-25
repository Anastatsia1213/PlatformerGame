#pragma once
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "Level.h"

class Game
{
public:
	static void Start();
private:
	 Level * level;
	static bool IsExiting();
	static void GameLoop();
	
	static void ShowSplashScreen();
	static void ShowMenu();

	enum GameState { Uninitialized, ShowingSplash, Paused, 
					ShowingMenu, Playing, Exiting };

	static GameState _gameState;
	
	static sf::RenderWindow _mainWindow;
};
