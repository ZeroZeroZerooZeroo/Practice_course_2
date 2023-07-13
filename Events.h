#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Items.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace sf;
using namespace std;

class Events
{
private:
	int m_car_x, m_car_y,m_money=0,m_days=1, m_hours,m_flag=-1,m_random_event;
	Clock m_game_time_clock;
	string m_days_string, m_hours_string, m_money_string;
	Font m_timer_font;
	Text m_timer_text, m_money_text;
	Image m_car_image;
	Texture m_car_texture;
	Sprite m_car_sprite;
	Items items;
	bool Go_Car=false;
	Image m_black_background_image_0,m_black_background_image_1, m_black_background_image_2, m_black_background_image_3, m_black_background_image_4;
	Texture m_black_background_texture_0,m_black_background_texture_1, m_black_background_texture_2, m_black_background_texture_3, m_black_background_texture_4;

	vector<Sprite*> m_background_events;

public:
	vector<int>numbers_items;

	vector<Sprite*>& Get_Event_Sprite();

	Events(int x,int y,int m_days,int m_hours);

	~Events();

	int Get_Events_Random();

	Sprite* Events_Draw_Random_1();

	Sprite* Events_Draw_Random_2();

	Sprite* Events_Draw_Random_3();

	Sprite* Events_Draw_Random_4();

	Sprite Events_Car_Draw();

	Text Events_Time_Draw();

	Text Events_Money_Draw();
	
	int Get_Time();

	int Get_Day();

	void Events_Setup();

	void Events_Work(const vector<int> &status_items);

	void Events_Sell(vector<int> &status_items, vector<Sprite*> &sprite);

	int Get_Money();
};

