/*
Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.
*/

#include <iostream>

template<class T>          //Definicion de la plantilla.
T menor(T valor1,T valor2,T valor3)     //Funcion para hallar el menor de 3 valores genericos.
{
    if (valor1 <= valor2 && valor1 <= valor3)
    {
        return valor1;
    }else if (valor2 <= valor1 && valor2 <= valor3)
    {
        return valor2;
    }else
    {
        return valor3;
    }
}

template<class T>          //Definicion de la plantilla.
T mayor(T valor1,T valor2,T valor3)     //Funcion para hallar el mayor de 3 valores genericos.
{
    if (valor1 >= valor2 && valor1 >= valor3)
    {
        return valor1;
    }else if (valor2 >= valor1 && valor2 >= valor3)
    {
        return valor2;
    }else
    {
        return valor3;
    }
}

int main()          //Funcion Principal.
{
    auto v1{15},v2{10},v3{20};      //Se declaran valores int en tipo de valor auto.
    auto f1{5.5},f2{7.3},f3{9.9};       //Se declaran valores float en tipo de valor auto.
    
    std::cout<<"El valor menor es: "<<menor(v1,v2,v3)<<std::endl;       //Se envia los valores a las funciones.
    std::cout<<"El valor mayor es: "<<mayor(v1,v2,v3)<<std::endl;       //Se envia los valores a las funciones.
    std::cout<<"El valor menor es: "<<menor(f1,f2,f3)<<std::endl;       //Se envia los valores a las funciones.
    std::cout<<"El valor mayor es: "<<mayor(f1,f2,f3);      //Se envia los valores a las funciones.

    return 0;
}