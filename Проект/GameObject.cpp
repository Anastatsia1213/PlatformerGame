#include "stdafx.h"
#include "GameObject.h"


GameObject::GameObject(float X, float Y, int W, int H, sf::String Name)
{
	name = Name;
	x = X;
	y = Y;
	w = W;
	h = H;
	dx = 0;
	dy = 0;
  _isLoaded = false;
}

GameObject::~GameObject()
{
}


void GameObject::Load(std::string filename)
{
	if(_image.loadFromFile(filename) == false)
	{
		_filename = "";
		_isLoaded = false;
	}
	else
	{
		_filename = filename;
		texture.loadFromImage(_image);
		_sprite.setTexture(texture);
		_sprite.setTextureRect(sf::IntRect(x, y, w, h));
		_isLoaded = true;
	}
}

void GameObject::Draw(sf::RenderWindow & renderWindow)
{
	if(_isLoaded)
	{
		renderWindow.draw(_sprite);
	}
}

void GameObject::Update(float elapsedTime)
{

}

void GameObject::SetPosition(float x, float y)
{
	if(_isLoaded)
	{
		_sprite.setPosition(x,y);
	}
}

sf::Sprite& GameObject::GetSprite()
{
  return _sprite;
}