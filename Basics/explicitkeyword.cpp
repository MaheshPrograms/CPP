#include <iostream>
using namespace std;

class Var1
{
    int value;

    public:
    Var1(int x)
    {
        value = x ;
    }
};
// constructor in above case accept integer value but in case if float value is passed,
// then it will be converted or typecasted in integer value automatically through 
// an implicit type conversion

class Var2
{
    int value;

    public:
    explicit Var2(int x)
    {
        value = x ;
    }
};
// But in this case implicit typecasting will not take place since we have used keyword explicit
// user has to compulsory pass integer value otherwise error will be throw

int main()
{
    Var1 v1(4.6); 
    v1 = 8.2;
    // constructor accepts integer but we are passing float it will be typecasted to int 

    //Var2 v2 = 8.7 ;
    // above line will throw an error because we have used explicit keyword before
    // constructor so we can only pass integer value
    // if we still want to typecast we can use following way
    Var2 v2(8.7);


    return 0;
}