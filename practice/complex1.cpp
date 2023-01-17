#include <iostream>
using namespace std;
class complex {

    //public:
    int real, imaginary;
    public:
    complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void showcomplex()
    {
        cout<<real<<" + "<<imaginary<<"j"<<endl;
    }

    void operator+(complex b)
    {
        int add_real =  real + b.real;
        int add_img = imaginary + b.imaginary;

        cout<<add_real<<" + "<<add_img<<"j"<<endl;
    }

};
int main ()
{
    complex comp1(3,5);
    complex comp2(9,8);
    comp1.showcomplex();
    comp2.showcomplex();

    comp1 + comp2;

    comp1.operator+(comp2);

    int a = 34;
    int b = 89;
    

    
  
    return 0;
}