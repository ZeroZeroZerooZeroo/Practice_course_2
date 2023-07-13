#pragma once
#include <SFML/Graphics.hpp>
#include "Human.h"
#include <iostream>


#define _CRT_SECURE_NO_WARNINGS

using namespace sf;
using namespace std;
class Items
{
private:
	Image m_cement_image, m_box_image, m_sugar_image, m_bread_image, m_bricks_image, m_nails_image, m_milk_image, m_paper_image, m_soap_image;
	Texture m_cement_texture, m_box_texture, m_sugar_texture, m_bread_texture, m_bricks_texture, m_nails_texture, m_milk_texture, m_paper_texture, m_soap_texture;
	int m_status_cement = -1, m_status_bricks = -1, m_status_nails = -1, m_status_sugar = -1, m_status_bread = -1, m_status_milk = -1, m_status_box = -1, m_status_paper = -1, m_status_soap = -1;
	vector<int> m_status_items;
	vector<Sprite*> m_sprite;
public:
	Human human;
	
	Items(int x, int y);

	Items();

	vector<int>& Get_Status_Items();

	~Items();

	void Work_With_Items(int time, int x, int y, int m_status, int m_human_action,int m_days, int money);

	vector<Sprite*>& Get_Items_Sprite();

	Sprite* Items_Draw_Cement();

	Sprite* Items_Draw_Bricks();

	Sprite* Items_Draw_Nails();

	Sprite* Items_Draw_Milk();

	Sprite* Items_Draw_Sugar();

	Sprite* Items_Draw_Bread();

	Sprite* Items_Draw_Box();

	Sprite* Items_Draw_Paper();

	Sprite* Items_Draw_Soap();

	void Items_Work_Cement(int time, int x, int y,int m_status,int m_human_action);

	void Items_Work_Bricks(int time, int x, int y, int m_status, int m_human_action);

	void Items_Work_Nails(int time, int x, int y, int m_status, int m_human_action);

	void Items_Work_Sugar(int time, int x, int y, int m_status, int m_human_action);

	void Items_Work_Bread(int time, int x, int y, int m_status, int m_human_action);

	void Items_Work_Milk(int time, int x, int y, int m_status, int m_human_action);

	void Items_Work_Box(int time, int x, int y, int m_status, int m_human_action);

	void Items_Work_Paper(int time, int x, int y, int m_status, int m_human_action);

	void Items_Work_Soap(int time, int x,int y, int m_status, int m_human_action);

	void Items_Setup();

	int Get_Items_X();

	int Get_Items_Y();
};

