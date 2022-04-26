#include <iostream>

using namespace std;

int main()
{
    cout<<"-> Los primeros multiplos de 5 entre 1 y 100 son:\n";

    for (int i = 1; i <= 100; i++)
    {
        if (i%5==0)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}