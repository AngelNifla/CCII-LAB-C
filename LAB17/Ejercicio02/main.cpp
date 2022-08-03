/*//////////////ENUNCIADO//////////////////
Definir una clase utilizando plantillas que permita almacenar datos en un arbol
binario. Por el momento solo se insertaran elementos en la estructura. Simule el
proceso de almacenar 100 datos y verifique que la estructura no tenga problemas.
*/

/*//////////////CODIGO//////////////////*/
#include "ArbolBinario.h"           //Se incluye codigo del archivo especificado.

#include <random>           //Se incluye la libreria especificada.
#include <chrono>           //Se incluye la libreria especificada.

template<typename T>
void agregando_100_datos(std::vector<T> &_vector)       //Funcion para agregar 100 numeros aleatorios a un vector.
{
    auto num_base = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generador(num_base);
    std::uniform_int_distribution<int>distrib(-100,100);
    int num_aleatorio=distrib(generador);
    _vector.push_back(num_aleatorio);

    int opcion{0};
    for (int i = 1; i < 100; i++)
    {
        num_aleatorio=distrib(generador);
        for (int j = 0; j < _vector.size(); j++)
        {
            if (num_aleatorio == _vector[j])
            {
                opcion = 1;
                break;
            }
        }
        if (opcion == 0)
        {
            _vector.push_back(num_aleatorio);
        }else if (opcion == 1)
        {
            i--;
            opcion = 0;
        }
    }
}

int main()      //Funcion principal.
{

    /////Probando el funcionamiento//////
    std::vector<int> vector1 = {8,3,1,6,4,7,10,14,13};
    std::vector<int> vector2 = {50,17,12,9,14,23,19,72,54,67,76};
    std::vector<char> vector3 = {'D','B','A','C','F','E','G'};
    ArbolBinario<int> A,B;
    ArbolBinario<char>C;
    std::cout<<"Arbol 1:\n\t";
    A.Insertar_Datos(vector1);
    std::cout<<"\nArbol 2:\n\t";
    B.Insertar_Datos(vector2);
    std::cout<<"\nArbol 3:\n\t";
    C.Insertar_Datos(vector3);
    A.~ArbolBinario();
    B.~ArbolBinario();
    C.~ArbolBinario();

    ////Forma demostrativa con 100 datos//////
    std::vector<int> vector4;
    ArbolBinario<int> D;
    agregando_100_datos(vector4);
    std::cout<<"\nArbol 4:\n\t";
    D.Insertar_Datos(vector4);
    D.~ArbolBinario();

    return 0;
}

/*//////////////EJECUCION//////////////////

NOTA: Se uso ola siguiente expresion para representar el arbol en consola:

A(B,C)   ->  A:dato del nodo,  B: hijo izquierdo,    C:hijo derecho,    ~: vacio




PS E:\C++\2022\CCII-LAB-C\LAB17\Ejercicio02> .\\a
Arbol 1:
        8(3(1,6(4,7)),10(~,14(13,~)))
Arbol 2:
        50(17(12(9,14),23(19,~)),72(54(~,67),76))
Arbol 3:
        D(B(A,C),F(E,G))
Arbol 4:
        2(-77(-83(-93(-94(-95(-100,~),~),-90(~,-87)),
        -81(-82,~)),-64(-66(-69(-71(-74(~,-73),~),-67),
        ~),-27(-41(-56(-61(-63(~,-62),-57),-48(-51(-52(
        -53,~),-49),-43)),-35(-36(-39(~,-37),~),-34(
        ~,-28))),-5(-19(-21(-25(~,-22(-24,~)),~),
        -8(-15(-18,-13(~,-11)),-6)),0(-4(~,-2),1))))),
        100(76(27(20(16(7(~,13(11(10,~),~)),17(~,19)),
        22(21,23)),41(30(28,32(31,34(~,40(38(36,~),~))))
        ,56(45(43,54(46(~,50(48,53(51,~))),55)),58(~,67
        (60,73))))),77(~,89(80(79(78,~),81(~,85)),97(92,98)))),~))
PS E:\C++\2022\CCII-LAB-C\LAB17\Ejercicio02>

*/