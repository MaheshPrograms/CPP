#include <iostream>
using namespace std;

void add(int a , int b ){
    cout<<&a<<endl;
    cout<<&b<<endl;

    cout <<"Addition : "<<a+b<<endl;
}

void assign(int a , int b )
{
    a = 5;
    b = 6;
}
int main ()
{

    int x = 2;
    int y = 8;

    cout<<&x<<endl;
    cout<<&y<<endl;

    add(x,y);

    assign(x,y);

    cout<<x<<endl;
    cout<<y<<endl;
     
  
    return 0;
}