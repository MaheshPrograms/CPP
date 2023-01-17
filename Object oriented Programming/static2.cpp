
#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    static string college; // declaration of public static variables
    // only one copy of this variable is created and its value is same for all objects
    // single memory location is allocated and is allocated only one

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

    student std2 ;
    student std3 ;

    std2.college = "COEP";   // manipulating value using one object
    cout<<std3.college<<endl; // changes value for other objects
    cout<<std1.college<<endl;

    cout<<&std1.college<<endl;
    cout<<&std2.college<<endl;
    cout<<&std3.college<<endl;
    // same address is printed for all three variables
    // which implies memory location is same

    return 0;
}