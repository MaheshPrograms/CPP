#include <iostream>
using namespace std ;

class outer 
{
    void outermethod()
    {
        cout<<"in outer"<<endl;
    }
    public : 
    class inner
    {
        public : 
        void innermethod()
    {
        cout<<"in inner"<<endl;
    }
    };
};

int main()
{
    outer o ;
    outer::inner i;

    return 0 ;
}