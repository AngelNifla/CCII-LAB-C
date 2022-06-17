/*/////////////////////////////////ENUNCIADO/////////////////////////////////

Implemente un algoritmo para buscar elementos de la Cola.

*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Cola.h"           //Se utiliza codigo del archivo especificado.

int main()              //Funcion principal.
{
    Cola C1{};          //Se crea un objeto Cola.
    int size{};     //Variable para el numero de elementos a ingresr a la Cola
    std::cout<<"Ingrese el numero de elementos a ingresar: ";
    std::cin>>size;          //Se ingresa el valor.
    C1.insert_nodo_size(size);      //Se inserta los datos a la Cola.

    size = 1;
    while (size == 1)       //Bucle para operaciones.
    {
        std::cout<<"\n---------------------------------\n";
        std::cout<<"\n\t(1) Buscar elemento.\n\t(2) Mostrar Cola.\n\t(3) Salir.\nIngrese opcion:";
        std::cin>>size;
        if (size == 1)      //Se busca un elemento.
        {
            C1.buscar();
            C1.mostrar_Cola();
            std::cout<<"-> Cola mostrada.";
        }else if (size == 2)        //Se  muestra la Cola
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
Ingrese el numero de elementos a ingresar: 5
Ingrese valor 1: 9
Ingrese valor 2: 4
Ingrese valor 3: 8
Ingrese valor 4: 6
Ingrese valor 5: 2


        (1) Buscar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:2
9-> 4-> 8-> 6-> 2-> vacio(FIN)
-> Cola mostrada.
---------------------------------

        (1) Buscar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:1
Ingrese el elemento a buscar: 8
-> Elemento encontrado.
8-> 6-> 2-> vacio(FIN)
-> Cola mostrada.
---------------------------------

        (1) Buscar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:1
Ingrese el elemento a buscar: 7
-> Elemento no encontrado.
8-> 6-> 2-> vacio(FIN)
-> Cola mostrada.
---------------------------------

        (1) Buscar elemento.
        (2) Mostrar Cola.
        (3) Salir.
Ingrese opcion:3
PS E:\C++\2022\CCII-LAB-C\LAB12>

*/