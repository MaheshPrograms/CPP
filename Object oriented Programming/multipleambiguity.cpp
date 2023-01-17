#include <iostream>
using namespace std;

class parent1 
{
    public : 
    int var1 = 4 ;

};

class parent2
{
    public :
    int var1 = 8 ;
};

class child : public parent1, public parent2 
{

};

int main ()
{
     
    child c;
    cout<<c.parent1::var1<<endl; // accessing specific variable of parent class
    cout<<c.parent2::var1<<endl;
    return 0;
}