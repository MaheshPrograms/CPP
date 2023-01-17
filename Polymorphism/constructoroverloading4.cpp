#include <iostream>
using namespace std;

class parent
{
    public:
    parent(int x)
    {
        cout<<"value accepted in parent constructor : "<<x<<endl;
    }
};

class child:public parent
{
    public:
    child(int x, int y):parent(x)
    {
        cout<<"value accepted in child constructor "<<y<<endl;
    }
    // paremeters to be accepted in parent class constructor are accepted in child class
    // constructor and passed to parent class constructor as shown above
};

int main()
{
    child c(8,9);
    return 0;
}