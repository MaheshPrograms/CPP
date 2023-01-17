#include <iostream>
using namespace std;

class shape
{
    public:
    void draw()
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
    s.draw();

    square sq;
    sq.draw(); // overridden method is executed

    circle c;
    c.draw();  // overridden method is executed

    shape * shape_ptr = &s;
    shape_ptr->draw();
    // draw method of shape class is executed

    square * sq_ptr = &sq;
    sq_ptr->draw();
    // draw method of square class executed

    shape * sp_shape_ptr = &c ;
    // we are creating a pointer to shape object and storing an address of circle object 
    sp_shape_ptr->draw();
    // here it runs the draw method of parent class ie shape class not of object whose address is stored
    
    return 0;
}