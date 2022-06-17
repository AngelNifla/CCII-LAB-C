/*/////////////////////////////////ENUNCIADO/////////////////////////////////

Escribir un programa que permita comparar las edades de diferentes elementos.
Debe utilizar el formato de colas en clases. Se debe definir· inicialmente el
número de elementos y valores de cada cola (pudiendo ser de diferentes tamaños
ej. 2-3). Se evaluará el resultado de la comparación de los primeros elementos de
las colas, realizada en un número de iteraciones 'n', en cada iteración se debe
realizar el procedimiento de inserción y eliminación de elementos (rotando los
elementos definidos inicialmente).

*/

/*/////////////////////////////////CODIGO/////////////////////////////////*/

#include "Cola.h"           //Se utiliza codigo del archivo especificado.

void comparacion_por_iteraciones(int num_iteraciones)       ///Funcion que itera las colas y devuelve la comparacion de edades.
{
    Cola cola_1{},cola_2{};         //Se crean ambas colas.
    int size{};
    std::cout<<"Ingrese numero de valores para la Primera cola: ";
    std::cin>>size;                     //Se ingresa el tamaño de la cola 1.
    cola_1.insert_nodo_size(size);                      //Se ingresa valores a las colas.
    std::cout<<"Ingrese numero de valores para la Segunda cola: ";
    std::cin>>size;                     //Se ingresa el tamaño de la cola 2.
    cola_2.insert_nodo_size(size);          //Se ingresa valores a las colas.
    std::cout<<"\nCola 1:\n";
    cola_1.mostrar_Cola();              //Se muestran la cola inicial 1.
    std::cout<<"Cola 2:\n";
    cola_2.mostrar_Cola();              //Se muestran la cola inicial 2.
    std::cout<<"\n";

    int aux{};
    for (int i = 0; i < num_iteraciones; i++)           //Se hace las iteraciones.
    {
        aux = cola_1.get_begin();
        cola_1.pop();
        cola_1.push(aux);

        aux = cola_2.get_begin();
        cola_2.pop();
        cola_2.push(aux);
    }

    std::cout<<"Resultado de Colas con las iteraciones:\n";
    std::cout<<"\nCola 1:\n";
    cola_1.mostrar_Cola();          //Se muestra el esatdo de la cola 1 despues de las iteraciones. 
    std::cout<<"Cola 2:\n";
    cola_2.mostrar_Cola();          //Se muestra el esatdo de la cola 2 despues de las iteraciones. 
    std::cout<<"\n";

    int val1{cola_1.get_begin()};           //Se almacena el valor inicial de cada cola. 
    int val2{cola_2.get_begin()};           //Se almacena el valor inicial de cada cola. 
    std::cout<<"Comparacion de edades en la iteracion numero "<<
    num_iteraciones<<" es:\n";
    if (val1 == val2)                       //Se hace la comparacion y se manda la respuesta.
    {
        std::cout<<"-> Cola 1 con valor: "<<val1<<
        ", es IGUAL a, Cola 2 con valor: "<<val2;
    }else if (val1 > val2)
    {
        std::cout<<"-> Cola 1 con valor: "<<val1<<
        ", es MAYOR que, Cola 2 con valor: "<<val2;
    }else
    {
        std::cout<<"-> Cola 2 con valor: "<<val2<<
        ", es MAYOR que, Cola 1 con valor: "<<val1;
    }
}

int main()          //Funcion principal.
{
    int num_iteraciones{};
    std::cout<<"Ingrese numero de iteraciones: ";
    std::cin>>num_iteraciones;          //Se ingresa el numero de iteraciones para las colas.
    comparacion_por_iteraciones(num_iteraciones);           //Se llama a la funcion que hara las iteraciones.
    return 0;
}


/*/////////////////////////////////EJECUCION/////////////////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB12> .\\a
Ingrese numero de iteraciones: 5
Ingrese numero de valores para la Primera cola: 4
Ingrese valor 1: 1
Ingrese valor 2: 2
Ingrese valor 3: 3
Ingrese valor 4: 4
Ingrese numero de valores para la Segunda cola: 5
Ingrese valor 1: 9
Ingrese valor 2: 8
Ingrese valor 3: 7
Ingrese valor 4: 1
Ingrese valor 5: 2

1-> 2-> 3-> 4-> vacio(FIN)
Cola 2:
9-> 8-> 7-> 1-> 2-> vacio(FIN)

Resultado de Colas con las iteraciones:

Cola 1:
2-> 3-> 4-> 1-> vacio(FIN)
Cola 2:
9-> 8-> 7-> 1-> 2-> vacio(FIN)

Comparacion de edades en la iteracion numero 5 es:
-> Cola 2 con valor: 9, es MAYOR que, Cola 1 con valor: 2
PS E:\C++\2022\CCII-LAB-C\LAB12> .\\a
Ingrese numero de iteraciones: 10
Ingrese numero de valores para la Primera cola: 3
Ingrese valor 1: 15
Ingrese valor 2: 17
Ingrese valor 3: 14
Ingrese numero de valores para la Segunda cola: 5
Ingrese valor 1: 1
Ingrese valor 2: 15
Ingrese valor 3: 8
Ingrese valor 4: 17
Ingrese valor 5: 9

Cola 1:
15-> 17-> 14-> vacio(FIN)
Cola 2:
1-> 15-> 8-> 17-> 9-> vacio(FIN)

Resultado de Colas con las iteraciones:

Cola 1:
17-> 14-> 15-> vacio(FIN)
Cola 2:
1-> 15-> 8-> 17-> 9-> vacio(FIN)

Comparacion de edades en la iteracion numero 10 es:
-> Cola 1 con valor: 17, es MAYOR que, Cola 2 con valor: 1
PS E:\C++\2022\CCII-LAB-C\LAB12>

*/