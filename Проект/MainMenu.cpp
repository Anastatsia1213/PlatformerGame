#include "stdafx.h"
#include "MainMenu.h"
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"


MainMenu::MenuResult MainMenu::Show(sf::RenderWindow& window)
{

	//загрузка менюшки
	sf::Image image;
	image.loadFromFile("mainmenu.png");
	sf::Texture texture;
	texture.loadFromImage(image);
	sf::Sprite sprite;
	sprite.setTexture(texture);

	//определяем кнопки

	//Play 
	MenuItem playButton;
	playButton.rect.top= 145;
	playButton.rect.height =235;//380-верх прямоугольника
	playButton.rect.left = 0;
	playButton.rect.width = 1023;
	playButton.action = Play;

	//Exit 
	MenuItem exitButton;
	exitButton.rect.left = 0;
	exitButton.rect.width = 1023;
	exitButton.rect.top = 383;
	exitButton.rect.height = 177;//560;
	exitButton.action = Exit;

	_menuItems.push_back(playButton);
	_menuItems.push_back(exitButton);

	window.draw(sprite);
	window.display();

	return GetMenuResponse(window);
}

MainMenu::MenuResult MainMenu::HandleClick(int x, int y)
{
	std::list<MenuItem>::iterator it;

	for ( it = _menuItems.begin(); it != _menuItems.end(); it++)
	{
		sf::Rect<int> menuItemRect = (*it).rect;
		if( menuItemRect.top + menuItemRect.height> y && 
			 menuItemRect.top < y )
			//&& menuItemRect.left < x )
			{
				return (*it).action;
			}
	}
	return Nothing;
}

MainMenu::MenuResult  MainMenu::GetMenuResponse(sf::RenderWindow& window)
{
	sf::Event menuEvent;
	while(true)

	{
		while(window.pollEvent(menuEvent))
		{
			if(menuEvent.type == sf::Event::MouseButtonPressed)
			if (menuEvent.key.code == sf::Mouse::Left)
			{
				//return HandleClick(menuEvent.MouseButtonPressed.X,menuEvent.MouseButton.Y);
				//window.GetInput().GetMouseX()
				//sf::Vector2i localPosition = sf::Mouse::getPosition(window);//коорд курсора
					//return HandleClick(localPosition.x, localPosition.y);
				sf::Vector2i localPosition = sf::Mouse::getPosition(window);//коорд курсора
				sf::Vector2f pos = window.mapPixelToCoords(localPosition);//перевод в игровые
				return HandleClick(localPosition.x, localPosition.y);
			}
			
			if(menuEvent.type == sf::Event::Closed)
			{
				return Exit;
			}
		}
	}
}