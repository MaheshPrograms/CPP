#include <iostream>
#include <typeinfo>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"In constructor of A"<<endl;
    }

    ~A()
    {
        cout<<"In destructor of A"<<endl;
    }
};

int main()
{
    A a;
    cout<<typeid(a).name()<<endl;

    for(int i = 0 ; i <5 ; i++)
    {
        cout<<"new iteration"<<endl;
        A a;
    }

    return 0;
}