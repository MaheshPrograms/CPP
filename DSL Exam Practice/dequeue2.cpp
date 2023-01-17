#include <iostream>
using namespace std;

class dequeue
{
    private : 
        int front ;
        int rear ;
        int MAX_SIZE = 50;
        int arr[50];

    public:
        dequeue();
        void enqueue_at_front(int);
        void enqueue_at_rear(int);
        void dequeue_at_front();
        void dequeue_at_rear();
        bool isFull();
        bool isEmpty();
        void display();
};

void display_menu();
int main()
{
    dequeue d;

    bool flag = true;
    
    while (flag)
    {
        display_menu();
        cout<<"Enter choice code : "<<endl;
        int code ;
        cin>>code;

        switch(code)
        {
            case 1 : 
            {
                cout<<"Enter element to enqueue"<<endl;
                int elm;
                cin>>elm;
                d.enqueue_at_front(elm);
                break;
            }
            
            case 2 :
            {
                cout<<"Enter element to enqueue"<<endl;
                int elm;
                cin>>elm;
                d.enqueue_at_rear(elm);
                break;
            }
        
            case 3 : 
            {
                d.dequeue_at_front();
                break;
            }

            case 4 : 
            {
                d.dequeue_at_rear();
                break;
            }

            case 5 :
            {
                d.display();
                break;
            }
        
            case 0 : 
            {
                flag = false;
                cout<<"Thank you!"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid code"<<endl;
            }
        }
    }

    return 0;
}

// Definitions of functions

dequeue::dequeue()
{
    front = -1 ;
    rear = -1;
}

void dequeue::enqueue_at_front(int elm)
{
    if (front == 0)
    {
        cout<<"Enqueue operation from front not possible"<<endl;
    }
    else if (front == -1)
    {
        front++;
        rear++;
        arr[front] = elm;
    }
    else
    {
        front--;
        arr[front] = elm;
    }
}

void dequeue::enqueue_at_rear(int elm)
{
    if (rear == MAX_SIZE-1)
    {
        cout<<"Enqueue opertion at rear end is not possible"<<endl;
    }
    else if (rear == -1)
    {
        front++;
        rear++;
        arr[rear] = elm;
    }
    else 
    {
        rear++;
        arr[rear] = elm;
    }
}

void dequeue::dequeue_at_front()
{
    if (front == -1)
    {
        cout<<"Underflow"<<endl;
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else 
    {
        front++;
    }
}

void dequeue::dequeue_at_rear()
{
    if (rear == -1)
    {
        cout<<"Underflow"<<endl;
    }
    else if (front == rear)
    {
        front = -1 ;
        rear = -1;
    }
    else
    {
        rear--;
    }
}

bool dequeue::isEmpty()
{
    if (rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool dequeue::isFull()
{
    if (front == 0 && rear == MAX_SIZE-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dequeue::display()
{
    for(int i = front ; i <= rear; i++ )
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void display_menu()
{
    cout<<"-------Menu-------"<<endl;
    cout<<"1.Enqueue at front"<<endl;
    cout<<"2.Enqueue at rear"<<endl;
    cout<<"3.Dequeue at front"<<endl;
    cout<<"4.Dequeue at rear"<<endl;
    cout<<"5.Display"<<endl;
    cout<<"0.Exit"<<endl;
}


