#include "Array.h"      //Se incluye el codigo del archivo especificado.
#include <iostream>

Array::Array()      //Constructor.
{
    for (int i = 0; i < 5; i++)     //Bucle para acceder a todos los espacios de array y
    {
        array[i]=NULL;      //inicializarlos con NULL.
    }
    espacios_ocupados=0;    //Al igual que el nuemro de posiciones a 0.
}

void Array::llenar_datos()      //Funcion para llenar datos.
{
    std::cout<<"-------------------------------------\n\n";
    if (espacios_ocupados<5)        //Si los espacios ocuapdos son menores a 5
    {
        for (int i = 0; i < 5; i++)     //Se accede a cada valor del array,
        {
            if (array[i]==NULL)     //y Si un espacio del array esta vacio
            {
                std::cout<<"Ingrese el dato: ";
                std::cin>>array[i];     //Se agrega un valro a ese esapcio,
                espacios_ocupados++;        //se aumenta la variable de los espacios ocupados en 1
                std::cout<<"-> Operacion Exitosa\n";
                break;      //y se corta el bucle.
            }
        }    
    }else       //Si no, 
    {
        std::cout<<"\n-> Los 5 espacios del array estan llenos.\n";     //Se entiedne que no se puede agregar mas valores al array y se informa.
    } 
}

void Array::quitar_datos()      //Funcion que quita valores del array.
{
    std::cout<<"-------------------------------------\n\n";
    if (espacios_ocupados!=0)       //Si la varaible de los espacios ocupados es diferente de cero
    {
        int pos{0};     //Variable para la posicion,
        std::cout<<"Que valor quiere quitar(posicion): ";
        std::cin>>pos;      //Se ingresa la posiicona  eliminar,
        array[pos-1]=NULL;      //Se vacia el valor de la posicion del array
        espacios_ocupados--;        //y se resat uno al nuemro de espacios ocupados.
        std::cout<<"-> Operacion Exitosa\n";    
    }else       //Si no,
    {
        std::cout<<"\n-> El array no tiene elementos que se puedan retirar.\n";     //Se entiedne que no se puede quitar valores del array y se informa.
    } 
}

void Array::mostrar_array()     //Funcion que muestra el array y sus valores.
{
    std::cout<<"-------------------------------------\n\n";
    for (int i = 0; i < 5; i++)     //Bucle para estudiar cada esapcio del array.
    {
        std::cout<<array[i]<<" ";       //Se imprime cada valor.
    }
    std::cout<<"\n";
    
}

Array::~Array()     //Destructor.
{
}