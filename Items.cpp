#include "Items.h"

//Конструктор предметов
Items::Items(int x, int y)
{
	x = x;
	y = y;	
}

//Конструктор предметов
Items::Items()
{
}

//Деструктор предметов
Items::~Items()
{
}

//Геттер статуса предметов
vector<int> &Items::Get_Status_Items()
{
	return m_status_items;
}

//Работа с предметами
void Items::Work_With_Items(int time, int x, int y, int m_status, int m_human_action, int m_days, int money)
{

	if(time==3)
		for (int i = 0; i < 9; i++) {
			if (m_status_items.at(i) == -1)
				m_status_items[i] = 0;
		}

	Items_Work_Cement(time, x,y,m_status,m_human_action);
	Items_Work_Bricks(time, x, y, m_status, m_human_action);
	Items_Work_Nails(time, x, y, m_status, m_human_action);
	Items_Work_Sugar(time, x, y, m_status, m_human_action);
	Items_Work_Bread(time, x, y, m_status, m_human_action);
	Items_Work_Milk(time, x, y, m_status, m_human_action);
	Items_Work_Box(time, x, y, m_status, m_human_action);
	Items_Work_Paper(time, x, y, m_status, m_human_action);
	Items_Work_Soap(time, x, y, m_status, m_human_action);

}

//Геттер спрайтов предметов
vector<Sprite*>& Items::Get_Items_Sprite()
{
	return m_sprite;
}

//Геттер координаты X предметов
int Items::Get_Items_X()
{
	return 0;
}

//Геттер координаты Y предметов
int Items::Get_Items_Y()
{
	return 0;
}

//Установка позиции всех товаров загрузка спрайтов
void Items::Items_Setup()
{
	for (int i = 0; i < 9; i++)
		m_status_items.push_back(-1);

	m_cement_image.loadFromFile("Image/Cement.png");
	m_cement_texture.loadFromImage(m_cement_image);
	Sprite *m_cement_sprite=new Sprite();
	m_cement_sprite->setTexture(m_cement_texture);
	m_cement_sprite->setPosition(600, 700);
	m_sprite.push_back(m_cement_sprite);

	m_bricks_image.loadFromFile("Image/Bricks.png");
	m_bricks_texture.loadFromImage(m_bricks_image);
	Sprite* m_bricks_sprite =new Sprite();
	m_bricks_sprite->setTexture(m_bricks_texture);
	m_bricks_sprite->setPosition(700, 700);
	m_sprite.push_back(m_bricks_sprite);

	m_nails_image.loadFromFile("Image/Nails.png");
	m_nails_texture.loadFromImage(m_nails_image);
	Sprite* m_nails_sprite =new Sprite();
	m_nails_sprite->setTexture(m_nails_texture);
	m_nails_sprite->setPosition(800, 700);
	m_sprite.push_back(m_nails_sprite);

	m_sugar_image.loadFromFile("Image/Sugar.png");
	m_sugar_texture.loadFromImage(m_sugar_image);
	Sprite* m_sugar_sprite =new Sprite();
	m_sugar_sprite->setTexture(m_sugar_texture);
	m_sugar_sprite->setPosition(900, 700);
	m_sprite.push_back(m_sugar_sprite);

	m_bread_image.loadFromFile("Image/Bread.png");
	m_bread_texture.loadFromImage(m_bread_image);
	Sprite* m_bread_sprite = new Sprite();
	m_bread_sprite->setTexture(m_bread_texture);
	m_bread_sprite->setPosition(1000, 700);
	m_sprite.push_back(m_bread_sprite);

	m_milk_image.loadFromFile("Image/Milk.png");
	m_milk_texture.loadFromImage(m_milk_image);
	Sprite* m_milk_sprite =new Sprite();
	m_milk_sprite->setTexture(m_milk_texture);
	m_milk_sprite->setPosition(1100, 700);
	m_sprite.push_back(m_milk_sprite);

	m_box_image.loadFromFile("Image/Box.png");
	m_box_texture.loadFromImage(m_box_image);
	Sprite* m_box_sprite = new Sprite();
	m_box_sprite->setTexture(m_box_texture);
	m_box_sprite->setPosition(1400, 700);
	m_sprite.push_back(m_box_sprite);

	m_paper_image.loadFromFile("Image/Paper.png");
	m_paper_texture.loadFromImage(m_paper_image);
	Sprite* m_paper_sprite =new Sprite();
	m_paper_sprite->setTexture(m_paper_texture);
	m_paper_sprite->setPosition(1200, 700);
	m_sprite.push_back(m_paper_sprite);

	m_soap_image.loadFromFile("Image/Soap.png");
	m_soap_texture.loadFromImage(m_soap_image);
	Sprite* m_soap_sprite =new Sprite();
	m_soap_sprite->setTexture(m_soap_texture);
	m_soap_sprite->setPosition(1300, 700);
	m_sprite.push_back(m_soap_sprite);
}

