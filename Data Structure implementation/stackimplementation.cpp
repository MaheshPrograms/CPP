#include <iostream>
using namespace std;

class stack
{
    int top;
    int capacity = 50;
    int arr[50];


    public:
    stack()
    {
        top = -1;
    }

    void push(int n)
    {
        if(top==capacity-1)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++ ;
            arr[top] = n;
        }
    }

    void pop()
    {
        if(top<0)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            top--;
        }
    }

    void display()
    {
        for(int i = 0 ; i <= top; i++)
        {
            cout<<arr[i]<<endl;
        }
    }


};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.display();

    return 0 ;
}