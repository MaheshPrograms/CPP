
#include <iostream>
using namespace std;

void modify(int &a )
{
    a = 20;
}

int & modify2(int &x )
{
    x = 50 ;
    return x ;
}

int main ()
{
    int a = 1; 
    int b = 7;

    cout<<&a<<endl;

    modify(a);

    cout<<a<<endl;

    int c = 80 ;

    modify2(a) = 80 ;

    cout<<a<<endl;
    cout<<&a<<endl;

    cout<<modify2(a)<<endl;
  
    return 0;
}