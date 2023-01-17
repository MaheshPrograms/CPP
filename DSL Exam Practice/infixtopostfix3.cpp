#include <iostream>
#include <string>
using namespace std;

template <typename t>
class stack
{
    int top ;
    t arr[50] ;
    int MAX_SIZE = 50;

    public :
    stack()
    {
        top = -1 ;
    }

    void push(t elm)
    {
        if (top == MAX_SIZE - 1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = elm;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout<<"Underflow"<<endl;
        }
        else 
        {
            top--;
        }
    }

    t get_top()
    {
        return arr[top];
    }

    t get_second_top()
    {
        return arr[top-1];
    }

    void display()
    {
        for(int i = 0 ; i <= top ; i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else 
        {
            return false ;
        }
    }

};

bool check_correctness(string exp)
{
    stack <char> s;

    int len = exp.length();

    for (int i = 0 ; i < len ; i++)
    {
        if ((exp[i] == '(') || (exp[i] == '[') || (exp[i] == '{'))
        {
            s.push(exp[i]);
        }

        else if ((exp[i] == ')') || (exp[i] == ']') || (exp[i] == '}'))
        {
            if(((exp[i] == ')') && (s.get_top() == '('))||((exp[i] == ']') && (s.get_top() == '['))||((exp[i] == '}') && (s.get_top() == '{')))
            {
                s.pop();
            }
            else 
            {
                s.push(exp[i]);
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

int get_precedence(char c)
{
    if ( c == '+' || c == '-' )
    {
        return 1 ;
    }
    else if ( c == '*' || c == '/' )
    {
        return 2 ;
    }
    else 
    {
        return 0 ; 
    }
}

string infix_to_postfix(string exp)
{
    string postfix = "";
    stack <char> s;
    int len = exp.length();

    for(int i = 0 ; i < len ; i++)
    {

        if (exp[i] == '(')
        {
            s.push(exp[i]);
        }

        else if ((exp[i] >=97 && exp[i] <= 122) || (exp[i] >=48 && exp[i] <= 57))
        {
            postfix = postfix + exp[i];
        }

        else if ((exp[i] == '+') || (exp[i] == '-') || (exp[i] == '*') || (exp[i] == '/') )
        {
            while(get_precedence(exp[i]) <= get_precedence(s.get_top()))
            {
                postfix = postfix + s.get_top();
                s.pop();
            }
            s.push(exp[i]);
        }

        else if (exp[i] == ')')
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
        postfix = postfix + s.get_top() ;
        s.pop();
    }

    return postfix;
}

float operation(float x, char c, float y)
{
    switch (c)
    {
        case '+':
        {
            return x + y ;
        }

        case '-' :
        {
            return x - y ;
        }
        
        case '*' :
        {
            return x * y ;
        }

        case '/' :
        {
            return x / y ;
        }
        
        default:
            break;
    }
}

float evaluate(string exp)
{
    string postfix = infix_to_postfix(exp);
    stack <float> s ;
    int len = postfix.length();

    for(int i = 0 ; i < len ; i++)
    {
        if(postfix[i] >= 48 && postfix[i] <= 57)
        {
            float num = (float)(postfix[i] - '0');
            s.push(num);
        }
        else
        {
            float result = operation(s.get_second_top(), postfix[i], s.get_top());
            s.pop();
            s.pop();
            s.push(result);
        }
    }

    return s.get_top();
}

int main()
{
    string exp ;
    cout<<"Enter expression : "<<endl;
    cin>>exp;

    cout<<"infix to postfix : "<<infix_to_postfix(exp)<<endl;
    cout<<"Evaluation : "<<evaluate(exp)<<endl;
    return 0;
}