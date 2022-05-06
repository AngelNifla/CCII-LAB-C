/*
Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá de
asignar memoria a cada vector. Calcule el producto punto de vectores y muestre por pantalla.
Una vez finalizado este proceso, retire la memoria asignada a los punteros. Repita este 
proceso de asignación y retiro de memoria dentro de un for de 1 000 000 veces.
*/

#include <iostream>
#include <time.h>   //libreria 

using namespace std;

int main()
{
    float *a1, *a2; //Punteros para los vectores.
    srand(time(NULL));  //Inicializa el generador de números aleatoriosl,como si fuera una ruleta.

    for (int k = 0; k < 1000000; k++)   //proceso que se repetira 1,000,000 de veces.
    {
        a1 = new float[2];  //en el puntero 1 se establece memoria para el vetor segun el tamaño.
        a2 = new float[2];  //en el puntero 2 se establece memoria para el vetor segun el tamaño.

        for (int i = 0; i < 2; i++) //Bucle para agregar valores a los vectores.
        {
            //Al contenedor de cada espacio de los vectores se le agrega un numero aleatorio diferente
            a1[i] = rand()%(1000- 1)*0.1;   //rand(): la ruleta(un decir) se detiene y el numero seleccionado es almacenado
            a2[i] = rand()%(1000- 1)*0.1;
        }

        cout<<"El producto punto de los vectores es:\n";
        for (int i = 0; i < 2; i++) //de cada vector los valores se multiplican por punto.
        {
            cout<<"-> "<<a1[i]*a2[i]<<endl; //el producto punto se imprime.
        }
        
        //Se retira o elimina la memoria establecida en lso punteros.
        delete[] a1;
        delete[] a2;
    }

    return 0;
}