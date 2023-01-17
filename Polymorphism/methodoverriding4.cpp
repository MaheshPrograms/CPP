#include <iostream>
using namespace std;

class shape
{
    public:
    virtual void draw() = 0;
    // Declaring pure virtual function 
    // ie. making class abstract
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

class triange : public shape
{
    // abstract function draw of parent class is not overriden in derived class
    // hence this class will also be abstract
    // object of this class cannot be created
};

int main()
{

    // shape s;
    // s.draw();
    // an object of abstract class cannot be created

    square sq;
    sq.draw(); // overridden method is executed

    circle c;
    c.draw();  // overridden method is executed

    // shape * shape_ptr = &s;
    // shape_ptr->draw();
    // draw method of shape class is executed

    square * sq_ptr = &sq;
    sq_ptr->draw();
    // draw method of square class executed

    shape * sp_shape_ptr = &c ;
    // we are creating a pointer to shape object and storing an address of circle object 
    sp_shape_ptr->draw();
    // though pointer is of parent class but it is storing address of object of child class
    // since parent class is abstract, overriden method in child class will be executed
    

    return 0;
}