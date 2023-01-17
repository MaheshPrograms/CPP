#include <iostream>
#include <string>
using namespace std;

template <typename t>
class stack
{
    private : 
        int top ;
        t arr[50];
        int MAX_SIZE = 50 ;

    public : 
        stack()
        {
            top = -1;
        }
        
        void push(t c)
        {
            if (top == MAX_SIZE-1)
            {
                cout<<"Stack overflow"<<endl;
            }
            else 
            {
                top++;
                arr[top] = c ;
            }
        }
       
        void pop()
        {
            if (top == -1)
            {
                cout<<"stack underflow"<<endl;
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

        t get_next_to_top()
        {
            return arr[top-1];
        }

        bool isEmpty()
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

        void display()
        {
            for (int i = 0 ; i <= top ; i++)
            {
                cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }
};

int get_precedence(char c);

int check_correctness(string exp);

string infix_to_postfix(string exp);

int evaluate_exp(string exp);

float operation(int, char, int);

int main()
{
    string exp ;
    cout<<"Enter expression"<<endl;
    cin>>exp;
    string postfix = infix_to_postfix(exp);
    cout<<postfix<<endl;

    int result = evaluate_exp(exp);
    cout<<result<<endl;


    return 0 ;
}

int get_precedence(char c)
{
    if (c == '+' || c == '-')
    {
        return 1 ;
    }
    else if (c == '*' || c == '/')
    {
        return 2 ;
    }

    else 
    {
        return 0;
    }
}

int check_correctness(string exp)
{
    int len = exp.length();
    stack<char>s ;

    for (int i = 0 ; i < len ; i++)
    {
        if ((exp[i] == '(')||(exp[i] == '[')||(exp[i] == '{'))
        {
            s.push(exp[i]);
        }

        else if ((exp[i] == ')')||(exp[i] == ']')||(exp[i] == '}'))
        {
            if ((exp[i] == ')') && (s.get_top() == '('))
            {
                s.pop();
            }
            else if ((exp[i] == ']') && (s.get_top() == '['))
            {
                s.pop();
            }
            if ((exp[i] == '}') && (s.get_top() == '{'))
            {
                s.pop();
            }
        }

        else
        {
            s.push(exp[i]);
        }
    }

    if (s.isEmpty() != true)
    {
        return false;
    }
    else
    {
        return true;
    }
}

string infix_to_postfix(string exp)
{
    stack<char>s ;
    string postfix = "";
    int len = exp.length();

    for (int i = 0 ; i < len ; i++)
    {
        if (exp[i] == '(')
        {
            s.push(exp[i]);
        }

        else if (((exp[i] >= 97) && (exp[i] <= 122))||((exp[i] >= 48) && (exp[i] <= 57)))
        {
            postfix = postfix + exp[i];
        }

        else if ((exp[i]=='+') || (exp[i]=='-') || (exp[i]=='*') || (exp[i]=='/'))
        {
            while (get_precedence(exp[i]) <= get_precedence(s.get_top()))
            {
                postfix = postfix + exp[i];
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

    while (s.isEmpty() != true)
    {
        postfix = postfix + s.get_top();
        s.pop();
    }

    return postfix;
}

int evaluate_exp(string exp)
{
    string postfix = infix_to_postfix(exp);
    stack<float>s ;
    int len = postfix.length();

    for (int i = 0 ; i < len ; i++)
    {
        if (postfix[i] >= 48 && postfix[i]<=57)
        {
            int num = postfix[i] - '0';
            s.push(num);
        }

        else
        {
            float result = operation(s.get_next_to_top(), postfix[i], s.get_top());
            s.pop();
            s.pop();
            s.push(result);
        }
    }
    return s.get_top();

}

float operation(int x, char c , int y)
{
    switch(c)
    {
        case '+':
        {
            return x + y;
            break;
        }

        case '-' :
        {
            return x - y ;
            break;
        }

        case '*' :
        {
            return x * y ;
            break;
        }
    
        case '/' :
        {
            return x / y ;
            break;
        }

        default :
        {
            return 1 ; 
        }
    }
}





