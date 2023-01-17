#include <iostream>
using namespace std;

struct student 
{
    int age ;
    int roll ;
    int div ; 
};

int main ()
{
    struct student std ; 
    std.age = 11 ; 
    std.roll = 23 ; 
    std.div = 1 ; 

    cout<<sizeof(std)<<endl;
    // size is addition of sizes of attributes
  
    return 0;
}