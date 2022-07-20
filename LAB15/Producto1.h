#if !defined(_PRODUCTO1_H_)
#define _PRODUCTO1_H_

#include <iostream>             //Se incluye la libreria especificada.
#include <string>               //Se incluye la libreria especificada.

struct Automovil                //Estructura donde se guarda los componentes de cada producto.
{
    std::string color{"--"};
    std::string puertas{"--"};
    std::string llantas{"--"};
    std::string timon{"--"};
    std::string asientos{"--"};
    std::string motor{"--"};
    std::string espejos{"--"};
    std::string vidrios{"--"};
    std::string audio{"--"};
    std::string faros{"--"};
};


class Producto1           //Clase Prodcucto.
{
    public:
        Automovil componentes;
        void DatosComp()const   //Funcion para mostrar los componentes.
        { 
            std::cout << "----------Componentes----------";
            std::cout << "\n\tColor : "<<componentes.color;
            std::cout << "\n\tPuertas : "<<componentes.puertas;
            std::cout << "\n\tLlantas : "<<componentes.llantas;
            std::cout << "\n\tTimon : "<<componentes.timon;
            std::cout << "\n\tAsientos : "<<componentes.asientos;
            std::cout << "\n\tMotor : "<<componentes.motor;
            std::cout << "\n\tEspejos : "<<componentes.espejos;
            std::cout << "\n\tVidrios : "<<componentes.vidrios;
            std::cout << "\n\tAudio : "<<componentes.audio;
            std::cout << "\n\tFaros : "<<componentes.faros;
            std::cout << "\n\n";
        }
};

#endif // _PRODUCTO1_H_
