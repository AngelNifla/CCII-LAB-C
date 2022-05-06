/*          OTRA FORMA SE HACER EL EJRECICIO 3 - SIN CALSES
Construya una lista enlazada simple utilizando solo punteros. 
Añada las funciones de insertar y eliminar un elemento. 
En la función insertar se debe asegurar que los números insertados
estén en orden creciente. Simule el proceso con 10000 números aleatorios
sin que el programa falle.
*/
#include <iostream>
#include <time.h>   //libreria 

using namespace std;


void mostrar(int size,int* lista)   //Funcion para mostrar la lista.
{
    for (int i = 0; i < size; i++)  //bucle para acceder a cada dato de la lista.
    {
        cout<<lista[i]<<" ";     //Se imprime dato a dato.
    }
    cout<<endl;
}

void insertar(int size, int* lista) //Funcion para insertar datos.Como párametros pide el tamaño, y un puntero a la lista
{
    int auxiliar;   //Variable auxiliar: nos mostrara el mayor numero aleatorio que se le asigna a la lista
    int num_aleatorio;  //Variable para el numero aleatorio;

    for (int i = 0; i < size; i++)  //bucle para acceder a cada espacio de la lista.
    {
        num_aleatorio = rand()%(100 - 1);   // se obyiene el numero aleatorio en cada ciclo del bucle.
        //cout<<"-> "<<num_aleatorio<<endl;//IMPRIME LOS NUMEROS ALEATORIOS DESORDENADOS PARA PROBAR.
        if (num_aleatorio >= auxiliar || auxiliar ==NULL)//Si el numero aleatorio generado es mayor que el mayor numero actual
        {
           lista[i]=num_aleatorio;  //se le agrega secuencialmente
           auxiliar=num_aleatorio;  //y la variable auxiliar almacena ese valor por ser el mayor de la lista.
            
        }else   //En caso contrario
        {
            for (int j = 0; j < i; j++)//Bucle para acceder a la lista hasta la posicion del 1er bucle
            {

                if (num_aleatorio < lista[j])   //si el numero aleatorio es menor a un dato de los numeros de la lista
                {
                    auxiliar=lista[j];  //en el auxiliar ingresamos el valor del ciclo actual,
                    lista[j]=num_aleatorio; //  el valor actual lo cambiamos por el numero aleatorio
                    num_aleatorio=auxiliar; // y el la variable del numero aleatorio colocamos el valor actual del ciclo.
                }
                
            }
            lista[i]=num_aleatorio; //Para al final colocarlo ese numero aleatorio continua con la asignacion secuencial
            auxiliar=num_aleatorio; //y el auxiliar quedara con el numero mayor de la lista.
        }    
    } 
    mostrar(size,lista);    //Como referencia, para ver que funciona imprimimos la lista.
}

void eliminar(int size, int* lista) //Funcion para eliminar datos aleatorios.Como párametros pide el tamaño, y un puntero a la lista
{
    int auxiliar;   //Variable auxialiar: nos mostrara el numero de ciclo del bucle.
    int num_aleatorio;  //Variable para el numero aleatorio;

    for (int i = 0; i < size; i++)  //bucle para acceder a cada espacio de la lista.
    {
        num_aleatorio = rand()%(100- 1);    // se obtiene el numero aleatorio en cada ciclo del bucle.
        //cout<<"-> "<<num_aleatorio<<endl;//IMPRIME LOS NUMEROS AL ALEATORIOS DESORDENADOS PARA PROBAR
        if (lista[i]==num_aleatorio)    //Si el valor actual del ciclo es igual al numero aleatorio
        {
            auxiliar=i;     //el auxiliar almacena el numero del ciclo del dato parecido.
            for (int j = i+1; j < size; j++)    //Bucle para acceder a datos desde el ciclo actual+1.
            {
                lista[auxiliar]=lista[j];   //Asi borramos el dato e iremos intecambiando los siguientes secuencialmente.
                auxiliar++;     //el valor del ciclo aumenta, para acceder a los siguientes datos.
            }
            size--;     //Disminuimos en 1 el tamaño de la lista, porque eliminamos un dato.
            i=-1;   //Disminuimos el contador del bucle.
        }
    }
    mostrar(size,lista);    //E imprimimos la lista restante despues de eliminar numeros aleatorios, para verificar.
}

int main()  //Funcion principal.
{
    int *lista; //  Puntero para reservar espacio de memoria.
    int size_lista=100; //   variable para el tamaño de la lista o los numeros a insertar.
    srand(time(NULL));  //Inicializa el generador de números aleatorios,como si fuera una ruleta.

    lista = new int[size_lista];    //creamos la lista en la memoria reservada.
    cout<<"---------------------------------------------------------\n\n";
    cout << "-> Agregando "<<size_lista<<" numeros aleatorios a la lista..." << endl;
    cout << "Lista Completada:\n->  ";
    insertar(size_lista,lista);     //llamamos a la funcion insertar.
    cout<<"---------------------------------------------------------\n\n";
    cout << "Eliminando otros "<<size_lista<<" numeros aleatorios que sean iguales en la lista..." << endl;
    cout << "Nueva lista:\n->  ";
    eliminar(size_lista,lista);     //llamamos a la funcion eliminar.
    cout<<"---------------------------------------------------------\n";

    return 0;
}