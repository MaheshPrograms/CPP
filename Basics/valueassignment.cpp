#include <iostream>
using namespace std;
class Var;
int main()
{
    // three ways to assign values to variable
    int x = 7;
    int y(8);
    int z{9}; // Narrowing conversion not allowed

    // three ways to create object
    Var x = 7;
    Var y(8);
    Var z{9};

    // Except third type, in above two cases, implicit typecasting takes place
    // ie. if constructor accepts int value and float value is passed then value is
    // casted into int automatically
    // if we want to accept integer value only as an input, then in that case, explicit 
    // keyword is used.


    return 0;
}

class Var
{
    int value ;
    public:
    Var(int x)
    {
        value = x;
    }
};