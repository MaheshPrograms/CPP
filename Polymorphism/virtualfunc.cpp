#include <iostream>
using namespace std;

class shape
{
    public:
    virtual void draw()
    {
        cout<<"drawing shape....."<<endl;
    }
};

class circle : public shape
{
    public:
    void draw()
    {
        cout<<"drawing in circle.........."<<endl;
    }

    void show()
    {
        cout<<"in circle......"<<endl;
    }
};

class square : public shape
{


};

int main()
{
    shape * ptr = new circle ;
    ptr->draw();
    // we created pointer of shape type and stored address of circle in the same
    // we tried running draw method using pointer
    // since draw function in parent class is virtual, and it is overwritte in child class
    // pointer will run draw function of child

    shape * ptr1 = new square ;
    ptr1->draw();
    // In this case, though draw function of parent class is virtual, but child class hasnt
    // overwritten that function so though our pointer is pointing to circle, draw method 
    // of parent class will be executed


    // The difference between this virtual function and pure virtual function is that
    // in this case, virtual function of parent class has definition so in case if child class
    // does not overwrite the virtual function in child class, virtual function of parent
    // class is executed

    shape s;
    s.draw();

    circle c;
    c.draw();

    square sq;
    sq.draw();

    return 0;
}