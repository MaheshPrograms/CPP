#include <iostream>
using namespace std;

class student
{
    private :
    int m1 = 18 ;
    int m2 = 56 ; 
    int m3 = 67 ;

    private :
    // private function
    int sum ()
    {
        int sum = m1 + m2 + m3 ;
        return sum ;
    }

    public :
    int average()
    {
        int sum1 = sum() ; // accessing private function inside public function 
        return ((sum1)/3) ;
    }
};

int main ()
{
    student std ;
    cout<<std.average()<<endl;
  
    return 0;
}