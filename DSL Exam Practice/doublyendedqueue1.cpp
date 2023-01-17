#include <iostream>
using namespace std;

class dequeue
{
    private:
        int front ;
        int rear ;
        int MAX_SIZE = 50;
        int arr[50];

    public:
        dequeue()
        {
            front = -1 ;
            rear = -1;
        }

        void enqueue_at_rear(int elm)
        {
            if (rear == MAX_SIZE-1)
            {
                cout<<"Enqueue operation at rear end not possible"<<endl;
            }
            else if (front == -1)
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

        void enqueue_at_front(int elm)
        {
            if (front == 0)
            {
                cout<<"Enqueue at front not possible"<<endl;
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

        void deque_at_rear()
        {
            if (rear == -1)
            {
                cout<<"underflow"<<endl;
            }
            else if (rear == front)
            {
                rear = -1 ;
                front = -1;
            }
            else
            {
                rear --;
            }
        }

        void deque_at_front()
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

        void display()
        {
            for (int i = front; i <= rear ; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        bool isFull()
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

        bool isEmpty()
        {
            if (front == -1)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
};

void display_menu()
{
    cout<<"--------MENU----------"<<endl;
    cout<<"1.Enqueue at front"<<endl;
    cout<<"2.Enqueue at rear"<<endl;
    cout<<"3.Dequeue at front"<<endl;
    cout<<"4.Dequeue at rear"<<endl;
    cout<<"5.Display"<<endl;
    cout<<"0.Exit"<<endl;
}

int main()
{

    dequeue d ;
    bool flag = true;
    while (flag)
    {
        display_menu();
        int code ;
        cout<<"Enter choice code"<<endl;
        cin>>code ;

        switch(code)
        {
            case 1:
            {
                cout<<"Enter element"<<endl;
                int elm ;
                cin>>elm;
                d.enqueue_at_front(elm);
                break;
            }

            case 2 :
            {
                cout<<"Enter element"<<endl;
                int elm ;
                cin>>elm;
                d.enqueue_at_rear(elm);
                break;
            }
        
            case 3 :
            {
                d.deque_at_front();
                break;
            }

            case 4 :
            {
                d.deque_at_rear();
                break;
            }

            case 5 :
            {
                d.display();
                break;
            }

            case 0 :
            {
                cout<<"Thank you"<<endl;
                flag = false;
                break;
            }
        }
    }
    
    return 0 ;
}