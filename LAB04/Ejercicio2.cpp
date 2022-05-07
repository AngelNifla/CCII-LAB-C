/*
    Hacer un array unidimensional que acepte ocho números enteros.
    Luego le pregunte al usuario que ingrese un número a buscar,
    implementar una función que busque ese número, si lo encuentra,
    debe retornar un valor de verdaderos, en caso contrario, retornar falso.
*/

#include <iostream>
#include <time.h>

using namespace std;

bool buscar(int valor,int size,int *array)      //Funcion que debuelve un true o false a la busqueda.
{
    for (int i = 0; i < size; i++)  //Bucle que obtiene todos los datos del array.
    {
        if(array[i]==valor)     //Si el valor es igual a uno de los valores del array
        {
            return true;        //se devuelve tru.
        }
        
    }
    return false;       //Si no, se devuelve false.
    
}

void mostrar(int size,int *array)   //Funcion que muestra la lista.
{
    for (int i = 0; i <  size; i++) //Bucle que obtiene todos los datos del array.
    {
        cout<<array[i]<<" ";        //Imprime cada valor.
    }
}

int main()  //Funcion principal.
{
    int *array;         //Puntero a un int.
    int valor;          //Variable para el valor que se ingresara.
    string respuesta="falso";           // la respuesta en string.
    array = new int[8];     //Inicializamos el array en el puntero.
    srand(time(NULL));      //Inicializamos la generacion de nueros aleatorios.Como si fuera una ruleta.

    for (int i = 0; i < 8; i++)     //Bucle que obtiene todos los datos del array.
    {
        array[i] = rand()%(10- 1);      //se agrega un nuero array a cada parte de la lista.
    }
    
    cout<<"Ingrese el numero a buscar: ";
    cin>>valor;     //Ingresamos el valor a buscar.
    if (buscar(valor,8,array))      //Si el valor se encuentra en el array.
    {
        respuesta="verdadero";      //Se devuelve verdarero.
    }
    cout<<"-> resultado : "<<respuesta<<endl;       //Se muestra la respuesta.
    cout<<"Mostrando datos del array:\n";
    mostrar(8,array);       //Para probar la respuesta mostramos la lista.

    delete[] array;     //eliminamos la memoria inicializada del puntero
    return 0;
}