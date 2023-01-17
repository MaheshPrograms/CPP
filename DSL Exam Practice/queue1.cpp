#include <iostream>
using namespace std ;

class queue
{
    private : 
        int front ; 
        int rear ; 
        int arr[50];
        int MAX_SIZE = 50 ; 

    public : 
        queue();
        void enqueue(int elm);
        void dequeue();
        bool isFull();
        bool isEmpty();
        void display();
};

void display_menu();

int main()
{
    queue q;
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
                int elm;
                cout<<"Enter element you want to enqueue"<<endl;
                cin>>elm;
                q.enqueue(elm);
                break;
            }
        
            case 2 : 
            {
                q.dequeue();
                break;
            }
        
            case 3 : 
            {
                q.display();
                break;
            }

            case 0 : 
            {
                flag = false ;
                cout<<"Thank you!"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid code"<<endl;
            }
        }
    }

    return 0 ;
}

// defining queue operations

queue::queue()
{
    front = -1 ;
    rear = -1 ;
}

void queue::enqueue(int elm)
{
    if (rear == MAX_SIZE-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else if (front == -1)
    {
        front++;
        rear++;
        arr[front] = elm;
    }
    else 
    {
        rear++;
        arr[rear] = elm ; 
    }
}

void queue::dequeue()
{
    if (front == -1)
    {
        cout<<"Underflow"<<endl;
    }
    else if (front == rear)
    {
        front = -1 ; 
        rear = -1 ;
    }
    else 
    {
        front++;
    }
}

bool queue::isEmpty()
{
    if (front == -1)
    {
        return true ;
    }
    else 
    {
        return false;
    }
}

bool queue::isFull()
{
    if (front == 0 && rear == MAX_SIZE-1)
    {
        return true;
    }
    else 
    {
        return false ;
    }
}

void queue::display()
{
    for (int i = front ; i <= rear ; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void display_menu()
{
    cout<<"-------Menu----------"<<endl;
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"0.Exit"<<endl;
}

