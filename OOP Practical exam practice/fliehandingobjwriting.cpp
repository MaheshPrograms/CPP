#include <iostream>
#include <fstream>
using namespace std ;

class Student
{
    public : 
        int age ;
        int roll ;
    
    public : 
        void get_data()
        {
            cout<<"Enter age : "<<endl;
            cin>>age;

            cout<<"Enter roll : "<<endl;
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
    ofstream f1 ;
    f1.open("myfile.txt", ios::binary);
    if (!f1.is_open())
    {
        cout<<"File didnot open successfully"<<endl;
    }
    else
    {
        Student s1;
        s1.get_data();
        s1.display_data();
        f1.write((char * )(&s1), sizeof(s1));
        f1.close();
    }
    
    // ifstream f2 ;
    ifstream f2;
    f2.open("myfile.txt");
    if(!f2.is_open())
    {
        cout<<"File did not open successfully"<<endl;
    }
    else
    {
        Student s2 ;
        f2.seekg(0);
        f2.read((char *)(&s2), sizeof(s2));
        s2.display_data();
        f2.close();
    }
    return 0  ; 
}

