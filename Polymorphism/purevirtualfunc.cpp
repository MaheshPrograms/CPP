#include <iostream>
using namespace std;

class shape 
{
    public:
    virtual void draw() = 0;
    // this is pure virtual function which does not have any definition
    // hence thid function cannot be called
};
    // shape class contains pure virtual function
    // this makes it an abstract class
    // abstract class is a class which
    // 1. cannot be instantiated
    // 2. contains at least one pure abstract function
    // class derived from this class must overwrite pure virtual function in abstract class
    // else derived class also becomes abstract

class circle : public shape
{
    public:
    void draw()
    {
        cout<<"drawing circle...."<<endl;
    }
};

int main()
{
    shape * ptr = new circle;
    ptr->draw();

    return 0;
}