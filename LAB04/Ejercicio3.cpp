/*
Hacer un array 5x3 que acepte números enteros ingresados por el usuario.
Al final, debe mostrar la suma de todos los números que estén en una fila par.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[5][3];       //Array de 5*3.
    int suma_fila_par=0;        //Variable para la suma de filas pares.

    cout<<"Ingrese valores al array 5x3:\n\n";
    for (int i = 0; i < 5; i++)     //Bucle para obtener los datos de cada fila del array.
    {
        cout<<"-> Ingrese valores para la fila numero "<<i+1<<":\n";
        for (int j = 0; j < 3; j++) //Bucle para obtener los datos de cada columna del array.
        {
            cout<<"\tValor "<<j+1<<": ";
            cin>>matriz[i][j];      //Se ingresa valor para cada dato del array.
            if ((i+1)%2==0)     //Si el ciclo del bulce esta en una fila par , 
            {
                suma_fila_par=suma_fila_par + matriz[i][j];     //los datos de esas filas se suman en la variable.
            }
        }   
    }

    cout<<"\nMostrando array 5*3:\n";
    for (int i = 0; i < 5; i++)     //Bucle para obtener los datos de cada fila del array.
    {
        cout<<"\t";
        for (int j = 0; j < 3; j++)     //Bucle para obtener los datos de cada columna del array.
        {
            cout<<matriz[i][j]<<" ";        //Se imprime los datos fila por fila.
        }
        cout<<endl;
    }

    cout<<"-> La suma de las filas pares es :"<<suma_fila_par<<"\n";    //Se imprime la suma total de las filas pares.
    
    return 0;
}