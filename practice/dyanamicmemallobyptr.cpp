#include <iostream>
using namespace std;

int b = 8;

int main ()
{
    int a = 7;

    int* ptr = new int[10];

    for ( int i = 0 ; i < 10 ; i++)
    {
        *(ptr+i) = i * i ;
    }

    for ( int i = 0 ; i < 10 ; i++)
    {
        cout<<*(ptr+i)<<endl;
    }

    return 0;
}