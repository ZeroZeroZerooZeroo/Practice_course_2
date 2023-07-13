#include "Shelves.h"

//Конструктор полок
Shelves::Shelves(int x, int y)
{
	m_shelves_x = x;
	m_shelves_y = y;
}

//Деструктор полок
Shelves::~Shelves()
{
}

//Отрисовка левых 3 полок
Sprite Shelves::Shelves_Draw_1(int i)
{

	return m_car_sprite1[i];

}

//Отрисовка центральных 3 полок
Sprite Shelves::Shelves_Draw_2(int j)
{
	
	return m_shelves_sprite2[j];
}

//Отрисовка правых 3 полок
Sprite Shelves::Shelves_Draw_3(int k)
{
	
	return m_shelves_sprite3[k];
}

//Установка позиции всех полок загрузка спрайтов
void Shelves::Shelves_Setup()
{
	
	int y = 200;
	int x = 650;
	for (int i = 0; i < 3; i++) {
		m_shelves_image1.loadFromFile("Image/Shelving1.png");
		m_shelves_texture1.loadFromImage(m_shelves_image1);
		m_car_sprite1[i].setTexture(m_shelves_texture1);
		m_car_sprite1[i].setPosition(50, y);
		
		y += 200;
	}

	
	for (int j = 0; j < 3; j++) {
		m_shelves_image2.loadFromFile("Image/Shelving2.png");
		m_shelves_texture2.loadFromImage(m_shelves_image2);
		m_shelves_sprite2[j].setTexture(m_shelves_texture2);
		m_shelves_sprite2[j].setPosition(x, 50);
		
		x += 200;
	}

	 y = 200;
	for (int k = 0; k < 3; k++) {
		m_shelves_image3.loadFromFile("Image/Shelving3.png");
		m_shelves_texture3.loadFromImage(m_shelves_image3);
		m_shelves_sprite3[k].setTexture(m_shelves_texture3);
		m_shelves_sprite3[k].setPosition(1750, y);
		
		y += 200;
	}

}

//Геттер координаты Х полок
int Shelves::Get_Shelves_X()
{
	return m_shelves_x;
}

//Геттер координаты Y полок
int Shelves::Get_Shelves_Y()
{
	return m_shelves_y;
}