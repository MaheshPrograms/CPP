#include <iostream>
using namespace std;

class operations
{
    public:
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
};

int main()
{
    operations op;
    op.add(1,2);
    op.add(4,5,6);
    op.add(6,5,'s');
    return 0;
}