#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 5 ;
    int b = 0 ;

    try
    {
        if (b==0)
        {
            string s = "division by zero not possible";
            throw(s);
        }
        // if exception occurs, remaining part of try will not be executed
        int c = a/b;
        cout<<c<<endl;
    }
    catch(string s)
    {
        cout<<s<<endl;
    }

    return 0;
}