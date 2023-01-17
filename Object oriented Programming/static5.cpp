#include <iostream>
using namespace std;

class A 
{
    public:
    int y ; 
    static int z ; 
    
    public:
    static void display()
    {
        cout<<"hello world"<<endl;
        z++; 
        cout<<z<<endl;
    }
};
int A::z = 7 ; 

int main ()
{  
    A a ;
    a.display();
    A::display();
    
    return 0;
}