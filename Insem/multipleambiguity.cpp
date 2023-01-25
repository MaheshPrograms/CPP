#include <iostream>
using namespace std ; 
class Y
{
    public : 
    int y = 88 ; 
};
class A : virtual public Y
{
    public : 
    int x = 8  ;
};

class B : virtual public Y
{
    public : 
    int x = 9  ;
};

class C : public A, public B
{
    
};

int main()
{

    C c ; 
    cout<<c.A::x<<endl;
    cout<<c.y<<endl;
    return 0 ; 
}