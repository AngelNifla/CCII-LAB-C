/*
Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
*/

#include <iostream>

using namespace std;

int primos(int maximo,int* array)     //funcio que agrega al array los x primeros numeros primos
{
    int size_array=0;
    cout<<"-> Se agregaron primeros numeros primos entre 1-100:\n";
    for (int i = 1; i <= maximo; i++) //bucle para elegir un numero h
    {
        int cont=0; //variable para contar los divisores en cada ciclo del bucle
        for (int j = 1; j <= i; j++)    //bucle para estudiar el numero de divisores de h
        {
            if(i%j==0)      //Si el numero es divisible con uno de sus numeros predecesores
            {
                cont=cont+1;        //El contador aumenta en 1.
            }
        }
        if (cont==2)    //si h tiene solo 2 divisores, es primo y 
        {
            array[size_array]=i;    //Se agrga al array.
            //cout<<i<<"   ";
            size_array++;
        }      
    }
    return size_array;      //Devuelve el tamañp del array.
}

void mostrar(int size,int *array)   //Funcion que muestra la lista.
{
    for (int i = size-1; i >= 0; i--) //Bucle que obtiene todos los datos del array.
    {
        if(array[i]!=0)    //Si el valor de la lista seleccionada es diferente de 0,
        {
            cout<<array[i]<<" ";        //se imprime cada valor.
        }else       //Si no,
        {
            break;      //Se detiene el bucle.
        }
    }
}

int main()
{
    int maximo=100; // variable para el maximo de numero primos.
    int *array_primo;   //Puntero int.

    array_primo = new int[maximo]; //Inicaializamos el puntero en un array.

    maximo=primos(maximo,array_primo); //llamamos a la funcion para obtener los numeros primos que se agregaron a la lista y lo agregamos en la varibale de maximo.
    
    cout<<"Mostrando datos del array:\n";
    mostrar(maximo,array_primo);       //Mostramos la lista en forma descendente.

    return 0;
}