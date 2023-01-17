#include <iostream>
using namespace std;

class student
{
    private : 
    int age, roll, div ; 
};

int main ()
{
    student std ; 
    cout<<sizeof(std)<<endl;
    // size of object is addition of sizes of class variables
  
    return 0;
}