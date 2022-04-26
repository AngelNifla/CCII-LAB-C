#include <iostream>

using namespace std;

int main()
{
    int num[10], sum=0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"ingrese el valor del numero "<<i+1<<":   ";
        cin>>num[i];
        if(num[i]<0){
            sum = sum+num[i];
        }
    }
    cout<<"-> La suma de todos los numeros negativos ingresados es : "<<sum;

    return 0;
}