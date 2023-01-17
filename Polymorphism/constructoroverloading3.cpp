#include <iostream>
using namespace std;

class parent
{
    public:
    parent(int x)
    {
        cout<<"value accepted in parent constructor : "<<endl;
    }
};

class child:public parent
{
    // we cant leave this field empty because this class inherits constructor of
    // parent class and it accepts one parameter so we have to create constructor
    // and pass values to constructo of parent class
};

int main()
{
    child c;
    return 0;
}