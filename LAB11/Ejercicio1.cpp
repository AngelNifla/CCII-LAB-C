/*/////////////////////////////////ENUNCIADO/////////////////////////////////
Defina una Pila que permita insertar elementos utilizando clases.
*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Pila.h"   //Se utiliza codigo del archivo especificado.

int main()              //Funcion Principal.
{
    Pila P1{};      //Se crea un objeto pila.
    int size{};     //Variable para el numero de elementos a ingresr a la pila
    std::cout<<"Ingrese el numero de elementos a ingresar: ";
    std::cin>>size;      //Se ingresa el valor.
    P1.insert_nodo_size(size);      //Se inserta los datos a la pila.
    P1.mostrar_Pila();      //Se muestra la pila..
    std::cout<<"-> Pila mostrada.";

    return 0;
}

/*/////////////////////////////////EJECUCION/////////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB11> .\\a
Ingrese el numero de elementos a ingresar: 5
Ingrese valor 1: 9
Ingrese valor 2: 8
Ingrese valor 3: 5
Ingrese valor 4: 2
Ingrese valor 5: 1
9-> 8-> 5-> 2-> 1-> vacio(FIN)
-> Pila mostrada.
PS E:\C++\2022\CCII-LAB-C\LAB11>

*/