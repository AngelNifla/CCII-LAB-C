#include <iostream>

using namespace std;

int main()
{
    int valor;
    cout<<"Ingrese el valor: ";
    cin>>valor;

    for (int i = 0; i <= 12; i++)
    {
        cout<<i<<"\t*\t"<<valor<<"\t=\t"<<i*valor<<endl;
    }
    return 0;
}