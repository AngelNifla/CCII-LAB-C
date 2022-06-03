/*
Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.
    int ArrayEntero [5] = {10,7,2, 8, 6};
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
*/

#include <iostream>

template<class T>          //Definicion de la plantilla.
T minimo_array(T array[], int size)
{
    T minimo{array[0]};

    for (int i = 0; i < size; i++)
    {
        if (array[i] <= minimo)
        {
            minimo = array[i];
        } 
    }

    return minimo;  
}

template<class T>          //Definicion de la plantilla.
T maximo_array(T array[], int size)
{
    T maximo{array[0]};

    for (int i = 0; i < size; i++)
    {
        if (array[i] >= maximo)
        {
            maximo = array[i];
        } 
    }

    return maximo; 
}

int main()
{
    int ArrayEntero [5] = {10,7,2, 8, 6};
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};

    std::cout<<"El valor minimo de ArrayEntero es : "<<minimo_array(ArrayEntero,5)<<"\n";
    std::cout<<"El valor maximo de ArrayEntero es : "<<maximo_array(ArrayEntero,5)<<"\n";
    std::cout<<"El valor minimo de ArrayFloat es : "<<minimo_array(ArrayFloat,5)<<"\n";
    std::cout<<"El valor maximo de ArrayFloat es : "<<maximo_array(ArrayFloat,5)<<"\n";

    return 0;
}