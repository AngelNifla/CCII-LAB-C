/*
Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.
*/

#include <iostream>

template<class T,class R>       //Declaracion de la plantilla.
void correo(T nombre, R apellido)       //función que toma dos valores genéricos de tipo char y string
{
    std::string direccion{"@unsa.edu.pe"};
    std::cout<<"-> Su correo es: "<<nombre<<apellido<<direccion<<std::endl;
}

int main()          //Funcion principal.
{
    char nombre;
    std::string apellido;

    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingrese primera letra de su nombre: ";
        std::cin>>nombre;
        std::cout<<"Ingrese apellidos: ";
        std::cin>>apellido;
        correo(nombre,apellido);
    }
}