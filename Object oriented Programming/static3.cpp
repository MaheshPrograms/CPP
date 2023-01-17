#include <iostream>
#include <string>
using namespace std;

class student 
{
    public :
    static string college ;

    public :
    void assign ()
    {
        static int x = 6 ; // local static variable cannot be accessed outside function
        cout<<x<<endl;
    }
};

int main ()
{
    student std ;
    std.assign(); 
    
    return 0;
}