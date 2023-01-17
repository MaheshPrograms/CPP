#include <iostream>
using namespace std;

class student 
{
    private : 
    int age ; 
    int roll_no ; 

    public :  
    student()
    {
        age = 0  ;
        roll_no =0 ; 
    }

    student (student &std)
    {
        age = std.age ; 
        roll_no = std.roll_no ; 
    }

    void setter(int a, int r )
    {
        age = a; 
        roll_no = r  ;
    }

    void getter ()
    {
        cout<<"Age : "<<age<<endl; 
        cout<<"Roll No : "<<roll_no<<endl; 
    }

};

int main ()
{    
   student std1 ; 
   student std2(std1) ;

   std1.getter();
   std2.getter();

   std1.setter(4,5);

   std1.getter();
   std2.getter();




    return 0;
}