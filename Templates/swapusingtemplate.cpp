#include <iostream>
using namespace std;

template <typename t>
void swap1(t & x, t &y)
{
    t temp ;
    temp = x ;
    x = y ;
    y = temp ;
}

int main()
{
    int x = 2;
    int y = 3 ;
    swap1(x,y);
    cout<<x<<"  "<<y<<endl;


    return 0;
}