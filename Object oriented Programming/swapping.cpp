#include <iostream>
using namespace std;

void swap_by_pointers( int* a, int* b )
{
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

void swap_by_ref(int &x , int &y)
{
    int temp = x ; 
    x = y ; 
    y = temp ; 
}

int main ()
{
    int a = 6 ;
    int b = 11 ; 

    swap_by_pointers(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;

    int p = 4 ; 
    int q = 2 ; 
    swap_by_ref(p,q);
    cout<<p<<endl;
    cout<<q<<endl;
  
    return 0;
}