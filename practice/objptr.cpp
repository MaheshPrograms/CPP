#include <iostream>
#include <string>

using namespace std ;

class student 
{

    private : 
    int roll_no ; 
    int age ; 
    int m1 = 4 ; 
    int m2 = 7 ; 

    public : 
    static string college;

    public : 
    student ()
    {
        roll_no = 0 ; 
        age = 0 ; 
    }
    student( int roll_no , int age )
    {
        this -> roll_no = roll_no ; 
        this ->  age = age ;
    }

    void displayer()
    {
        cout<<"roll No :"<<roll_no<<endl ; 
        cout<<"Age : "<<age<<endl ;
    }


};

string student::college = "PICT";

int main ()
{
    student* p = new student[25] ;

    int count = 0 ; 
    for ( int i = 0 ; i < 5 ; i++)
    {
        for ( int j = 0 ; j < 5 ; j++)
        {
            student std1(i, j);
            *(p+count) = std1 ; 
            count++ ; 
        }
    }

    count = 0 ; 
    for ( int i = 0 ; i < 5 ; i++)
    {
        for ( int j = 0 ; j < 5 ; j++)
        {
            (*(p+count)).displayer();
            count++;
        }
    }

    count = 0 ; 

    for ( int i = 0 ; i < 5 ; i++)
    {
        for ( int j = 0 ; j < 5 ; j++)
        {
            cout<<(p+count)<<endl ;
            count++ ; 
        }
    }

    return 0 ; 
}