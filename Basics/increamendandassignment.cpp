#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = a++ ; // a is assigned to b and then increamented
    int c = ++a ; // a is increamented and then assigned

    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    

    return 0;
}