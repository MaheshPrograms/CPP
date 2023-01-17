// Develop a program in C++ to create a database of student’s
// information system containing the following information:
// Name, Roll number, Class, Division, Date of Birth, Blood
// group, contact address, Telephone number, Driving license no.
// and other. Construct the database with suitable member
// functions. 
// Make use of constructor, default constructor, copy
// constructor, destructor, static member functions, friend class,
// this pointer, inline code and dynamic memory allocation
// operators-new and delete as well as exception handling.


#include <iostream>
#include <string>
using namespace std ;

class Student 
{
    private :    
        string name ; 
        int roll ; 
        string cls ;
        string  div ; 
        string DOB ;
        string bld_grp ; 
        string address ;
        string telephone_no ; 
        string driving_liscence_no ; 
        static string school ;
    
    public : 
        // Default constructor
        Student()
        {
            name = "A";
            roll = 0 ;
            cls = "A" ;
            div = "A" ;
            DOB = "1/1/2001" ;
            bld_grp = "A+" ;
            address = "None" ;
            telephone_no = "000000000" ;
            driving_liscence_no = "000000000" ;
            
        }

        // Parameterized constructor
        Student(string name, int roll, string cls, string div, string DOB, string bld_grp, string address, string telephone_no, string driving_liscence_no)
        {
            this->name = name ;
            this->roll = roll; 
            this->cls = cls ;
            this->div = div ; 
            this->DOB = DOB ; 
            this->bld_grp = bld_grp ;
            this->address = address ; 
            this-> telephone_no = telephone_no ; 
            this->driving_liscence_no = driving_liscence_no ; 
        }

        // copy constructor 
        Student (Student & s)
        {
            name = s.name ; 
            roll = s.roll ; 
            cls = s.cls ; 
            div = s.div ; 
            DOB = s.DOB ;
            bld_grp = s.bld_grp ;
            address = s.address  ;
            telephone_no = s.telephone_no ; 
            driving_liscence_no = s.driving_liscence_no ; 
        }

        // getter and setter 
        void get_info()
        {           
            cout<<"Enter name : ";
            cin>>name ; 
            label:
            cout<<"Enter roll no : ";
            cin>>roll ;
            try
            {
                if (roll < 0)
                {
                    string error = "Roll number cannot be negative";
                    throw error ;
                }
            }
            catch(string e)
            {
                cout<<"Value Error : "<<e<<endl;
                goto label;
            }
            cout<<"Enter class : ";
            cin>>cls;
            cout<<"Enter division : ";
            cin>>div ; 
            cout<<"Enter Date of birth : ";
            cin>>DOB ;
            cout<<"Enter blood group : ";
            cin>>bld_grp ;
            cout<<"Enter address : ";
            cin>>address;
            cout<<"Enter telephone number : ";
            cin>>telephone_no ;
            cout<<"Enter driving liscence number : ";
            cin>>driving_liscence_no ;
            
        }

        // display function
        void display_info()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
            cout<<"class : "<<cls<<endl;
            cout<<"Div : "<<div<<endl;
            cout<<"DOB : "<<DOB<<endl;
            cout<<"Bld grp : "<<bld_grp<<endl;
            cout<<"Address : "<<address<<endl;
            cout<<"Telephone no : "<<telephone_no<<endl;
            cout<<"Driving liscence no : "<<driving_liscence_no<<endl;
        }

        // static Function
        inline void static set_school(string schl)
        {
            school = schl;
        }

        // static function
        void static display_school()
        {
            cout<<school<<endl;
        }

        //Destructor
        ~Student()
        {
            cout<<"Destructor called for student with name"<<name<<endl;
        }

        friend istream & operator>> (istream & in , Student & s);
        friend ostream & operator<< (ostream & out, Student & s) ;
};

string Student::school = "PICT";

istream & operator>> (istream & in , Student & s)
{
    cout<<"Enter name : ";
    cin>>s.name ; 
    label:
    cout<<"Enter roll no : ";
    cin>>s.roll ;
    try
    {
        if (s.roll < 0)
        {
            string error = "Roll number cannot be negative";
            throw error ;
        }
    }
    catch(string e)
    {
        cout<<"Value Error : "<<e<<endl;
        goto label;
    }
    cout<<"Enter class : ";
    cin>>s.cls;
    cout<<"Enter division : ";
    cin>>s.div ; 
    cout<<"Enter Date of birth : ";
    cin>>s.DOB ;
    cout<<"Enter blood group : ";
    cin>>s.bld_grp ;
    cout<<"Enter address : ";
    cin>>s.address;
    cout<<"Enter telephone number : ";
    cin>>s.telephone_no ;
    cout<<"Enter driving liscence number : ";
    cin>>s.driving_liscence_no ;
            
}

ostream & operator<< (ostream & out, Student & s)
{
    cout<<"Name : "<<s.name<<endl;
    cout<<"Roll : "<<s.roll<<endl;
    cout<<"class : "<<s.cls<<endl;
    cout<<"Div : "<<s.div<<endl;
    cout<<"DOB : "<<s.DOB<<endl;
    cout<<"Bld grp : "<<s.bld_grp<<endl;
    cout<<"Address : "<<s.address<<endl;
    cout<<"Telephone no : "<<s.telephone_no<<endl;
    cout<<"Driving liscence no : "<<s.driving_liscence_no<<endl;
}

int main()
{
    Student s1 ;
    s1.get_info();
    Student s2 ;
    cin>>s2;

    s1.display_info();
    cout<<s2;

    Student s3(s1) ;
    cout<<s3;
    s3.set_school("ABC");


    Student* p = new Student ;
    cin>>*p;
    cout<<*p;
    p->display_school();
    delete p;
    return 0 ; 
}