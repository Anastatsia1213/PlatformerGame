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
<<<<<<< HEAD
	void UpdateAll();
		void DrawAll(sf::RenderWindow& renderWindow);
	sf::Clock clock;void Add(std::string name, GameObject* gameObject);
	private:
		
		
		std::map<std::string, GameObject*> _gameObjects;
	std::map<std::string, GameObject*> itr;
=======
	sf::Clock clock;
	private:
	//std::map<std::string, GameObject*> game;
>>>>>>> 480615b6005829082638e2fd72001e19a203450a
	Map * map;
	Bonus * Bon;
	Player * P;

};

