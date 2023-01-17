
#include <iostream>
using namespace std;

class car 
{
    public : 
    int price ; 
    int wheels  ; 
    int * prt ; 

    public : 

    car ()
    {
        price = 40000; 
        wheels = 4 ; 
        
    }

    car ( car &c )
    {
        price = c.price;
        wheels = c.wheels ; 
    }

};

int main ()
{
    car c1 ; 
    cout<<c1.price<<endl; 
    cout<<c1.wheels<<endl ;

    car c2(c1) ;
    cout<<c2.price<<endl ; 
    cout<<c2.wheels<<endl ;

    c2.wheels = 2 ; 

    cout<<c2.wheels<<endl ; 
    cout<<c1.wheels<<endl ;
  
    return 0;
}