//Работа с предметами
//Строй. материалы
void Items::Items_Work_Cement(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(0) == 0 && time == 4) {

		m_status_items[0] = 1;
	}
	else if (x <= 600 && y <= 700 && m_status==0 && m_status_items.at(0) == 1 && m_human_action == 1) {
		m_sprite[0]->setPosition(1500, 900);
		m_status_items[0] = 2;
	}
	else if (x == 150 && y ==620 && m_status==1 && m_status_items.at(0) == 2) {
		m_status_items[0] = 3;
		m_sprite[0]->setPosition(50, 650);
	}
}

void Items::Items_Work_Bricks(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(1) == 0 && time == 4) {
		
		m_status_items[1] = 1;
	}
	else if (x == 700 && y == 700 && m_status == 0 && m_status_items.at(1) ==1 && m_human_action==2) {
		m_sprite[1]->setPosition(1500, 900);
		m_status_items[1] = 2;
	}
	else if (x == 150 && y == 420 && m_status == 1 && m_status_items.at(1) == 2) {
		m_status_items[1] = 3;
		m_sprite[1]->setPosition(50, 450);
	}
}

void Items::Items_Work_Nails(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(2) == 0 && time == 4) {
		
		m_status_items[2] = 1;
	}
	else if (x == 800 && y == 700 && m_status == 0 && m_status_items.at(2) && m_human_action==3) {
		m_sprite[2]->setPosition(1500, 900);
		m_status_items[2] = 2;
	}
	else if (x == 150 && y == 220 && m_status == 1&& m_status_items.at(2) == 2) {
		m_status_items[2] = 3;
		m_sprite[2]->setPosition(50, 250);
	}
}

//Продукты
void Items::Items_Work_Sugar(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(3) == 0 && time == 4) {
	
		m_status_items[3] = 1;
	}
	else if (x == 900 && y == 700 && m_status == 0 && m_status_items.at(3) == 1 && m_human_action==4) {
		m_sprite[3]->setPosition(1500, 900);
		m_status_items[3] = 2;
	}
	else if (x == 1730 && y == 220 && m_status == 1 && m_status_items.at(3) == 2) {
		m_status_items[3] = 3;
		m_sprite[3]->setPosition(1800, 220);
	}
}

void Items::Items_Work_Bread(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(4) == 0 && time == 4) {
		m_status_items[4] = 1;
	}
	else if (x == 1000 && y == 700 && m_status == 0 && m_status_items.at(4) == 1 && m_human_action == 5) {
		m_sprite[4]->setPosition(1500, 900);
		m_status_items[4] = 2;
	}
	else if (x == 1730 && y == 420 && m_status == 1 && m_status_items.at(4) == 2) {
		m_status_items[4] = 3;
		m_sprite[4]->setPosition(1800, 420);
	}
}

