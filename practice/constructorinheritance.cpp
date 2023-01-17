#include <iostream>
using namespace std;

class parent 
{
    protected : 
    int p1, p2 ; 

    public : 
        parent(int p1, int p2 )
        {
            this -> p1 = p1 ; 
            this -> p2 = p2 ; 
        }

        void display()
        {
            cout<<"p1 : "<<p1<<endl; 
            cout<<"p2 : "<<p2<<endl; 
        }

};

class child : public parent
{
    private : 
    int c1, c2 ; 

    public : 
        child(int c1, int c2, int p1, int p2): parent(p1,p2)
        {
            this -> c1 = c1 ; 
            this -> c2 = c2 ; 

        }

        void display()
        {
            cout<<"c1 : "<<c1<<endl; 
            cout<<"c2 : "<<c2<<endl; 
            cout<<"p1 : "<<p1<<endl; 
            cout<<"p2 : "<<p2<<endl; 
        }
} ;

int main ()
{
    parent p(2,4) ;
    child c(1,2,4,6);
    c.display();
  
    return 0;
}