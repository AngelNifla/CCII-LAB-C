/*
Desarrolle un algoritmo de ordenamiento que permita ordenar los elementos de
forma ascendente y descendente de acuerdo a la elección del usuario. Se debe poder
simular el ingreso de 10 mil elementos de forma aleatoria y ordenarlos en el menor
tiempo posible ( < 2 seg).
*/

#include "Lista.h"
#include <ctime>
//#include <cstdlib>
//#include <time.h>

unsigned t0, t1;

// Code to execute

 


int main()
{
    Lista L1;   //Se crea una lista.
    int opcion{1};
    int size{};       //Variable para el tamaño de la lista.
    int numero_aleatorio{};       //Variable para el numero aleatorio a generar.

    cout<<"---------------------------------------------------------\n";
    cout <<"Lista Inicial\n";
    L1.mostrar_lista();   //Mostramos la lista inicial.
    cout<<"---------------------------------------------------------\n";

    cout<<"1)AGREGAR VALORES ALEATORIOS Y ORDENARLOS EN FORMA CRECIENTE.\n";
    cout<<"2)AGREGAR VALORES ALEATORIOS Y ORDENARLOS EN FORMA DECRECIENTE.\n";
    cout<<"3)MOSTRAR LISTA.\n";
    cout<<"\nIngrese una opcion: ";
    cin>>opcion;
    if (opcion == 1)
    {
        cout<<"Ingresa la dimension de la lista de numeros aleatorios: ";
        cin>>size;          //Ingresamos el tamaño para la lista.
        while (size==NULL || size<1)    //Mientras el tamaño de la lista este vacia o sea negativa
        {
            cout << "\n-> Ingrese un numero positivo para el tamaño de la lista: ";
            cin>>size;      //se ingresara un nuevo valor.
        }

        cout<<"---------------------------------------------------------\n";
        cout << "-> Agregando "<<size<<" numeros aleatorios a la lista..." << endl;

        t0=clock();

        srand(time(NULL));      //Inicializamos el generador de numeros aleatorios, como si se empezara a girar una ruleta.
        for (int i = 0; i < size; i++)      //Bucle para agregar nodo a la lista conforme al tamaño ingresado.
        {
            numero_aleatorio = rand()%(100 - 1);    //En cada ciclo generamos un numero aleatorio, como si detuvieramos la ruleta,
            L1.insertar_nodo_creciente(numero_aleatorio);     //y insertamos ese numero en un nodo de la lista.
        }
        t1 = clock();
        cout << "Lista Completada.\n ";
        cout<<"---------------------------------------------------------\n";
        double time = (double(t1-t0)/CLOCKS_PER_SEC);
        cout << "Execution Time: " << time << endl;
        cout<<"---------------------------------------------------------\n";
    }else if (opcion == 2)
    {
        cout<<"Ingresa la dimension de la lista de numeros aleatorios: ";
        cin>>size;          //Ingresamos el tamaño para la lista.
        while (size==NULL || size<1)    //Mientras el tamaño de la lista este vacia o sea negativa
        {
            cout << "\n-> Ingrese un numero positivo para el tamaño de la lista: ";
            cin>>size;      //se ingresara un nuevo valor.
        }

        cout<<"---------------------------------------------------------\n";
        cout << "-> Agregando "<<size<<" numeros aleatorios a la lista..." << endl;

        t0=clock();

        srand(time(NULL));      //Inicializamos el generador de numeros aleatorios, como si se empezara a girar una ruleta.
        for (int i = 0; i < size; i++)      //Bucle para agregar nodo a la lista conforme al tamaño ingresado.
        {
            numero_aleatorio = rand()%(100 - 1);    //En cada ciclo generamos un numero aleatorio, como si detuvieramos la ruleta,
            L1.insertar_nodo_decreciente(numero_aleatorio);     //y insertamos ese numero en un nodo de la lista.
        }
        t1 = clock();
        cout << "Lista Completada.\n ";
        cout<<"---------------------------------------------------------\n";
        double time = (double(t1-t0)/CLOCKS_PER_SEC);
        cout << "Execution Time: " << time << endl;
        cout<<"---------------------------------------------------------\n";
    }else if (opcion ==3)
    {
        L1.mostrar_lista();     //Al ingresar todos los numeros en nodos a la lista, mostramos la lista.
    }          
    return 0;
}