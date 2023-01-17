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
        string div ;
        string DOB ;
        string bld_grp ;
        string address ;
        string telephone ;
        string driving_liscence_no ;
        static string clg ;
        static int count ;

    public:
        Student()
        {
            name = "A";
            roll = 0 ;
            cls = "A" ;
            div = "A" ;
            DOB = "1/1/2001";
            address = "A" ;
            telephone = "0";
            driving_liscence_no = "0";
        }

        Student(string name, int roll, string cls, string div, string DOB, string bld_grp, string address, string telephone, string driving_liscence_no)
        {
            this->name = name ;
            this->roll = roll ; 
            this->cls = cls ;
            this->div = div ;
            this->DOB = DOB ;
            this->bld_grp = bld_grp ;
            this->address = address ;
            this->telephone = telephone ;
            this->driving_liscence_no = driving_liscence_no ;
        }

        Student(Student & s)
        {
            name = s.name ;
            roll = s.roll ;
            cls = s.cls;
            div = s.div ;
            DOB = s.DOB ;
            bld_grp = s.bld_grp ;
            address = s.address ;
            telephone = s.telephone ;
            driving_liscence_no = s.driving_liscence_no;
        }

        inline static void set_clg (string s)
        {
            clg = s ;
        }

        inline static void display_clg ()
        {
            cout<<"College : "<<clg<<endl;
        }

        inline static void update_count()
        {
            count++;
        }

        ~Student()
        {
            cout<<"Destructor for student with name "<<name<<" called"<<endl;
        }

        friend istream & operator>> (istream & in, Student & s);
        friend ostream & operator<< (ostream & out, Student & s);
        friend class selective_display;

};

string Student::clg = "PICT";
int Student::count = 0 ;

istream & operator>> (istream & cin, Student & s)
{
    s.update_count();
    cout<<"Enter student details of student "<<Student::count<<endl;
    cout<<"Enter name : ";
    cin>>s.name;
    label :
    try
    {
        cout<<"Enter roll number : ";
        cin>>s.roll;
        if (s.roll < 0)
        {
            string e = "Value Error : Roll number cannot be negative ";
            throw(e);
        }
    }
    catch(string e)
    {
        cout<<e<<endl;
        goto label; 
    }
    
    cout<<"Enter class : ";
    cin>>s.cls ;
    cout<<"Enter division : ";
    cin>>s.div;
    cout<<"Enter DOB : ";
    cin>>s.DOB;
    cout<<"Enter blood group : ";
    cin>>s.bld_grp;
    cout<<"Enter address : ";
    cin>>s.address;
    cout<<"Enter telephone number : ";
    cin>>s.telephone;
    cout<<"Enter driving liscence number : ";
    cin>>s.driving_liscence_no;
    cout<<"-----------------------------------------------"<<endl;
}

ostream & operator<< (ostream & cout , Student & s)
{
    cout<<"Displaying details : "<<endl;
    cout<<"Name : "<<s.name<<endl ; 
    cout<<"Roll Number : "<<s.roll<<endl;
    cout<<"Class : "<<s.cls<<endl;
    cout<<"Division : "<<s.div<<endl;
    cout<<"Date of birth : "<<s.DOB<<endl;
    cout<<"Blood grout : "<<s.bld_grp<<endl;
    cout<<"Address : "<<s.address<<endl;
    cout<<"Telephone number : "<<s.telephone<<endl;
    cout<<"Driving liscenece no : "<<s.driving_liscence_no<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
}

class selective_display
{
    public : 
        void display_names(Student arr[], int n)
        {
            for (int i = 0 ; i < n ; i++)
            {
                cout<<arr[i].roll<<" "<<arr[i].name<<endl;
            }
        }

        void display_phones(Student arr[], int n)
        {
            for (int i = 0 ; i < n ; i++)
            {
                cout<<arr[i].roll<<"  "<<arr[i].telephone<<endl;
            }
        }
};

void display_menu()
{
    cout<<"-------------MENU-------------"<<endl;
    cout<<"1.Display all student details "<<endl;
    cout<<"2.Display only names "<<endl;
    cout<<"3.Display roll no and phone numbers "<<endl;
    cout<<"4.Copy details to new student"<<endl;
    cout<<"0.Exit"<<endl;
}

int main()
{    
    int n ; 
    cout<<"Enter no of students : "<<endl;
    cin>>n;
    Student *arr = new Student[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    Student s ;
    bool flag = true ;
    while (flag)
    {
        display_menu();
        int code ;
        cout<<"Enter code : ";
        cin>>code ;

        switch(code)
        {
            case 1 : 
            {
                for (int i = 0 ; i < n ; i++)
                {
                    cout<<arr[i];
                }
                break;
            }

            case 2 : 
            {
                selective_display d ;
                d.display_names(arr, n);
                break; 
            }
            
            case 3 : 
            {
                selective_display d ;
                d.display_phones(arr, n);
                break ; 
            }

            case 4 : 
            {
                cout<<"Enter index number of student whose details are to be copied "<<endl;
                int index ;
                cin>>index ;
                s = arr[index];
                cout<<s;
                break;
            }

            case 0 : 
            {
                flag = false ; 
                break ;
            }

            default : 
            {
                cout<<"Invalid operation code "<<endl;
            }
        }
    }
    

    return 0  ;
}




