#include <iostream>
using namespace std;

class complex 
{
    private :
        int real, imaginary;

    public : 
        complex ()
        {
            real = 0 ; 
            imaginary = 0 ;
        }
        complex(int x , int y )
        {
            real = x ; 
            imaginary = y ; 
        }

        void display_no()
        {
            cout<<real<<" + "<<imaginary<<"i"<<endl;
        }
};


int main ()
{
    
    complex* ptr = new complex[10] ;

    for ( int i = 0 ; i < 10 ; i++)
    {
        *(ptr+i) = complex(i*i, i+5) ;
    }

    for ( int i = 0 ; i < 10 ; i++)
    {
        (ptr+i)->display_no();
    }
    return 0;
}