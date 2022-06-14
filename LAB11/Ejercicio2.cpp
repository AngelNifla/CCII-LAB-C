/*/////////////////////////////////ENUNCIADO/////////////////////////////////

Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Pila.
*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Pila.h"       //Se utiliza codigo del archivo especificado.

int main()      //Funcion Principal.
{
    Pila P1{};      //Se crea un objeto pila.
    int size{};     //Variable para el numero de elementos a ingresr a la pila
    std::cout<<"Ingrese el numero de elementos a ingresar: ";
    std::cin>>size;      //Se ingresa el valor.
    P1.insert_nodo_size(size);      //Se inserta los datos a la pila.

    size = 1;
    while (size == 1)       //Bucle para operaciones.
    {
        std::cout<<"\n---------------------------------\n";
        std::cout<<"\n\t(1) Eliminar elemento.\n\t(2) Mostrar Pila.\n\t(3) Salir.\nIngrese opcion:";
        std::cin>>size;
        if (size == 1)          //Se elemina un elemento de la pila.
        {
            P1.pop();
            std::cout<<"-> Elemento de pila eliminado.";
        }else if (size == 2)            //Se muestra la pila.
        {
            P1.mostrar_Pila();  
            std::cout<<"-> Pila mostrada.";
        }else if (size == 3)
        {
            break;
        }
        size = 1;
    }
    return 0;
}

/*/////////////////////////////////EJECUCION/////////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB11> .\\a
Ingrese el numero de elementos a ingresar: 3
Ingrese valor 1: 1
Ingrese valor 2: 2
Ingrese valor 3: 3

---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:2
1-> 2-> 3-> vacio(FIN)
-> Pila mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:1
-> Elemento de pila eliminado.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:2
1-> 2-> vacio(FIN)
-> Pila mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:1
-> Elemento de pila eliminado.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:2
1-> vacio(FIN)
-> Pila mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:1
-> Elemento de pila eliminado.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:2
-> La pila esta vacia.
-> Pila mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:3
PS E:\C++\2022\CCII-LAB-C\LAB11> 

*/