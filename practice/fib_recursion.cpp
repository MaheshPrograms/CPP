#include <iostream>
using namespace std;

int fib(int n)
{
    if ( n <= 1  )
    {
        return 0 ; 
    }

    else if ( n == 2 )
    {
        return 1 ;    
    }

    else 
    {
        return (fib(n-2) + fib(n-1)); 
    }
}


int main ()
{
    for ( int i = 1 ; i <= 10 ; i++  )
    {
        cout<<fib(i)<<endl ;
    }
  
    return 0;
}