void Items::Items_Work_Milk(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(5) == 0 && time == 4) {
	
		m_status_items[5] = 1;
	}
	else if (x == 1100 && y == 700 && m_status == 0 && m_status_items.at(5) ==1 && m_human_action==6) {
		m_sprite[5]->setPosition(1500, 900);
		m_status_items[5] = 2;
	}
	else if (x == 1730 && y == 620 && m_status == 1 && m_status_items.at(5) == 2) {
		m_status_items[5] = 3;
		m_sprite[5]->setPosition(1800, 620);
		
	}
}


//Прочие предметы
void Items::Items_Work_Box(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(6) == 0 && time == 4) {

		m_status_items[6] = 1;
	}
	else if (x == 1400 && y == 700 && m_status == 0 && m_status_items.at(6) == 1 && m_human_action == 7) {
		m_sprite[6]->setPosition(1500, 900);
		m_status_items[6] = 2;
	}
	else if (x == 630 && y == 60 && m_status == 1 && m_status_items.at(6) == 2) {
		m_status_items[6] = 3;
		m_sprite[6]->setPosition(650, 70);
	}
}

void Items::Items_Work_Paper(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(7) == 0 && time == 4) {
		
		m_status_items[7] = 1;
	}
	else if (x == 1200 && y == 700 && m_status == 0 && m_status_items.at(7) ==1 && m_human_action==8) {
		m_sprite[7]->setPosition(1500, 900);
		m_status_items[7] = 2;
	}
	else if (x == 830 && y == 60 && m_status == 1 && m_status_items.at(7) == 2) {
		m_status_items[7] = 3;
		m_sprite[7]->setPosition(850, 70);
	}
}

void Items::Items_Work_Soap(int time, int x, int y, int m_status, int m_human_action)
{
	if (m_status_items.at(8) == 0 && time == 4) {
		
		m_status_items[8] = 1;
	}
	else if (x == 1300 && y == 700 && m_status == 0 && m_status_items.at(8) == 1 && m_human_action==9) {
		m_sprite[8]->setPosition(1500, 900);
		m_status_items[8] = 2;
	}
	else if (x == 1030 && y == 60 && m_status == 1 && m_status_items.at(8) == 2) {
		m_status_items[8] = 3;
		m_sprite[8]->setPosition(1050, 70);
	}
}

//Отрисовка предметов
//Строй. материалы
Sprite* Items::Items_Draw_Cement()
{
	if (m_status_items.at(0) != -1 && (m_status_items.at(0) != 0))
		return m_sprite[0];
	else return 0;
}

Sprite* Items::Items_Draw_Bricks()
{
	if (m_status_items.at(1) !=-1 && (m_status_items.at(1) != 0))
		return m_sprite[1];
	else return 0;
}

Sprite* Items::Items_Draw_Nails()
{
	if (m_status_items.at(2) != -1 && (m_status_items.at(2) != 0))
		return m_sprite[2];
	else return 0;
}

//Продукты
Sprite* Items::Items_Draw_Sugar()
{
	if (m_status_items.at(3) != -1 && (m_status_items.at(3) != 0))
		return m_sprite[3];
	else return 0;
}

Sprite* Items::Items_Draw_Bread()
{
	if (m_status_items.at(4) != -1 && (m_status_items.at(4) != 0))
		return m_sprite[4];
	else return 0;
}

Sprite* Items::Items_Draw_Milk()
{
	if (m_status_items.at(5) != -1 && (m_status_items.at(5) != 0))
		return m_sprite[5];
	else return 0;
}

//Прочие предметы
Sprite* Items::Items_Draw_Box()
{
	if (m_status_items.at(6) != -1 && (m_status_items.at(6) != 0))
		return m_sprite[6];
	else return 0;
}

Sprite* Items::Items_Draw_Paper()
{
	if (m_status_items.at(7) != -1 && (m_status_items.at(7) != 0))
		return m_sprite[7];
	else return 0;
}

Sprite* Items::Items_Draw_Soap()
{
	if (m_status_items.at(8) != -1 && (m_status_items.at(8) != 0))
		return m_sprite[8];
	else return 0;
}