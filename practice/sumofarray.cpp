#include <iostream>
using namespace std;
int main ()
{
    int* ptr = new int[10];

    for (int i = 0 , j = 76 ; i < 10 ; i++, j = j + 3)
    {
        *(ptr + i) = j ; 
    }

    int sum = 0 ; 

    for ( int i = 0 ; i < 10 ; i++)
    {
        sum = sum + *(ptr+i);
    }
    cout<<sum<<endl;
    
    return 0;
}