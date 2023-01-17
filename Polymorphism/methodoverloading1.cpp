#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout<<a+b<<endl;
}

void add(int a , int b, int c)
{
    cout<<a+b+c<<endl;
}

void add(int a, int b, char c)
{
    cout<<a+b<<endl;
}

int main()
{
    add(2,4);
    add(2,3,4);
    add(2,3,'g');

    return 0;
}