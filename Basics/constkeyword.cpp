#include <iostream>
using namespace std;
// const keyword : 
// const keyword is whlile instantiating those objects whose data members 
// we dont want to be modified during program execution

class var1
{
    public:
    int x = 7;
    // initially value is assigned to x
};


int main()
{
    var1 v1 ;
    v1.x = 10;
    // value assigned to x can be changed 

    const var1 v2 ;
    //v2.x = 12;
    // since v2 is const object, its data member cannot be modified

    return 0 ;
}