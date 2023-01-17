
#include <iostream>
using namespace std;

class complex {
    public:
    int real, imaginary;

    public :
    complex(int r, int i)
    {
        real = r ;
        imaginary = i;
    }

    friend complex add(complex, complex);
};

complex add(complex o1, complex o2 )
{
    int add_real = o1.real + o2.real ;
    int add_img  = o1.imaginary + o2.imaginary;
    complex comp1(add_real, add_img);
    return comp1;
};

class A 
{
    public : 

    int add(int x, int y )
    {
        return x+y;
    }
};



int main ()
{
    complex comp1(4,5);
    complex comp2(5,6);

    cout<<add(comp1, comp2).imaginary<<endl;

    A a ;
    cout<<a.add(6,7)<<endl;
  
    return 0;
}