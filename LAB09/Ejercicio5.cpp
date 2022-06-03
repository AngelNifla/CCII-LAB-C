/*
Realizar la implementación de un programa que haga uso de plantillas, para
elaborar una función que permita ordenar ascendentemente y descendentemente
los elementos de un arreglo de valores enteros y otro arreglo de valores flotantes.
Las funciones deben recibir como parámetros, un puntero al tipo de elemento
dado, y dos enteros que indican los índices del primero y último elemento.
    int ArrayEntero [5] = {5,7,2,8,6,1,3,4,9};
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
*/

#include <iostream>

template<class T>       //Declarando la plantilla.
void array_ascendente(T *array, int ind_primer,int ind_ultimo)      //Funcion para ordenar el array ascendentemente.
{
    T aux{0};

    for (int i = ind_primer-1; i < ind_ultimo; i++)
    {
        for (int j = i+1; j < ind_ultimo; j++)
        {
            if (array[j]<=array[i])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            } 
        }  
    }
    std::cout<<"-> Array ordenado Ascendentemente...\n";
}

template<class T>       //Declarando la plantilla.
void array_descendente(T *array, int ind_primer,int ind_ultimo)     //Funcion para ordenar el array descendentemente.
{
    T aux{0};

    for (int i = ind_primer-1; i < ind_ultimo; i++)
    {
        for (int j = i+1; j < ind_ultimo; j++)
        {
            if (array[j]>=array[i])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            } 
        }  
    }
    std::cout<<"-> Array ordenado Descendentemente...\n";
}

template<class T>       //Declarando la plantilla.
void imprimir(T *array, int ind_primer,int ind_ultimo)      //Funcion que imprime los valores del array.
{
    std::cout<<"-> Imprimiendo Array.\n\t";
    for (int i = ind_primer-1; i < ind_ultimo; i++)
    {
        std::cout<<array[i]<<", ";
    }
    std::cout<<std::endl;
}

int main()      //Funcion principal.
{
    int ArrayEntero [9] = {5,7,2,8,6,1,3,4,9};      //Array de numeros enteros.
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};     //Array de numeros flotantes.

    std::cout<<"----ARRAY DE ENTEROS----\n";
    imprimir(ArrayEntero,1,9);      //Usamos la misma funcion para imprimir el array.
    array_ascendente(ArrayEntero,1,9);      //Usamos la misma funcion para ordenar el array.
    imprimir(ArrayEntero,1,9);      //Usamos la misma funcion para imprimir el array.
    array_descendente(ArrayEntero,1,9);     //Usamos la misma funcion para ordenar el array.
    imprimir(ArrayEntero,1,9);      //Usamos la misma funcion para imprimir el array.

    std::cout<<"\n\n";

    std::cout<<"----ARRAY DE FLOTANTES----\n";
    imprimir(ArrayFloat,1,5);       //Usamos la misma funcion para imprimir el array.
    array_ascendente(ArrayFloat,1,5);       //Usamos la misma funcion para ordenar el array.
    imprimir(ArrayFloat,1,5);       //Usamos la misma funcion para imprimir el array.
    array_descendente(ArrayFloat,1,5);      //Usamos la misma funcion para ordenar el array.
    imprimir(ArrayFloat,1,5);       //Usamos la misma funcion para imprimir el array.

    return 0;
}