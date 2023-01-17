#include <iostream>
using namespace std;

class student
{
    public : 
    int age; 
    int roll ; 
    int div ;

    public :
    // default constructor
    student()
    {
        age = 0 ;
        roll = 0 ;
        div = 0 ; 
    }

    // parameterized constructor
    student(int age, int roll, int div)
    {
        this->age = age ;
        this->roll = roll ; 
        this->div = div ;
    }

    // copy constructor
    student(student & std)
    {
        age = std.age + 1 ;
        roll = std.age + 1 ;
        div = std.div + 1; 
    }

};

int main ()
{
    student std2(3,5,6);
    cout<<std2.age<<endl;

    student std3(std2) ;
    cout<<std3.age<<endl;
  
    return 0;
}