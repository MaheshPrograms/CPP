#include <iostream>
#include <string>
using namespace std;

template <typename t>
class item 
{
    public : 
    t data ;
    int priority;

    bool operator<= (item &i)
    {
        return this->priority <= i.priority;
    }
};

template <typename T>
class priority_queue
{
    private:
    int front ;
    int rear ;
    int MAX_SIZE = 50 ;
    item<T> arr[50] ;

    public:
    priority_queue()
    {
        front = -1 ;
        rear = -1 ;
    }

    void push(item<T> elm)
    {
        if ( rear == MAX_SIZE - 1 )
        {
            cout<<"Queue is full"<<endl;
        }
        
        else if (front = -1)
        {
            front++;
            rear++;
            arr[rear] = elm;
        }

        else 
        {
            int j = rear ;
            while (arr[j] <= elm && j>=0)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = elm ;
            rear++;
        }
    }    

    void pop()
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
        for(int i = front ; i <= rear; i++)
        {
            cout<<arr[i].data<<" "<<arr[i].priority<<endl;
        }
    }
};

void display_menu();

void menu_driven(int code, priority_queue<int> &q, bool &flag);

// Main function
int main()
{

    priority_queue<int> q ;
    bool flag = true;

    while(flag)
    {
        display_menu();

        int code;
        cout<<"Enter code"<<endl;
        cin>>code;

        menu_driven(code, q, flag);

    }

    return 0  ;
}

void display_menu()
{
    cout<<"-------MENU-------"<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.display"<<endl;
    cout<<"0.Exit"<<endl;
}

void menu_driven(int code, priority_queue<int> &q, bool &flag)
{
    switch(code)
    {
        case 1 :
        {
            item<int>i;
            cout<<"Enter data and priority"<<endl;
            cin>>i.data>>i.priority;
            q.push(i);
            break;
        }

        case 2 :
        {
            q.pop();
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
            break;
        }

        default:
        {
            cout<<"Invalid code"<<endl;
            break;
        }
    }
}










