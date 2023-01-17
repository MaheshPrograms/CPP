#include <iostream>
#include <string>
using namespace std;
class student 
{
    private :
        int roll_no ;
        int age ;
        static string school;

    public:
        void getschool()
        {
            cout<<school<<endl;
        }

        static void print_hello(void);
};

string student::school = "PICT";
void student::print_hello()
{
    cout<<"Hello world"<<endl;
}


int main ()
{
    student std ;
    std.getschool();
    std.print_hello();
  
    return 0;
}