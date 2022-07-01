/*/////////////////////ENUNCIADO///////////////////////
Implemente un programa utilizando puntero a punteros que gestione los datos de
stock de una tienda de ropa, la información a recoger será: código, nombre y
precio del producto, asimismo la cantidad en stock. La tienda dispone de 10
productos distintos.
*/

#if !defined(_DATOS_H_)
#define _DATOS_H_

#include <iostream>     //Se incluye la libreria especificada.

class Datos         //Clase Datos.
{
private:
    int **matriz;           //Atributo: para la matriz con puntero de punteros.
    int num_filas;          //Atributo: para el numero de filas.
    int num_columnas;           //Atributo: para el numero de columnas.
public:
    Datos(int _num_filas);          //Constructor.
    void Dar_alta_producto();               //Funcion para Dar de alta a un producto nuevo.
    void Dar_baja_producto();               //Funcion para Dar de baja a un producto.
    void buscar_producto(int opcion);               //Funcion para buscar un producto.
    void modificar_producto(int opcion);                //Funcion para modificar un producto.
    void mostrar_producto_s(int opcion, int fila);              //Funcion para mostrar uno o los productos.
    ~Datos();               //Destructor.
};

#endif // _DATOS_H_
