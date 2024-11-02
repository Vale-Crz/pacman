#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>//Se representa una pantalla
#include <ftxui/screen/color.hpp>//Hay color dentro del programa
#include <ftxui/screen/terminal.hpp> //Representa una terminal
#include <iostream>
#include <thread>//Se permite correr dos cosas al mismo tiempo

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;//Numero de cuadro
    int bici= 10;
    const int bicilimite = 450;
    
   
    while (true)
    {   

        auto can = Canvas(1000,1000);//Creas un lienzo de tamaño 

        can.DrawBlock(10,40,50);
        can.DrawBlock(10,39,50);
        can.DrawBlock(10,38,50);
        can.DrawBlock(10,37,50);
        can.DrawBlock(10,36,50);
        can.DrawBlock(10,35,50);
        can.DrawBlock(10,34,50);
        can.DrawBlock(10,33,50);
        can.DrawBlock(10,32,50);
        can.DrawBlock(10,31,50);
        can.DrawBlock(10,30,50);
        can.DrawBlock(10,29,50);
        can.DrawBlock(10,28,50);
        can.DrawBlock(10,27,50);
        can.DrawBlock(10,26,50);
        can.DrawBlock(10,25,50);

        can.DrawBlockCircleFilled(10,10,10, Color::Green);

        can.DrawBlock(50,40,50);
        can.DrawBlock(50,39,50);
        can.DrawBlock(50,38,50);
        can.DrawBlock(50,37,50);
        can.DrawBlock(50,36,50);
        can.DrawBlock(50,35,50);
        can.DrawBlock(50,34,50);
        can.DrawBlock(50,33,50);
        can.DrawBlock(50,32,50);
        can.DrawBlock(50,31,50);
        can.DrawBlock(50,30,50);
        can.DrawBlock(50,29,50);
        can.DrawBlock(50,28,50);
        can.DrawBlock(50,27,50);
        can.DrawBlock(50,26,50);
        can.DrawBlock(50,25,50);

        can.DrawBlockCircleFilled(50,10,10, Color::Green);


        can.DrawBlock(90,40,50);
        can.DrawBlock(90,39,50);
        can.DrawBlock(90,38,50);
        can.DrawBlock(90,37,50);
        can.DrawBlock(90,36,50);
        can.DrawBlock(90,35,50);
        can.DrawBlock(90,34,50);
        can.DrawBlock(90,33,50);
        can.DrawBlock(90,32,50);
        can.DrawBlock(90,31,50);
        can.DrawBlock(90,30,50);
        can.DrawBlock(90,29,50);
        can.DrawBlock(90,28,50);
        can.DrawBlock(90,27,50);
        can.DrawBlock(90,26,50);
        can.DrawBlock(90,25,50);

        can.DrawBlockCircleFilled(90,10,10, Color::Green);



        can.DrawBlock(130,40,50);
        can.DrawBlock(130,39,50);
        can.DrawBlock(130,38,50);
        can.DrawBlock(130,37,50);
        can.DrawBlock(130,36,50);
        can.DrawBlock(130,35,50);
        can.DrawBlock(130,34,50);
        can.DrawBlock(130,33,50);
        can.DrawBlock(130,32,50);
        can.DrawBlock(130,31,50);
        can.DrawBlock(130,30,50);
        can.DrawBlock(130,29,50);
        can.DrawBlock(130,28,50);
        can.DrawBlock(130,27,50);
        can.DrawBlock(130,26,50);
        can.DrawBlock(130,25,50);

        can.DrawBlockCircleFilled(130,10,10, Color::Green);


        can.DrawBlock(170,40,50);
        can.DrawBlock(170,39,50);
        can.DrawBlock(170,38,50);
        can.DrawBlock(170,37,50);
        can.DrawBlock(170,36,50);
        can.DrawBlock(170,35,50);
        can.DrawBlock(170,34,50);
        can.DrawBlock(170,33,50);
        can.DrawBlock(170,32,50);
        can.DrawBlock(170,31,50);
        can.DrawBlock(170,30,50);
        can.DrawBlock(170,29,50);
        can.DrawBlock(170,28,50);
        can.DrawBlock(170,27,50);
        can.DrawBlock(170,26,50);
        can.DrawBlock(170,25,50);

        can.DrawBlockCircleFilled(170,10,10, Color::Green);

        can.DrawBlock(210,40,50);
        can.DrawBlock(210,39,50);
        can.DrawBlock(210,38,50);
        can.DrawBlock(210,37,50);
        can.DrawBlock(210,36,50);
        can.DrawBlock(210,35,50);
        can.DrawBlock(210,34,50);
        can.DrawBlock(210,33,50);
        can.DrawBlock(210,32,50);
        can.DrawBlock(210,31,50);
        can.DrawBlock(210,30,50);
        can.DrawBlock(210,29,50);
        can.DrawBlock(210,28,50);
        can.DrawBlock(210,27,50);
        can.DrawBlock(210,26,50);
        can.DrawBlock(210,25,50);

        can.DrawBlockCircleFilled(210,10,10, Color::Green);

        can.DrawBlock(210,40,50);
        can.DrawBlock(250,39,50);
        can.DrawBlock(250,38,50);
        can.DrawBlock(250,37,50);
        can.DrawBlock(250,36,50);
        can.DrawBlock(250,35,50);
        can.DrawBlock(250,34,50);
        can.DrawBlock(250,33,50);
        can.DrawBlock(250,32,50);
        can.DrawBlock(250,31,50);
        can.DrawBlock(250,30,50);
        can.DrawBlock(250,29,50);
        can.DrawBlock(250,28,50);
        can.DrawBlock(250,27,50);
        can.DrawBlock(250,26,50);
        can.DrawBlock(250,25,50);

        can.DrawBlockCircleFilled(250,10,10, Color::Green);


        can.DrawBlock(290,40,50);
        can.DrawBlock(290,39,50);
        can.DrawBlock(290,38,50);
        can.DrawBlock(290,37,50);
        can.DrawBlock(290,36,50);
        can.DrawBlock(290,35,50);
        can.DrawBlock(290,34,50);
        can.DrawBlock(290,33,50);
        can.DrawBlock(290,32,50);
        can.DrawBlock(290,31,50);
        can.DrawBlock(290,30,50);
        can.DrawBlock(290,29,50);
        can.DrawBlock(290,28,50);
        can.DrawBlock(290,27,50);
        can.DrawBlock(290,26,50);
        can.DrawBlock(290,25,50);

        can.DrawBlockCircleFilled(290,10,10, Color::Green);


        
        can.DrawBlock(330,40,50);
        can.DrawBlock(330,39,50);
        can.DrawBlock(330,38,50);
        can.DrawBlock(330,37,50);
        can.DrawBlock(330,36,50);
        can.DrawBlock(330,35,50);
        can.DrawBlock(330,34,50);
        can.DrawBlock(330,33,50);
        can.DrawBlock(330,32,50);
        can.DrawBlock(330,31,50);
        can.DrawBlock(330,30,50);
        can.DrawBlock(330,29,50);
        can.DrawBlock(330,28,50);
        can.DrawBlock(330,27,50);
        can.DrawBlock(330,26,50);
        can.DrawBlock(330,25,50);

        can.DrawBlockCircleFilled(330,10,10, Color::Green);

        can.DrawBlock(330,40,50);
        can.DrawBlock(370,39,50);
        can.DrawBlock(370,38,50);
        can.DrawBlock(370,37,50);
        can.DrawBlock(370,36,50);
        can.DrawBlock(370,35,50);
        can.DrawBlock(370,34,50);
        can.DrawBlock(370,33,50);
        can.DrawBlock(370,32,50);
        can.DrawBlock(370,31,50);
        can.DrawBlock(370,30,50);
        can.DrawBlock(370,29,50);
        can.DrawBlock(370,28,50);
        can.DrawBlock(370,27,50);
        can.DrawBlock(370,26,50);
        can.DrawBlock(370,25,50);

        can.DrawBlockCircleFilled(370,10,10, Color::Green);

        can.DrawPointLine(0,80, 500, 80);
        can.DrawPointLine(0,40,500,40);

        can.DrawBlockCircle(bici, 68, 8, Color::Red);
        can.DrawBlockCircle(bici + 25, 68, 8, Color::Red);

        can.DrawPointLine(bici, 59, bici + 25, 59, Color::Red);
        can.DrawPointLine(bici + 8, 58, bici + 8, 53, Color::Red);
        can.DrawBlockLine(bici + 5, 54, bici + 10, 54);
        can.DrawPointLine(bici + 25, 58, bici + 25, 50, Color::Red);
        can.DrawPointLine(bici + 25, 50, bici + 20, 50);
        can.DrawPointLine(bici + 24, 49, bici + 19, 49);
        
        if (bici > bicilimite) {
        bici = 10; // Valor inicial para reiniciar
        }

         bici += 2;



        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Green,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.08s);
        frame++;
    }

    return 0;
}