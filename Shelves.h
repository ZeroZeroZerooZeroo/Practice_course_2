#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace sf;

class Shelves
{
private:
	int m_shelves_x, m_shelves_y;
	Image m_shelves_image1, m_shelves_image2, m_shelves_image3;
	Texture m_shelves_texture1, m_shelves_texture2, m_shelves_texture3;
	Sprite m_car_sprite1[3], m_shelves_sprite2[3], m_shelves_sprite3[3];

public:

	Shelves(int x, int y);

	~Shelves();

	Sprite Shelves_Draw_1(int i);

	Sprite Shelves_Draw_2(int j);

	Sprite Shelves_Draw_3(int k);

	void Shelves_Setup();

	int Get_Shelves_X();

	int Get_Shelves_Y();

};