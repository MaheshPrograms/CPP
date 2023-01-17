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

string get_postfix(string expr);

int get_precidence(char op);

int main()
{
    string expr;
    cout<<"Enter expression : "<<endl;
    cin>>expr;

    cout<<get_postfix(expr)<<endl;
    

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

string get_postfix(string exp)
{
    string postfix = "";
    int len = exp.length();
    stack s;

    for (int i = 0 ; i <len ; i++)
    {
        if ((exp[i] == '(')||(exp[i] == '[')||(exp[i] == '{'))
        {
            s.push(exp[i]);
        }
        
        else if (exp[i] >= 'a')
        {
            postfix = postfix + exp[i];
        }
        
        else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            while (get_precidence(exp[i]) <= get_precidence(s.get_top()))
            {
                postfix = postfix + s.get_top();
                s.pop();
            }
            s.push(exp[i]);
        }

        else if ((exp[i] == ')')||(exp[i] == ']')||(exp[i] == '}'))
        {
            while (s.get_top() != '(')
            {
                postfix = postfix + s.get_top();
                s.pop();
            }
            s.pop();
        }
    }

    while(s.isEmpty() != true)
    {
        postfix = postfix + s.get_top();
        s.pop();
    }
    
    return postfix;
}

int get_precidence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1 ;
    }
    else if (op == '*' || op == '/')
    {
        return 2 ; 
    }
    else
    {
        return 0;
    }
}

