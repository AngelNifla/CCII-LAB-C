#include <iostream>

using namespace std;

int main()
{
    int primer_num, segundo_num;

    cout<<"Ingrese el primer numero entero:\n";     //ingreso del primer número entero
    cin>>primer_num;

    cout<<"Ingrese el segundo numero entero:\n";    //ingreso del segundo número entero
    cin>>segundo_num;

    if(primer_num%segundo_num==0){
        cout<<"-> "<<segundo_num<<" es divisor de "<<primer_num<<"\n";
    }
    else if(segundo_num%primer_num==0){
        cout<<"-> "<<primer_num<<" es divisor de "<<segundo_num<<"\n";
    }
    else{
        cout<<"-> "<<primer_num<<" y "<<segundo_num<<" no son divisores entre si. \n";
    }
    
    return 0;
}