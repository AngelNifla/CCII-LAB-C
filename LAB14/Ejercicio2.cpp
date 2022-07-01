/*/////////////////////ENUNCIADO///////////////////////
Dar de baja a un producto. (No hay stock).
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
        "3) Dar de Baja.\n\t4)Salir.\n\t: Ingrese opcion: ";
        std::cin>>opcion;       //Se ingresa la opcion.
        while (opcion<1 && opcion>4)        //Bucle para ingresar una opcion valida.
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
        }else if (opcion == 3)           //Para la opcion 3.
        {
            D.Dar_baja_producto();
        }else           //Para la opcion 4.
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
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 1
Ingresar dato: 1548
Ingresar dato: 15
Ingresar dato: 10
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 2
Ingresar dato: 1549
Ingresar dato: 16
Ingresar dato: 1
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 3

        Ingrese el codigo del producto a dar de baja:1

-> Producto dado de baja.
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 2

Codigo -> Nombre -> Precio -> Stock
1       1548    15      9
2       1549    16      1
0       0       0       0

----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 3

        Ingrese el codigo del producto a dar de baja:2

-> Producto dado de baja.
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 2

Codigo -> Nombre -> Precio -> Stock
1       1548    15      9
2       1549    16      0
0       0       0       0

----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 3

        Ingrese el codigo del producto a dar de baja:2 


-> Producto agotado. No se puede dar de baja.
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4)Salir.
        : Ingrese opcion: 4
PS E:\C++\2022\CCII-LAB-C\LAB14>

*/