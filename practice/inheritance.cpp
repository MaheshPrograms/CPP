
#include <iostream>
using namespace std ;

class parent
{
    public : 
    int public_ = 8;
    
    private : 
    int private_ = 9;

    protected : 
    int protected_ = 2;

    private : 
    void get_private_var()
    {
        cout<<public_<<private_<<protected_;
    }

    public : 
    void acc_private_method()
    {
        get_private_var();
    }

};

class child : protected parent 
{
    public :
        void acc_paren_var()
        {
            cout<<public_;
            cout<<protected_;
        
        }
};

class child_of_child : public child
{
    public : 
    void acs_inherited_var()
    {
        cout<<protected_;
        cout<<public_;
    }

};

int main ()
{
    parent parent_obj;
    //cout<<(parent_obj.a);

    parent_obj.acc_private_method();

    child child_obj ; 
    child_obj.acc_paren_var();

    cout<<"Manual printing : "<<endl;

    cout<<parent_obj.public_<<endl;
    
    //cout<<child_obj.public_<<endl;

    child_of_child chld ;
    chld.acs_inherited_var();

    cout<<parent_obj.public_<<endl;


    return 0 ;
}