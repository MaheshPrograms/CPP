// Implement a class Complex which represents the Complex
// Number data type. Implement the following 1. Constructor
// (including a default constructor which creates the complex
// number 0+0i). 2. Overload operator+ to add two complex
// numbers. 3. Overload operator* to multiply two complex
// numbers. 4. Overload operators &lt;&lt; and &gt;&gt; to print and read
// Complex Numbers.

#include <iostream>
using namespace std ;

class complex 
{
    private  : 
        int real ;
        int imaginary ;

    public : 
        complex()
        {
            real = 0 ;
            imaginary = 0 ; 
        }
        complex (int real, int imaginary)
        {
            this->real = real ;
            this->imaginary = imaginary ;
        }

        complex operator+ (complex c)
        {
            complex temp ;
            temp.real = real + c.real ;
            temp.imaginary = imaginary + c.imaginary ;
            return temp ;
        }

        complex operator* (complex c)
        {
            complex temp ;
            temp.real = real * c.real - imaginary * c.imaginary ;
            temp.imaginary = real * c.imaginary + imaginary * c.real ;
            return temp ;
        }

        friend ostream & operator<< (ostream & out, complex & c);
        friend istream & operator>> (istream & in , complex & c);
};

ostream & operator<< (ostream & out, complex & c)
{
    cout<<c.real<<" + "<<c.imaginary<<"i"<<endl;
}

istream & operator>> (istream & in , complex & c)
{
    cout<<"Enter real part : ";
    cin>>c.real ;
    cout<<"Enter imaginary part : ";
    cin>>c.imaginary ;
}

int main()
{
    complex c1 ;
    complex c2 ;
    cin>>c1 ;
    cin>>c2 ;
    cout<<"Entered complex numbers are : "<<endl;
    cout<<c1;
    cout<<c2;

    complex add = (c1 + c2) ;
    complex mult = (c1 * c2) ; 
    
    cout<<"Addition :  "<<add;
    cout<<"Multiplication : "<<mult ;

    return 0 ;
}

