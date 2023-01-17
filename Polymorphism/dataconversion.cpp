#include <iostream>
using namespace std;

// user can make his own custom datatype in cpp
// in case of builtin datatypes, there is automatic data conversion 
// but in case of user defined datatype compiler does not understand this so user has
// to write code for this on his own 
// there is differnce between typecasting and data conversion 
// in data conversion : data is converted from one form to other 
// typecasting is special case of data conversion where values are casted from one 
// form to other

class time
{
    int hrs ;
    int min ;
    public:
    time(int t)
    {
        hrs = t /60 ;
        min = t % 60 ;
        // here user is passing time in minutes directly but in our own user defined 
        // datatype time, time has to be in hours and min format so we have to manually 
        // convert the entered time in hrs and min
    }

    friend ostream & operator<< (ostream & out , time t );
    
};

ostream & operator<< (ostream & out, time t)
{
    cout<<t.hrs<<" : "<<t.min<<endl;
}

int main()
{
    time t(150);
    cout<<t;

    return 0 ;
}