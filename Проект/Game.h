#pragma once
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "Level.h"
#include "Player.h"
#include "Map.h"

class Game
{
public:
	static void Start();
//static char ch;
	 static sf::Keyboard::Key  GetInput(sf::Keyboard::Key key);
private:
	//static GameObjectManager _gameObjectManager
	 static Level level;
	 Player *P;
	 Map * map;
	static bool IsExiting();
	static void GameLoop();
	
	static void ShowSplashScreen();
	static void ShowMenu();

	enum GameState { Uninitialized, ShowingSplash, Paused, 
					ShowingMenu, Playing, Exiting };

	static GameState _gameState;
	
	static sf::RenderWindow _mainWindow;
};
