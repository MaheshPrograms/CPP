#include <iostream>
using namespace std;

class A 
{
    public : 
    static int x ; 

    public : 
    static int display ()
    {
        return x ; 
    }
};

int A::x = 67 ; 

int main ()
{
    A a1 ; 
    cout<<a1.display()<<endl;
    cout<<A::x<<endl ;
  
    return 0;
}