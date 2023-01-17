
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    string name;
    int rollno;
    string Class;
    unsigned int div;
    string dob;
    string bloodgroup;
    string ContactAddress;
    unsigned int telephoneNo;
    unsigned int Dlno;
    int static count;

public:
    student()
    {
        name = "A";
        rollno = 1;
        Class = "C";
        div = 2;
        dob = "dd/mm/yyyy";
        bloodgroup = "o+";
        ContactAddress = "Pict";
        telephoneNo = 9988229610;
        Dlno = 56789;
        count++;
    }
    student(string name,
            unsigned int rollno,
            string Class,
            unsigned int div,
            string dob,
            string bloodgroup, string ContactAddress,
            unsigned int telephoneNo,
            unsigned int Dlno)
    {
        this->name = name;
        this->rollno = rollno;
        this->Class = Class;
        this->div = div;
        this->dob = dob;
        this->bloodgroup = bloodgroup;
        this->ContactAddress = ContactAddress;
        this->telephoneNo = telephoneNo;
        this->Dlno = Dlno;
        count++;
    }
    student(student &s)
    {
        name = s.name;
        rollno = s.rollno;
        Class = s.Class;
        div = s.div;
        dob = s.dob;
        bloodgroup = s.bloodgroup;
        ContactAddress = s.ContactAddress;
        telephoneNo = s.telephoneNo;
        Dlno = s.Dlno;
        count++;
    }
    ~student()
    {
        count--;
        cout << "object destructed" << count;
    }
    inline void input()
    {
        try
        {
            cout << "Enter Name:" << endl;
            cin >> name;

            cout << "Enter Rollno:" << endl;
            cin >> rollno;
            if (rollno < 0)
            {
                string e = "roll no cannot be negative";
                throw(e);
            }
            cout << "Enter Class:" << endl;
            cin >> Class;
            cout << "Enter the Div:" << endl;
            cin >> div;
            cout << "Enter the DateofBirth:" << endl;
            cin >> dob;
            cout << "Enter the bloodgroup:" << endl;
            cin >> bloodgroup;
            cout << "Enter the ContactAddress:" << endl;
            cin >> ContactAddress;
            cout << "Enter the Telephone No:" << endl;
            cin >> telephoneNo;
            cout << "Enter the Dlno:" << endl;
            cin >> Dlno;
        }
        catch (string e)
        {
            cout << e << endl;
        }
    }
    void display()
    {
        cout << "Name of the Student is:" << name << endl;
        cout << "RollNo of the Student is:" << rollno << endl;
        cout << "Class of the student is:" << Class << endl;
        cout << "Division of the Student is:" << div << endl;
        cout << "DateofBirth of the Student is:" << dob << endl;
        cout << "Bloodgroup of the Student is:" << bloodgroup << endl;
        cout << "Contact Address of the student is:" << ContactAddress << endl;
        cout << "Telephone No. of the student is:" << telephoneNo << endl;
        cout << "Dlno of the student is:" << Dlno << endl;
    }
    int static getcount()
    {
        return count;
    }
    friend class Student_details;
};
class Student_details
{
public:
    void give(student &s)
    {
        cout << "Name is:" << s.name << endl;
        cout << "Rollno is:" << s.rollno << endl;
        cout << "Class is:" << s.Class << endl;
        cout << "Division is:" << s.div << endl;
        cout << "Dob is:" << s.dob << endl;
        cout << "Bloodgroup is:" << s.bloodgroup << endl;
        cout << "Contact Address is:" << s.ContactAddress << endl;
        cout << "Telephone no is:" << s.telephoneNo << endl;
        cout << "DlNo is:" << s.Dlno << endl;
    }
};
int student::count = 0;

int main()
{
    // student s1;
    // s1.input();
    // s1.display();
    // student s3(s1);
    //
    // Student_details s2;
    // s2.give(s1);

    student *ptr = new student[2];

    for (int i = 0; i < 2; i++)
    {
        (*(ptr + i)).input();
    }

    for (int i = 0; i < 2; i++)
    {
        (*(ptr + i)).display();
    }

    delete[] ptr;
    return 0;
}
