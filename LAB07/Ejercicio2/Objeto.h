#ifndef _OBJETO_H_
#define _OBJETO_H_

#include "Color.h"          //Se incluye el codigo del archivo especificado.
#include "Material.h"           //Se incluye el codigo del archivo especificado.

class Objeto:public Color,public Material       //Clase Objeto, heredando atributos de la clase Color y Material.
{
private:
    std::string objeto;     //Atributo para el objeto.
public:
    Objeto();       //Metodo Constructor.
    Objeto(std::string _objeto,std::string _material,int _R,int _G,int _B);     //Metodo Constructor por parametro.
    ~Objeto();      //Metodo Desstructor.

    std::string get_objeto()        //Metodo para mostrar el atributo nombre del objeto.
    {
        return objeto;
    }
    void set_objeto(std::string _objeto)        //Metodo para dar valor al atributo nombre del objeto.
    {
        objeto = _objeto;
    }

    void Mostrar_datos_objeto();        //Metodo para mostrar los datos (heredados y propios) del objeto.
};

#endif