#include <iostream>
using namespace std;

template <typename t>
void swap1(t &a, t &b)
{
    t temp = a ;
    a = b ;
    b = temp ;
}
int main()
{
    int x= 6 ;
    int y = 11 ;
    swap1(x,y);
    cout<<x<<"  "<<y<<endl;

    return 0 ;
}