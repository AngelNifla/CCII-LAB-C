/*//////////////ENUNCIADO//////////////////
Desarrolle un programa simple de calculadora (operciones basicas)
que utilice clases utilizando plantillas.
*/

/*//////////////CODIGO//////////////////*/
#include "Calculadora.h"        //Se incluye codigo del archivo especificado.

int main()      //Funcion principal.
{
    int date1{1},date2{2};
    float date_1{1.5},date_2{2.9};
    Calculadora<int,float> C(date1,date_2);     //Se crea un objeto calculadora.
    Calculadora<float,int> D(date_1,date2);     //Se crea un objeto calculadora.

    return 0;
}

/*//////////////EJECUCION//////////////////

PS E:\C++\2022\CCII-LAB-C\LAB17\Ejercicio01> .\\a
Numero1: 1
Numero2: 2.9
Opciones:
        1) Suma.
        2) Resta.
        3) Multiplicacion.
        4) Division.
Ingrese opcion: 4
        -> Respuesta: 0.344828

Numero1: 1.5
Numero2: 2
Opciones:
        1) Suma.
        2) Resta.
        3) Multiplicacion.
        4) Division.
Ingrese opcion: 1
        -> Respuesta: 3.5


*/