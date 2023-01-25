#include <iostream>
using namespace std;

class Student
{
    public:
    int roll;
    int age ;
};

int main()
{

    Student s ;
    cout<<sizeof(s)<<endl;
    cout<<&s.roll<<endl;
    cout<<&s.age<<endl;
    return 0 ;
}