#include <iostream>

using namespace std;

int main()
{
    cout<<"-> Los 50 primeros numeros primos son:\n";
    for (int i = 1, c = 0; c <= 50; i++)
    {
        int cont=0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                cont=cont+1;
            }
        }
        if (cont==2)
        {
            cout<<i<<"   ";
            c++;
        }      
    }
    return 0;
}