#pragma once
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "Level.h"
<<<<<<< HEAD
#include "Player.h"
#include "Map.h"
=======
>>>>>>> 480615b6005829082638e2fd72001e19a203450a

class Game
{
public:
	static void Start();
<<<<<<< HEAD
//static char ch;
	 static sf::Keyboard::Key  GetInput(sf::Keyboard::Key key);
private:
	//static GameObjectManager _gameObjectManager
	 static Level level;
	 Player *P;
	 Map * map;
=======
private:
	 Level * level;
>>>>>>> 480615b6005829082638e2fd72001e19a203450a
	static bool IsExiting();
	static void GameLoop();
	
	static void ShowSplashScreen();
	static void ShowMenu();

	enum GameState { Uninitialized, ShowingSplash, Paused, 
					ShowingMenu, Playing, Exiting };

	static GameState _gameState;
	
	static sf::RenderWindow _mainWindow;
};
