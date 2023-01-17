#include <iostream>
using namespace std;

class complex
{
    private :
    int real = 5;
    int img = 5;

    public:
    complex operator++ ()
    {
        real++;
        img++;
        return *this; 
    }

    complex operator++(int)
    {
        real++;
        img++;
        return *this;
    }

    friend ostream & operator<< (ostream & out, complex &comp);
};

ostream & operator<< (ostream &out, complex &comp)
{
    cout<<comp.real<<" + "<<comp.img<<"i"<<endl;
}

int main()
{
    complex comp;
    ++comp;
    comp++;
    cout<<comp;
    return 0 ;
}