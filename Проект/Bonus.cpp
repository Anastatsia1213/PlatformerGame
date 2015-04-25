#include "stdafx.h"
#include "Bonus.h"


Bonus::Bonus(float X, float Y, int W, int H, sf::String Name):GameObject(X, Y, W, H, Name)
{
	if (name == "Daemond")
			{
				GetSprite().setTextureRect(sf::IntRect(x, y, w, h));
			}
	//speed = 0;
}
Bonus::~Bonus(void)
{
}

void Bonus::Draw(sf::RenderWindow & window_)
{
	GameObject::Draw(window_);
}

void Bonus::Update(float elapsedTime)
{
	GetSprite().setRotation(GetSprite().getRotation()+ 30.f); //rotate(90.f);
		
}