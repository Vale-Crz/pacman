#include<iostream>
#include<TazoDorado.hpp>
using namespace std;


int main(int arg, char const *argv[]){
//A este bloque se le puede llamar memoria estatica, ya que practicamente desde un inicio se
//dice al programa cuanto va a usar de memoria 
//     int entero = 0;
//     bool booleano = true;
//     char letra = 'A';
//     float decimal = 0.5;

//     cout<<"Tamaño Entero: " << sizeof(entero) << endl;
//     cout<<"Tamaño Entero: " << sizeof(booleano) << endl;
//     cout<<"Tamaño Entero: " << sizeof( letra) << endl;
//     cout<<"Tamaño Entero: " << sizeof(decimal) << endl;
//     cout<<"Tazo Dorado: " << sizeof(TazoDorado) << endl;


//     TazoDorado tazo1;
//     TazoDorado tazo2;
    
//     cout<<"Direccion Tazo 1: " << &tazo1 << endl;
//     cout<<"Direccion Tazo 2: " << &tazo2 << endl;//Al ejecutar el programa cambia la direccion en la que se guarda 

//     TazoDorado tazo[20];
//     for (size_t i=0; i< 20; i++)
//     {
//         cout << "Direccion de Tazo Dorado" << i << "" << &tazo[i] << endl;
//     }


//Variale, estamos hablando de implementación
 TazoDorado* direccion; //La memoria liberada va a ser de un bait
  cout<<"Direccion de direccion: " << &direccion << endl;
  direccion = (TazoDorado*)malloc(sizeof(TazoDorado));//Acumulacion de elementos
  cout<<"Direccion Dinamica : " <<direccion + 1 << endl;

  direccion->Inicializar();
  cout<<"Valor en direccion:"<<direccion->Flotando<< endl;

///C++-----------------------------------------------------------------------------
TazoDorado *direccion2;
direccion2 = new TazoDorado();
 cout<<"Valor en direccion:"<<direccion2->Flotando<< endl;


     return 0;
    
}

