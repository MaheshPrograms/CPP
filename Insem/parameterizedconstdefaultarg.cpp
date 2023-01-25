#include <iostream>
using namespace std ;

class Student
{
    public:
    int age,roll;

    public :
    // this is parameterized constructor but parameters are assigned with default values
    // so even if we dont pass arguements to constructor, it will take default values
    Student(int a = 0, int b = 0) 
    {
        age = a ;
        roll = b ;
    }

};

int main()
{
    Student s;
    cout<<s.age<<" "<<s.roll<<endl;

    Student s1(1000); // one of two default values is overriden
    cout<<s1.age<<" "<<s1.roll<<endl;


    return 0;
}