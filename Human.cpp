#include "Human.h"

//Консруктор по умолчанию кладовщика
Human::Human()
{
}

//Конструктор кладовщика
Human::Human(int x, int y)
{
	m_human_x = x;
	m_human_y = y;
}

//Деструктор кладовщика
Human::~Human()
{
}

//Установка позиции кладовщика и загрузка его спрайта
void Human::Human_Setup()
{
	m_human_image.loadFromFile("Image/Human.png");
	m_human_texture.loadFromImage(m_human_image);
	m_human_sprite.setTexture(m_human_texture);
	m_human_sprite.setPosition(m_human_x, m_human_y);
	m_human_sprite.setTextureRect(IntRect(0,0,75,91));
	
}

//Отрисовка кладовщика
Sprite Human::Human_Draw()
{
	return m_human_sprite;
}

//Движение кладовщика
void Human::Human_Move(int time, vector <int>& status_items,int m_days, int money)
{
	switch (m_human_action)
	{
	case 1:
		if (status_items.at(0) == 1 && m_status == 0)
		{
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 600)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 600)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}

		}
		if (status_items.at(0) == 2)
		{
			m_status = 1;
			if (m_human_y < 620) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 150)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_y > 620) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x < 150)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 272, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(0) == 3) {
			m_human_action++;
			m_status = 0;
		}
		break;
	case 2:
		if (status_items.at(1) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 700)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 700)
			{
				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(1) == 2)
		{
			m_status = 1;
			if (m_human_y < 420) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 420) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 150)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 150)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(1) == 3) {

			m_human_action++;
			m_status = 0;
		}
		break;
	case 3:
		if (status_items.at(2) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 800)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 800)
			{

				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(2) == 2)
		{
			m_status = 1;
			if (m_human_y < 220) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 220) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 150)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 150)
			{
				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 150 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(2) == 3) {

			m_human_action++;
			m_status = 0;
		}
		break;
	case 4:
		if (status_items.at(3) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 900)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= 10;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 900)
			{

				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(3) == 2)
		{
			m_status = 1;
			if (m_human_y < 220) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 220) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 220) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(3) == 3) {
			m_status = 0;
			m_human_action++;
		}
		break;
	case 5:
		if (status_items.at(4) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 1000)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 1000)
			{

				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(4) == 2)
		{
			m_status = 1;
			if (m_human_y < 420) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 420) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(4) == 3) {
			m_status = 0;
			m_human_action++;
		}
		break;
	case 6:
		if (status_items.at(5) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 1100)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 1100)
			{

				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(5) == 2)
		{
			m_status = 1;
			if (m_human_y < 620) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 620) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 620) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			
		}
		if (status_items.at(5) == 3) {
			m_status = 0;
			m_human_action++;
			

		}
		break;
	case 7:
		if (status_items.at(6) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 1200)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 1200)
			{

				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(6) == 2)
		{
			m_status = 1;
			if (m_human_y < 60) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 630 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 60) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 630 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 630)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 630 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 630)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 630 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(6) == 3) {
			m_status = 0;
			m_human_action++;
		}
		break;
	case 8:
		if (status_items.at(7) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 1200)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 1200)
			{

				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(7) == 2)
		{
			m_status = 1;
			if (m_human_y < 60) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 830 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 60) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 830 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 830)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 830 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 830)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 830 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(7) == 3) {
			m_status = 0;
			m_human_action++;
		}
		break;
	case 9:
		if (status_items.at(8) == 1 && m_status == 0) {
			if (m_human_y < 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x < 1300)
			{

				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_y > 700) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
			if (m_human_x > 1300)
			{

				m_current_frame -= 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
			}
		}
		if (status_items.at(8) == 2)
		{
			m_status = 1;
			if (m_human_y < 60) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1030 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_y > 60) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1030 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
			if (m_human_x > 1030)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1030 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
			if (m_human_x < 1030)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1030 && m_human_y == 60) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}

		}
		if (status_items.at(8) == 3) {
			m_status = 0;
			m_human_action++;
		}
		break;
	case 10:
		if (time != 4) {
			if (m_flag != time && time % 3 == 0) {
				m_flag = time;
				m_human_action2 = rand() % 9 + 1;
			}
			switch (m_human_action2)
			{
			case 1:
				if (m_human_y < 620) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 150)
				{

					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_y > 620) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x < 150)
				{

					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 272, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}

				break;
			case 2:
				if (m_human_y < 420) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 420) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_y > 420) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 420) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 150)
				{

					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 420) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_x < 150)
				{

					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 420) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				break;
			case 3:
				if (m_human_y < 220) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_y > 220) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 150)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_x < 150)
				{
					m_current_frame -= 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 150 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				break;
			case 4:
				if (m_human_y < 220) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_y > 220) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 1730)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_x < 1730)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 220) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				break;
			case 5:
				if (m_human_y < 420) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
				if (m_human_y > 420) {
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_y -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

				}
			}
				if (m_human_x > 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x -= m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
				if (m_human_x < 1730)
			{
				m_current_frame += 1;
				if (m_current_frame > 4) m_current_frame -= 4;
				m_human_x += m_human_speed;
				m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
				m_human_sprite.setPosition(m_human_x, m_human_y);
				if (m_human_x == 1730 && m_human_y == 420) {
					m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

				}
			}
				break;
			case 6:
				if (m_human_y < 620) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_y > 620) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 1730)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_x < 1730)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1730 && m_human_y == 620) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				break;
			case 7:
				if (m_human_y < 60) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 630 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_y > 60) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 630 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 630)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 630 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_x < 630)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 630 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				break;
			case 8:
				if (m_human_y < 60) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 830 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_y > 60) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 830 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 830)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 830 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_x < 830)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 830 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				break;
			case 9:
				if (m_human_y < 60) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1030 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_y > 60) {
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_y -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 91, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1030 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 0, 75, 91));

					}
				}
				if (m_human_x > 1030)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x -= m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 182, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1030 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				if (m_human_x < 1030)
				{
					m_current_frame += 1;
					if (m_current_frame > 4) m_current_frame -= 4;
					m_human_x += m_human_speed;
					m_human_sprite.setTextureRect(IntRect(int(m_current_frame) * 75, 273, 75, 91));
					m_human_sprite.setPosition(m_human_x, m_human_y);
					if (m_human_x == 1030 && m_human_y == 60) {
						m_human_sprite.setTextureRect(IntRect(0, 0, 75, 91));

					}
				}
				break;
			default:
				break;
			}
		}
		else m_human_action = 1;
		break;
	default:
		break;
	}
}

//Геттер координаты X кладовщика
int Human::Get_Human_X()
{
	return m_human_x;
}

//Геттер координаты Y кладовщика
int Human::Get_Human_Y()
{
	return m_human_y;
}

//Геттер выбора движения кладовщика
int Human::Get_Human_Action()
{
	return m_human_action;
}

//Геттер статуса инвентаря кладовщика
int  Human::Get_Human_Status()
{
	return m_status;
}