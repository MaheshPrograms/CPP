#include <iostream>
using namespace std;
class A
{
    int x ; 
    public :
    A(int y )
    {
        x = y ; 
    }
};

int main ()
{
    int x = 3 ; 
    int y(3) ; // creating object of class int and passing its value as parameter
    int z{3} ;

    A a = (5) ;
    A b(5) ;
    A c{2} ;
  
    return 0;
}