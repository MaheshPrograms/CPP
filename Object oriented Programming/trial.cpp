#include <iostream>
using namespace std;

class outer 
{
    public :
    int outer_var = 7 ;

    class nested
    {
        public :
        int inner_var = 89 ;

        void display_nested_var()
        {
            cout<<inner_var<<endl;
        }
        
    };

    public :
    void access_nested()
    {
        nested n ;
        n.display_nested_var();
    }
};

int main ()
{
     
    outer::nested obj ;
    cout<<obj.inner_var<<endl;

    outer o ;
    o.access_nested();
  
    return 0;
}