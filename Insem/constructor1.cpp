#include <iostream>
using namespace std ;

class A
{
    public : 
    A()
    {
        cout<<"In constructor 1"<<endl;
    }

    A()
    {
        cout<<"In constructor 2"<<endl;
    }
};

int main()
{
    A a;
    return 0 ; 
}