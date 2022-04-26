#include <iostream>

using namespace std;

int main()
{
    int valor;
    cout<<"Ingrese el valor: ";
    cin>>valor;
    for (int i = 1; i <= valor; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";    
    }
    return 0;
}