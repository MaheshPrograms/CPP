#include <iostream>
using namespace std;

class complex
{
    private :
    int real = 5;
    int img = 5;

    public:
    void operator+ ()
    {
        this->real++;
        this->img++;
    }

    friend ostream & operator<< (ostream & out, complex & comp);

};

ostream & operator<< (ostream & out, complex & comp)
{
    cout<<comp.real<<" + "<<comp.img<<"i"<<endl;
}

int main()
{
    complex comp1;
    +comp1;
    cout<<comp1;

    return 0;
}