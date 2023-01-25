#include <iostream>
using namespace std ; 

class A
{
    public : 
    static int cnt ; 
    public : 
    A()
    {
        cnt++;
    }
};
int A::cnt = 0 ; 
int main()
{

    for (int i = 0 ; i < 5 ; i++)
    {
        A a;
    }

    cout<<A::cnt<<endl;
    return 0 ; 
}