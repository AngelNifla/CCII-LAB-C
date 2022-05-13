#ifndef __MATRIZ_H__
#define __MATRIZ_H__

class Matriz        //Clase Matriz.
{
private:
    int matriz[3][3];       //Atributo del objeto.
public:
    Matriz();       //Constructor.
    ~Matriz();          //Destructor.

    void busqueda();            //Funcion para buscar un valor en la matriz.
    void mostrar_matriz();          //Funcion para mostrar los valores de la matriz.
};

#endif