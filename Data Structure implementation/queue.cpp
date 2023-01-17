#include<iostream>
using namespace std;

class queue
{
    int front ;
    int rear ;
    int capacity = 50;
    int arr[50];

    public:
    queue()
    {
        front = -1;
        rear  = -1 ; 
    }

    void push(int n )
    {
        if(front==capacity-1)
        {
            cout<<"No space to accomodate in queue"<<endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = n;
        }
        else
        {
            rear++;
            arr[rear] = n ; 
        }
    }

    void pop()
    {
        if (front == rear)
        {
            front= -1 ;
            rear = -1;
        }
        else if (front == -1)
        {
            cout<<"Deletion not possible"<<endl;
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        for(int i = front; i <= rear ; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    queue q ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.display();
    return 0;
}