
#include <iostream>
using namespace std;

class student 
{
    char name[20];
    int age, roll_no;

    public : 
    student()
    {
        age = 18;
        roll_no = 49;
    }

    friend ostream &operator << (ostream &o , student &obj);
};

ostream &operator<< (ostream &o , student &obj)
{
    o<<obj.roll_no;
}

int main ()
{
     
    student std;

    cout<<std;
  
    return 0;
}