#include <iostream>

using namespace std ;

int main ()
{
    int n ; 
    cin>>n;

    for (int i = 1 ; i<= n ; i++)
    {
        cout<<i<<endl;
    }

    int i = 1;
    do {
        cout<<i<<endl;
        i = i + 1;
    }
    while(i<=n);

    int j = 1 ;

    while(j<=n)
    {
        cout<<j<<endl;
        j = j + 1;
    }

    return 0;
}