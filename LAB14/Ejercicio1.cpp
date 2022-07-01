/*/////////////////////ENUNCIADO///////////////////////
Dar de alta un producto nuevo.
*/

/*/////////////////////CODIGO///////////////////////*/
#include "Datos.h"      //Se incluye codigo del archivo especificado.

int main()      //Funcion Principal.
{
    int filas{};            //Variable para las filas.
    std::cout<<"Ingrese el numero de filas: ";
    std::cin>>filas;        //Se ingresa el numero de filas.
    Datos D(filas);         //Se crea el objeto Datos.
    int opcion{0};          //Variable para las opciones.

    while (1)       //Bucle para el proceso.
    {
        std::cout<<"\nEliga una opcion.\n"<<
        "\t1) Dar de alta un nuevo Producto.\n\t2) Mostrar datos.\n\t"<<
        "3) Salir.\n\t: Ingrese opcion: ";
        std::cin>>opcion;       //Se ingresa la opcion.
        while (opcion<1 && opcion>3)        //Bucle para ingresar una opcion valida.
        {
            std::cout<<"\n-> Ingrese una opcion valida: ";
            std::cin>>opcion;
        }
        if (opcion == 1)            //Para la opcion 1.
        {
            D.Dar_alta_producto();
        }else if (opcion == 2)          //Para la opcion 2.
        {
            D.mostrar_producto_s(2,0);
        }else           //Para la opcion 3.
        {
            break;
        }
        std::cout<<"----------------------------------";
    }
    
    return 0;
}

/*/////////////////////EJECUCION///////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB14> .\\a
Ingrese el numero de filas: 3

Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Salir.
        : Ingrese opcion: 2

Codigo -> Nombre -> Precio -> Stock
0       0       0       0
0       0       0       0
0       0       0       0

----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 01
Ingresar dato: 1545
Ingresar dato: 12
Ingresar dato: 5
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 02
Ingresar dato: 1546
Ingresar dato: 45
Ingresar dato: 9
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 03
Ingresar dato: 1578
Ingresar dato: 26
Ingresar dato: 15
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Salir.
        : Ingrese opcion: 2

Codigo -> Nombre -> Precio -> Stock
1       1545    12      5
2       1546    45      9
3       1578    26      15

----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Salir.
        : Ingrese opcion: 1

-> Lista llena.
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Salir.
        : Ingrese opcion: 3
PS E:\C++\2022\CCII-LAB-C\LAB14>

*/