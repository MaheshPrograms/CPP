#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    int c = a/b;
    cout<<c<<endl;
    // division by zero is not possible but still no error is seen in terminal 
    // because this is runtime exception
    // compiler only displays compile time exception not runtime 
    // to display runtime exception we use exception handling

    return 0;
}