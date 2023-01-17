#include <iostream>
using namespace std;
int main ()
{
    int* ptr = new int[10];

    for(int i = 0, j = 79 ; i < 10 ; i++, j= j+5)
    {
        *(ptr + i) = j ; 
    }

    for ( int i = 0 ; i < 10 ; i++ )
    {
        cout<<*(ptr+i)<<endl;
    }

    for (int i = 0 ; i < 8 ; i++)
    {
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr+i+2);
        *(ptr+i+2) = temp;
    }

    cout<<"Redistributed : "<<endl;
    for ( int i = 0 ; i < 10 ; i++ )
    {
        cout<<*(ptr+i)<<endl;
    }
    
    int elm = 119 ; 
    for (int i = 0 ; i < 10 ; i++)
    {
        if (*(ptr+i) == elm)
        {
            cout<<i<<endl;
            break ;
        }
        else 
        {
            continue;
        }
    }

  
    return 0;
}