#ifndef __RECTANGULO_H__
#define __RECTANGULO_H__

class Rectangulo            //Clase Rectangulo.
{
private:
    int ancho;          //Variable para el ancho.
    int largo;          //Variable para el largo.
public:
    Rectangulo(int _ancho, int _largo);         //Constructor por parametro.
    ~Rectangulo();                  //Destructor.

    int area();                     //Funcion para retornar el area.
    int perimetro();                        //Funcion para retornar el perimetro.
};

#endif
