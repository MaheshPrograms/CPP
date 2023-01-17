#include <iostream>
#include <string>
using namespace std;

template <typename t>
class Item
{
    public:
    t data ;
    int Priority;

    bool operator<= (Item<t> &i)
    {
        return this->Priority <= i.Priority;
    }
};

template <typename T>
class Priority_queue
{
    int front ;
    int rear ;
    int MAX_SIZE = 50;
    Item <T> arr[50];
    
    public:
        Priority_queue()
        {
            front = -1 ;
            rear = -1 ;
        }

        void enqueue(Item<T> elm)
        {
            if (rear == MAX_SIZE-1)
            {
                cout<<"Queue is full"<<endl;
            }
            else if (front == -1)
            {
                front++;
                rear++;
                arr[rear] = elm;
                
            }
            else
            {
                int j = rear ;
                while (arr[j] <= elm && j>=front)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = elm;
                rear++;
            }
        }

        void dequeue()
        {
            if (front == -1)
            {
                cout<<"Queue is empty"<<endl;
            }
            else if (rear == front)
            {
                rear = -1 ;
                front = -1 ;
            }
            else
            {
                front++;
            }
        }

        void display()
        {
            cout<<"Data"<<"  "<<"Priority"<<endl;
            for (int i = front ; i <= rear ; i++)
            {
                cout<<arr[i].data<<"   "<<arr[i].Priority<<endl;
            }
        }
};

int main()
{
    Priority_queue <int> q;
    
    cout<<"--------------Menu-------------"<<endl;
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.Display"<<endl;

    string choice = "y";

    while (choice == "y")
    {
        cout<<"Enter choice code :"<<endl;
        int code ;
        cin>>code ;

        switch(code)
        {
            case 1:
            {
                cout<<"Enter data and Priority of Item respectively : "<<endl;
                Item <int> i1;
                cin>>i1.data>>i1.Priority;
                q.enqueue(i1);
                break;
            }
            
            case 2:
            {
                q.dequeue();
                break;
            }

            case 3 :
            {
                q.display();
                break;
            }

            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }

        cout<<"Do you want to continue?"<<endl;
        cin>>choice;

    }
    return 0;
}