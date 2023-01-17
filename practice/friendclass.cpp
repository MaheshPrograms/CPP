
#include <iostream>
using namespace std;

class shape 
{
    private : 
    int length ; 
    int breadth ; 
    int height  ; 

    public : 
    shape ( int length , int breadth , int height)
    {
        this -> length = length ; 
        this -> breadth = breadth ; 
        this -> height = height ; 
    }

    friend class calculator ; 
};

class calculator 
{
    public : 
    int get_area( shape s  )
    {
        return (2 * (s.length * s.breadth + s.breadth * s.height + s.length * s.height));
    }

    int get_volume (shape s )
    {
        return s.length * s.breadth * s.height ; 
    }

};

int main ()
{
    shape s(5,2,3) ;

    calculator c ; 

    cout<<c.get_area(s)<<endl ; 
    cout<<c.get_volume(s)<<endl ;   
  
    return 0;
}