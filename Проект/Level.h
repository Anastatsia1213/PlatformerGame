#pragma once
#include "stdafx.h"
#include "Map.h"
#include "Bonus.h"
#include "Player.h"
class Level
{
public:
	Level(void);
	~Level(void);
	void Draw (sf::RenderWindow &window);
	//void UpdateAll();
	void UpdateAll();
		void DrawAll(sf::RenderWindow& renderWindow);
	sf::Clock clock;void Add(std::string name, GameObject* gameObject);
	private:
		
		
		std::map<std::string, GameObject*> _gameObjects;
	std::map<std::string, GameObject*> itr;
	Map * map;
	Bonus * Bon;
	Player * P;

};

