#include <iostream>
#include <string>
using namespace std;

int get_fact ( int n )
{
    if ( n < 0 )
    {
        string err = "cant find factorial of negative number";
        throw err;
    }

    int f = 1 ;

    for ( int i = 1 ; i <= n ; i++)
    {
        f = f * i ;
    }

    if ( n == 0 )
    {
        return 1 ;
    }

    else 
    {
        return f ; 
    }

}

int main ()
{

    try 
    {
        cout<<get_fact(-5)<<endl;
    }
    catch(string e)
    {
        cout<<e<<endl;
    }
     
  
    return 0;
}