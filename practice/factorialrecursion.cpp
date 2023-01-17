#include <iostream>
using namespace std;

int fact ( int n )
{
    cout<<"n = "<<n<<endl ;
    if ( n <= 1  )
    {
        return 1  ; 
    }

    else 
    {
        return ( n * fact(n-1) ) ;
    }
}

int main ()
{
    cout<<fact(5)<<endl ;
    return 0;
}
