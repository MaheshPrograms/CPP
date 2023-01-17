#include <iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"Parent constructor called..........."<<endl;
    }
};

class child : public parent
{
    // this class does not have its own constructor but since it inherits from 
    // parent class, constructor of parent class will be called
};

int main()
{
    parent p;
    // creating an object of parent class will call constructor of parent class

    child c;
    // constructor of parent class will be called


    return 0;
}