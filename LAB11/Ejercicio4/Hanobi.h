#if !defined(_HANOBI_H_)
#define _HANOBI_H_

#include "E:\C++\2022\CCII-LAB-C\LAB11\Pila.h"      //Se utiliza codigo del archivo especificado.

class Hanobi            //Clase Hanobi.
{
private:
    Pila origen;        //Atributo: pila para la torre origen.
    Pila aux;       //Atributo: pila para la torre auxiliar.
    Pila destino;       //Atributo: pila para la torre destino.
    int n_discos;       //Atributo: para el numero de discos.
public:
    Hanobi(int _n_discos);      //Cosntructor.
    void resolviendo();         //Fucnion que resuelve las torres de Hanobi
    ~Hanobi();      //Destructor.
};

#endif // _HANOBI_H_
