#include "Map.h"
#include <SFML\Graphics.hpp>
#include <string>
#include <iostream>

Map::Map()
{
	
}
void Map:: Load_()
{
	map_image.loadFromFile("block.png");//загружаем файл для карты
	map.loadFromImage(map_image);
	s_map.setTexture(map);

	TileMap[0] =  "0000000000000000000000000000000000000000";
	TileMap[1] =  "0                                      0";
	TileMap[2] =  "0                                      0";
	TileMap[3] =  "0    Q                                 0";
	TileMap[4]=   "0    BBB                               0";
	TileMap[5]=   "0                                      0";
	TileMap[6]=   "0                                      0";
	TileMap[7] =  "0                                      0";
	TileMap[8] =  "0                                      0";
	TileMap[9] =  "0                                      0";
	TileMap[10] = "0                                      0";
	TileMap[11] = "0                                      0";
	TileMap[12] = "0                                      0";
	TileMap[13] = "0                                      0";
	TileMap[14] = "0                                      0";
	TileMap[15] = "0                                      0";
	TileMap[16] = "0                                      0";
	TileMap[17] = "0GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG0";
	TileMap[18] = "0GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG0";
	TileMap[19] = "0GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG0";
	TileMap[20] = "0GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG0";
	TileMap[21] = "0BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB0";
	//TileMap[22] = "0                                      0";
	//TileMap[23] = "0                                      0";
	/*TileMap[23] = "0                                      0";
	TileMap[24] = "0000000000000000000000000000000000000000";*/

}

void Map::RandomMapGenerate()
{
	randomElementX = 0;//случайный элемент по горизонтали
	randomElementY = 0;//случ эл-т по вертикали
	srand(time(0));//рандом	
	countStone = 2;//количество камней
	
	while (countStone>0){
		randomElementX = 1 + rand() % (Width - 1);//рандомное по иксу от 1 до ширина карты-1, чтобы не получать числа бордюра карты
		randomElementY = 1 + rand() % (Height - 1);//по игреку так же
		
		if (TileMap[randomElementY][randomElementX] == ' ')   {//если встретили символ пробел, 
			TileMap[randomElementY][randomElementX] = 's'; //то ставим туда камень.
			countStone--;
		}
	}	
}


void Map::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < Height; i++)
		for (int j = 0; j < Width; j++)
		{
			if (TileMap[i][j] == '0')  s_map.setTextureRect(sf::IntRect(0, 0, 32, 32)); //если встретили символ пробел, то рисуем 1й квадратик
			if (TileMap[i][j] == ' ')  s_map.setTextureRect(sf::IntRect(98, 0, 32, 32)); //если встретили символ пробел, то рисуем 1й квадратик
			if (TileMap[i][j] == 'B')  s_map.setTextureRect(sf::IntRect(32, 0, 32, 32));//если встретили символ s, то рисуем 2й квадратик
			if (TileMap[i][j] == 'G')  s_map.setTextureRect(sf::IntRect(64, 0, 32, 32));
			
			s_map.setPosition(j * 32, i * 32);//по сути раскидывает квадратики, превращая в карту. то есть задает каждому из них позицию. если убрать, то вся карта нарисуется в одном квадрате 32*32 и мы увидим один квадрат
			window.draw(s_map);
		}
		 
}
