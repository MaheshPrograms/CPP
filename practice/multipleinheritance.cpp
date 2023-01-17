#include <iostream>
using namespace std;

class parent1 
{
    public : 
    int x = 7 ; 

    void show()
    {
        cout<<"x="<<x<<endl ;
    }
};

class parent2 
{
    public:
    int x = 8 ; 

    void show()
    {
        cout<<"x="<<x<<endl ;
    }
};

class child1 : public parent1, public parent2
{
    
};

int main ()
{
     
    child1 c ; 
    cout<<c.parent1::x<<endl;
    cout<<c.parent2::x<<endl ; 

    c.parent1::show();
    c.parent2::show() ;

    return 0;
}