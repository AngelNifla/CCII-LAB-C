/*/////////////////////////////////ENUNCIADO/////////////////////////////////

Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Cola.

*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Cola.h"               //Se utiliza codigo del archivo especificado.

int main()          //Funcion principal.
{
    Cola C1{};      //Se crea un objeto Cola.
    int size{};     //Variable para el numero de elementos a ingresar a la Cola
    std::cout<<"Ingrese el numero de elementos a ingresar: ";
    std::cin>>size;      //Se ingresa el valor.
    C1.insert_nodo_size(size);      //Se inserta los datos a la Cola.

    size = 1;
    while (size == 1)       //Bucle para operaciones.
    {
        std::cout<<"\n---------------------------------\n";
        std::cout<<"\n\t(1) Eliminar elemento.\n\t(2) Mostrar Cola.\n\t(3) Salir.\nIngrese opcion:";
        std::cin>>size;
        if (size == 1)          //Se elemina un elemento de la Cola.
        {
            C1.pop();
            std::cout<<"-> Elemento de Cola eliminado.";
        }else if (size == 2)            //Se muestra la Cola.
        {
            C1.mostrar_Cola();  
            std::cout<<"-> Cola mostrada.";
        }else if (size == 3)
        {
            break;
        }
        size = 1;
    }
    return 0;
}


/*/////////////////////////////////EJECUCION/////////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB12> .\\a
Ingrese el numero de elementos a ingresar: 3
Ingrese valor 1: 5
Ingrese valor 2: 2
Ingrese valor 3: 1

---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:2
5-> 2-> 1-> vacio(FIN)
-> Cola mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:1
-> Elemento de Cola eliminado.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:2
2-> 1-> vacio(FIN)
-> Cola mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:1 
-> Elemento de Cola eliminado.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:2
1-> vacio(FIN)
-> Cola mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:1
-> Elemento de Cola eliminado.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:2
-> La Cola esta vacia.
-> Cola mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:1
-> [error]...La Cola esta vacia.
-> Elemento de Cola eliminado.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:2
-> La Cola esta vacia.
-> Cola mostrada.
---------------------------------

        (1) Eliminar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:3
PS E:\C++\2022\CCII-LAB-C\LAB12>

*/