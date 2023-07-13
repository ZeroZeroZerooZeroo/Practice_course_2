#include "Events.h"

Events::Events(int x,int y, int m_days, int m_hours)
{
	m_car_x = x;
	m_car_y = y;
	m_days = m_days;
	m_hours = m_hours;
}

Events::~Events()
{
}

vector<Sprite*>& Events::Get_Event_Sprite()
{
	return m_background_events;
}



Sprite Events::Events_Car_Draw()
{
	return m_car_sprite;
	
}

Text Events::Events_Time_Draw()
{
	return m_timer_text;
	
}

Text Events::Events_Money_Draw()
{
	return m_money_text;

}

void Events::Events_Setup()
{
	m_timer_font.loadFromFile("CyrilicOld.ttf");
	m_timer_text.setFont(m_timer_font);
	m_timer_text.setCharacterSize(35);
	m_timer_text.setStyle(Text::Bold || Text::Underlined);
	m_timer_text.setPosition(1500, 10);

	m_money_text.setFont(m_timer_font);
	m_money_text.setCharacterSize(35);
	m_money_text.setStyle(Text::Bold || Text::Underlined);
	m_money_text.setPosition(120, 10);

	m_car_image.loadFromFile("Image/Car.png");
	m_car_texture.loadFromImage(m_car_image);
	m_car_sprite.setTexture(m_car_texture);
	m_car_y = 1200;
	m_car_x = 900;
	m_car_sprite.setPosition(m_car_x, m_car_y);

	m_black_background_image_0.loadFromFile("Image/Background.png");
	m_black_background_texture_0.loadFromImage(m_black_background_image_0);
	Sprite* m_black_background_sprite_0 = new Sprite();
	m_black_background_sprite_0->setTexture(m_black_background_texture_0);
	m_black_background_sprite_0->setPosition(0, 0);
	m_background_events.push_back(m_black_background_sprite_0);

	m_black_background_image_1.loadFromFile("Image/Background_1.png");
	m_black_background_texture_1.loadFromImage(m_black_background_image_1);
	Sprite* m_black_background_sprite_1 = new Sprite();
	m_black_background_sprite_1->setTexture(m_black_background_texture_1);
	m_black_background_sprite_1->setPosition(0, 0);
	m_background_events.push_back(m_black_background_sprite_1);

	m_black_background_image_2.loadFromFile("Image/Background_2.png");
	m_black_background_texture_2.loadFromImage(m_black_background_image_2);
	Sprite* m_black_background_sprite_2 = new Sprite();
	m_black_background_sprite_2->setTexture(m_black_background_texture_2);
	m_black_background_sprite_2->setPosition(0, 0);
	m_background_events.push_back(m_black_background_sprite_2);

	m_black_background_image_3.loadFromFile("Image/Background_3.png");
	m_black_background_texture_3.loadFromImage(m_black_background_image_3);
	Sprite* m_black_background_sprite_3 = new Sprite();
	m_black_background_sprite_3->setTexture(m_black_background_texture_3);
	m_black_background_sprite_3->setPosition(0, 0);
	m_background_events.push_back(m_black_background_sprite_3);

	m_black_background_image_4.loadFromFile("Image/Background_4.png");
	m_black_background_texture_4.loadFromImage(m_black_background_image_4);
	Sprite* m_black_background_sprite_4 = new Sprite();
	m_black_background_sprite_4->setTexture(m_black_background_texture_4);
	m_black_background_sprite_4->setPosition(0, 0);
	m_background_events.push_back(m_black_background_sprite_4);

}
int Events::Get_Time() {
	return m_hours;
}
int Events::Get_Day() {
	return m_days;
}

int Events::Get_Events_Random()
{
	return m_random_event;
}



Sprite* Events::Events_Draw_Random_1()
{
	return m_background_events.at(1);
}

Sprite* Events::Events_Draw_Random_2()
{
	return m_background_events.at(2);
}

Sprite* Events::Events_Draw_Random_3()
{
	return m_background_events.at(3);
}

