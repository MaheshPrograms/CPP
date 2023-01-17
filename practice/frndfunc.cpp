#include <iostream>
using namespace std;

class shape  
{
    private : 
    float length ; 
    float breadth ; 

    public : 
    shape (float length , float breadth) 
    {
        this -> length = length ; 
        this -> breadth = breadth ; 
    }

    friend float area_calculator(shape s) ;
}; 

float area_calculator(shape s)
{
    return (s.length * s.breadth) ; 
}

int main ()
{
    shape s(5.6,7.8) ;
    cout<<area_calculator(s)<<endl ;
  
    return 0;
}