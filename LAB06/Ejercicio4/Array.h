#ifndef __ARRAY_H__
#define __ARRAY_H__

class Array     //Clase Array
{
private:
    int espacios_ocupados{0};       //Atributos del objeto array.
    int array[5];       //Atributos del objeto array.
public:
    Array();        //Constructor.
    ~Array();       //Destructor.

    void llenar_datos();        //Funcion para llenar datos.
    void quitar_datos();        //Funcion para  quitar un dato.
    void mostrar_array();       //Funcion para  mostrar datos.
};

#endif