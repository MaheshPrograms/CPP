#include <iostream>
using namespace std;

class complex 
{
    private : 
    int real , imaginary ;

    public : 
    complex()
    {
        real = 0 ;
        imaginary = 0;
    }

    complex(int x , int y)
    {
        real = x ;
        imaginary = y ; 
    }

    complex operator+ (complex y)
    {
        complex temp ; 

        temp.real = real + y.real;
        temp.imaginary = imaginary + y.imaginary;

        return temp;
    }

    void show_complex()
    {
        cout<<real<< " + "<<imaginary<<"i"<<endl;
    }

    friend ostream& operator<< (ostream &out , complex &comp );
    friend istream &operator>> (istream &in , complex &comp);
};

ostream &operator<< (ostream &out, complex &comp )
{
    out<<comp.real<<" + "<<comp.imaginary<<"i"<<endl;
}

istream &operator>> (istream &in , complex &comp)
{
    cout<<"Enter real part : ";
    cin>>comp.real;
    cout<<"Enter imaginary part : ";
    cin>>comp.imaginary;
}

int main ()
{
   
    complex comp1(6,8);
    complex comp2 (9,11);

    complex sum = comp1 + comp2 ;

    sum.show_complex();
    cout<<sum<<comp1;

    complex comp3 ;
    cin>>comp3;
    cout<<comp3;

   return 100;
}