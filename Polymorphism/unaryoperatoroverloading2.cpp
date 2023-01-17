#include <iostream>
using namespace std;

class complex
{
    int real = 5;
    int imaginary = 5;

    public:
    void operator++()
    {
        real++;
        imaginary++;
    }

    void operator++(int)
    {
        real++;
        imaginary++;
    }

    friend ostream & operator<< (ostream & out, complex & comp);
    friend istream & operator>> (istream & in , complex & comp);

};

ostream & operator<< (ostream & out, complex & comp)
{
    cout<<comp.real<<" + "<<comp.imaginary<<"i"<<endl;
}

istream & operator>> (istream & in, complex & comp)
{
    cin>>comp.real;
    cin>>comp.imaginary;
}
int main()
{
    complex comp;
    ++comp;
    comp++;
    cout<<comp;
    complex comp2;
    cin>>comp2;
    cout<<comp2;
    return 0;
}