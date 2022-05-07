/*
Escribe un programa que pida nueve números enteros y los almacene
en una matriz 3x3. Calcula la suma de los números de cada fila y
mostrar por pantalla el número de fila con mayor suma.
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];       //Array de 5*3.
    int suma_fila=0,aux=0;        //Variable para la suma de filas pares y un axiliar.

    cout<<"Ingrese valores al array 3x3:\n\n";
    for (int i = 0; i < 3; i++)     //Bucle para obtener los datos de cada fila del array.
    {
        cout<<"-> Ingrese valores para la fila numero "<<i+1<<":\n";
        for (int j = 0; j < 3; j++) //Bucle para obtener los datos de cada columna del array.
        {
            cout<<"\tValor "<<j+1<<": ";
            cin>>matriz[i][j];      //Se ingresa valor para cada dato del array.
            suma_fila=suma_fila + matriz[i][j];
        }
        if (suma_fila>aux)     //Si la suma de la primera fila es mayor que aux, 
        {
            aux=suma_fila;     //esa suma se guarda en aux y
            suma_fila=0;        //la la variable de la suma se vuelve cero.
        }else   //Si no,
        {
            suma_fila=0;        //la la variable de la suma se vuelve cero.
        }
    }

    cout<<"\nMostrando matriz 3*3:\n";
    for (int i = 0; i < 3; i++)     //Bucle para obtener los datos de cada fila del array.
    {
        cout<<"\t";
        for (int j = 0; j < 3; j++)     //Bucle para obtener los datos de cada columna del array.
        {
            cout<<matriz[i][j]<<" ";        //Se imprime los datos fila por fila.
        }
        cout<<endl;
    }

    cout<<"-> La sumamayor de las filas es :"<<aux<<"\n";    //Se imprime la suma mayor de las filas.
    
    return 0;
}