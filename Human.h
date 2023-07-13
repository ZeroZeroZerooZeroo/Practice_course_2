#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "windows.h"
#include <vector>
#define _CRT_SECURE_NO_WARNINGS

using namespace sf;
using namespace std;

class Human
{
private:
	int m_human_x, m_human_y, m_human_speed = 10, m_human_action=1,m_human_action2, m_flag = -1, m_status = 0;
	float m_current_frame = 0;
	Image m_human_image;
	Texture m_human_texture;
	Sprite m_human_sprite;
public:

	Human();

	Human(int x, int y);

	~Human();

	Sprite Human_Draw();

	void Human_Setup();
	
	/*bool find(int a);*/

	void Human_Move(int time, vector <int> &status_items,int m_days, int money);
	
	int Get_Human_X();

	int Get_Human_Y();

	int Get_Human_Status();

	int Get_Human_Action();
};

