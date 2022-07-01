/*/////////////////////ENUNCIADO///////////////////////
Buscar un producto por su nombre o código.
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
        "3) Dar de Baja.\n\t4) Buscar producto.\n\t5)Salir.\n\t: Ingrese opcion: ";
        std::cin>>opcion;       //Se ingresa la opcion.
        while (opcion<1 && opcion>5)        //Bucle para ingresar una opcion valida.
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
        }else           //Para la opcion 5.
        {
            break;
        }
        std::cout<<"----------------------------------";
    }
    
    return 0;
}

/*/////////////////////EJECUCION///////////////////////

PS E:\C++\2022\CCII-LAB-C\LAB14> .\\a
Ingrese el numero de filas: 2

Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5)Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 1
Ingresar dato: 154
Ingresar dato: 15  
Ingresar dato: 2
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5)Salir.
        : Ingrese opcion: 1

        Ingrese Codigo-> Nombre(numeros) -> Precio -> Stock:
Ingresar dato: 2
Ingresar dato: 155
Ingresar dato: 16
Ingresar dato: 3
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5)Salir.
        : Ingrese opcion: 2

Codigo -> Nombre -> Precio -> Stock
1       154     15      2
2       155     16      3

----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5)Salir.
        : Ingrese opcion: 4

---------------Buscando Producto----------------------

Eliga una opcion.
        1) Buscar por nombre.
        2) BUscar por codigo.
        3)Regresar.
        : Ingrese opcion: 1

        Ingrese el nombre del producto a buscar:154
-> Producto encontrado.

Codigo -> Nombre -> Precio -> Stock
1       154     15      2
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5)Salir.
        : Ingrese opcion: 4

---------------Buscando Producto----------------------

Eliga una opcion.
        1) Buscar por nombre.
        2) BUscar por codigo.
        3)Regresar.
        : Ingrese opcion: 2

        Ingrese el codigo del producto a buscar:2
-> Producto encontrado.

Codigo -> Nombre -> Precio -> Stock
2       155     16      3
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5)Salir.
        : Ingrese opcion: 4

---------------Buscando Producto----------------------

Eliga una opcion.
        1) Buscar por nombre.
        2) BUscar por codigo.
        3)Regresar.
        : Ingrese opcion: 2

        Ingrese el codigo del producto a buscar:3
-> Producto no encontrado.
----------------------------------
Eliga una opcion.
        1) Dar de alta un nuevo Producto.
        2) Mostrar datos.
        3) Dar de Baja.
        4) Buscar producto.
        5)Salir.
        : Ingrese opcion: 5
PS E:\C++\2022\CCII-LAB-C\LAB14> 

*/