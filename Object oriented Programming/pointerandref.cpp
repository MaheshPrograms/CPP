#include <iostream>
using namespace std;
int main ()
{
    int* p ; 
    int a = 6 ;

    p = &a;
    int &b = a ;

    cout<<a<<endl; // 6 
    cout<<p<<endl; // 0x61ff04
    cout<<&a<<endl; // 0x61ff04
    cout<<*p<<endl; // 6
    cout<<b<<endl;  // 6
    cout<<&b<<endl; // 0x61ff04

    b = 3 ;
    cout<<a<<endl; // 3
  
    return 0;
}