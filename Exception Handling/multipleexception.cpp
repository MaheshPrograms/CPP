#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 15 ;

    try 
    {
        if (a==5)
        {
            throw(-1);
        }

        if (a==10)
        {
            throw('1');
        }

        if (a==15)
        {
            throw(7.3);
        }
    }
    catch(int x)
    {
        cout<<x<<endl;
    }
    catch(char c)
    {
        cout<<c<<endl;
    }
    catch(float f)
    {
        cout<<f<<endl;
    }


    return 0 ;
}