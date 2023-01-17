#include <iostream>
using namespace std;

void spaces(int n )
{
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"   ";
    }
}

void stars(int n )
{
    for (int i = 0 ; i< n ; i++)
    {
        cout<<" * ";
    }
}

int main()
{
    
    for (int i = 1 ; i<= 5 ; i++)
    {
        stars(i);
        spaces(10-2*i);
        stars(i);
        cout<<endl;
    }

    for(int i = 4 ; i>=1; i--)
    {
        stars(i);
        spaces(10-2*i);
        stars(i);
        cout<<endl;
    }

    return 0;
}
