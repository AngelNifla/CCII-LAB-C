#include <iostream>

using namespace std;

int main()
{

    int total_num;
    double media=0;
    cout<<"numero total de numeros a ingresar: \n";
    cin>>total_num;
    int num[total_num];

    for (int i = 0; i < total_num; i++)
    {
        cout<<"ingrese el valor del numero "<<i+1<<":   ";
        cin>>num[i];
        media= media+num[i];
    }
    media=media/total_num;
    cout<<"-> La media de los "<<total_num<<" numeros es : "<<media;

    return 0;
}