#include <iostream>
using namespace std ;

int main()
{
    int a =  8;
    int * p1 = &a ;
    int **p2 = &p1 ;

    cout<<*p1<<**p2<<endl;

    return 0 ;
}