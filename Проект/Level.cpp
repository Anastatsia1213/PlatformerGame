#include "Level.h"
#include "Game.h"

Level::Level(void)
{
}
Level::~Level(void)
{}
void Level::Add(std::string name, GameObject* gameObject)
{
	_gameObjects.insert(std::pair<std::string,GameObject*>(name,gameObject));
}

void Level::DrawAll(sf::RenderWindow& renderWindow)
{
	
	std::map<std::string,GameObject*>::const_iterator itr = _gameObjects.begin();
	while(itr != _gameObjects.end())
	{
		itr->second->Draw(renderWindow);
		itr++;
	}
}

void Level::UpdateAll()
{	//Map *map = new Map();
	std::map<std::string,GameObject*>::const_iterator itr = _gameObjects.begin();
    float time = clock.getElapsedTime().asMicroseconds();clock.restart();time = time / 400;
	std::cout << time << "\n";//смотрим как живет время (перезагружается, как видим)
	//float timeDelta = Game::GetWindow().GetFrameTime();
	
	while(itr != _gameObjects.end())
	{
	
		itr->second->Update(time);
		itr++;
	}
	
}

/*void Level :: Draw(sf::RenderWindow &window)
{
	/*
	
	

	Map *map = new Map();
	map->Load_();
	map->draw(window);
	
	/*Bonus * Bon = new Bonus(0, 0, 70, 70, "Daemond");
	Bon->Load("Bonus.png");
	Bon->SetPosition((1024/2)+400,500);
	Bon->Update(time);
	Bon->Draw(window);*/
	

	/*Player * P = new Player(0, 0, 140, 178, "Player1");
	//P->Load("Boy1.png");
	P->SetPosition((1024/2)-80,530);
	P->Update(time);
	P->Draw(window);
	//P->Control();
	/
}*

/*void Level :: UpdateAll()
{ Bonus * Bon = new Bonus(0, 0, 70, 70, "Daemond");Player * P = new Player(0, 0, 140, 178, "Player1");
	float time = clock.getElapsedTime().asMicroseconds();
	std::map<std::string, GameObject*>::const_iterator itr = game.begin();
	while(itr != game.end())
	{
	clock.restart();
	time = time / 400;
		itr->second->Update(time);
		itr++;
		P->Update(time);
	Bon->Update(time);
	}
	
}*/