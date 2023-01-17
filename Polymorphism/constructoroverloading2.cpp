#include <iostream>
using namespace std;

class parent 
{
    public:
    parent()
    {
        cout<<"parent class constructor......."<<endl;
    }
};

class child : public parent
{
    public:
    child()
    {
        cout<<"child class constructor........"<<endl;
    }
    // this class its own constructor as well as constructor of parent class
};
int main()
{

    child c;
    // constructor of parent class will be called first and then constructor of child class
    
    return 0;
}