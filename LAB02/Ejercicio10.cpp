#include <iostream>

using namespace std;

int main()
{
    string palabra;
    cout<<"Ingrese una palabra: ";
    cin>>palabra;
    for (int i = palabra.size()-1; i >=0 ; i--)
    {
        cout<<palabra[i]<<endl;
    }
    return 0;
}