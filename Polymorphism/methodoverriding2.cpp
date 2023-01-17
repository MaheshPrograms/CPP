#include <iostream>
using namespace std;

class shape
{
    public:
    // making function of parent class virtual
    virtual void draw()
    {
        cout<<"drawing shape..."<<endl;
    }
};

class square: public shape
{
    public:
    // Overriding method of parent class
    void draw()
    {
        cout<<"drawing square....."<<endl;
    }

};

class circle : public shape
{
    public:
    void draw()
    {
        cout<<"drawing circle......"<<endl;
    }
};

int main()
{

    shape s;
    s.draw();   // draw method of shape class

    square sq;
    sq.draw();  // draw method of square class

    circle c;
    c.draw();  // draw method of circle class

    shape * shape_ptr = &sq;
    // creating pointer of shape class and storing address of square object
    shape_ptr->draw();
    // draw method of square class is called
    // This is because we have made draw method of parent class virtual
    // hence draw method of child class is called
    
   

    square * sq_ptr = &sq;
    sq_ptr->draw();;
    

    

    return 0;
}