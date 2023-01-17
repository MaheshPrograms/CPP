#include <iostream>
#include <string.h>
using namespace std;

class student 
{

    char name[50];
    int roll_no;
    int Class ;
    char div ; 
    char DOB[10] ;
    char Bld_grp[5];
    char address[100];
    int telephone;
    int liscence_no ; 

    public :
    student ()
    {
        char name[50] = "";
        int roll_no = 0;
        int Class = 0;
        char div[] = ""; 
        char DOB[10] = "";
        char Bld_grp[5]="";
        char address[100]= "";
        int telephone = 0000000000;
        int liscence_no = 000000000; 
    }

    student (char name1[50],
    int roll_no1,
    int Class1 ,
    char div1 , 
    char DOB1[10] ,
    char Bld_grp1[5],
    char address1[100],
    int telephone1,
    int liscence_no1 )
    {
        strcpy(name, name1);
        roll_no = roll_no1;
        Class = Class1;
        div = div1;
        strcpy(DOB, DOB1);
        strcpy(Bld_grp, Bld_grp1);
        strcpy(address, address1);
        telephone = telephone1;
        liscence_no = liscence_no1;
    }

    friend class student_info;
    friend istream &operator>> (istream &in, student &std);
    friend ostream &operator<< (ostream &out, student &std); 

};

istream &operator>> (istream &in, student &std)
{
    cout<<"Enter name : "<<endl;
    cin>>std.name;

    cout<<"Enter roll no : "<<endl;
    cin>>std.roll_no;

    cout<<"Enter class : "<<endl;
    cin>>std.Class;

    cout<<"Enter Div : "<<endl;
    cin>>std.div;

    cout<<"Enter blood group : "<<endl ;
    cin>>std.Bld_grp;

    cout<<"Enter Address : "<<endl;
    cin>>std.address;

    cout<<"Enter telephone No : "<<endl;
    cin>>std.telephone;

    cout<<"Enter Liscence No. : "<<endl;
    cin>>std.telephone;  
}

ostream &operator<< (ostream &out, student &std)
{
    cout<<"Student Info : "<<endl;
    cout<<"Name : "<<std.name<<endl;
    cout<<"Roll No. : "<<std.roll_no<<endl;
    cout<<"Class : "<<std.Class<<endl;
    cout<<"Div : "<<std.div<<endl;
    cout<<"Blood Group : "<<std.Bld_grp<<endl;
    cout<<"Address : "<<std.address<<endl;
    cout<<"Telephone : "<<std.telephone<<endl;
    cout<<"Liscence No : "<<std.liscence_no<<endl;
}

class student_info
{
    public : 
    int size ;
    student std[80];

    student_info(int n)
    {
        size = n ;
        student data[n];
    }

     student_info()
    {
        size = 50 ;
        student std[50];
    }
};


int main ()
{
    student_info info1;
    int no_of_std;
    cout<<"Enter no of student : "<<endl;
    cin>>no_of_std;

    for (int i = 0 ; i < no_of_std ; i++ )
    {
        cin>>info1.std[i];
    }

    for (int i = 0 ; i < no_of_std ; i++)
    {
        cout<<info1.std[i];
    }
    return 0;
}