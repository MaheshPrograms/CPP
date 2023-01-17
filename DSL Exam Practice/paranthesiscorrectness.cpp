#include <iostream>
#include <string>
using namespace std ;

class stack 
{
    private : 
        int top ;
        char arr[50];
        int MAX_SIZE= 50;
    
    public : 
        stack();
        void push(char);
        void pop();
        bool isEmpty();
        bool isFull();
        char get_top();
        void display();
};

bool check_correctness(string expr);

int main()
{
    string exp ;
    cout<<"Enter expression "<<endl;
    cin>>exp;

    cout<<check_correctness(exp)<<endl;

    return 0 ;
}

// definitions
stack::stack()
{
    top = -1 ;
}

void stack::push(char elm)
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

char stack::get_top()
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

bool check_correctness(string expr)
{
    stack s ;

    int len = expr.length();

    for (int i = 0 ; i <  len ; i++)
    {
        if ((expr[i] == '(')||(expr[i] == '[')||(expr[i] == '{'))
        {
            s.push(expr[i]);
        }

        else if ((expr[i] == ')')||(expr[i] == ']')||(expr[i] == '{'))
        {
            if (expr[i] == ')' && s.get_top()=='(')
            {
                s.pop();
            }

            else if (expr[i] == ']' && s.get_top()=='[')
            {
                s.pop();
            }

            else if (expr[i] == '}' && s.get_top()=='{')
            {
                s.pop();
            }
            else 
            {
                s.push(expr[i]);
            }
        }
    
    }

    if (s.isEmpty() == true)
    {
        return true;
    }
    else 
    {
        return false;
    }
}