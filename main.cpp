#include <SFML/Graphics.hpp>
#include "Human.h"
#include "Items.h"
#include "Events.h"
#include "Shelves.h"
#include "windows.h"
#include <chrono>
#include <thread>
using namespace sf;
using namespace std;
using namespace std::chrono_literals;

int main()
{
    Items items(0,0);
    Human human(960,540);
    Shelves shelves(0, 0);
    Events events(0,0,0,0);
    RenderWindow window(VideoMode(1920, 1080), "Praktika Solodovnik PI-12");
    Clock game_time_clock1;
    int m_flag=-1;
    Texture Background_Texture;
    Background_Texture.loadFromFile("Image/Fon.png");
    Sprite Background_Sprite(Background_Texture);
    human.Human_Setup();
    shelves.Shelves_Setup();
    items.Items_Setup();
    events.Events_Setup();

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                window.close();
        }
 
       human.Human_Move(events.Get_Time(), items.Get_Status_Items(),events.Get_Day(),events.Get_Money());
 
       events.Events_Work(items.Get_Status_Items());

       items.Work_With_Items(events.Get_Time(), human.Get_Human_X(), human.Get_Human_Y(), human.Get_Human_Status(), human.Get_Human_Action(),events.Get_Day(),events.Get_Money());
       events.Events_Sell(items.Get_Status_Items(), items.Get_Items_Sprite());
       cout << human.Get_Human_Action() << " " << human.Get_Human_Status() << endl;
        window.clear();
        window.draw(Background_Sprite);

        window.draw(events.Events_Time_Draw());

        window.draw(events.Events_Money_Draw());

        for(int i=0;i<3;i++)
        window.draw(shelves.Shelves_Draw_1(i));
        
        for (int j = 0; j < 3; j++)
            window.draw(shelves.Shelves_Draw_2(j));

        for (int k = 0; k < 3; k++)
            window.draw(shelves.Shelves_Draw_3(k));

        if (items.Items_Draw_Cement() != nullptr)
            window.draw(*items.Items_Draw_Cement());

        if (items.Items_Draw_Bricks() != nullptr)
            window.draw(*items.Items_Draw_Bricks());

        if (items.Items_Draw_Nails() != nullptr)
            window.draw(*items.Items_Draw_Nails());

        if (items.Items_Draw_Soap() != nullptr)
            window.draw(*items.Items_Draw_Soap());

        if (items.Items_Draw_Box() != nullptr)
            window.draw(*items.Items_Draw_Box());

        if (items.Items_Draw_Paper() != nullptr)
            window.draw(*items.Items_Draw_Paper());

        if (items.Items_Draw_Sugar() != nullptr)
            window.draw(*items.Items_Draw_Sugar());

        if (items.Items_Draw_Bread() != nullptr)
            window.draw(*items.Items_Draw_Bread());

        if (items.Items_Draw_Milk() != nullptr)
            window.draw(*items.Items_Draw_Milk());
        
        window.draw(events.Events_Car_Draw());

        window.draw(human.Human_Draw());

        if (events.Get_Events_Random() == 1&&events.Get_Day()%2==0&&(events.Get_Time()==3|| events.Get_Time() == 4)) {
            window.draw(*events.Events_Draw_Random_1());
            Sleep(2000);
        }
        if (events.Get_Events_Random() == 2 && events.Get_Day() % 2 == 0 && (events.Get_Time() == 3 || events.Get_Time() == 4)) {
            window.draw(*events.Events_Draw_Random_2());
            Sleep(2000);

        }
        if (events.Get_Events_Random() == 3 && events.Get_Day() % 2 == 0 && (events.Get_Time() == 3 || events.Get_Time() == 4)) {
            window.draw(*events.Events_Draw_Random_3());
            Sleep(2000);

        }
        if (events.Get_Events_Random() == 4 && events.Get_Day() % 2 == 0 && (events.Get_Time() == 3 || events.Get_Time() == 4)) {
            window.draw(*events.Events_Draw_Random_4());
            Sleep(2000);

        }
        
        
        window.display();
        
        std::this_thread::sleep_for(20ms);
    }

    return 0;
}