/*
Implementar un programa con clases que haga la búsqueda
de un dato almacenado en una matriz de 3x3 que tiene los
números de 1 al 9 ingresados aleatoriamente y debe indicar
la posición donde se encuentra el dato.
*/

#include "Matriz.h"     //Se incluye el codigo del archivo especificado.
#include <iostream>

int main()          //Funcion principal.
{
    Matriz M1;              //Objeto MATRIZ.
    int opcion{NULL};               //Variable para la opcion.
    while (opcion==NULL )               //Si la variable opcion esta con NULL se seguira pediendo las opciones.
    {
        std::cout<<"-------------------------------------\n\n";
        std::cout<<"Elija una opcion:\n";
        std::cout<<"\t1) Buscar un dato en la matriz.\n";
        std::cout<<"\t2) Mostrar matriz.\n";
        std::cout<<"\t3) Salir.\n\n";
        std::cout<<"Ingrese el numero de la opcion: ";
        std::cin>>opcion;               //Se ingresa la opcion.
        std::cout<<"\n\n";
        
        if (opcion==1)              //Si la opcion es igual a 1
        {
            M1.busqueda();              //Se llama a la funcion ofertada
            opcion=NULL;                //y la variable opcion se le pone NULL para seguir en el bucle. 
        }else if(opcion==2)             //Si la opcion es igual a 2
        {
            M1.mostrar_matriz();                //Se llama a la funcion ofertada
            opcion=NULL;                //y la variable opcion se le pone NULL para seguir en el bucle. 
        }else if (opcion==3)                //Si la opcion es igual a 3
        {
            break;              //Se corta la el bucle para terminar la ejecucion.
        }else               //Si no, se entiende que se ingreso una opcion incorrecta o inexistente,
        {
            opcion=NULL;                //la variable opcion se le pone NULL para seguir en el bucle y
            std::cout<<"-------------------------------------\n\n";
            std::cout<<"-> Opcion invalida\n";              //Se informa.
        }   
    }
    return 0;
}