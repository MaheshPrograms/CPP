#include <iostream>
#include <cmath>
using namespace std;

bool check_prime ( int n )
{
    if ( n == 0 || n == 1 || n < 0 )
    {
        return false;
    }

    else if ( n == 2 )
    {
        return true ; 
    }

    else 
    {
        bool flag = true ;
        for ( int i = 2 ; i < floor( n / 2 ); i++)
        {
            if ( n % i == 0 )
            {
                flag = false ; 
                break ; 
            }
            else 
            {
                continue;
            }
        }
        return flag ;
    }
}

int main ()
{
    cout<<check_prime(71);
  
    return 0;
}