Sprite* Events::Events_Draw_Random_4()
{
	return m_background_events.at(4);
}

void Events::Events_Work(const vector<int>& status_items)
{
	m_hours = m_game_time_clock.getElapsedTime().asSeconds() * 0.5;

	m_days_string = to_string(m_days);
	m_hours_string = to_string(m_hours);
	m_money_string = to_string(m_money);

	m_timer_text.setString(" День:" + m_days_string + "Час:" + m_hours_string);
	m_money_text.setString("Денюжки:" + m_money_string);
	
	if (m_hours == 24)
	{
		m_days++;
		m_game_time_clock.restart();

	}
	if(m_hours==6)
		numbers_items.clear();

	for (int i = 0; i < 9; i++) 	
		if (status_items.at(i) == 0)
			numbers_items.push_back(i);


	if (!numbers_items.empty()) {
		if (m_hours >= 3 && m_car_y >= 850 && !Go_Car) {
				if (m_car_y == 860)
					Go_Car = true;
				m_car_y -= 20;
				m_car_sprite.setPosition(m_car_x, m_car_y);
		}
		
	}
	if (m_hours >= 9 &&  m_car_y <= 1220 && Go_Car) {
			if (m_car_y == 1220)
				Go_Car = false;
			m_car_y += 20;
			m_car_sprite.setPosition(m_car_x, m_car_y);
	}

	if (m_flag != m_hours && m_hours == 2&&m_days%2==0) {
		m_flag = m_hours/2;
			m_random_event = rand() % 4 + 1;

	}


	
}
//цемент-4 гвозди-4,кирпичи-5 молоко 2 хлеб 3 сахар 5 мыло 6 коробка 7 бумага 3
void Events::Events_Sell(vector<int>& status_items, vector<Sprite*>& sprite)
{
	if (m_days % 2 == 0&& status_items.at(5) == 3&&m_hours==2) {
		status_items[5] = -1;
		sprite[5]->setPosition(1100, 700);
		m_money += 50;
	}
	if (m_days % 3 == 0 && status_items.at(4) == 3 && status_items.at(7) == 3 && m_hours == 2) {
		status_items[4] = -1;
		sprite[4]->setPosition(1000, 700);
		m_money += 30;
		status_items[7] = -1;
		sprite[7]->setPosition(1200, 700);
		m_money += 75;
	}
	else if (m_days % 4 == 0 && status_items.at(0) == 3 && status_items.at(2) == 3 && m_hours == 2) {
		status_items[0] = -1;
		sprite[0]->setPosition(600, 700);
		m_money += 200;
		status_items[2] = -1;
		sprite[2]->setPosition(800, 700);
		m_money += 30;
	}
	if (m_days % 5 == 0 && status_items.at(1) == 3 && status_items.at(3) == 3 && m_hours == 2) {
		status_items[1] = -1;
		sprite[1]->setPosition(700, 700);
		m_money += 80;
		status_items[3] = -1;
		sprite[3]->setPosition(900, 700);
		m_money += 50;
	}
	else if (m_days % 6 == 0 && status_items.at(8) == 3 && m_hours == 2) {
		status_items[8] = -1;
		sprite[8]->setPosition(1300, 700);
		m_money += 20;
	}
	if (m_days % 7 == 0 && status_items.at(6) == 3 && m_hours == 2) {

		status_items[6] = -1;
		sprite[6]->setPosition(1400, 700);
		m_money += 150;
	}

	if (m_random_event==1&&m_days%2==0&&m_hours==3)
	{
		m_money += 200;
	}
	if (m_random_event == 2 && m_days % 2 == 0 && m_hours == 3)
	{
		m_money -= 400;
	}
	if (m_random_event == 3 && m_days % 2 == 0 && m_hours == 3)
	{
		m_money +=500;
	}
	if (m_random_event == 4 && m_days % 2 == 0 && m_hours == 3)
	{
		m_money -= 300;
	}

	

}

int Events::Get_Money() {
	return m_money;
}
