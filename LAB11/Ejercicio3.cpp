/*/////////////////////////////////ENUNCIADO/////////////////////////////////
Implemente un algoritmo para buscar elementos de la Pila
*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Pila.h"           //Se utiliza codigo del archivo especificado.

int main()      //Funcion principal.
{
    Pila P1{};          //Se crea un objeto pila.
    int size{};     //Variable para el numero de elementos a ingresr a la pila
    std::cout<<"Ingrese el numero de elementos a ingresar: ";
    std::cin>>size;          //Se ingresa el valor.
    P1.insert_nodo_size(size);      //Se inserta los datos a la pila.

    size = 1;
    while (size == 1)       //Bucle para operaciones.
    {
        std::cout<<"\n---------------------------------\n";
        std::cout<<"\n\t(1) Buscar elemento.\n\t(2) Mostrar Pila.\n\t(3) Salir.\nIngrese opcion:";
        std::cin>>size;
        if (size == 1)      //Se busca un elemento.
        {
            P1.buscar();
            P1.mostrar_Pila();
            std::cout<<"-> Pila mostrada.";
            break;
        }else if (size == 2)        //Se  muestra la pila
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
Ingrese el numero de elementos a ingresar: 5
Ingrese valor 1: 5
Ingrese valor 2: 4
Ingrese valor 3: 8
Ingrese valor 4: 9
Ingrese valor 5: 6

---------------------------------

        (1) Buscar elemento.
        (2) Mostrar Pila.
        (3) Salir.
Ingrese opcion:1
Ingrese el elemnto a buscar: 4
-> Elemento encontrado.
5-> 4-> vacio(FIN)
-> Pila mostrada.
PS E:\C++\2022\CCII-LAB-C\LAB11>

*/