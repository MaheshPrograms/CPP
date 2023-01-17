#include <iostream>
using namespace std;
// whenever we create const object, we cannot modify its data members but if we still want
// to modify data members we use mutable keyword

class var
{
    public :
    int x = 5 ; 
    int y = 6 ;
    mutable int z = 7 ; 

};

int main()
{
    const var v ;
    // v.x = 78; 
    // v.y = 74 ;
    v.z = 11 ;
    // variable z is mutable so though object is const we can still modify z
    return 0 ;
}