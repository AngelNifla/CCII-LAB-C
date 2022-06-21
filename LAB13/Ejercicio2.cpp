/*//////////////////////////ENUNCIADO/////////////////////////////
Implementar un programa que maneje un arreglo de estructuras que
calcule la nota final del Ciencia de la Computación. El programa
debe permitir el ingreso de cualquier cantidad de alumnos y para
cada alumno, se podrá ingresar nombre, grupo, nota de la primera
fase, segunda fase, tercera fase y proyecto final. El porcentaje
de cada ítem es 15%, 20%, 25% y 40% respectivamente.
*/

/*//////////////////////////CODIGO/////////////////////////////*/

#include <iostream>             //Se incluye la libreria especificada.
#include <vector>               //Se incluye la libreria especificada.
#include <string>               //Se incluye la libreria especificada.

struct Alumno       //Struct Alumno.
{
    std::string name;       //Atributo para el nombre.
    char grupo;          //Atributo para el grupo.
    double nota1;        //Atributo para nota1.
    double nota2;        //Atributo para nota2.
    double nota3;       //Atributo para nota3.
    double proyecto;       //Atributo para proyecto.
};

int main()          //Funcion principal.
{
    std::vector<Alumno> Compa;          //Vector de structuras.
    int num_alumnos{},mes_actual{};         //Variables para los datos.

    std::cout<<"Ingrese numero de alumnos:  ";
    std::cin>>num_alumnos;      //Se ingresa el numero de alumnos.
    std::cin.ignore();      //Se descarta el salto de linea.

    std::string name{};                 //Variable para el nombre.
    int nota1{},nota2{},nota3{},proyecto{};     //Variables para los datos.
    char grupo{};             //Variable para el grupo.
    for (int i = 0; i < num_alumnos; i++)
    {
        std::cout<<"Ingrese Datos del Alumno "<<i+1<<":\n";     //Se ingresa los datos.
        std::cout<<"\tNombre: ";
        std::getline(std::cin,name);
        std::cout<<"\tGrupo: ";
        std::cin>>grupo;
        std::cout<<"\tNota 1: ";
        std::cin>>nota1;
        std::cout<<"\tNota 2: ";
        std::cin>>nota2;
        std::cout<<"\tNota 3: ";
        std::cin>>nota3;
        std::cout<<"\tNota Proyecto: ";
        std::cin>>proyecto;
        std::cin.ignore();      //Se descarta el salto de linea.

        Compa.push_back(Alumno{name,grupo,((double)nota1*3/20),
        ((double)nota2/5),((double)nota3/4),((double)proyecto*4/10)});//Se ingresa al vector.
    }


    for (int i = 0; i < num_alumnos; i++)       //Se muestra los datos.
    {
        std::cout<<"-> "<<Compa[i].name<<" tiene una nota final de: "
        << Compa[i].nota1+Compa[i].nota2+Compa[i].nota3+Compa[i].proyecto<<"\n";
    }
    return 0;
}

/*//////////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB13> .\\a
Ingrese numero de alumnos:  3
Ingrese Datos del Alumno 1:
        Nombre: Alex Roque 
        Grupo: A 
        Nota 1: 15
        Nota 2: 14
        Nota 3: 10
        Nota Proyecto: 11
Ingrese Datos del Alumno 2:
        Nombre: Paola Jimenez
        Grupo: B
        Nota 1: 11
        Nota 2: 18
        Nota 3: 16
        Nota Proyecto: 11
Ingrese Datos del Alumno 3:
        Nombre: Susana Pino
        Grupo: B
        Nota 1: 14
        Nota 2: 18
        Nota 3: 12
        Nota Proyecto: 11
-> Alex Roque tiene una nota final de: 11.95
-> Paola Jimenez tiene una nota final de: 13.65
-> Susana Pino tiene una nota final de: 13.1
PS E:\C++\2022\CCII-LAB-C\LAB13>

*/