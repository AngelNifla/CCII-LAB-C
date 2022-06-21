/*//////////////////////////ENUNCIADO/////////////////////////////
Implemente un programa que maneje un arreglo de estructuras que
solicite el nombre, edad y talla de 10 jugadores, debe mostrar
por pantalla los que son menores de 20 años y tienen una talla
mayor a 1,70 mts de altura.
*/

/*//////////////////////////CODIGO/////////////////////////////*/

#include <iostream>             //Se incluye la libreria especificada.
#include <vector>               //Se incluye la libreria especificada.
#include <string.h>               //Se incluye la libreria especificada.

struct Jugador       //Struct Jugador.
{
    std::string name;       //Atributo para el nombre.
    int edad;        //Atributo para la edad.
    double talla;        //Atributo para la talla.
};


int main()          //Funcion principal.
{
    std::vector<Jugador> Array;          //Vector de structuras.

    std::string name{};                 //Variable para el nombre.
    int edad{};             //Variables para la edad.
    double talla{};             //Variables para la talla.
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"Ingrese Datos del Jugador "<<i+1<<":"<<std::endl;     //Se ingresa los datos.
        std::cout<<"\tNombre: ";
        std::getline(std::cin,name);
        std::cout<<"\tEdad: ";
        std::cin>>edad;
        std::cout<<"\tTalla: ";
        std::cin>>talla;
        std::cin.ignore();      //Se descarta el salto de linea.

        Array.push_back(Jugador{name,edad,talla});     //Se ingresa al vector.
    }

    std::cout<<"-> "<<"Jugadores menores de 20 years y con talla mayor a 1,70 mts de altura:\n";
    for (int i = 0; i < 10; i++)       //Se muestra los datos.
    {
        if (Array[i].edad < 20 && Array[i].talla > 1.70)     //Si se verifica.
        {
            std::cout<<"-> "<<Array[i].name<<"\n";
        }
    }
    return 0;
}

/*//////////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB13> .\\a
Ingrese Datos del Jugador 1:
        Nombre: Alex Roque
        Edad: 19
        Talla: 1.8
Ingrese Datos del Jugador 2:
        Nombre: Ronal Quispe
        Edad: 21
        Talla: 1.71
Ingrese Datos del Jugador 3:
        Nombre: Pedro Dias
        Edad: 22
        Talla: 1.9
Ingrese Datos del Jugador 4:
        Nombre: Jose Sancez
        Edad: 18
        Talla: 1.9
Ingrese Datos del Jugador 5:
        Nombre: Angel Nifla
        Edad: 21
        Talla: 1.75
Ingrese Datos del Jugador 6:
        Nombre: Eden Tito
        Edad: 23
        Talla: 1.8
Ingrese Datos del Jugador 7:
        Nombre: Jorge Diaz
        Edad: 24
        Talla: 1.65
Ingrese Datos del Jugador 8:
        Nombre: Arnol Perez
        Edad: 20
        Talla: 1.95
Ingrese Datos del Jugador 9:
        Nombre: Erick Hualla
        Edad: 21
        Talla: 1.7
Ingrese Datos del Jugador 10:
        Nombre: Elias Ellis
        Edad: 18
        Talla: 1.75
-> Jugadores menores de 20 years y con talla mayor a 1,70 mts de altura:
-> Alex Roque
-> Jose Sancez
-> Elias Ellis
PS E:\C++\2022\CCII-LAB-C\LAB13>

*/