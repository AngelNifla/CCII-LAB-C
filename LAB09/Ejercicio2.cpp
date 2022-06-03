/*
Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.
*/

#include <iostream>

template<class T,class R>       //Declaracion de la plantilla
void operaciones_basicas(T valor1, R valor2)        //Funcion para las operaciones basicas.
{
    std::cout<<"Cuatro Operaciones Basicas:\n";
    std::cout<<"Operacion suma: "<<valor1+valor2<<std::endl;
    std::cout<<"Operacion resta: "<<valor1-valor2<<std::endl;
    std::cout<<"Operacion multiplicacion: "<<valor1*valor2<<std::endl;
    std::cout<<"Operacion division: "<<valor1/valor2<<std::endl;
}

int main()
{
    int v1{25},v2{12};      //Variables tipo entero.
    float f1{16.4},f2{4.9};     //Variables tipo flotante.
    operaciones_basicas(v1, f1);
    operaciones_basicas(v2, f2);

}

/*
//////OTRA FORMA//////

#include <iostream>

template<class T>       //Declaracion de la plantilla.
T multiplicacion(T valor1, T valor2)        //Funcion para la multiplicacion.
{
    return valor1*valor2;
}

template<class T>       //Declaracion de la plantilla.
T division(T valor1, T valor2)      //Funcion para la division.
{
    return valor1/valor2;
}

template<class T>       //Declaracion de la plantilla.
T suma(T valor1, T valor2)      //Funcion para la suma.
{
    return valor1+valor2;
}
template<class T>       //Declaracion de la plantilla.
T resta(T valor1, T valor2)     //Funcion para la resta.
{
    return valor1-valor2;
}

int main()      //Funcion principal
{
    int v1{25},v2{12};      //Variables tipo entero.
    float f1{16.4},f2{4.9};     //Variables tipo flotante.

    std::cout<<"Cuatro Operaciones Basicas con INT:\n";
    std::cout<<"Operacion suma: "<<suma(v1,v2)<<std::endl;
    std::cout<<"Operacion resta: "<<resta(v1,v2)<<std::endl;
    std::cout<<"Operacion multiplicacion: "<<multiplicacion(v1,v2)<<std::endl;
    std::cout<<"Operacion division: "<<division(v1,v2)<<std::endl;

    std::cout<<"\nCuatro Operaciones Basicas con FLOAT:\n";
    std::cout<<"Operacion suma: "<<suma(f1,f2)<<std::endl;
    std::cout<<"Operacion resta: "<<resta(f1,f2)<<std::endl;
    std::cout<<"Operacion multiplicacion: "<<multiplicacion(f1,f2)<<std::endl;
    std::cout<<"Operacion division: "<<division(f1,f2)<<std::endl;

    return 0;
}*/