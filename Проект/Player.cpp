#include "stdafx.h"
#include "Player.h"
<<<<<<< HEAD
#include "Game.h"
=======
>>>>>>> 480615b6005829082638e2fd72001e19a203450a


Player::Player(float X, float Y, int W, int H, sf::String Name):GameObject(X, Y, W, H, Name)
{
<<<<<<< HEAD
	Load("Boy1.png");
=======
>>>>>>> 480615b6005829082638e2fd72001e19a203450a
	state = stay;
	playerScore = 0;
	speed = 0;
	onGround = false;
	alive = true;
	health = 100;
	if (name == "Player1")
			{
				GetSprite();//.setTextureRect(sf::IntRect(x, y, w, h));
			}
}

<<<<<<< HEAD

 void Player::
	 Control(){
		  // if (sf::Keyboard::isKeyPressed){//если нажата клавиша
			  // if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {//а именно левая
			 //  if (Game::GetInput() == 80)
			 if (Game::GetInput(sf::Keyboard::A))
			   {
				   state = left; speed = 0.1;
			   }
			  // if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			   if (Game::GetInput(sf::Keyboard::D)){ //== 68){
				   state = right; speed = 0.1;
			   }

			  // if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) && (onGround)) {
			   if(Game::GetInput(sf::Keyboard::Space)&& (onGround)){
				   state = jump; dy = -0.6; onGround = false;
			   }
		//   }
=======
 void Player::Control(){
		   if (sf::Keyboard::isKeyPressed){//если нажата клавиша
			   if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {//а именно левая
				   state = left; speed = 0.1;
			   }
			   if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				   state = right; speed = 0.1;
			   }

			   if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) && (onGround)) {
				   state = jump; dy = -0.6; onGround = false;
			   }
		   }
>>>>>>> 480615b6005829082638e2fd72001e19a203450a
 }

Player::~Player(void)
{
}

void Player::Update(float time)
{
	Control();
		   switch (state)
		   {
		   case right:dx = speed; break;
		   case left:dx = -speed; break;
		   case stay: break;	
		   }
		   x += dx*time;
		   //checkCollisionWithMap(dx, 0);//столкновение по Х
		   y += dy*time;
		   //checkCollisionWithMap(0, dy);//столкновение по Y
		   GetSprite().setPosition(x + w / 2, y + h / 2);
		   if (health <= 0){ alive = false; }
		   //if (!isMove){ speed = 0; }
		   //if (!onGround) { dy = dy + 0.0015*time; }
		  // if (life) { setPlayerCoordinateForView(x, y); }
		   dy = dy + 0.0015*time;//постоянно притягиваемся к земле
}

void Player::Draw(sf::RenderWindow & window_)
{
	GameObject::Draw(window_);
}


