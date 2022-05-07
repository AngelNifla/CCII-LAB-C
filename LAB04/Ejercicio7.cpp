/*
Escribe un programa, que trabajando mediante funciones,
presente un menú al usuario, mueva las columnas a la
derecha o izquierda, asimismo mueva las filas para arriba o para abajo.
*/

#include <iostream>
#include <time.h>

using namespace std;

void mostrar_matriz(int* fila1,int* fila2,int *fila3)       //Funcion para mostrar matriz.
{
    cout<<"------------------------------------\n";
    cout<<"-> Mostrando la matriz.\n";
    for (int i = 0; i < 3; i++)     //Bucle para acceder a todos los elementos de los arrays.
    {
        cout<<"\n\t";
        for (int j = 0; j < 3; j++)         //Bucle para acceder a todos los elementos de los arrays.
        {
            
            if (i==0)       //Condicional para que en cada bucle ingrese a una lista e imprima su valores.
            {
                cout<<" | "<<fila1[j];
            }else if (i==1)
            {
                cout<<" | "<<fila2[j];
            }else
            {
                cout<<" | "<<fila3[j];
            }
            
        }
        cout<<" |\n";

    }
    cout<<endl;
}

void mover_fila(int* fila1,int* fila2)      //Funcion para mover las filas de la matriz.
{
    int aux;
    for (int i = 0; i < 3; i++) //Bucle para acceder a todos los elementos del array.
    {
        aux=fila1[i];       //Se intercambia datos entre arrays, con ayuda de un auxlilar.
        fila1[i]=fila2[i];
        fila2[i]=aux;
    }    
}

void mover_columna(int* fila1,int* fila2,int* fila3,int uno, int dos)       //Funcion para mover las columnas.
{
    int aux1;
    aux1=fila1[uno];        //Aqui se intercambia los valores especificos en un mismo array, esto se hace con los tres array.
    fila1[uno]=fila1[dos];  //Asi estas moviendo columnas.
    fila1[dos]=aux1;

    aux1=fila2[uno];
    fila2[uno]=fila2[dos];
    fila2[dos]=aux1;

    aux1=fila3[uno];
    fila3[uno]=fila3[dos];
    fila3[dos]=aux1;
}

int main()      //Funcion principal.
{
    int *fila1,*fila2,*fila3;       //Punteros a int.
    fila1 = new int[3];         //Inicializamos el punteroa una memoria para array de dimesion 3     
    fila2 = new int[3];         //Inicializamos el punteroa una memoria para array de dimesion 3     
    fila3 = new int[3];         //Inicializamos el punteroa una memoria para array de dimesion 3     
    srand(time(NULL));      //Inicializamos la generacion de nueros aleatorios.Como si fuera una ruleta.(para un mejor vista a la matriz)

    for (int i = 0; i < 3; i++)     //Bucle para acceder a todos los elementos de los arrays.
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==0)   //Condicional para que en cada bucle ingrese a una lista y se agregue un numero aleatorio.
            {
                fila1[j]=rand()%(9- 1);
            }else if (i==1)
            {
                fila2[j]=rand()%(9- 1);
            }else
            {
                fila3[j]=rand()%(9- 1);
            } 
        }
          
    }
    
    int opcion=0;       //Variable para una opcion.
    int fila;           //Varibale para el numero de fila o columna que se quiere modificar.
    mostrar_matriz(fila1,fila2,fila3);
    while (opcion == 0)         //Bucle para que acceda los valores qeu se ofrecen en las opciones.
    {
        cout<<"------------------------------------\n";
        cout<<"\t1) Mover fila hacia arriba\n";
        cout<<"\t2) Mover fila hacia abajon\n";
        cout<<"\t3) Mover columna a la Izquierda\n";
        cout<<"\t4) Mover columna a la Derecha\n";
        cout<<"Eliga una opcion: ";
        cin>>opcion;
        cout<<"Ingrese el numero de fila o columna que quiere mover: ";
        cin>>fila;

        if (opcion == 1 && fila==1)         //Condionales para aquellas filas o columas que no pueden ir a mas del lado limite.
        {
            cout<<"\n------------------------------------\n";
            cout<<"-> Esa fila no puede ir para esa direccion.\n";
            opcion=0;                   //El valor de la opcion es 0, para que siga en las operaciones para elegir una opcion.
        }else if (opcion==2 && fila==3)         //Condionales para aquellas filas o columas que no pueden ir a mas del lado limite.
        {
            cout<<"\n------------------------------------\n";
            cout<<"-> Esa fila no puede ir para esa direccion.\n";
            opcion=0;                   //El valor de la opcion es 0, para que siga en las operaciones para elegir una opcion.
        }else if (opcion ==3 && fila==1)            //Condionales para aquellas filas o columas que no pueden ir a mas del lado limite.
        {
            cout<<"\n------------------------------------\n";
            cout<<"-> Esa columna no puede ir a esa direccion.\n";
            opcion=0;                   //El valor de la opcion es 0, para que siga en las operaciones para elegir una opcion.                                                                           
        }else if (opcion==4 && fila==3)         //Condionales para aquellas filas o columas que no pueden ir a mas del lado limite.
        {
            cout<<"\n------------------------------------\n";
            cout<<"-> Esa columna no puede ir a esa direccion.\n";
            opcion=0;                   //El valor de la opcion es 0, para que siga en las operaciones para elegir una opcion.   
        }else if(opcion ==1 && fila==2)             //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<1;
            mover_fila(fila1,fila2);                //las filas selecionadas hacen el cambio de datos con la funcion mover_fila()
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.
        }else if (opcion==2 && fila==1)             //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<2;
            mover_fila(fila1,fila2);                //las filas selecionadas hacen el cambio de datos con la funcion mover_fila()
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.
        }else if(opcion==1 && fila==3)              //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<3;
            mover_fila(fila2,fila3);                //las filas selecionadas hacen el cambio de datos con la funcion mover_fila()
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.
        }else if (opcion==2 && fila ==2)                //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<4; 
            mover_fila(fila2,fila3);                //las filas selecionadas hacen el cambio de datos con la funcion mover_fila()
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.
        }else if(opcion ==3 && fila==2)             //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<5;
            mover_columna(fila1,fila2,fila3,0,1);       //Al mover las columas, es mover los datos en un mismo array.
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.
        }else if (opcion==4 && fila==1)             //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<6;
            mover_columna(fila1,fila2,fila3,0,1);       //Al mover las columas, es mover los datos en un mismo array.
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.
        }else if (opcion==4 && fila==2)             //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<7;
            mover_columna(fila1,fila2,fila3,1,2);       //Al mover las columas, es mover los datos en un mismo array.
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.                                                      
        }else if (opcion ==3 && fila==3)                //Condicionales para generar el cambio especificado por el usuario
        {
            cout<<8;
            mover_columna(fila1,fila2,fila3,1,2);       //Al mover las columas, es mover los datos en un mismo array.
            mostrar_matriz(fila1,fila2,fila3);      //Al realizar cualquier cambio en la matriz se muestra el resultado del cambio.                                              
        }
    }  
    return 0;
}