#include <iostream>
using namespace std;

namespace A
{
    int a ; 
    int b ; 
    int c ; 
}

namespace B
{
    int a ; 
    int b ; 
    int c ; 
}

int main ()
{
    A::a = 9 ; 
    B::a = 3 ; 

    cout<<A::a<<endl;
    cout<<B::a<<endl;
 
    return 0;
}