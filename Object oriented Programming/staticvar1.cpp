#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    static string college; // declaration of public static variables

    private :
    int age ;
    int roll ;

};
string student::college = "PICT"; // assigning value to static variable


int main ()
{
    student std1 ;
    
    cout<<std1.college<<endl; // accessing static variables using an object

    cout<<student::college<<endl; // accessing static variable using class name

    return 0;
}