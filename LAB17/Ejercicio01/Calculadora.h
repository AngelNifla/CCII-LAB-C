#if !defined(_CALCULADORA_H_)
#define _CALCULADORA_H_

#include <iostream>         //Se incluye la libreria especificada.

template<typename T,typename N>     //Template.
class Calculadora       //Clase Claculadora.
{
private:
    T date1;        //Atributo generico.
    N date2;        //Atributo generico.
public:
    Calculadora(T _date1,N _date2);     //Constructor.
    ~Calculadora();     //Destructor.

    void Elegir_opcion();       //Funcion para elegir las operaciones genericas.
    auto Suma();            //Funcion de operacion genrica suma.
    auto Resta();           //Funcion de operacion genrica resta.
    auto Multiplicacion();          //Funcion de operacion genrica multiplicacion.
    auto Division();            //Funcion de operacion genrica division.
};

template<typename T,typename N>     //Template.
Calculadora<T,N>::Calculadora(T _date1,N _date2)        //Constructor.
{
    this->date1 = _date1;
    this->date2 = _date2;
    this->Elegir_opcion();
}

template<typename T,typename N>     //Template.
Calculadora<T,N>::~Calculadora()        //Destructor.
{
}

template<typename T,typename N>     //Template.
void Calculadora<T,N>::Elegir_opcion()      //Funcion para elegir las operaciones genericas.
{
    std::cout<<"Numero1: "<<this->date1<<"\nNumero2: "<<
    this->date2<<"\n";
    int opcion{0};
    while (opcion<1 || opcion >4)
    {
        std::cout<<"Opciones:\n\t1) Suma."<<
        "\n\t2) Resta.\n\t3) Multiplicacion.\n\t4) Division."<<
        "\nIngrese opcion: ";
        std::cin>>opcion;
    }
    if (opcion == 1)
    {
        std::cout<<"\t-> Respuesta: "<<this->Suma()<<"\n\n";
    }else if (opcion == 2)
    {
        std::cout<<"\t-> Respuesta: "<<this->Resta()<<"\n\n";
    }else if (opcion == 3)
    {
        std::cout<<"\t-> Respuesta: "<<this->Multiplicacion()<<"\n\n";
    }else
    {
        std::cout<<"\t-> Respuesta: "<<this->Division()<<"\n\n";
    }
    this->~Calculadora();
}

template<typename T,typename N>     //Template.
auto Calculadora<T,N>::Suma()       //Funcion de operacion genrica suma.
{
    return this->date1+this->date2;
}

template<typename T,typename N>     //Template.
auto Calculadora<T,N>::Resta()      //Funcion de operacion genrica resta.
{
    return this->date1-this->date2;
}

template<typename T,typename N>     //Template.
auto Calculadora<T,N>::Multiplicacion()     //Funcion de operacion genrica multiplicacion.
{
    return this->date1*this->date2;
}

template<typename T,typename N>     //Template.
auto Calculadora<T,N>::Division()       //Funcion de operacion genrica division.
{
    return this->date1/this->date2;
}

#endif // _CALCULADORA_H_
