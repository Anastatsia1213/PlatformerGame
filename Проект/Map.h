#pragma once
//#include "Game.h"
#include "Bonus.h"
#include <SFML\Graphics.hpp>
 #define Height 22//размер карты высота
#define Width 40//размер карты ширина 
class Map
{
public:
	void Load_();
	 sf::String TileMap[Height];
	Map();
	//friend class Game;
	void RandomMapGenerate();
	void draw(sf::RenderWindow &window); 
private:
	 Bonus * Bon;
	int randomElementX, randomElementY, countStone; 
	 sf::Image map_image;
	 sf::Texture map;
	 sf::Sprite s_map;
	
 };
