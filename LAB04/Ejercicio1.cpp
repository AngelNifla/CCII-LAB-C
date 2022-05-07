/*
Escribir un programa donde se pueda ingresar los datos de tres personas,
como el nombre, apellido, edad y DNI y luego lo muestre por pantalla.
*/

#include <iostream>

using namespace std;

void llenar_datos(int personas, int datos,string matriz[][4])   //Funcion para llenar los datos
{
    for (int i = 0; i < personas; i++)  //Bucle para obtener el espacio de las personas.
    {
        cout<<"Ingrese datos de la persona numero "<<i+1<<":\n";
        for (int j = 0; j < datos; j++)     //Bucle para obtener los datos de cada persona.
        {

            if (j==0)
            {
                cout<<"\tIngrese el nombre de la persona: ";    //Se ingresa el nombre.
                getline(cin,matriz[i][j]);
            }else if (j==1)
            {
                cout<<"\tIngrese el apellido de la persona: ";  //Se ingresa el apellido.
                getline(cin,matriz[i][j]);
            }else if (j==2)
            {
                cout<<"\tIngrese la edad de la persona: ";      //Se ingresa la edad.
                getline(cin,matriz[i][j]);
            }else
            {
                cout<<"\tIngrese el DNI de la persona: ";       //Se ingresa el DNI.
                getline(cin,matriz[i][j]);
            }     
        }  
    }
}

void mostrar(int personas, int datos,string matriz[][4])    //Funcion para mostrar datos.
{
    cout<<"\n\tNombres  ->Apellidos  ->Edad  ->DNI"<<":\n\n";
    for (int i = 0; i < personas; i++)      //Bucle para obtener el espacio de las personas.
    {
        cout<<"\t";
        for (int j = 0; j < datos; j++)     //Bucle para obtener los datos de cada persona.
        {
            cout<<matriz[i][j]<<"  ->";       //Se imprime cada valor.
        }
        cout<<"\n";
    }
}

int main()  //Funcion principal.
{
    const int numero_personas= 3, numero_datos = 4;

    string matriz[numero_personas][numero_datos];   //Se crea una matriz.

    llenar_datos(numero_personas,numero_datos,matriz);      //Llamamos a la funcion llenar datos.
    mostrar(numero_personas,numero_datos,matriz);           //Llamamos a la funcion mostrar datos.

    return 0;
}