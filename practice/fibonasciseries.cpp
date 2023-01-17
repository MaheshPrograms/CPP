#include <iostream>
using namespace std;
int main ()
{
    int n = 50 ; 

    int a = 0 ; 
    int b = 1 ; 

    if ( n == 1 )
    {
        cout<<a<<endl;
    }

    else if (n==2)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else if ( n <= 0 )
    {
        cout<<"Invalid input "<<endl;
    }

    else 
    {
        int count = 2 ;
        cout<<a<<endl ; 
        cout<<b<<endl ;
        while (count <= n)
        {
            int f = a + b ;
            cout<<f<<endl ; 
            a = b; 
            b = f;
            count ++ ; 

        }

    }
  
    return 0;
}