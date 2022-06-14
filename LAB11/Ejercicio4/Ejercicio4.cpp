/*/////////////////////////////////ENUNCIADO/////////////////////////////////
Escribir un programa que dé la solución al problema de las Torres de Hanoi para
N discos, utilizando pilas, las cuales representen cada uno de los postes:
*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Hanobi.h"         //Se utiliza codigo del archivo especificado.

int main()      //Funcion Principal.
{
    int discos{};       //Variable para el numero de discos.
    std::cout<<"\nIngrese el numero de discos a resolver en las torres Hanobi: ";
    std::cin>>discos;        //Se ingresa valor.
    Hanobi H{discos};       //Se crea el objeto Hanobi.
    H.resolviendo();        //Se pide hallar el resultado.

    return 0;
}

/*/////////////////////////////////EJECUCION/////////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB11\Ejercicio4> .\\a

Ingrese el numero de discos a resolver en las torres Hanobi: 5
---------------------------------------------------
-> Creando e insertando discos en la torre origen...

TORRE ORIGEN:   5-> 4-> 3-> 2-> 1-> vacio(FIN)

        TORRE AUXILIAR: -> La pila esta vacia.

                TORRE DESTINO:  -> La pila esta vacia.

---------------------------------------------------
-> Cambiando discos de Torre Origen a Auxiliar...

TORRE ORIGEN:   -> La pila esta vacia.

        TORRE AUXILIAR: 1-> 2-> 3-> 4-> 5-> vacio(FIN)

                TORRE DESTINO:  -> La pila esta vacia.

---------------------------------------------------
-> Cambiando discos de Torre Auxiliar a Destino...

TORRE ORIGEN:   -> La pila esta vacia.

        TORRE AUXILIAR: -> La pila esta vacia.

                TORRE DESTINO:  5-> 4-> 3-> 2-> 1-> vacio(FIN)

---------------------------------------------------
-> HANOBI RESUELTO.
---------------------------------------------------
PS E:\C++\2022\CCII-LAB-C\LAB11\Ejercicio4>

*/