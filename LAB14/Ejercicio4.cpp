/*/////////////////////ENUNCIADO///////////////////////
Modificar el nombre, precio o cantidad de un producto dado.
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
        "3) Dar de Baja.\n\t4) Buscar producto.\n\t5) Mdificar Producto.\n\t6) Salir.\n\t: Ingrese opcion: ";
        std::cin>>opcion;       //Se ingresa la opcion.
        while (opcion<1 && opcion>6)        //Bucle para ingresar una opcion valida.
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
        }else if (opcion == 4)          //Para la opcion 4.
        {
            std::cout<<"\n---------------Buscando Producto----------------------\n";
            std::cout<<"\nEliga una opcion.\n"<<
            "\t1) Buscar por nombre.\n\t2) BUscar por codigo.\n\t3)Regresar.\n\t: Ingrese opcion: ";
            std::cin>>opcion;
            while (opcion<1 && opcion>3)        //Bucle para ingresar una opcion valida.
            {
                std::cout<<"\n-> Ingrese una opcion valida: ";
                std::cin>>opcion;
            }
            if (opcion != 3)
            {
                D.buscar_producto(opcion);
            }else{}
        }else if (opcion == 5)          //Para la opcion 5.
        {
            std::cout<<"\n---------------Modificando Producto----------------------\n";
            std::cout<<"\nEliga una opcion.\n"<<
            "\t1) Modificar nombre.\n\t2) Modificar Precio.\n\t3) Modificar Stock.\n\t4) Regresar.\n\t: Ingrese opcion: ";
            std::cin>>opcion;
            while (opcion<1 && opcion>4)        //Bucle para ingresar una opcion valida.
            {
                std::cout<<"\n-> Ingrese una opcion valida: ";
                std::cin>>opcion;
            }
            if (opcion != 4)
            {
                D.modificar_producto(opcion);
            }else{}
        }
         else           //Para la opcion 6.
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
        4) Buscar producto.
        5) Mdificar Producto.
        6) Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 1
Ingresar dato: 1584
Ingresar dato: 16
Ingresar dato: 2
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5) Mdificar Producto.
        6) Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 2
Ingresar dato: 1549
Ingresar dato: 10
Ingresar dato: 3
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5) Mdificar Producto.
        6) Salir.
        : Ingrese opcion: 2

Codigo -> Nombre -> Precio -> Stock
1       1584    16      2
2       1549    10      3
0       0       0       0

----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5) Mdificar Producto.
        6) Salir.
        : Ingrese opcion: 5

---------------Modificando Producto----------------------

Eliga una opcion.
        1) Modificar nombre.
        2) Modificar Precio.
        3) Modificar Stock.
        4) Regresar.
        : Ingrese opcion: 3

        Ingrese el codigo del producto a modificar:1

        Ingrese el nuevo valor:6
-> Producto modificado.

Codigo -> Nombre -> Precio -> Stock
1       1584    16      6
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5) Mdificar Producto.
        6) Salir.
        : Ingrese opcion: 5

---------------Modificando Producto----------------------

Eliga una opcion.
        1) Modificar nombre.
        2) Modificar Precio.
        3) Modificar Stock.
        4) Regresar.
        : Ingrese opcion: 2

        Ingrese el codigo del producto a modificar:2

        Ingrese el nuevo valor:15
-> Producto modificado.

Codigo -> Nombre -> Precio -> Stock
2       1549    15      3
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5) Mdificar Producto.
        6) Salir.
        : Ingrese opcion: 4

---------------Modificando Producto----------------------

Eliga una opcion.
        1) Modificar nombre.
        2) Modificar Precio.
        3) Modificar Stock.
        4) Regresar.
        : Ingrese opcion: 1

        Ingrese el codigo del producto a modificar:2

        Ingrese el nuevo valor:1550
-> Producto modificado.

Codigo -> Nombre -> Precio -> Stock
2       1550    15      3
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5) Mdificar Producto.
        6) Salir.
        : Ingrese opcion: 6
PS E:\C++\2022\CCII-LAB-C\LAB14> 

*/