#include <iostream>
using namespace std;
int main ()
{
    int a = 5 ;
    int b = 6;

    cout<<"a address : "<<&a<<endl;
    cout<<"b address : "<<&b<<endl;

    int temp = a;
    a = b ;
    b = temp;

    cout<<"a address : "<<&a<<endl;
    cout<<"b address : "<<&b<<endl;
    cout<<"temp address : "<<&temp<<endl;



    //cout<<"a : "<<a<<"  b : "<<b<<endl;
    //int* x = &a;
    //cout<<x<<endl; 
    //cout<<a ;
  
    return 0;
}