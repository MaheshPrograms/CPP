#include <iostream>
using namespace std;

class A 
{
    public : 
    int x = 4 ; 

    A()
    {
        cout<<"constructor called"<<endl;
    }

    ~A()
    {
        cout<<"Destructor called"<<endl;
    }

};
int main ()
{
     
    A a ;
    cout<<a.x<<endl;

    return 0;
}