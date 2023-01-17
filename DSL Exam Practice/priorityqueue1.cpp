#include <iostream>
using namespace std;

template <typename t>
class item
{
    public:
    t data ;
    int priority;

    bool operator<= ( item &i2)
    {
        return this->priority <= i2.priority ;
    }

};

template <typename T>
class priority_queue
{
    int front ;
    int rear ;
    int MAX_SIZE = 50;
    item <T> arr[50];

    public:
        priority_queue()
        {
            front = -1 ;
            rear = -1 ;
        }

        void enqueue(item <T> i)
        {
            if (front == -1)
            {
                front++;
                rear++;
                arr[rear] = i;
            }

            else if (rear == MAX_SIZE - 1)
            {
                cout<<"Queue is full"<<endl;
            }

            else
            {
                int j = rear ;
                while (arr[j] <= i && j>=0)
                {
                    arr[j+1] = arr[j] ;
                    j-- ;
                }
                arr[j+1] = i;
                rear++;
            }
        }

        void display()
        {
            for (int i = front ; i <= rear ; i++)
            {
                cout<<arr[i].data<<"  "<<arr[i].priority<<endl;
            }
        }
};


int main()
{
    priority_queue<int> q;
    
    item<int> i1;
    item<int> i2;
    item<int> i3;
    item<int> i4;

    i1.data = 3;
    i1.priority = 5;

    i2.data = 7;
    i2.priority = 11;

    i3.data = 1 ;
    i3.priority = 4 ;

    i4.data = 2 ;
    i4.priority = 9 ;

    q.enqueue(i1);
    q.enqueue(i2);
    q.enqueue(i3);
    q.enqueue(i4);

    q.display();

    

    return 0;
}