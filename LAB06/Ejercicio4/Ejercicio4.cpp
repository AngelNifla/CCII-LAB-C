/*
Implemente una aplicación con clases donde una clase
contiene un arreglo en el que se pueden almacenar
como máximo 5 datos.
- Debe tener un nuevo dato para
    almacenarlo, debe existir un método que verifique
    que el arreglo tenga espacio disponible para guardar
    el dato. En caso contrario se debe mostrar un mensaje
    indicando que el arreglo está lleno.
- Asimismo, debe tener un método para retirar un dato del arreglo,
    este método debe verificar que, si haya algo para
    sacar del arreglo, es decir que el arreglo no vaya
    a estar vacío, en cuyo caso debe desplegar un mensaje
    diciendo que no hay nada para sacar de arreglo.
*/

#include "Array.h"              //Se incluye el codigo del archivo especificado.
#include <iostream>

int main()              //Funcion principal.
{
    Array A1;               //Se declara un objeto Array.
    int opcion{NULL};               //Variable para almacenar una opcion.
    while (opcion==NULL )               //Si la opcion es null el bulce seguira ofreciendo opciones.
    {
        std::cout<<"-------------------------------------\n\n";
        std::cout<<"Elija una opcion:\n";
        std::cout<<"\t1) Insertar un dato al array.\n";
        std::cout<<"\t2) Quitar un dato del array.\n";
        std::cout<<"\t3) Mostrar datos del array.\n";
        std::cout<<"\t4) Salir.\n\n";
        std::cout<<"Ingrese el numero de la opcion: ";
        std::cin>>opcion;               //Se ingresa la opcion.
        std::cout<<"\n\n";
        
        if (opcion==1)              //Si la opcion es igual a 1
        {
            A1.llenar_datos();              //Se llama a al funcion ofertada.
            opcion=NULL;                //Y la variable opcion se vuelve null, para seguir en las opciones.
        }else if (opcion==2)                //Si la opcion es igual a 2
        {
            A1.quitar_datos();              //Se llama a al funcion ofertada.
            opcion=NULL;                //Y la variable opcion se vuelve null, para seguir en las opciones.
        }else if (opcion==3)                //Si la opcion es igual a 3
        {
            A1.mostrar_array();             //Se llama a al funcion ofertada.
            opcion=NULL;                //Y la variable opcion se vuelve null, para seguir en las opciones.
        }else if (opcion==4)                //Si la opcion es igual a 4
        {
            break;              //Se corta el bucle, para terminar la ejecucion.
        }else               //Si no, 
        {
            opcion=NULL;
            std::cout<<"-------------------------------------\n\n";
            std::cout<<"-> Opcion invalida\n";              //Se entiende que se ingreso una opcion invalida o no existente.
        }   
    }
    
    return 0;
}