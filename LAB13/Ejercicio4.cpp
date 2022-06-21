/*//////////////////////////ENUNCIADO/////////////////////////////
Implemente un programa que maneje un arreglo de estructuras que
solicite nombre, sexo y sueldo de los empleados de una empresa
y debe mostrar por pantalla el menor y mayor sueldo.
*/

/*//////////////////////////CODIGO/////////////////////////////*/

#include <iostream>             //Se incluye la libreria especificada.
#include <vector>               //Se incluye la libreria especificada.
#include <string.h>               //Se incluye la libreria especificada.

struct Empleado       //Struct Empleado.
{
    std::string name;       //Atributo para el nombre.
    char sexo;        //Atributo para el sexo.
    double sueldo;        //Atributo para el sueldo.
};


int main()          //Funcion principal.
{
    std::vector<Empleado> Array;          //Vector de structuras.
    int num_Empleados{};         //Variables para el numero de empleados.

    std::cout<<"Ingrese numero de Empleados:  ";
    std::cin>>num_Empleados;      //Se ingresa el numero de Empleados.
    std::cin.ignore();      //Se descarta el salto de linea.

    std::string name{};                 //Variable para el nombre.
    char sexo{};                    //Variable para el sexo.
    double sueldo{};             //Variables para el sueldo.
    for (int i = 0; i < num_Empleados; i++)
    {
        std::cout<<"Ingrese Datos del Empleado "<<i+1<<":"<<std::endl;     //Se ingresa los datos.
        std::cout<<"\tNombre: ";
        std::getline(std::cin,name);
        std::cout<<"\tSexo: ";
        std::cin>>sexo;
        std::cout<<"\tSueldo: ";
        std::cin>>sueldo;
        std::cin.ignore();      //Se descarta el salto de linea.

        Array.push_back(Empleado{name,sexo,sueldo});     //Se ingresa al vector.
    }

    double aux_min{Array[0].sueldo}, aux_may{aux_min};      //Variable auxiliar para guardar el amyor o menor sueldo.
    int min{0},may{0};              //Variable para guardar el iterador.
    for (int i = 0; i < num_Empleados; i++)       //Se verifica el menor y mayor sueldo.
    {
        if (Array[i].sueldo < aux_min)     //Si coincide.
        {
            min = i;
            aux_min = Array[i].sueldo;
        }else if (Array[i].sueldo > aux_may)     //Si coincide.
        {
            may = i;
            aux_may = Array[i].sueldo;
        }
    }

    std::cout<<"-> "<<"El mayor sueldo es de "<<Array[may].name<<" con "<<Array[may].sueldo<<"\n";          //Se muestra el mayor sueldo.
    std::cout<<"-> "<<"El menor sueldo es de "<<Array[min].name<<" con "<<Array[min].sueldo<<"\n";          //Se muestra el menor sueldo.

    return 0;
}

/*//////////////////////////EJECUCION/////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB13> .\\a
Ingrese numero de Empleados:  3
Ingrese Datos del Empleado 1:
        Nombre: Alex Perez
        Sexo: M
        Sueldo: 1500.0
Ingrese Datos del Empleado 2:
        Nombre: Paola Suarez
        Sexo: F
        Sueldo: 2100.50
Ingrese Datos del Empleado 3:
        Nombre: Erick Perez
        Sexo: M
        Sueldo: 999.99
-> El mayor sueldo es de Paola Suarez con 2100.5        
-> El menor sueldo es de Erick Perez con 999.99       
PS E:\C++\2022\CCII-LAB-C\LAB13>

*/