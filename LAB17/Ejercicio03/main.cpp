/*//////////////ENUNCIADO//////////////////
Analice y describa el siguiente comportamiento
*/

/*//////////////CODIGO//////////////////*/

#include <iostream>

template<class T>           //Template
class Contenedor            //Clase Contenedor generico
{
    T elemento;
public:
    Contenedor(T arg)       //Constructor.
    {
        elemento = arg;
    }
    T add(){return ++elemento;} //Funcion para aumentar en 1 al valor generico.
};

template<>                  //Template
class Contenedor<char>          //Clase Contenedor especificamente para el tipo de dato char.
{
    char elemento;
public:
    Contenedor(char arg)            //Constructor.
    {
        elemento = arg;
    }
    char uppercarse()       //Funcion para convetir una letra del abecedario minuscula a mayuscula.
    {
        if ((elemento >= 'a') && (elemento <= 'z'))
        {
            elemento += 'A'-'a';
            return elemento;
        }
    }
};

int main()      //Funcion Principal.
{
    Contenedor<int> cint (5);       //Objeto Contenedor tipo int.
    Contenedor<char> cchar('t');    //Objeto Contenedor tipo char.
    std::cout<<cint.add()<<std::endl;   //Objeto Contenedor tipo int accede a la funcion add().
    std::cout<<cchar.uppercarse()<<std::endl;       //Objeto Contenedor tipo char ya no puede acceder a la funcion add(), solo a uppercarse().
    return 0;
}

/*//////////////EJECUCION//////////////////

PS E:\C++\2022\CCII-LAB-C\LAB17\Ejercicio03> .\\a
6
T
PS E:\C++\2022\CCII-LAB-C\LAB17\Ejercicio03>

*/