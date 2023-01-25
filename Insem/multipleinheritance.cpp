#include <iostream>
using namespace std ;

class A
{
    public : 
    int a = 0 ;
};

class B : virtual public A
{
    public : 
    int b = 1 ;
};

class C : virtual public A
{
    public : 
    int c = 2 ; 
    int b = 6 ;
};

class D : public B, public C
{
    public : 
    int d = 3;
};

int main()
{
    D d ;
    cout<<d.B::b<<endl;
    cout<<d.C::b<<endl;
    cout<<d.a<<endl;

    return 0 ;
}