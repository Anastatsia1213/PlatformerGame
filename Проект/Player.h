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
<<<<<<< HEAD

=======
>>>>>>> 480615b6005829082638e2fd72001e19a203450a
	~Player(void);
	void Update(float elapsedTime);
	void Draw(sf::RenderWindow& window_);
	void Control();
	//void checkCollisionWithMap(float Dx, float Dy);
};

