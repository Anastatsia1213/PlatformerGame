#include "stdafx.h"
#include "Game.h"
#include "Map.h"
#include "MainMenu.h"
#include "SplashScreen.h"


void Game::Start()
{
	if(_gameState != Uninitialized)
		return;
	
	_mainWindow.create(sf::VideoMode(1024,700,32),"Game!"/*, sf::Style::Fullscreen*/);

	_gameState= Game::ShowingSplash;

	while(!IsExiting())
	{
		GameLoop();
	}

	_mainWindow.close();
}

bool Game::IsExiting()
{
	if(_gameState == Game::Exiting) 
		return true;
	else 
		return false;
}
<<<<<<< HEAD
sf::Keyboard::Key  Game::GetInput(sf::Keyboard::Key key )//, bool isPressed)
{//ch = getch();
	 //return(_mainWindow.pollEvent(event));
	//if(key == sf::Keyboard::D)
	return(key);
}
=======
>>>>>>> 480615b6005829082638e2fd72001e19a203450a

void Game::GameLoop()
{
	switch(_gameState)
	{
		case Game::ShowingMenu:
			{
				ShowMenu();
				break;
			}
		case Game::ShowingSplash:
			{
				ShowSplashScreen();
				break;
			}
		case Game::Playing:
			{
<<<<<<< HEAD
				sf::Clock clock;				 
				float time = clock.getElapsedTime().asMicroseconds();
				Player *P= new Player(0, 0, 140, 178, "Player1");
				Map* map = new Map();
				level.Add("Player1", P );
				
				sf::Event currentEvent;
				while(_mainWindow.pollEvent(currentEvent))
					{
						
						_mainWindow.clear(sf::Color::White);
						map->draw(_mainWindow);
						//ch = getch();
						//
						GetInput(currentEvent.key.code);
						level.UpdateAll();
						level.DrawAll(_mainWindow);
=======

				Level *level = new Level();
				sf::Event currentEvent;
				while(_mainWindow.pollEvent(currentEvent))
					{
						_mainWindow.clear(sf::Color::White);
						level->Draw(_mainWindow);
						//level->UpdateAll();
>>>>>>> 480615b6005829082638e2fd72001e19a203450a
						_mainWindow.display();
				
						if(currentEvent.type == sf::Event::Closed) 
							_gameState = Game::Exiting;

						if(currentEvent.type == sf::Event::KeyPressed)
						{
							if(currentEvent.key.code == sf::Keyboard::Escape)
								ShowMenu();
						}
					}
				break;
			}
	}

}
void Game::ShowSplashScreen()
{
	SplashScreen splashScreen;
	splashScreen.Show(_mainWindow);
	_gameState = Game::ShowingMenu;
}

void Game::ShowMenu()
{
	MainMenu mainMenu;
	MainMenu::MenuResult result = mainMenu.Show(_mainWindow);
	switch(result)
	{
	case MainMenu::Exit:
			_gameState = Game::Exiting;
			break;
		case MainMenu::Play:
			_gameState = Game::Playing;
			break;
	}
}
Game::GameState Game::_gameState = Uninitialized;// статические элементы инициализируем вне класса
<<<<<<< HEAD
sf::RenderWindow Game::_mainWindow;
//char Game::ch;
	Level Game::level;
=======
sf::RenderWindow Game::_mainWindow;
>>>>>>> 480615b6005829082638e2fd72001e19a203450a
