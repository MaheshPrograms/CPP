#include <iostream>
using namespace std;

class A 
{
    private : 
    static int a ;

    public :
    static void acc_static()
    {
        cout<<a<<endl;
    }
};

int A::a  = 7 ;

int main ()
{
    A a1 ;

    A::acc_static();
    a1.acc_static();
    
  
    return 0;
}