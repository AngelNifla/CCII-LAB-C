#include <iostream>

using namespace std;

int main()
{

    int primer_num, segundo_num, producto;      //declaración de varibales

    cout<<"Ingrese el primer numero entero:\n";     //ingreso del primer número entero
    cin>>primer_num;

    cout<<"Ingrese el segundo numero entero:\n";    //ingreso del segundo número entero
    cin>>segundo_num;

    producto=primer_num*segundo_num;    //producto de ambos números

    cout<<"-> El producto de los dos numero enteros es :"<<producto;

    return 0;
}