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
    auto can = Canvas(50,50);//Creas un lienzo de tamaño 50x50
    can.DrawPointCircle(10,10,10);//Se le pide dibujar 
    auto ColorSupport = vbox({//Vbox es caja vertical
                            Terminal::ColorSupport() >= Terminal::Color::Palette16//
                                ? text(" 16 color palette support : Yes")//Es una forma de escribir if (linea 19,20)
                                : text(" 16 color palette support : No"),
                            Terminal::ColorSupport() >= Terminal::Color::Palette256
                                ? text("256 color palette support : Yes")
                                : text("256 color palette support : No"),
                            Terminal::ColorSupport() >= Terminal::Color::TrueColor
                                ? text("       True color support : Yes")
                                : text("       True color support : No"),
                        });
    while (true)
    {
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element personaje = spinner(21, frame);
        Element lienzo = bgcolor(Color::Green, border(vbox(ColorSupport,personaje,canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}