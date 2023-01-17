#include <iostream>
using namespace std;
int main ()
{
    int x = 1.234 ; // Narrowing conversion
    cout<<x<<endl;

    int y (1.234) ;
    cout<<y<<endl;

    // int z {3.12};
    // cout<<z<<endl; // Narrowing conversion not allowed

    return 0;
}