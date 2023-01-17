#include <iostream>
using namespace std;
int main ()
{
    int a = 5;
    int b = 7;

    int* p ;

    p =  &a;

    cout<<"value of a : "<<a<<endl;
    cout<<"value of a : "<<*p<<endl;
    cout<<"address of a : "<<&a<<endl;
    cout<<"address of a : "<<p<<endl;

    int &x = a ; // both x and a will indicate same value 

    cout<<x<<endl;
    cout<<a<<endl; 

    x = 7 ;
    cout<<a<<endl ;

    int &y = x;
    cout<<y<<endl;
  
    return 0;
}