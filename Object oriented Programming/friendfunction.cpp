#include <iostream>
using namespace std;

class second
{
    public :
    void display() ;
};

class first
{
    private :
    int x = 7 ;

    friend void second::display();
};

void second::display()
{
    first f;
    cout<<f.x<<endl;
}

int main ()
{
     
    second s ;
    s.display();
    return 0;
}