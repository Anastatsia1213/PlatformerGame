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
	sf::Clock clock;
	private:
	//std::map<std::string, GameObject*> game;
	Map * map;
	Bonus * Bon;
	Player * P;

};

