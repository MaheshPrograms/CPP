#include <iostream>
using namespace std;

int main()
{
    int a = 100;

    try
    {
        try
        {
            if (a<10)
            {
                throw(0);
            }
        }
        catch(int x)
        {
            if (x==0)
            {
                throw(x);
            }
        }
        cout<<"hello"<<endl;
    }
    catch(int x)
    {
        cout<<x<<endl;
    }

    return 0;
}