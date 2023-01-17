#include <iostream>
using namespace std ;

class stack 
{
    private : 
        int top ;
        int arr[50];
        int MAX_SIZE= 50;
    
    public : 
        stack();
        void push(int);
        void pop();
        bool isEmpty();
        bool isFull();
        int get_top();
        void display();
};

void display_menu();

int main()
{
    stack s;

    bool flag = true ;

    while (flag)
    {
        display_menu();
        int code ; 
        cout<<"Enter choice code : "<<endl;
        cin>>code;

        switch(code)
        {
            case 1 :
            {
                int elm ;
                cout<<"Enter element to push"<<endl;
                cin>>elm;
                s.push(elm);
                break;
            }

            case 2 : 
            {
                s.pop();
                break;
            }

            case 3 : 
            {
                s.display();
                break;
            }

            case 0 : 
            {
                flag = false;
                cout<<"Thank you !"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid code"<<endl;
                break;
            }
        }
    }

    return 0 ;
}

// definitions
stack::stack()
{
    top = -1 ;
}

void stack::push(int elm)
{
    if (top == MAX_SIZE - 1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {
        top++;
        arr[top] = elm ; 
    }
}

void stack::pop()
{
    if(top == -1)
    {
        cout<<"Underflow"<<endl;
    }
    else 
    {
        top--;
    }
}

bool stack::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool stack::isFull()
{
    if (top == MAX_SIZE -1 )
    {
        return true ; 
    }
    else 
    {
        return false;
    }
}

int stack::get_top()
{
    return arr[top];
}

void stack::display()
{
    for (int i = 0 ; i <= top ; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void display_menu()
{
    cout<<"-------MENU---------"<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"0.Exit"<<endl;
}
