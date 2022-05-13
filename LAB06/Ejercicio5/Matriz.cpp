#include "Matriz.h"             //Se incluye el codigo del archivo especificado.
#include <iostream>
#include <time.h>       

Matriz::Matriz()        //Constructor.
{
    srand(time(NULL));          //Inicializamos la generacion de nueros aleatorios.Como si fuera una ruleta.
    for (int i = 0; i < 3; i++)         //Bucle para acceder a cada fila de la matriz.
    {
        for (int j = 0; j < 3; j++)         //Bucle para acceder a cada valor de la matriz.
        {
            matriz[i][j]=rand()%(9-1);      //se agrega un nuevo valor aleatorio a la matriz, como si pararamos la ruleta.
        }
    }
}

void Matriz::busqueda()     //Funcion para buscar un valor en la matriz.
{
    std::cout<<"-------------------------------------\n\n";
    int dato;       //Variable para el dato.
    std::cout<<"Ingrese el dato a buscar entre 1-9: ";
    std::cin>>dato;     //Se ingresa valor en la variable dato.
    int cont{0};        //Variable para contar los datos existentes en la matriz.
    for (int i = 0; i < 3; i++) //Bucle para acceder a cada fila de la matriz.
    {
        for (int j = 0; j < 3; j++)     //Bucle para acceder a cada valor de la matriz.
        {
            if (matriz[i][j]==dato)     //Si un valor de la matriz es igual al dato
            {
                std::cout<<"-> El dato esta en la columna "<<j+1<<  //Se imprime la fila y la columna donde se encuentra el valor y
                " y la fila "<<i+1<<std::endl;
                cont=cont+1;        //Se suma 1 al contador.
            }
            
        }
    }
    if (cont==0)        //Al final, si el contador es 0, entonces no el valor no existe en la matriz y
    {
        std::cout<<"-> El dato no existe\n";        //Se informa.
    }
}

void Matriz::mostrar_matriz()       //Funcion para mostrar los datos de la matriz.
{
    std::cout<<"-------------------------------------\n\n";
    for (int i = 0; i < 3; i++)//Bucle para acceder a cada fila de la matriz.
    {
        std::cout<<"\t";
        for (int j = 0; j < 3; j++)//Bucle para acceder a cada valor de la matriz.
        {
            std::cout<<matriz[i][j]<<" ";       //Se imprime lso valores de la matriz.
        }
        std::cout<<"\n";
    }
}

Matriz::~Matriz()       //Destructor.
{
}