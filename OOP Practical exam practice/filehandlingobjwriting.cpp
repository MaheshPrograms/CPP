#include <iostream>
#include <fstream>
using namespace std ;
class Student 
{
    private : 
        int age ;
        int roll ;
    public : 
        void getdata()
        {
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter roll no : ";
            cin>>roll;
        }

        void display_data()
        {
            cout<<"Age : "<<age<<endl;
            cout<<"Roll : "<<roll<<endl;
        }

};

int main()
{
    ofstream of ;
    of.open("myfile.txt");
    if (!of.is_open())
    {
        cout<<"Error while opening file"<<endl;
    }
    else
    {
        Student s1 ;
        s1.getdata();
        s1.display_data();
        of.write((char * )(&s1), sizeof(s1));
        of.close();
    }

    ifstream f1 ;
    f1.open("myfile.txt");
    if (!f1.is_open())
    {
        cout<<"Error while opening file"<<endl;
    }
    else
    {
        Student s2 ;
        f1.read((char *)(&s2), sizeof(s2));
        s2.display_data();
        f1.close();
    }


    return 0 ;
}
