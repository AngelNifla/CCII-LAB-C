#include <iostream>

using namespace std;

int potencia(int base,int exponente)    //funcion para realizar la potencia
{
    int respuesta=base; //nuvea variable respuesta, primera asignacion entonces se quita un ciclo al bucle
    
    for (int i = 1; i < exponente; i++) //bucle para multiplicar la base segun el exponente
    {
        respuesta=respuesta*base;
    }
    return respuesta;   //retorna la respuesta
}


int main()      //funcion principal
{
    int base, exponente;    //variables para la base y el exponente

    cout<<"Ingrese los siguientes datos para un Potencia\n";
    cout<<"Ingrese la base :  ";    //se ingresa la base

    cin>>base;
    cout<<"Ingrese el exponente :  ";
    cin>>exponente;     //se ingresa el exponente

    cout<<"-> Respuesta :  "<<potencia(base,exponente); //retorna la respuesta de la funcion

    return 0;
}



