#pragma once
#include "GameObject.h"
class Player
	:public GameObject
{
public:
	enum {left, right, jump, stay } state; // Состояния игрока
	int playerScore, health;
	bool alive, onGround;
	float speed;
	Player(float X, float Y, int W, int H, sf::String Name);

	~Player(void);
	void Update(float elapsedTime);
	void Draw(sf::RenderWindow& window_);
	void Control();
	//void checkCollisionWithMap(float Dx, float Dy);
};

