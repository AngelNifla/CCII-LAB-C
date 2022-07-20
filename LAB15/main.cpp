/*////////////////ENUNCIADO/////////////////
El alumno deberá de implementar un conjunto de clases
que permita seleccionar las piezas de un automóvil,
es decir, se podrán tener componentes a disposición
del cliente (puertas, llantas, timón, asientos, motor,
espejos, vidrios, etc.). Del cual el cliente puede
indicar que características de color puede tener cada
pieza. Al final mostrar opciones al Cliente o permitirle
que él pueda escoger las piezas e indicar el color.
Utilizar el patrón Builder.

*Pista, en lugar de trabajar el producto con una lista
de componentes, se puede alojar una estructura o clase.
*/


/*////////////////CODIGO/////////////////*/

#include "Director.h"       //Se incluye codigo del archivo especificado.
#include "BuilderEspecifico.h"      //Se incluye codigo del archivo especificado.
#include "Producto1.h"      //Se incluye codigo del archivo especificado.


void ClienteCode(Director& director)        //Funcion Cliente.
{
    BuilderEspecifico* builder = new BuilderEspecifico();
    director.set_builder(builder);

    int opcion{0};
    std::cout<<"\n----------Produciendo:----------\n";
    while (opcion<1 || opcion>2)
    {
        std::cout<<"Opciones:\n";
        std::cout<<"\t1) Producto Basico.\n";
        std::cout<<"\t2) Producto Completo.\n";
        std::cout<<"\n-> Ingrese opcion:";
        std::cin>> opcion;
    }
    if (opcion==1)
    {
        std::cout << "///////////Producto Basico///////////\n";
        director.BuildProductoMin();
        Producto1* p = builder->GetProducto();
        p->DatosComp();
        delete p;
    }else
    {
        std::cout << "///////////Producto Completo///////////\n";
        director.BuildProductoCompleto();
        Producto1* p = builder->GetProducto();
        p->DatosComp();
        delete p;
    }
    delete builder;
}

int main()          //Funcion Principal.
{
    Director* director = new Director();
    ClienteCode(*director);
    delete director;
    return 0;
}

/*////////////////EJECUCION/////////////////

PS E:\C++\2022\CCII-LAB-C\LAB15> .\\a        

----------Produciendo:----------
Opciones:
        1) Producto Basico.     
        2) Producto Completo.   

-> Ingrese opcion:1
///////////Producto Basico///////////

----------Produciendo Auto---------- 

-> Ingrese color: azul

----------Produciendo Puertas:----------
Opciones:
        1) 4 puertas.
        2) 2 puertas.

-> Ingrese opcion:1

-> Ingrese color: negro

----------Produciendo Llantas:----------
Opciones:
        1) Aro 13.
        2) Aro 14.
        3) Aro 15.

-> Ingrese opcion:3

----------Produciendo Timon:----------
Opciones:
        1) Estandar.
        2) Amplio.

-> Ingrese opcion:1

----------Produciendo Asientos:----------
Opciones:
        1) Cuero.
        2) Plastico.

-> Ingrese opcion:1

-> Ingrese color: crema 

----------Produciendo Motor:----------
Opciones:
        1) Potencia 1.4 .
        2) Potencia 1.6 .
        3) Potencia 2.0 .

-> Ingrese opcion:3
----------Componentes----------
        Color : Auto azul
        Puertas : 4 negro
        Llantas : Aro 15
        Timon : Size Estandar
        Asientos : 4 de cuero crema
        Motor : Potencia 2.0
        Espejos : --
        Vidrios : --
        Audio : --
        Faros : --

PS E:\C++\2022\CCII-LAB-C\LAB15>

*/