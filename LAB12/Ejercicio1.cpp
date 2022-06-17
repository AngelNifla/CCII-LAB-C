/*/////////////////////////////////ENUNCIADO/////////////////////////////////

Defina una Cola que permita insertar elementos utilizando clases.

*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Cola.h"           //Se utiliza codigo del archivo especificado.

int main()              //Funcion principal.
{
    Cola C1{};      //Se crea un objeto Cola.
    int size{};     //Variable para el numero de elementos a ingresr a la Cola
    std::cout<<"Ingrese el numero de elementos a ingresar: ";
    std::cin>>size;      //Se ingresa el valor.
    C1.push(size);         //Se inserta un dato a la Cola.
    std::cout<<"-> Se inserto un elemento a la Cola con el valor de size = "<<size<<".\n";
    std::cout<<"Se ingresa los "<<size<<" valores a la cola:\n";
    C1.insert_nodo_size(size);      //Se inserta datos en cinjunto a la Cola.
    C1.mostrar_Cola();      //Se muestra la Cola..
    std::cout<<"-> Cola mostrada.";
    
    return 0;
}


/*/////////////////////////////////EJECUCION/////////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB12> .\\a
Ingrese el numero de elementos a ingresar: 5
-> Se inserto un elemento a la Cola con el valor de size =5.
Se ingresa los 5 valores a la cola:
Ingrese valor 1: 4
Ingrese valor 2: 1
Ingrese valor 3: 2
Ingrese valor 4: 3
Ingrese valor 5: 0
5-> 4-> 1-> 2-> 3-> 0-> vacio(FIN)
-> Cola mostrada.
PS E:\C++\2022\CCII-LAB-C\LAB12>

*/