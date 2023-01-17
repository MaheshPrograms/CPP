#include <iostream>
using namespace std;

class first 
{
    private :
    int x = 4 ;

    friend class second ;
};

class second
{
    public :
    void display()
    {
        first f;
        cout<<f.x<<endl;
    }
};

int main ()
{
    second s ;
    s.display(); 
  
    return 0;
}