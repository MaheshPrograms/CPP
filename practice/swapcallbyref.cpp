#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x ;
    x  = y ;
    y = temp;

}

int main ()
{
    int a = 8;
    int b = 11;


    swap(a,b);

    cout<<a<<endl;
    cout<<b<<endl;
 
  
    return 0;
}