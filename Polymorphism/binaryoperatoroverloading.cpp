#include <iostream>
using namespace std;

class complex
{
    private :
    int real = 5;
    int img = 7;

    public:
    complex operator+ (complex comp)
    {
        complex temp;
        temp.real = real + comp.real;
        temp.img = img + comp.img;
        return temp;
    }

    friend ostream & operator<< (ostream & out, complex comp);
};

ostream & operator<< (ostream & out, complex comp)
{
    out<<comp.real<<" + "<<comp.img<<endl;
}

int main()
{
    complex comp1, comp2;
    complex add = comp1 + comp2;
    cout<<add;

    return 0;
}