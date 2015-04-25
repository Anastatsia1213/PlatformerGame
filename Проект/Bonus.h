#pragma once
#include "GameObject.h"
class Bonus 
	: public GameObject
{
public:
	Bonus(float X, float Y, int W, int H, sf::String Name);
	~Bonus(void);
	 void Update(float elapsedTime);
	 void Draw(sf::RenderWindow& window_);
};

