#pragma once
#include "stdafx.h"
class GameObject
{
public:
	sf::String name;
	int w,h;
	float dx, dy, x, y;



	GameObject(float X, float Y, int W, int H, sf::String Name);
	 ~GameObject();
	
	 void Load(std::string filename);
	 void Draw(sf::RenderWindow &window);
	 void Update(float elapsedTime);

	 void SetPosition(float x, float y);
	//virtual sf::Vector2f GetPosition() const;
	//virtual bool IsLoaded() const;
	protected:
	sf::Sprite& GetSprite();
private:
	sf::Sprite  _sprite;
	sf::Image _image;
	sf::Texture texture;
	std::string _filename;
	bool _isLoaded;
	
};